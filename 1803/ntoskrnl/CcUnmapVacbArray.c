/*
 * XREFs of CcUnmapVacbArray @ 0x1400DCE30
 * Callers:
 *     CcPurgeCacheSection @ 0x140050C80 (CcPurgeCacheSection.c)
 *     CcUnmapFileOffsetFromSystemCache @ 0x1400C37F0 (CcUnmapFileOffsetFromSystemCache.c)
 *     CcUnmapAndPurge @ 0x1400DB23C (CcUnmapAndPurge.c)
 *     CcFlushCachePriv @ 0x1400DEE80 (CcFlushCachePriv.c)
 *     CcSetFileSizesEx @ 0x1400E0340 (CcSetFileSizesEx.c)
 *     CcGetVirtualAddress @ 0x14011DD70 (CcGetVirtualAddress.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1400C4DA8 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1400C4DE8 (CcAcquireBcbLockAndVacbLock.c)
 *     CcSetVacbLargeOffset @ 0x1400DA8B8 (CcSetVacbLargeOffset.c)
 *     CcGetVacbLargeOffset @ 0x1400DD0C0 (CcGetVacbLargeOffset.c)
 *     CcSetVacbInFreeList @ 0x1400DD134 (CcSetVacbInFreeList.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     CcUnmapVacb @ 0x140593090 (CcUnmapVacb.c)
 */

char __fastcall CcUnmapVacbArray(__int64 a1, __int64 *a2, unsigned int a3, char a4, char a5, char a6)
{
  __int64 v6; // rdi
  char v7; // r14
  unsigned int v8; // r13d
  signed __int64 v12; // rdi
  signed __int64 v13; // rbx
  int v14; // r15d
  __int64 v15; // rsi
  __int64 v16; // r14
  unsigned __int8 CurrentIrql; // si
  _QWORD *ArbitraryUserPointer; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  void *v22; // rsi
  int v23; // r14d
  signed __int32 v24[8]; // [rsp+0h] [rbp-78h] BYREF
  BOOL v25; // [rsp+30h] [rbp-48h]
  signed __int64 v26; // [rsp+38h] [rbp-40h]
  __int64 Partition; // [rsp+40h] [rbp-38h]
  char v28; // [rsp+80h] [rbp+8h]

  v6 = a3;
  v7 = 1;
  v26 = 0LL;
  v8 = 0;
  v28 = 1;
  Partition = CcGetPartition(a1);
  if ( !*(_QWORD *)(a1 + 88) )
    return 1;
  if ( a2 )
  {
    v21 = *a2;
    v13 = *a2 & 0xFFFFFFFFFFFC0000uLL;
    v26 = v13;
    if ( (_DWORD)v6 )
      v12 = v21 + v6;
    else
      v12 = *(_QWORD *)(a1 + 368);
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 32);
    v13 = 0LL;
  }
  v14 = *(_DWORD *)(a1 + 152) & 0x200;
  v25 = v14 != 0;
  if ( v14 )
    ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
  ExAcquirePushLockExclusiveEx(a1 + 104, 0LL);
  if ( a4 )
  {
    v8 = 1;
    *(_QWORD *)(a1 + 336) = v12;
  }
  if ( v13 < v12 )
  {
    while ( 1 )
    {
      v15 = *(_QWORD *)(a1 + 32);
      if ( v13 >= v15 )
        goto LABEL_13;
      v16 = v15 > 0x2000000
          ? CcGetVacbLargeOffset(a1, v13)
          : *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)v26 >> 18));
      if ( !v16 )
        goto LABEL_13;
      if ( !*(_WORD *)(v16 + 16) )
        break;
      if ( a6 )
      {
        v13 += 0x40000LL;
        v26 = v13;
        if ( a5 )
          KeBugCheckEx(0x34u, 0xC16uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      }
      else
      {
        if ( !a5 )
        {
          v7 = 0;
          goto LABEL_16;
        }
        v22 = *(void **)(a1 + 184);
        if ( v22 )
        {
          if ( v28 )
          {
            KeResetEvent(*(PRKEVENT *)(a1 + 184));
            _InterlockedOr(v24, 0);
            v28 = 0;
          }
          else
          {
            v23 = v25;
            CcReleaseBcbLockAndVacbLock(v25, (struct _FAST_MUTEX *)a1);
            KeWaitForSingleObject(v22, Executive, 0, 0, 0LL);
            v28 = 1;
            CcAcquireBcbLockAndVacbLock(v23, (struct _FAST_MUTEX *)a1);
          }
        }
        else
        {
          v28 = 0;
          *(_WORD *)(a1 + 344) = 0;
          *(_BYTE *)(a1 + 346) = 6;
          *(_DWORD *)(a1 + 348) = 0;
          *(_QWORD *)(a1 + 360) = a1 + 352;
          *(_QWORD *)(a1 + 352) = a1 + 352;
          _InterlockedExchange64((volatile __int64 *)(a1 + 184), a1 + 344);
        }
      }
LABEL_14:
      if ( v13 >= v12 )
      {
        v7 = 1;
        goto LABEL_16;
      }
    }
    v28 = 1;
    if ( v15 > 0x2000000 )
      CcSetVacbLargeOffset(a1, v13, 0LL, 0LL);
    else
      *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)v26 >> 18)) = 0LL;
    if ( *(_DWORD *)(Partition + 856) < (unsigned int)CcMinimumFreeHighPriorityVacbs )
      v8 |= 2u;
    else
      v8 &= ~2u;
    CcUnmapVacb(v16, a1, v8);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
    KxAcquireQueuedSpinLock(ArbitraryUserPointer + 8, ArbitraryUserPointer[9]);
    *(_QWORD *)(v16 + 8) = 0LL;
    LOBYTE(v20) = (v8 & 2) != 0;
    CcSetVacbInFreeList(Partition, v16, v20);
    KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 64));
    __writecr8(CurrentIrql);
LABEL_13:
    v13 += 0x40000LL;
    v26 = v13;
    goto LABEL_14;
  }
LABEL_16:
  ExReleasePushLockEx(a1 + 104, 0LL);
  if ( v14 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
  return v7;
}
