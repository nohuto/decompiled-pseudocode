/*
 * XREFs of MiDeleteKernelStackNode @ 0x1402563B4
 * Callers:
 *     MiInPageSingleKernelStack @ 0x1400B2E48 (MiInPageSingleKernelStack.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14002A570 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteKernelStackNode(PVOID P)
{
  unsigned __int64 v2; // rbx

  v2 = ExAcquireSpinLockExclusive(&dword_1403CC2E0);
  RtlAvlRemoveNode((unsigned __int64 *)&qword_1403CC2D8, (__int64)P);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CC2E0);
  __writecr8(v2);
  ExFreePoolWithTag(P, 0);
}
