/*
 * XREFs of PnpRecordBlackbox @ 0x140075484
 * Callers:
 *     PnpDisableWatchdog @ 0x140075428 (PnpDisableWatchdog.c)
 *     PnpProcessWatchdogWorkItem @ 0x14015F108 (PnpProcessWatchdogWorkItem.c)
 * Callees:
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x14052032C (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x1405E4C38 (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x14073E8E8 (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 */

__int64 __fastcall PnpRecordBlackbox(__int64 a1, int a2)
{
  int v2; // edx
  __int64 result; // rax
  int v4; // edx

  v2 = a2 - 1;
  if ( !v2 )
    return PnpRecordBlackboxPnpEventWorkerInformation();
  v4 = v2 - 1;
  if ( !v4 )
    return PnpRecordBlackboxDeviceCompletionQueueInformation();
  if ( v4 == 1 )
    return PnpRecordBlackboxDelayedRemoveWorkerInformation();
  return result;
}
