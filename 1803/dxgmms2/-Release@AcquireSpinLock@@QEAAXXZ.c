/*
 * XREFs of ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0012F08
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C00073F0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0012DA4 (VidSchiMarkDeviceAsError.c)
 *     ?VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0030FE0 (-VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     VidSchiProcessGpuEngineTimeoutDpc @ 0x1C00332B0 (VidSchiProcessGpuEngineTimeoutDpc.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C0033B44 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiCleanupQueuedCommand @ 0x1C0033DFC (VidSchiCleanupQueuedCommand.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C0033E60 (VidSchiCompleteAllPendingCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall AcquireSpinLock::Release(AcquireSpinLock *this)
{
  struct _KLOCK_QUEUE_HANDLE *v2; // rcx

  if ( *((_BYTE *)this + 32) )
  {
    v2 = (struct _KLOCK_QUEUE_HANDLE *)((char *)this + 8);
    if ( *((_BYTE *)this + 33) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(v2);
    else
      KeReleaseInStackQueuedSpinLock(v2);
    *((_BYTE *)this + 32) = 0;
  }
}
