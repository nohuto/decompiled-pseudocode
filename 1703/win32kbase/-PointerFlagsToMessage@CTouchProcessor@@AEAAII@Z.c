/*
 * XREFs of ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C0123414
 * Callers:
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C011D738 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C011F470 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C01297AC (WPP_RECORDER_SF_L.c)
 */

__int64 __fastcall CTouchProcessor::PointerFlagsToMessage(CTouchProcessor *this, int a2, int a3)
{
  if ( (a2 & 0x10000) != 0 )
    return 582LL;
  if ( (a2 & 0x40000) != 0 )
    return 583LL;
  if ( (a2 & 0x20000) != 0 )
    return 581LL;
  WPP_RECORDER_SF_L(*((_QWORD *)this + 1), a2, a3, 280);
  return 0LL;
}
