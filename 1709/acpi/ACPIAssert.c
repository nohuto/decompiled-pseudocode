/*
 * XREFs of ACPIAssert @ 0x1C0014E80
 * Callers:
 *     ACPIProcessHardwareInformation @ 0x1C008FA58 (ACPIProcessHardwareInformation.c)
 *     ACPILoadTableCheckSum @ 0x1C00AEA10 (ACPILoadTableCheckSum.c)
 * Callees:
 *     WPP_RECORDER_SF_LLss @ 0x1C0042784 (WPP_RECORDER_SF_LLss.c)
 */

__int64 __fastcall ACPIAssert(int a1, int a2, int a3, int a4)
{
  __int64 result; // rax

  if ( !a1 )
    return WPP_RECORDER_SF_LLss(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
  return result;
}
