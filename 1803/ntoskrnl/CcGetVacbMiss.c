/*
 * XREFs of CcGetVacbMiss @ 0x1400DD440
 * Callers:
 *     CcGetVirtualAddress @ 0x14011DD70 (CcGetVirtualAddress.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1400C4DA8 (CcReleaseBcbLockAndVacbLock.c)
 *     FsRtlIsNtstatusExpected @ 0x1400C6690 (FsRtlIsNtstatusExpected.c)
 *     CcSetVacbLargeOffset @ 0x1400DA8B8 (CcSetVacbLargeOffset.c)
 *     CcGetVacbLargeOffset @ 0x1400DD0C0 (CcGetVacbLargeOffset.c)
 *     CcSetVacbInFreeList @ 0x1400DD134 (CcSetVacbInFreeList.c)
 *     CcGetVacbFromFreeList @ 0x1400DD720 (CcGetVacbFromFreeList.c)
 *     CcIncrementVacbActiveCount @ 0x1400DD81C (CcIncrementVacbActiveCount.c)
 *     MmMapViewInSystemCache @ 0x1400DD850 (MmMapViewInSystemCache.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     CcUnmapInactiveViews @ 0x14015C064 (CcUnmapInactiveViews.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     CcUnmapVacb @ 0x140593090 (CcUnmapVacb.c)
 */

_QWORD *__fastcall CcGetVacbMiss(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v4; // edi
  unsigned __int8 v5; // bp
  int v6; // r15d
  __int64 Partition; // r14
  unsigned __int8 CurrentIrql; // bl
  _QWORD *ArbitraryUserPointer; // rcx
  _QWORD *VacbFromFreeList; // rdi
  __int64 v13; // rdx
  NTSTATUS v14; // ebp
  __int64 v15; // r14
  __int64 v16; // rbx
  __int64 VacbLargeOffset; // r15
  char v18; // r14
  KIRQL v20; // bl
  KIRQL v21; // bl
  KIRQL v22; // bl
  unsigned int v23; // [rsp+30h] [rbp-58h]
  __int64 v24; // [rsp+38h] [rbp-50h] BYREF
  __int64 v25; // [rsp+40h] [rbp-48h]
  unsigned __int64 v26[8]; // [rsp+48h] [rbp-40h] BYREF
  char v27; // [rsp+98h] [rbp+10h]

  HIDWORD(v24) = HIDWORD(a2);
  v4 = 0;
  v23 = 0;
  v5 = 0;
  LODWORD(v24) = a2 - (a2 & 0x3FFFF);
  v6 = a4;
  v27 = 0;
  Partition = CcGetPartition(a1);
  v25 = Partition;
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
    KxAcquireQueuedSpinLock(ArbitraryUserPointer + 8, ArbitraryUserPointer[9]);
    if ( v5 )
      v23 = v4 | 2;
    VacbFromFreeList = (_QWORD *)CcGetVacbFromFreeList(Partition, v5);
    KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 64));
    __writecr8(CurrentIrql);
    if ( VacbFromFreeList )
      break;
    while ( (unsigned int)CcUnmapInactiveViews(*(_QWORD *)(Partition + 8), v13, 0LL, 0LL) )
    {
      v21 = KeAcquireQueuedSpinLock(4uLL);
      VacbFromFreeList = (_QWORD *)CcGetVacbFromFreeList(Partition, v5);
      KeReleaseQueuedSpinLock(4uLL, v21);
      if ( VacbFromFreeList )
        goto LABEL_5;
    }
    if ( v6 == 1 )
      ++CcDbgNumberOfFailedHighPriorityMappingsDueToCcResources;
    v18 = v27;
    v14 = -1073741670;
LABEL_42:
    if ( v18 || v6 != 1 )
      RtlRaiseStatus(v14);
    Partition = v25;
    v5 = 1;
    v4 = v23;
    v27 = 1;
  }
LABEL_5:
  v26[0] = *(_QWORD *)(a1 + 32) - v24;
  if ( v26[0] > 0x40000 )
    LODWORD(v26[0]) = 0x40000;
  v14 = MmMapViewInSystemCache(*(_QWORD *)(a1 + 168), VacbFromFreeList, &v24, v26);
  if ( a3 )
    ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
  ExAcquirePushLockExclusiveEx(a1 + 104, 0LL);
  v15 = *(_QWORD *)(a1 + 32);
  v16 = v24;
  if ( v15 > 0x2000000 )
    VacbLargeOffset = CcGetVacbLargeOffset(a1, v24);
  else
    VacbLargeOffset = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)v24 >> 18));
  if ( !VacbLargeOffset )
  {
    if ( v14 < 0 )
      goto LABEL_36;
    if ( v15 > 0x2000000 )
    {
      if ( !CcSetVacbLargeOffset(a1, v16, (unsigned __int64)VacbFromFreeList, 0LL) )
      {
        v14 = -1073741670;
        CcUnmapVacb(VacbFromFreeList, a1, v23);
        goto LABEL_36;
      }
    }
    else if ( (unsigned __int64)VacbFromFreeList < 0xFFFFFFFFFFFFFFFEuLL )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)v24 >> 18)) = VacbFromFreeList;
    }
  }
  if ( v14 >= 0 )
  {
    if ( VacbLargeOffset )
    {
      CcIncrementVacbActiveCount(VacbLargeOffset);
      CcReleaseBcbLockAndVacbLock(a3, (struct _FAST_MUTEX *)a1);
      CcUnmapVacb(VacbFromFreeList, a1, v23);
      v18 = v27;
      v20 = KeAcquireQueuedSpinLock(4uLL);
      CcSetVacbInFreeList(v25, VacbFromFreeList, v27);
      KeReleaseQueuedSpinLock(4uLL, v20);
      VacbFromFreeList = (_QWORD *)VacbLargeOffset;
    }
    else
    {
      if ( VacbFromFreeList[1] != -1LL )
        KeBugCheckEx(0x34u, 0x755uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      VacbFromFreeList[1] = a1;
      VacbFromFreeList[2] = v16;
      CcIncrementVacbActiveCount(VacbFromFreeList);
      if ( v16 >= *(_QWORD *)(a1 + 368) )
        *(_QWORD *)(a1 + 368) = v16 + 0x40000;
      ExReleasePushLockEx(a1 + 104, 0LL);
      if ( a3 )
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
      v18 = v27;
    }
    goto LABEL_24;
  }
LABEL_36:
  CcReleaseBcbLockAndVacbLock(a3, (struct _FAST_MUTEX *)a1);
  v18 = v27;
  if ( v27 )
    ++CcDbgNumberOfFailedHighPriorityMappingsDueToMmResources;
  else
    *VacbFromFreeList = 0LL;
  v22 = KeAcquireQueuedSpinLock(4uLL);
  CcSetVacbInFreeList(v25, VacbFromFreeList, v27);
  KeReleaseQueuedSpinLock(4uLL, v22);
  VacbFromFreeList = 0LL;
  if ( !FsRtlIsNtstatusExpected(v14) )
  {
    v14 = -1073741589;
    goto LABEL_41;
  }
LABEL_24:
  if ( v14 < 0 )
  {
LABEL_41:
    v6 = a4;
    goto LABEL_42;
  }
  return VacbFromFreeList;
}
