/*
 * XREFs of CcGetVacbMiss @ 0x1400A3D50
 * Callers:
 *     CcGetVirtualAddress @ 0x14007B2D0 (CcGetVirtualAddress.c)
 * Callees:
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     MmMapViewInSystemCache @ 0x1400A2D00 (MmMapViewInSystemCache.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     CcIncrementVacbActiveCount @ 0x1400A4028 (CcIncrementVacbActiveCount.c)
 *     CcGetVacbFromFreeList @ 0x1400A4050 (CcGetVacbFromFreeList.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     CcGetVacbLargeOffset @ 0x1400A5E18 (CcGetVacbLargeOffset.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     CcSetVacbLargeOffset @ 0x1400F7750 (CcSetVacbLargeOffset.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1400F8C0C (CcReleaseBcbLockAndVacbLock.c)
 *     CcSetVacbInFreeList @ 0x140115A18 (CcSetVacbInFreeList.c)
 *     FsRtlIsNtstatusExpected @ 0x140126700 (FsRtlIsNtstatusExpected.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     CcUnmapInactiveViews @ 0x1401E1A30 (CcUnmapInactiveViews.c)
 *     CcUnmapVacb @ 0x14056F9B0 (CcUnmapVacb.c)
 */

__int64 *__fastcall CcGetVacbMiss(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v4; // edi
  unsigned __int8 v5; // r13
  int v6; // r15d
  unsigned int v7; // r14d
  __int64 Partition; // rbp
  KIRQL v10; // bl
  __int64 *VacbFromFreeList; // rdi
  __int64 v12; // rdx
  NTSTATUS v13; // ebp
  __int64 v14; // r8
  __int64 v15; // r14
  __int64 v16; // rbx
  __int64 VacbLargeOffset; // r15
  __int64 v19; // r8
  KIRQL v20; // bl
  KIRQL v21; // bl
  KIRQL v22; // bl
  __int64 v23; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-50h]
  __int64 v25; // [rsp+40h] [rbp-48h]
  unsigned int v26; // [rsp+98h] [rbp+10h]

  HIDWORD(v23) = HIDWORD(a2);
  v4 = 0;
  v26 = 0;
  v5 = 0;
  LODWORD(v23) = a2 - (a2 & 0x3FFFF);
  v6 = a4;
  v7 = a3;
  Partition = CcGetPartition((_QWORD *)a1);
  v25 = Partition;
  while ( 1 )
  {
    v10 = KeAcquireQueuedSpinLock(4uLL);
    if ( v5 )
      v26 = v4 | 2;
    VacbFromFreeList = (__int64 *)CcGetVacbFromFreeList(Partition, v5);
    KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 64));
    __writecr8(v10);
    if ( VacbFromFreeList )
      break;
    while ( (unsigned int)CcUnmapInactiveViews(*(_QWORD *)(Partition + 8), v12, 0LL, 0LL) )
    {
      v21 = KeAcquireQueuedSpinLock(4uLL);
      VacbFromFreeList = (__int64 *)CcGetVacbFromFreeList(Partition, v5);
      KeReleaseQueuedSpinLock(4uLL, v21);
      if ( VacbFromFreeList )
        goto LABEL_5;
    }
    if ( v6 == 1 )
      ++CcDbgNumberOfFailedHighPriorityMappingsDueToCcResources;
    v13 = -1073741670;
LABEL_41:
    if ( v5 || v6 != 1 )
      RtlRaiseStatus(v13);
    Partition = v25;
    v5 = 1;
    v4 = v26;
  }
LABEL_5:
  v24 = *(_QWORD *)(a1 + 32) - v23;
  if ( v24 > 0x40000 )
    LODWORD(v24) = 0x40000;
  v13 = MmMapViewInSystemCache(*(_QWORD *)(a1 + 168), VacbFromFreeList, (__int64)&v23);
  if ( v7 )
    ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
  ExAcquirePushLockExclusiveEx(a1 + 104, 0LL);
  v15 = *(_QWORD *)(a1 + 32);
  v16 = v23;
  if ( v15 <= 0x2000000 )
    VacbLargeOffset = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)v23 >> 18));
  else
    VacbLargeOffset = CcGetVacbLargeOffset(a1, v23);
  if ( !VacbLargeOffset )
  {
    if ( v13 < 0 )
      goto LABEL_35;
    if ( v15 <= 0x2000000 )
    {
      if ( (unsigned __int64)VacbFromFreeList < 0xFFFFFFFFFFFFFFFEuLL )
        *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)v23 >> 18)) = VacbFromFreeList;
    }
    else if ( !(unsigned __int8)CcSetVacbLargeOffset(a1, v16, VacbFromFreeList, 0LL) )
    {
      v13 = -1073741670;
      CcUnmapVacb(VacbFromFreeList, a1, v26);
      goto LABEL_35;
    }
  }
  if ( v13 >= 0 )
  {
    if ( VacbLargeOffset )
    {
      CcIncrementVacbActiveCount(VacbLargeOffset);
      v7 = a3;
      CcReleaseBcbLockAndVacbLock(a3, a1, v19);
      CcUnmapVacb(VacbFromFreeList, a1, v26);
      v20 = KeAcquireQueuedSpinLock(4uLL);
      CcSetVacbInFreeList(v25, VacbFromFreeList, v5);
      KeReleaseQueuedSpinLock(4uLL, v20);
      VacbFromFreeList = (__int64 *)VacbLargeOffset;
    }
    else
    {
      if ( VacbFromFreeList[1] != -1 )
        KeBugCheckEx(0x34u, 0x755uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      VacbFromFreeList[1] = a1;
      VacbFromFreeList[2] = v16;
      CcIncrementVacbActiveCount(VacbFromFreeList);
      if ( v16 >= *(_QWORD *)(a1 + 368) )
        *(_QWORD *)(a1 + 368) = v16 + 0x40000;
      ExReleasePushLockEx(a1 + 104, 0LL);
      v7 = a3;
      if ( a3 )
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
    }
    goto LABEL_22;
  }
LABEL_35:
  v7 = a3;
  CcReleaseBcbLockAndVacbLock(a3, a1, v14);
  if ( v5 )
    ++CcDbgNumberOfFailedHighPriorityMappingsDueToMmResources;
  else
    *VacbFromFreeList = 0LL;
  v22 = KeAcquireQueuedSpinLock(4uLL);
  CcSetVacbInFreeList(v25, VacbFromFreeList, v5);
  KeReleaseQueuedSpinLock(4uLL, v22);
  VacbFromFreeList = 0LL;
  if ( !FsRtlIsNtstatusExpected(v13) )
  {
    v13 = -1073741589;
    goto LABEL_40;
  }
LABEL_22:
  if ( v13 < 0 )
  {
LABEL_40:
    v6 = a4;
    goto LABEL_41;
  }
  return VacbFromFreeList;
}
