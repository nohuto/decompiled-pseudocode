/*
 * XREFs of ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C0047F04
 * Callers:
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C0047E18 (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C011D738 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z @ 0x1C01207B4 (-GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0126980 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C0128B84 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 *     ?SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C012C0A0 (-SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CInputDest::TestWindowFlag(CInputDest *this, __int16 a2)
{
  char v3; // cl
  bool v4; // zf

  v3 = 0;
  if ( *((_DWORD *)this + 23) == 1 )
  {
    v4 = (*(_BYTE *)(HIBYTE(a2) + *((_QWORD *)this + 10) + 24LL) & (unsigned __int8)a2) == 0;
    return !v4;
  }
  if ( *((_DWORD *)this + 23) == 2 )
  {
    v4 = ((unsigned __int8)a2 & *(_BYTE *)(HIBYTE(a2) + *((_QWORD *)this + 10) + 56LL)) == 0;
    return !v4;
  }
  return v3;
}
