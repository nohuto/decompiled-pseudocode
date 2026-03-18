/*
 * XREFs of VfErrorReleaseTriageInformation @ 0x1407737C4
 * Callers:
 *     VfReportIssueWithOptions @ 0x14025113C (VfReportIssueWithOptions.c)
 * Callees:
 *     <none>
 */

__int64 VfErrorReleaseTriageInformation()
{
  return (unsigned int)_InterlockedExchange(&VfErrorBugcheckDataReady, 0);
}
