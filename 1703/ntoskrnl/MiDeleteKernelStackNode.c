/*
 * XREFs of MiDeleteKernelStackNode @ 0x140211E9C
 * Callers:
 *     MiInPageSingleKernelStack @ 0x140011AE8 (MiInPageSingleKernelStack.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1400DB450 (RtlAvlRemoveNode.c)
 */

void __fastcall MiDeleteKernelStackNode(void *a1)
{
  unsigned __int64 v2; // rbx

  v2 = ExAcquireSpinLockExclusive(&dword_14036CDC0);
  RtlAvlRemoveNode((unsigned __int64 *)&qword_14036CDB8, (__int64)a1);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036CDC0);
  __writecr8(v2);
  ExFreePoolWithTag(a1, 0);
}
