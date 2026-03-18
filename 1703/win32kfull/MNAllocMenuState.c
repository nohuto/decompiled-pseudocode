/*
 * XREFs of MNAllocMenuState @ 0x1C01EAAEC
 * Callers:
 *     xxxMNStartMenuState @ 0x1C01EB83C (xxxMNStartMenuState.c)
 *     xxxTrackPopupMenuEx @ 0x1C0213DB0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     MNSetupAnimationDC @ 0x1C000F958 (MNSetupAnimationDC.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
HDC __fastcall MNAllocMenuState(_QWORD *a1)
{
  HDC v2; // rsi
  HDC v3; // rbx

  if ( (gdwPUDFlags & 0x2000000) == 0 )
  {
    gdwPUDFlags |= 0x2000000u;
    v3 = gMenuState[0];
    GreSetDCOwnerEx(gMenuState[17], 2147483650LL, 0LL, 0LL);
LABEL_7:
    memset(v3, 0, 0x88uLL);
    if ( *(_QWORD *)(gptiCurrent + 384LL) == gpqForeground )
    {
      *((_DWORD *)v3 + 2) |= 0x2000000u;
      ++guSFWLockCount;
    }
    v2 = v3;
    *(_QWORD *)v3 = *a1;
    *((_QWORD *)v3 + 4) = gptiCurrent;
    *(_DWORD *)*a1 |= 0x20000000u;
    *((_QWORD *)v3 + 6) = *(_QWORD *)(gptiCurrent + 528LL);
    *(_QWORD *)(gptiCurrent + 528LL) = v3;
    goto LABEL_10;
  }
  v2 = 0LL;
  v3 = (HDC)Win32AllocPoolWithQuota(144LL, 1953330005LL);
  if ( !v3 )
  {
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
    return 0LL;
  }
  *((_QWORD *)v3 + 17) = 0LL;
  if ( (unsigned int)MNSetupAnimationDC((__int64)v3) )
    goto LABEL_7;
  Win32FreePool(v3);
LABEL_10:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
  return v2;
}
