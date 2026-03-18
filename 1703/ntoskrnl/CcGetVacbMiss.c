/*
 * XREFs of CcGetVacbMiss @ 0x1400A9104
 * Callers:
 *     CcGetVirtualAddress @ 0x14009DE10 (CcGetVirtualAddress.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     FsRtlIsNtstatusExpected @ 0x1400308D0 (FsRtlIsNtstatusExpected.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1400A9478 (CcReleaseBcbLockAndVacbLock.c)
 *     CcIncrementVacbActiveCount @ 0x1400A94B8 (CcIncrementVacbActiveCount.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1400A94E0 (CcAcquireBcbLockAndVacbLock.c)
 *     MmMapViewInSystemCache @ 0x1400A9520 (MmMapViewInSystemCache.c)
 *     CcGetVacbFromFreeList @ 0x1400AA6F4 (CcGetVacbFromFreeList.c)
 *     SetVacb @ 0x1400AA800 (SetVacb.c)
 *     CcGetVacbLargeOffset @ 0x1400AB770 (CcGetVacbLargeOffset.c)
 *     CcSetVacbInFreeList @ 0x1400AB7EC (CcSetVacbInFreeList.c)
 *     CcUnmapInactiveViews @ 0x1401613C4 (CcUnmapInactiveViews.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     CcUnmapVacb @ 0x140515A10 (CcUnmapVacb.c)
 */

_QWORD *__fastcall CcGetVacbMiss(_QWORD *a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v4; // esi
  char v5; // r15
  int v6; // r12d
  __int64 v9; // rbx
  KIRQL v10; // di
  __int64 v11; // rcx
  _QWORD *VacbFromFreeList; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  NTSTATUS v15; // r14d
  __int64 VacbLargeOffset; // r12
  unsigned int v17; // edi
  KIRQL v19; // al
  __int64 v20; // rdx
  KIRQL v21; // di
  KIRQL v22; // al
  __int64 v23; // rcx
  KIRQL v24; // di
  KIRQL v25; // al
  __int64 v26; // rdx
  KIRQL v27; // di
  unsigned __int64 v28[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+80h] [rbp+8h]
  __int64 v30; // [rsp+88h] [rbp+10h] BYREF
  int v31; // [rsp+98h] [rbp+20h]

  v31 = a4;
  HIDWORD(v30) = HIDWORD(a2);
  v4 = 0;
  v5 = 0;
  v6 = a4;
  LODWORD(v30) = a2 - (a2 & 0x3FFFF);
  v9 = v30;
  while ( 1 )
  {
    v10 = KeAcquireQueuedSpinLock(4uLL);
    v11 = v4 | 2;
    if ( !v5 )
      v11 = v4;
    v29 = v11;
    LOBYTE(v11) = v5;
    VacbFromFreeList = (_QWORD *)CcGetVacbFromFreeList(v11);
    KeReleaseQueuedSpinLock(4uLL, v10);
    if ( VacbFromFreeList )
      break;
    do
    {
      if ( !(unsigned int)CcUnmapInactiveViews(v14, v13, 0LL, 0LL) )
        break;
      v22 = KeAcquireQueuedSpinLock(4uLL);
      LOBYTE(v23) = v5;
      v24 = v22;
      VacbFromFreeList = (_QWORD *)CcGetVacbFromFreeList(v23);
      KeReleaseQueuedSpinLock(4uLL, v24);
    }
    while ( !VacbFromFreeList );
    if ( VacbFromFreeList )
      break;
    if ( v6 == 1 )
      ++CcDbgNumberOfFailedHighPriorityMappingsDueToCcResources;
    v15 = -1073741670;
LABEL_36:
    if ( v5 || v6 != 1 )
      RtlRaiseStatus(v15);
    v4 = v29;
    v5 = 1;
  }
  v28[0] = a1[4] - v9;
  if ( v28[0] > 0x40000 )
    LODWORD(v28[0]) = 0x40000;
  v15 = MmMapViewInSystemCache(a1[21], VacbFromFreeList, &v30, v28);
  CcAcquireBcbLockAndVacbLock(a3, a1);
  v9 = v30;
  if ( (__int64)a1[4] > 0x2000000 )
    VacbLargeOffset = CcGetVacbLargeOffset(a1, v30);
  else
    VacbLargeOffset = *(_QWORD *)(a1[11] + 8 * ((unsigned __int64)(unsigned int)v30 >> 18));
  if ( VacbLargeOffset )
  {
    v17 = v29;
  }
  else
  {
    if ( v15 < 0 )
      goto LABEL_30;
    v17 = v29;
    if ( !(unsigned __int8)SetVacb(a1, v9, VacbFromFreeList, 0LL) )
    {
      v15 = -1073741670;
      CcUnmapVacb(VacbFromFreeList, a1, v29);
    }
  }
  if ( v15 >= 0 )
  {
    if ( VacbLargeOffset )
    {
      CcIncrementVacbActiveCount(VacbLargeOffset);
      CcReleaseBcbLockAndVacbLock(a3, a1);
      CcUnmapVacb(VacbFromFreeList, a1, v17);
      v19 = KeAcquireQueuedSpinLock(4uLL);
      LOBYTE(v20) = v5;
      v21 = v19;
      CcSetVacbInFreeList(VacbFromFreeList, v20);
      KeReleaseQueuedSpinLock(4uLL, v21);
      VacbFromFreeList = (_QWORD *)VacbLargeOffset;
    }
    else
    {
      if ( VacbFromFreeList[1] != -1LL )
        KeBugCheckEx(0x34u, 0x745uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      VacbFromFreeList[1] = a1;
      VacbFromFreeList[2] = v9;
      CcIncrementVacbActiveCount(VacbFromFreeList);
      if ( v9 >= a1[46] )
        a1[46] = v9 + 0x40000;
      CcReleaseBcbLockAndVacbLock(a3, a1);
    }
    goto LABEL_19;
  }
LABEL_30:
  CcReleaseBcbLockAndVacbLock(a3, a1);
  if ( v5 )
    ++CcDbgNumberOfFailedHighPriorityMappingsDueToMmResources;
  else
    *VacbFromFreeList = 0LL;
  v25 = KeAcquireQueuedSpinLock(4uLL);
  LOBYTE(v26) = v5;
  v27 = v25;
  CcSetVacbInFreeList(VacbFromFreeList, v26);
  KeReleaseQueuedSpinLock(4uLL, v27);
  VacbFromFreeList = 0LL;
  if ( !FsRtlIsNtstatusExpected(v15) )
    v15 = -1073741589;
LABEL_19:
  if ( v15 < 0 )
  {
    v6 = v31;
    goto LABEL_36;
  }
  return VacbFromFreeList;
}
