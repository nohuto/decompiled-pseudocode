/*
 * XREFs of ZwWaitForSingleObject @ 0x14017D940
 * Callers:
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x14012D070 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     CcDeletePartition @ 0x1401E2158 (CcDeletePartition.c)
 *     MiDeletePartitionResources @ 0x140236E78 (MiDeletePartitionResources.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x14044382C (PfSnVolumeCheckSeekPenalty.c)
 *     PiDrvDbLoadNode @ 0x140533E84 (PiDrvDbLoadNode.c)
 *     BiAcquireBcdSyncMutant @ 0x1405AFFF8 (BiAcquireBcdSyncMutant.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1405E577C (FsRtlpRegisterProviderWithMUP.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1405E7F0C (IopFileUtilWalkDirectoryTreeHelper.c)
 *     CMFFlushHitsFile @ 0x1405EE9D0 (CMFFlushHitsFile.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1406F4854 (PfSnVolumeCheckIsSdBus.c)
 *     PspShutdownCsrProcess @ 0x140715594 (PspShutdownCsrProcess.c)
 *     ExpPartitionDestroy @ 0x14075E934 (ExpPartitionDestroy.c)
 *     CMFSystemThreadRoutine @ 0x1407618F0 (CMFSystemThreadRoutine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
