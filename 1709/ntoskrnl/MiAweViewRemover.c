/*
 * XREFs of MiAweViewRemover @ 0x1406E52C0
 * Callers:
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140058B30 (RtlAvlRemoveNode.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1400BAD00 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140113B10 (ExReleaseAutoExpandPushLockExclusive.c)
 *     MiLocatePhysicalViewInTree @ 0x140229268 (MiLocatePhysicalViewInTree.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
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
