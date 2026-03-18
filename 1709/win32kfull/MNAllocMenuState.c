/*
 * XREFs of MNAllocMenuState @ 0x1C01F6ABC
 * Callers:
 *     xxxMNStartMenuState @ 0x1C01F7708 (xxxMNStartMenuState.c)
 *     xxxTrackPopupMenuEx @ 0x1C0214E34 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNSetupAnimationDC @ 0x1C00DCA98 (MNSetupAnimationDC.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
_QWORD *__fastcall MNAllocMenuState(_QWORD *a1)
{
  _QWORD *v2; // rsi
  __int64 v3; // rdx
  _QWORD *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  if ( (gdwPUDFlags & 0x2000000) == 0 )
  {
    gdwPUDFlags |= 0x2000000u;
    v4 = (_QWORD *)gMenuState[0];
    GreSetDCOwnerEx(gMenuState[17], 2147483650LL, 0LL, 0LL);
LABEL_7:
    memset(v4, 0, 0x88uLL);
    if ( *(_QWORD *)(gptiCurrent + 408LL) == gpqForeground )
    {
      *((_DWORD *)v4 + 2) |= 0x2000000u;
      ++guSFWLockCount;
    }
    v2 = v4;
    *v4 = *(_QWORD *)*a1;
    v4[4] = gptiCurrent;
    **(_DWORD **)*a1 |= 0x20000000u;
    v4[6] = *(_QWORD *)(gptiCurrent + 584LL);
    *(_QWORD *)(gptiCurrent + 584LL) = v4;
    goto LABEL_10;
  }
  v2 = 0LL;
  v4 = (_QWORD *)Win32AllocPoolWithQuota(144LL, 1953330005LL);
  if ( !v4 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, v3, v5, v6);
    return 0LL;
  }
  v4[17] = 0LL;
  if ( (unsigned int)MNSetupAnimationDC((__int64)v4) )
    goto LABEL_7;
  Win32FreePool(v4, v8, v9);
LABEL_10:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, v10, v11, v12);
  return v2;
}
