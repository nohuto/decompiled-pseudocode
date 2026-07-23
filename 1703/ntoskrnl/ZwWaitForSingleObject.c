/*
 * XREFs of ZwWaitForSingleObject @ 0x14017DFC0
 * Callers:
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x140036870 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     MiDeletePartitionResources @ 0x14021D818 (MiDeletePartitionResources.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x14046688C (PfSnVolumeCheckSeekPenalty.c)
 *     PiDrvDbLoadNode @ 0x140489A54 (PiDrvDbLoadNode.c)
 *     BiAcquireBcdSyncMutant @ 0x14058BDB8 (BiAcquireBcdSyncMutant.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14059828C (IopFileUtilWalkDirectoryTreeHelper.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1405CE304 (FsRtlpRegisterProviderWithMUP.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1406C4D34 (PfSnVolumeCheckIsSdBus.c)
 *     PspShutdownCsrProcess @ 0x1406DF114 (PspShutdownCsrProcess.c)
 *     CMFFlushHitsFile @ 0x14072162C (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140721D50 (CMFSystemThreadRoutine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
