/*
 * XREFs of ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0012E90
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C00073F0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0012DA4 (VidSchiMarkDeviceAsError.c)
 *     ?VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0030FE0 (-VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     VidSchiProcessGpuEngineTimeoutDpc @ 0x1C00332B0 (VidSchiProcessGpuEngineTimeoutDpc.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C0033B44 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiCleanupQueuedCommand @ 0x1C0033DFC (VidSchiCleanupQueuedCommand.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C0033E60 (VidSchiCompleteAllPendingCommand.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0012ED4 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 */

AcquireSpinLock *__fastcall AcquireSpinLock::AcquireSpinLock(
        AcquireSpinLock *this,
        unsigned __int64 *a2,
        char a3,
        char a4)
{
  *(_QWORD *)this = a2;
  *((_BYTE *)this + 32) = 0;
  *((_BYTE *)this + 33) = a4;
  if ( a3 )
    AcquireSpinLock::Acquire(this);
  return this;
}
