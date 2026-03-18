/*
 * XREFs of MiAweViewRemover @ 0x1406B85F0
 * Callers:
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140020340 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140021C70 (ExAcquireAutoExpandPushLockExclusive.c)
 *     RtlAvlRemoveNode @ 0x1400DB450 (RtlAvlRemoveNode.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MiLocatePhysicalViewInTree @ 0x14021C628 (MiLocatePhysicalViewInTree.c)
 */

void __fastcall MiAweViewRemover(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rbx
  _QWORD *PhysicalViewInTree; // rdi

  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(a1 + 1032);
  --CurrentThread->SpecialApcDisable;
  ExAcquireAutoExpandPushLockExclusive(v4 + 16, 0LL);
  PhysicalViewInTree = MiLocatePhysicalViewInTree(
                         *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32),
                         (_QWORD *)(v4 + 32));
  RtlAvlRemoveNode((unsigned __int64 *)(v4 + 32), (__int64)PhysicalViewInTree);
  ExReleaseAutoExpandPushLockExclusive(v4 + 16, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  ExFreePoolWithTag(PhysicalViewInTree, 0);
}
