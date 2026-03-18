/*
 * XREFs of CcUnmapVacbArray @ 0x140062A30
 * Callers:
 *     CcUnmapAndPurge @ 0x1400202D4 (CcUnmapAndPurge.c)
 *     CcFlushCachePriv @ 0x140062D40 (CcFlushCachePriv.c)
 *     CcGetVirtualAddress @ 0x14007B2D0 (CcGetVirtualAddress.c)
 *     CcSetFileSizesEx @ 0x140089D90 (CcSetFileSizesEx.c)
 *     CcPurgeCacheSection @ 0x1400F28C0 (CcPurgeCacheSection.c)
 *     CcUnmapFileOffsetFromSystemCache @ 0x14011D420 (CcUnmapFileOffsetFromSystemCache.c)
 *     CcSetPrivateWriteFile @ 0x1401E1390 (CcSetPrivateWriteFile.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     CcSetVacbLargeOffset @ 0x1400F7750 (CcSetVacbLargeOffset.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1400F8C0C (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1400F8C4C (CcAcquireBcbLockAndVacbLock.c)
 *     CcSetVacbInFreeList @ 0x140115A18 (CcSetVacbInFreeList.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     CcUnmapVacb @ 0x14056F9B0 (CcUnmapVacb.c)
 */

char __fastcall CcUnmapVacbArray(__int64 a1, __int64 *a2, unsigned int a3, char a4, char a5, char a6)
{
  __int64 v6; // rdi
  char v7; // r13
  __int64 Partition; // rax
  bool v12; // zf
  __int64 v13; // rax
  signed __int64 v14; // rbx
  signed __int64 v15; // rdi
  int v16; // r15d
  __int64 v17; // r8
  int v18; // ebp
  __int64 v19; // rax
  __int64 v20; // r11
  __int64 v21; // r10
  int v22; // ecx
  int v23; // r9d
  __int64 v24; // r14
  __int64 v25; // rdx
  int v26; // ecx
  unsigned int v27; // ebp
  unsigned __int8 CurrentIrql; // bp
  __int64 v29; // r8
  char v30; // al
  void *v32; // rbp
  signed __int32 v33[8]; // [rsp+0h] [rbp-78h] BYREF
  int v34; // [rsp+30h] [rbp-48h]
  BOOL v35; // [rsp+34h] [rbp-44h]
  signed __int64 v36; // [rsp+38h] [rbp-40h]
  __int64 v37; // [rsp+40h] [rbp-38h]
  char v38; // [rsp+80h] [rbp+8h]

  v6 = a3;
  v7 = 1;
  v34 = 0;
  v38 = 1;
  v36 = 0LL;
  Partition = CcGetPartition(a1);
  v12 = *(_QWORD *)(a1 + 88) == 0LL;
  v37 = Partition;
  if ( v12 )
    return 1;
  if ( a2 )
  {
    v13 = *a2;
    v14 = *a2 & 0xFFFFFFFFFFFC0000uLL;
    v36 = v14;
    if ( (_DWORD)v6 )
      v15 = v13 + v6;
    else
      v15 = *(_QWORD *)(a1 + 368);
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 32);
    v14 = v36;
  }
  v16 = *(_DWORD *)(a1 + 152) & 0x200;
  v35 = v16 != 0;
  if ( v16 )
    ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
  ExAcquirePushLockExclusiveEx(a1 + 104, 0LL);
  if ( a4 )
  {
    v18 = 1;
    *(_QWORD *)(a1 + 336) = v15;
    v34 = 1;
  }
  else
  {
    v18 = v34;
  }
  if ( v14 < v15 )
  {
    while ( 1 )
    {
      v19 = *(_QWORD *)(a1 + 32);
      if ( v14 >= v19 )
        goto LABEL_18;
      v20 = *(_QWORD *)(a1 + 88);
      if ( v19 <= 0x2000000 )
      {
        v24 = *(_QWORD *)(v20 + 8 * ((unsigned __int64)(unsigned int)v36 >> 18));
      }
      else
      {
        v21 = v14;
        LODWORD(v17) = 0;
        v22 = 25;
        do
        {
          v23 = v22;
          v22 += 7;
          v17 = (unsigned int)(v17 + 1);
        }
        while ( v19 > 1LL << v22 );
        v24 = *(_QWORD *)(v20 + 8 * (v14 >> v23));
        if ( !v24 )
          goto LABEL_18;
        do
        {
          if ( !(_DWORD)v17 )
            break;
          v25 = 1LL << v23;
          v23 -= 7;
          v21 &= v25 - 1;
          v17 = (unsigned int)(v17 - 1);
          v24 = *(_QWORD *)(v24 + 8 * (v21 >> v23));
        }
        while ( v24 );
      }
      if ( !v24 )
        goto LABEL_18;
      if ( !*(_WORD *)(v24 + 16) )
        break;
      if ( a6 )
      {
        v14 += 0x40000LL;
        v36 = v14;
        if ( a5 )
          KeBugCheckEx(0x34u, 0xC16uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      }
      else
      {
        if ( !a5 )
        {
          v7 = 0;
          goto LABEL_32;
        }
        v32 = *(void **)(a1 + 184);
        if ( v32 )
        {
          if ( v38 )
          {
            KeResetEvent(*(PRKEVENT *)(a1 + 184));
            _InterlockedOr(v33, 0);
            v38 = 0;
          }
          else
          {
            CcReleaseBcbLockAndVacbLock(v35, a1, v17);
            KeWaitForSingleObject(v32, Executive, 0, 0, 0LL);
            v38 = 1;
            CcAcquireBcbLockAndVacbLock(v35, a1);
          }
        }
        else
        {
          v38 = 0;
          *(_WORD *)(a1 + 344) = 0;
          *(_BYTE *)(a1 + 346) = 6;
          *(_DWORD *)(a1 + 348) = 0;
          *(_QWORD *)(a1 + 360) = a1 + 352;
          *(_QWORD *)(a1 + 352) = a1 + 352;
          _InterlockedExchange64((volatile __int64 *)(a1 + 184), a1 + 344);
        }
      }
LABEL_19:
      if ( v14 >= v15 )
        goto LABEL_32;
      v18 = v34;
    }
    v38 = 1;
    if ( v19 <= 0x2000000 )
      *(_QWORD *)(v20 + 8 * ((unsigned __int64)(unsigned int)v36 >> 18)) = 0LL;
    else
      CcSetVacbLargeOffset(a1, v14, 0LL, 0LL);
    v26 = v18 | 2;
    v27 = v18 & 0xFFFFFFFD;
    if ( *(_DWORD *)(v37 + 856) < (unsigned int)CcMinimumFreeHighPriorityVacbs )
      v27 = v26;
    v34 = v27;
    CcUnmapVacb(v24, a1, v27);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    KxAcquireQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 64);
    v30 = v34;
    *(_QWORD *)(v24 + 8) = 0LL;
    if ( (v30 & 2) != 0 )
      LOBYTE(v29) = 1;
    else
      v29 = 0LL;
    CcSetVacbInFreeList(v37, v24, v29);
    KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 64));
    __writecr8(CurrentIrql);
LABEL_18:
    v14 += 0x40000LL;
    v36 = v14;
    goto LABEL_19;
  }
LABEL_32:
  ExReleasePushLockEx(a1 + 104, 0LL);
  if ( v16 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
  return v7;
}
