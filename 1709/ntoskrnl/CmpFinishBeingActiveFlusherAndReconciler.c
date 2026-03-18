/*
 * XREFs of CmpFinishBeingActiveFlusherAndReconciler @ 0x1405BEE7C
 * Callers:
 *     CmpLoadHiveThread @ 0x1405BE770 (CmpLoadHiveThread.c)
 *     CmpSaveKeyByFileCopy @ 0x14069E3E0 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpReleaseWriteQueue @ 0x1405959A4 (CmpReleaseWriteQueue.c)
 *     CmpWakeWriteQueueWaiters @ 0x140597ECC (CmpWakeWriteQueueWaiters.c)
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
