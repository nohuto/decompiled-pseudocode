/*
 * XREFs of DbgPrompt @ 0x14023B0A0
 * Callers:
 *     RtlAssert @ 0x14023DB30 (RtlAssert.c)
 *     VfReportIssueWithOptions @ 0x14025113C (VfReportIssueWithOptions.c)
 *     PspCatchCriticalBreak @ 0x1406E2BD8 (PspCatchCriticalBreak.c)
 *     ViErrorFinishReport @ 0x140773998 (ViErrorFinishReport.c)
 * Callees:
 *     DebugPrompt @ 0x140189420 (DebugPrompt.c)
 */

ULONG __stdcall DbgPrompt(PCCH Prompt, PCH Response, ULONG Length)
{
  __int64 v3; // rax

  v3 = -1LL;
  do
    ++v3;
  while ( Prompt[v3] );
  return DebugPrompt();
}
