/*
 * XREFs of MiAweViewRemover @ 0x14074F7F4
 * Callers:
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140007E50 (ExAcquireAutoExpandPushLockExclusive.c)
 *     RtlAvlRemoveNode @ 0x14002A570 (RtlAvlRemoveNode.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1400B5B90 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiLocatePhysicalViewInTree @ 0x1402626CC (MiLocatePhysicalViewInTree.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
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
