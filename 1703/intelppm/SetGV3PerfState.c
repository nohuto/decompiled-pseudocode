/*
 * XREFs of SetGV3PerfState @ 0x1C0001980
 * Callers:
 *     <none>
 * Callees:
 *     IsTurboModeSupported @ 0x1C0001B64 (IsTurboModeSupported.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002C2C (WPP_RECORDER_SF_.c)
 *     ProcLibTraceUnexpectedTurboDisable @ 0x1C0007714 (ProcLibTraceUnexpectedTurboDisable.c)
 */

__int64 __fastcall SetGV3PerfState(__int64 a1, __int16 a2)
{
  unsigned __int64 v3; // [rsp+48h] [rbp+10h]

  v3 = __readmsr(0x199u);
  LOWORD(v3) = a2;
  __writemsr(0x199u, v3);
  return 0LL;
}
