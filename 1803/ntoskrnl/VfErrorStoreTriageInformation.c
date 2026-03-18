/*
 * XREFs of VfErrorStoreTriageInformation @ 0x14082339C
 * Callers:
 *     VfReportIssueWithOptions @ 0x1402AAB18 (VfReportIssueWithOptions.c)
 *     ViErrorFinishReport @ 0x14082343C (ViErrorFinishReport.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x140825A90 (ViShutdownWatchdogExecuteDpc.c)
 *     ViWdIrpTimedOut @ 0x14082BAF4 (ViWdIrpTimedOut.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x14082ED58 (ViCtxCheckAndReleaseIsrState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfErrorStoreTriageInformation(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r10d

  v5 = 1;
  if ( _InterlockedExchange(&VfErrorBugcheckDataReady, 1) )
  {
    return 0;
  }
  else
  {
    VfErrorBugcheckData = a1;
    qword_140842428 = a2;
    qword_140842430 = a3;
    qword_140842438 = a4;
    qword_140842440 = a5;
  }
  return v5;
}
