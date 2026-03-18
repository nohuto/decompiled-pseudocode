/*
 * XREFs of VfErrorStoreTriageInformation @ 0x1407738F4
 * Callers:
 *     VfReportIssueWithOptions @ 0x14025113C (VfReportIssueWithOptions.c)
 *     ViErrorFinishReport @ 0x140773998 (ViErrorFinishReport.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x140776A10 (ViShutdownWatchdogExecuteDpc.c)
 *     ViWdIrpTimedOut @ 0x14077C760 (ViWdIrpTimedOut.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x14077F838 (ViCtxCheckAndReleaseIsrState.c)
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
    qword_140790428 = a2;
    qword_140790430 = a3;
    qword_140790438 = a4;
    qword_140790440 = a5;
  }
  return v5;
}
