/*
 * XREFs of MiGetFreeOrZeroPage @ 0x1400BBDA0
 * Callers:
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiGetFreeOrZeroPage @ 0x1400BBDA0 (MiGetFreeOrZeroPage.c)
 * Callees:
 *     MiSlistGetFreePage @ 0x14001DFF8 (MiSlistGetFreePage.c)
 *     MiPageAvailable @ 0x140075688 (MiPageAvailable.c)
 *     MiNodeLargeFreeZeroPages @ 0x140075B98 (MiNodeLargeFreeZeroPages.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiNodeFreeZeroPages @ 0x1400B8330 (MiNodeFreeZeroPages.c)
 *     MiRemoveAnyPage @ 0x1400B91F0 (MiRemoveAnyPage.c)
 *     MiGetFreeOrZeroPage @ 0x1400BBDA0 (MiGetFreeOrZeroPage.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x1400C58B0 (MiInsertLargePageInFreeOrZeroList.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiGetFreeZeroLargePage @ 0x140128E70 (MiGetFreeZeroLargePage.c)
 *     MiSetFreshPfnFromFreeList @ 0x14017D268 (MiSetFreshPfnFromFreeList.c)
 *     KeCheckForZeroPage @ 0x140185210 (KeCheckForZeroPage.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 *     MiPageNotZero @ 0x14021F048 (MiPageNotZero.c)
 *     MiGetNodeStandbyPageCount @ 0x14021F5BC (MiGetNodeStandbyPageCount.c)
 */

__int64 __fastcall MiGetFreeOrZeroPage(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v4; // rbp
  _BOOL8 i; // rbx
  _SLIST_HEADER *v6; // rcx
  PSLIST_ENTRY v7; // rax
  _QWORD *p_Next; // rdi
  __int64 FreePage; // rbx
  ULONG_PTR v10; // rbp
  unsigned int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD *v14; // rax
  unsigned int v15; // edi
  _QWORD *v16; // rax
  unsigned int v17; // ebp
  int v18; // edi
  _QWORD *v19; // r9
  _BOOL8 v20; // rsi
  __int64 v21; // rbx
  int v22; // r8d
  __int64 v23; // rdi
  __int16 v24; // dx
  _QWORD *v25; // rbp
  int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // ebx
  __int64 FreeZeroLargePage; // rax
  __int64 v31; // rdx
  __int64 v33; // [rsp+20h] [rbp-88h]
  int v34; // [rsp+30h] [rbp-78h]
  int v35; // [rsp+34h] [rbp-74h]
  unsigned int v36; // [rsp+38h] [rbp-70h]
  _QWORD *v37; // [rsp+40h] [rbp-68h]
  int v38; // [rsp+48h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-48h] BYREF
  BOOL v43; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a1;
  v34 = 0;
  v35 = a3 & 2;
  v4 = 16LL * a2;
  v43 = v35 == 0;
  for ( i = v35 == 0; ; i = 0LL )
  {
    v6 = (_SLIST_HEADER *)(v4 + *(_QWORD *)(v3 + 8 * i + 3944));
    if ( LOWORD(v6->Alignment) )
    {
      v7 = RtlpInterlockedPopEntrySList(v6);
      p_Next = &v7->Next;
      if ( v7 )
        break;
    }
    if ( !i )
    {
      FreePage = -1LL;
      goto LABEL_18;
    }
    v43 = 0;
  }
  v7[1].Next = 0LL;
  FreePage = (__int64)&v7[0x5800000000LL] / 48;
  if ( v43 )
  {
    MiSetFreshPfnFromFreeList(v7);
  }
  else if ( (MiFlags & 0x80u) != 0
         && (BYTE3(v7[2].Next) & 0x40) == 0
         && (++dword_14036CA18 & MmPageValidationFrequency) == 0 )
  {
    if ( KeGetCurrentPrcb()->HyperPte )
    {
      v10 = MiMapPageInHyperSpaceWorker((__int64)&v7[0x5800000000LL] / 48, &v43, 0x80000000LL);
      if ( KeCheckForZeroPage(v10) )
        MiPageNotZero(v10, (__int64)(p_Next + 0xB000000000LL) / 48);
      MiUnmapPageInHyperSpaceWorker(v10, v43, 0x80000000LL);
    }
  }
  *p_Next = 0LL;
  if ( FreePage != -1 )
    return FreePage;
LABEL_18:
  if ( v35 )
  {
    v11 = a2;
    v12 = *(int *)(v3 + 5084);
    v13 = 40LL * a2;
    v14 = (_QWORD *)(v13 + *(_QWORD *)(v3 + 1920));
    if ( v14[4] || (a3 & 0x1001) != 0 )
    {
LABEL_26:
      FreePage = MiSlistGetFreePage(v3, 1, 1, a2);
      if ( FreePage != -1 )
        return FreePage;
      goto LABEL_27;
    }
    if ( *v14 < (unsigned __int64)(v12 + 64) )
    {
      if ( *(_QWORD *)(v13 + *(_QWORD *)(v3 + 1928)) >= (unsigned __int64)(v12 + 64) )
        goto LABEL_26;
    }
    else
    {
      FreePage = -2LL;
    }
    v34 = 1;
    if ( *(_QWORD *)(v3 + 5760) < (unsigned __int64)(v12 + 1056) )
    {
      v34 = 0;
      goto LABEL_26;
    }
  }
  else
  {
    v11 = a2;
  }
LABEL_27:
  v15 = 0;
  v36 = v11 >> byte_14036C1B9;
  v43 = 0;
  v16 = (_QWORD *)(*(_QWORD *)(v3 + 48) + 2184LL * (v11 >> byte_14036C1B9));
  v37 = v16;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    v15 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (v11 >> byte_14036C1BA));
    v16 = (_QWORD *)(*(_QWORD *)(v3 + 48) + 2184LL * (v11 >> byte_14036C1B9));
    v43 = v15;
  }
  v17 = a3;
  if ( (a3 & 0x1000) != 0 )
    FreePage = -2LL;
  while ( FreePage == -2 )
  {
LABEL_63:
    FreePage = MiRemoveAnyPage(v3, a2, v17);
    if ( FreePage != -1 )
      return FreePage;
    FreePage = MiSlistGetFreePage(v3, v35 == 0, 0, a2);
    if ( FreePage != -1 )
      return FreePage;
    if ( (a3 & 0x1000) != 0 || !(unsigned int)MiPageAvailable(v3, v17) || (v17 & 1) != 0 )
      goto LABEL_55;
    v16 = v37;
  }
  if ( (unsigned __int64)MiNodeFreeZeroPages(v16, v15, 1024) < 0x200
    && (unsigned __int64)MiGetNodeStandbyPageCount(v3, v36, v15) >= 0x1000
    && !*(_QWORD *)(v3 + 5104)
    && (*(_DWORD *)(v3 + 4) & 1) == 0 )
  {
    v18 = 0;
    KeAcquireInStackQueuedSpinLock(&qword_14036C8B0, &LockHandle);
    if ( !*(_QWORD *)(v3 + 5104) && (*(_DWORD *)(v3 + 4) & 1) == 0 )
    {
      ++*(_QWORD *)(v3 + 16);
      *(_QWORD *)(v3 + 5088) = 0LL;
      v18 = 1;
      *(_QWORD *)(v3 + 5104) = MiRebalanceZeroFreeLists;
      *(_QWORD *)(v3 + 5112) = v3;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( v18 == 1 )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v3 + 5088), DelayedWorkQueue);
  }
  v19 = v37;
  v20 = v43;
  v21 = 0LL;
  v22 = 0;
  v23 = 0LL;
  v24 = v17;
  v25 = v37 + 251;
  v26 = v24 & 0x400;
  v27 = v35 == 0;
  v38 = v26;
  do
  {
    if ( (unsigned int)MmNumberOfChannels <= 1 )
    {
      v21 += *v25;
    }
    else
    {
      v27 = v35 == 0;
      v21 += v19[2 * v20 + 259 + v23];
    }
    if ( v26 )
    {
      v28 = MiNodeLargeFreeZeroPages(v19, v20, v22);
      v26 = v38;
      v21 += v28;
      v27 = v35 == 0;
      v19 = v37;
    }
    ++v22;
    ++v23;
    ++v25;
  }
  while ( v23 <= v27 );
  v3 = a1;
  v17 = a3;
  if ( v21 )
  {
    v15 = v43;
    goto LABEL_63;
  }
  if ( (a3 & 1) != 0 )
  {
    if ( v35 )
    {
      v31 = a2;
      return MiGetFreeOrZeroPage(v3, v31, v17 & 0xFFFFFFFD, v19, v33);
    }
    return -1LL;
  }
  else
  {
    v15 = v43;
    v29 = 3;
    do
    {
      FreeZeroLargePage = MiGetFreeZeroLargePage(a1, --v29, a3, v36, v15);
      if ( FreeZeroLargePage )
      {
        MiInsertLargePageInFreeOrZeroList(FreeZeroLargePage, v29, 2LL);
        goto LABEL_63;
      }
    }
    while ( v29 );
    if ( MiNodeFreeZeroPages(v37, v15, a3) )
      goto LABEL_63;
LABEL_55:
    FreePage = -1LL;
    if ( v34 != 1 || (FreePage = MiSlistGetFreePage(v3, 1, 1, a2), FreePage == -1) )
    {
      if ( v35 )
      {
        v31 = a2;
        return MiGetFreeOrZeroPage(v3, v31, v17 & 0xFFFFFFFD, v19, v33);
      }
    }
  }
  return FreePage;
}
