/*
 * XREFs of VfErrorStoreTriageInformation @ 0x1407B56A8
 * Callers:
 *     VfReportIssueWithOptions @ 0x1402779AC (VfReportIssueWithOptions.c)
 *     ViErrorFinishReport @ 0x1407B5748 (ViErrorFinishReport.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1407B8800 (ViShutdownWatchdogExecuteDpc.c)
 *     ViWdIrpTimedOut @ 0x1407BE688 (ViWdIrpTimedOut.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x1407C1818 (ViCtxCheckAndReleaseIsrState.c)
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
    qword_1407D5428 = a2;
    qword_1407D5430 = a3;
    qword_1407D5438 = a4;
    qword_1407D5440 = a5;
  }
  return v5;
}
