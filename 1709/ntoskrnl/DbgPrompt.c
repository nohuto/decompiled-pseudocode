/*
 * XREFs of DbgPrompt @ 0x140250930
 * Callers:
 *     RtlAssert @ 0x1402538E0 (RtlAssert.c)
 *     VfReportIssueWithOptions @ 0x1402779AC (VfReportIssueWithOptions.c)
 *     PspCatchCriticalBreak @ 0x140719040 (PspCatchCriticalBreak.c)
 *     ViErrorFinishReport @ 0x1407B5748 (ViErrorFinishReport.c)
 * Callees:
 *     DebugPrompt @ 0x140188F20 (DebugPrompt.c)
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
