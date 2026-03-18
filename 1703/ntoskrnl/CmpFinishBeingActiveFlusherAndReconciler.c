/*
 * XREFs of CmpFinishBeingActiveFlusherAndReconciler @ 0x1405BCF50
 * Callers:
 *     CmpLoadHiveThread @ 0x1405BC800 (CmpLoadHiveThread.c)
 *     CmpSaveKeyByFileCopy @ 0x140673320 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     CmpWakeWriteQueueWaiters @ 0x1404D867C (CmpWakeWriteQueueWaiters.c)
 *     CmpReleaseWriteQueue @ 0x1404D86B8 (CmpReleaseWriteQueue.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 */

LONG __fastcall CmpFinishBeingActiveFlusherAndReconciler(__int64 a1)
{
  __int64 v2; // rcx
  struct _KEVENT *v3; // rbx
  __int64 v4; // rcx
  struct _KEVENT *v5; // rdi

  CmpLockRegistry();
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 2848), 1u);
  *(_DWORD *)(a1 + 5488) &= 0xFFFFFFFC;
  v3 = (struct _KEVENT *)CmpReleaseWriteQueue(v2, a1 + 5440);
  v5 = (struct _KEVENT *)CmpReleaseWriteQueue(v4, a1 + 5464);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
  CmpUnlockRegistry();
  CmpWakeWriteQueueWaiters(v3, -1073741823);
  return CmpWakeWriteQueueWaiters(v5, -1073741823);
}
