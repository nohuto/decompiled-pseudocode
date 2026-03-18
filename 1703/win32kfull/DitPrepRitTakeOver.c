/*
 * XREFs of DitPrepRitTakeOver @ 0x1C0109914
 * Callers:
 *     EditionDeactivateMitInput @ 0x1C0108D50 (EditionDeactivateMitInput.c)
 *     UserDeactivateDwmInputProcessing @ 0x1C01A1080 (UserDeactivateDwmInputProcessing.c)
 * Callees:
 *     CleanupDitRimIocpSupport @ 0x1C0109940 (CleanupDitRimIocpSupport.c)
 *     vRemoveAndCleanupRimClient @ 0x1C0109B10 (vRemoveAndCleanupRimClient.c)
 *     ResetPointerDevices @ 0x1C0109C28 (ResetPointerDevices.c)
 */

__int64 DitPrepRitTakeOver()
{
  ResetPointerDevices();
  vRemoveAndCleanupRimClient();
  CleanupDitRimIocpSupport();
  EtwTraceDitDisEngaged();
  return 1LL;
}
