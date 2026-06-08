/*
 * XREFs of SetGV3PerfState @ 0x1C0006F30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002A20 (WPP_RECORDER_SF_.c)
 *     IsTurboModeSupported @ 0x1C0003B6C (IsTurboModeSupported.c)
 *     ProcLibTraceUnexpectedTurboDisable @ 0x1C0007690 (ProcLibTraceUnexpectedTurboDisable.c)
 */

__int64 __fastcall SetGV3PerfState(__int64 a1, __int16 a2)
{
  unsigned __int64 v3; // [rsp+48h] [rbp+10h]

  v3 = __readmsr(0x199u);
  LOWORD(v3) = a2;
  __writemsr(0x199u, v3);
  return 0LL;
}
