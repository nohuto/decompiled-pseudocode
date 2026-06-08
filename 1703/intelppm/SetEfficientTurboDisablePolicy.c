/*
 * XREFs of SetEfficientTurboDisablePolicy @ 0x1C0001AD0
 * Callers:
 *     <none>
 * Callees:
 *     IsTurboModeSupported @ 0x1C0001B64 (IsTurboModeSupported.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002C2C (WPP_RECORDER_SF_.c)
 *     ProcLibTraceUnexpectedTurboDisable @ 0x1C0007714 (ProcLibTraceUnexpectedTurboDisable.c)
 */

unsigned __int64 __fastcall SetEfficientTurboDisablePolicy(__int64 a1, int a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v4; // [rsp+50h] [rbp+18h]

  v2 = __readmsr(0x199u);
  LODWORD(v4) = v2;
  if ( (unsigned int)(a2 - 1) > 3 )
    HIDWORD(v4) = HIDWORD(v2) | 1;
  else
    HIDWORD(v4) = HIDWORD(v2) & 0xFFFFFFFE;
  result = v4;
  __writemsr(0x199u, v4);
  return result;
}
