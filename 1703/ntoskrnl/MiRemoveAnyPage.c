/*
 * XREFs of MiRemoveAnyPage @ 0x1400B91F0
 * Callers:
 *     MiGetFreeOrZeroPage @ 0x1400BBDA0 (MiGetFreeOrZeroPage.c)
 * Callees:
 *     MiReplenishPageSlist @ 0x1400756C0 (MiReplenishPageSlist.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x14007651C (KxTryToAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1400C7FC0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiReturnFreeZeroPage @ 0x14010AE0C (MiReturnFreeZeroPage.c)
 *     MiSetFreshPfnFromFreeList @ 0x14017D268 (MiSetFreshPfnFromFreeList.c)
 *     KeCheckForZeroPage @ 0x140185210 (KeCheckForZeroPage.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 *     MiPageNotZero @ 0x14021F048 (MiPageNotZero.c)
 */

__int64 __fastcall MiRemoveAnyPage(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  __int16 v4; // r10
  __int64 v5; // r9
  signed int v6; // r15d
  int v7; // r12d
  int v8; // edi
  unsigned __int64 v9; // r8
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r11
  __int64 v14; // rsi
  __int64 v15; // r13
  __int64 v16; // rbx
  unsigned __int8 CurrentIrql; // di
  int v18; // r15d
  __int64 i; // rbx
  _SLIST_HEADER *v20; // rcx
  PSLIST_ENTRY v21; // rax
  _QWORD *p_Next; // rdi
  ULONG_PTR v23; // rbx
  volatile __int64 *v24; // rdx
  _SLIST_HEADER *v25; // rcx
  PSLIST_ENTRY v26; // rax
  _QWORD *v27; // rbx
  __int64 v28; // kr00_8
  __int64 v29; // rdi
  ULONG_PTR v30; // rsi
  unsigned int v32; // r12d
  int v33; // ebp
  int v34; // [rsp+20h] [rbp-78h]
  int v35; // [rsp+24h] [rbp-74h]
  __int64 v36; // [rsp+28h] [rbp-70h]
  __int64 v37; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int8 v40; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v41; // [rsp+B0h] [rbp+18h]
  unsigned __int8 v42; // [rsp+B8h] [rbp+20h] BYREF

  v41 = a3;
  v3 = (unsigned int)a2;
  v4 = a3;
  v5 = a1;
  if ( (a3 & 2) != 0 )
  {
    v6 = 0;
    v7 = 1;
  }
  else
  {
    v6 = 1;
    v7 = 0;
  }
  v8 = dword_14036C1F8;
  a2 = (unsigned int)a2;
  v9 = *(_QWORD *)(a1 + 48) + 2184 * ((unsigned __int64)(unsigned int)a2 >> byte_14036C1B9);
  v34 = dword_14036C1F8;
  v35 = a2;
  v10 = v6;
  if ( (unsigned int)MmNumberOfChannels <= 1 )
  {
    if ( !*(_QWORD *)(v9 + 8LL * v6 + 2008) )
    {
      while ( v6 != v7 )
      {
        v6 = v7;
        if ( *(_QWORD *)(v9 + 8LL * v7 + 2008) )
          goto LABEL_9;
      }
      goto LABEL_22;
    }
  }
  else
  {
    v11 = 2LL * ((unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)((unsigned int)a2 >> byte_14036C1BA));
    if ( !*(_QWORD *)(v9 + 8 * (v11 + v6) + 2072) )
    {
      while ( v6 != v7 )
      {
        v6 = v7;
        if ( *(_QWORD *)(v9 + 8 * (v11 + v7) + 2072) )
          goto LABEL_8;
      }
LABEL_22:
      if ( (v4 & 0x1000) != 0 )
        return -1LL;
      v18 = v3;
      while ( 1 )
      {
        for ( i = v10; ; i = v7 )
        {
          v20 = (_SLIST_HEADER *)(16LL * (unsigned int)v3 + *(_QWORD *)(v5 + 8 * i + 3944));
          if ( !LOWORD(v20->Alignment) )
            goto LABEL_28;
          v21 = RtlpInterlockedPopEntrySList(v20);
          p_Next = &v21->Next;
          if ( v21 )
            break;
          v5 = a1;
LABEL_28:
          if ( i == v7 )
            goto LABEL_40;
        }
        v21[1].Next = 0LL;
        v14 = (__int64)&v21[0x5800000000LL] / 48;
        if ( i )
        {
          MiSetFreshPfnFromFreeList(v21);
        }
        else if ( (MiFlags & 0x80u) != 0
               && (BYTE3(v21[2].Next) & 0x40) == 0
               && (++dword_14036CA18 & MmPageValidationFrequency) == 0 )
        {
          if ( KeGetCurrentPrcb()->HyperPte )
          {
            v23 = MiMapPageInHyperSpaceWorker((__int64)&v21[0x5800000000LL] / 48, &v40, 0x80000000LL);
            if ( KeCheckForZeroPage(v23) )
              MiPageNotZero(v23, (__int64)(p_Next + 0xB000000000LL) / 48);
            MiUnmapPageInHyperSpaceWorker(v23, v40, 0x80000000LL);
          }
        }
        *p_Next = 0LL;
        if ( v14 != -1 )
          return v14;
LABEL_40:
        LODWORD(v3) = v3 & ~v34 | v34 & (v3 + 1);
        if ( (_DWORD)v3 == v18 )
          return -1LL;
        v5 = a1;
      }
    }
LABEL_8:
    a2 = v3;
  }
LABEL_9:
  v12 = v6;
  v36 = v6;
  v13 = *(_QWORD *)(a1 + 8LL * v6 + 1920);
  v37 = v13;
  while ( 1 )
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)(v13 + 40 * a2 + 16);
      v15 = v13 + 40 * a2;
      if ( v14 == 0xFFFFFFFFFLL )
        goto LABEL_47;
      v16 = 48 * v14 - 0x58000000000LL;
      if ( (v4 & 1) != 0 )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
          goto LABEL_47;
        CurrentIrql = 17;
        break;
      }
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (v4 & 0x1000) != 0 )
      {
        MiLockPageAtDpcInline(48 * v14 - 0x58000000000LL);
        v5 = a1;
        v4 = v41;
        v12 = v36;
        v13 = v37;
        a2 = (unsigned int)v3;
        break;
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
        break;
LABEL_45:
      __writecr8(CurrentIrql);
LABEL_46:
      v8 = v34;
LABEL_47:
      if ( (v4 & 0x1000) != 0 )
      {
        LODWORD(v3) = v35;
LABEL_60:
        if ( v6 == v7 )
          return -1LL;
        v13 = *(_QWORD *)(v5 + 8LL * v7 + 1920);
        v6 = v7;
        v37 = v13;
        v12 = v7;
        v36 = v7;
        goto LABEL_62;
      }
      LODWORD(v3) = v3 & ~v8 | v8 & (v3 + 1);
      if ( (_DWORD)v3 == v35 )
        goto LABEL_60;
LABEL_62:
      v25 = (_SLIST_HEADER *)(16LL * (unsigned int)v3 + *(_QWORD *)(v5 + 8 * v12 + 3944));
      a2 = (unsigned int)v3;
      if ( LOWORD(v25->Alignment) )
      {
        v26 = RtlpInterlockedPopEntrySList(v25);
        v5 = a1;
        v27 = &v26->Next;
        v4 = v41;
        v12 = v36;
        v13 = v37;
        a2 = (unsigned int)v3;
        if ( v26 )
        {
          v26[1].Next = 0LL;
          v28 = (__int64)&v26[0x5800000000LL];
          v29 = (__int64)&v26[0x5800000000LL] / 48;
          if ( v36 )
          {
            MiSetFreshPfnFromFreeList(v26);
          }
          else if ( (MiFlags & 0x80u) != 0
                 && (BYTE3(v26[2].Next) & 0x40) == 0
                 && (++dword_14036CA18 & MmPageValidationFrequency) == 0 )
          {
            if ( KeGetCurrentPrcb()->HyperPte )
            {
              v30 = MiMapPageInHyperSpaceWorker(v28 / 48, &v42, 0x80000000LL);
              if ( KeCheckForZeroPage(v30) )
                MiPageNotZero(v30, v28 / 48);
              MiUnmapPageInHyperSpaceWorker(v30, v42, 0x80000000LL);
              v12 = v36;
            }
          }
          *v27 = 0LL;
          if ( v29 != -1 )
            return v28 / 48;
LABEL_55:
          v4 = v41;
          v5 = a1;
          v13 = v37;
          v8 = v34;
          a2 = (unsigned int)v3;
        }
      }
    }
    if ( (*(_BYTE *)(v16 + 34) & 7) == v6 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
      __writecr8(CurrentIrql);
    v8 = v34;
  }
  LockHandle.LockQueue.Next = 0LL;
  v24 = (volatile __int64 *)(v15 + 32);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v15 + 32);
  if ( (v4 & 0x1000) == 0 )
  {
    if ( (unsigned int)KxTryToAcquireQueuedSpinLock((signed __int64)&LockHandle, v24) )
      goto LABEL_51;
    v5 = a1;
    v4 = v41;
    v12 = v36;
    v13 = v37;
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql == 17 )
      goto LABEL_46;
    goto LABEL_45;
  }
  KxAcquireQueuedSpinLock((__int64)&LockHandle, v24);
LABEL_51:
  if ( v14 != *(_QWORD *)(v15 + 16) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
      __writecr8(CurrentIrql);
    v12 = v36;
    goto LABEL_55;
  }
  v32 = v41;
  v33 = v41 & 1;
  if ( (v41 & 1) == 0 && MiReplenishPageSlist(a1, v6, v3, v16) )
  {
    v14 = -1LL;
    goto LABEL_78;
  }
  if ( (unsigned int)MiUnlinkFreeOrZeroedPage(v14, v15, v32) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !v33 )
    {
LABEL_78:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(CurrentIrql);
      return v14;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    return v14;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  MiReturnFreeZeroPage(v16, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql != 17 )
    __writecr8(CurrentIrql);
  return -1LL;
}
