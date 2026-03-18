/*
 * XREFs of DbgPrompt @ 0x140286390
 * Callers:
 *     RtlAssert @ 0x140288F50 (RtlAssert.c)
 *     VfReportIssueWithOptions @ 0x1402AAB18 (VfReportIssueWithOptions.c)
 *     PspCatchCriticalBreak @ 0x14077D014 (PspCatchCriticalBreak.c)
 *     ViErrorFinishReport @ 0x14082343C (ViErrorFinishReport.c)
 * Callees:
 *     DebugPrompt @ 0x1401B2B80 (DebugPrompt.c)
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
