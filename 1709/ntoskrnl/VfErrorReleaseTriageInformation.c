/*
 * XREFs of VfErrorReleaseTriageInformation @ 0x1407B5578
 * Callers:
 *     VfReportIssueWithOptions @ 0x1402779AC (VfReportIssueWithOptions.c)
 * Callees:
 *     <none>
 */

__int64 VfErrorReleaseTriageInformation()
{
  return (unsigned int)_InterlockedExchange(&VfErrorBugcheckDataReady, 0);
}
