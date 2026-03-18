/*
 * XREFs of MiDeleteKernelStackNode @ 0x1402197B4
 * Callers:
 *     MiInPageSingleKernelStack @ 0x1400AD4B4 (MiInPageSingleKernelStack.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlRemoveNode @ 0x140058B30 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteKernelStackNode(PVOID P)
{
  unsigned __int64 v2; // rbx

  v2 = ExAcquireSpinLockExclusive(&dword_140389030);
  RtlAvlRemoveNode((unsigned __int64 *)&qword_140389028, (__int64)P);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140389030);
  __writecr8(v2);
  ExFreePoolWithTag(P, 0);
}
