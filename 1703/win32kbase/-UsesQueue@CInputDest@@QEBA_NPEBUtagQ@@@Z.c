/*
 * XREFs of ?UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z @ 0x1C011853C
 * Callers:
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C011D738 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0126980 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0047EBC (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 */

_BOOL8 __fastcall CInputDest::UsesQueue(CInputDest *this, const struct tagQ *a2)
{
  __int64 v2; // rdx
  struct tagTHREADINFO *ThreadInfo; // r8
  _BOOL8 result; // rax

  ThreadInfo = CInputDest::GetThreadInfo(this);
  result = 0LL;
  if ( ThreadInfo )
    return *((_QWORD *)ThreadInfo + 48) == v2;
  return result;
}
