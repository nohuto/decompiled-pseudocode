/*
 * XREFs of ZwWaitForSingleObject @ 0x1401A7540
 * Callers:
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1400C8DE0 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     CcDeletePartition @ 0x140220D68 (CcDeletePartition.c)
 *     MiDeletePartitionResources @ 0x14026E874 (MiDeletePartitionResources.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x14048FE7C (PfSnVolumeCheckSeekPenalty.c)
 *     PiDrvDbLoadNode @ 0x140565274 (PiDrvDbLoadNode.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1405F3118 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     BiAcquireBcdSyncMutant @ 0x1406091E0 (BiAcquireBcdSyncMutant.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x14064BBDC (FsRtlpRegisterProviderWithMUP.c)
 *     PfSnVolumeCheckIsSdBus @ 0x14075CBC4 (PfSnVolumeCheckIsSdBus.c)
 *     PspShutdownCsrProcess @ 0x140779724 (PspShutdownCsrProcess.c)
 *     ExpPartitionDestroy @ 0x1407C56B0 (ExpPartitionDestroy.c)
 *     CMFFlushHitsFile @ 0x1407C8998 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1407C92E0 (CMFSystemThreadRoutine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
