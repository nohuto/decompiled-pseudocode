/*
 * XREFs of RtlpFreeAtom @ 0x14057CD84
 * Callers:
 *     RtlCreateAtomTableEx @ 0x140013790 (RtlCreateAtomTableEx.c)
 *     RtlpAllocateAtomTableEntry @ 0x1400193F0 (RtlpAllocateAtomTableEntry.c)
 *     RtlAddAtomToAtomTableEx @ 0x1400194E0 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x1401214B0 (RtlDestroyLowBoxAtoms.c)
 *     RtlpDereferenceAtom @ 0x140121584 (RtlpDereferenceAtom.c)
 *     RtlpFreeAllAtom @ 0x140121614 (RtlpFreeAllAtom.c)
 *     RtlDestroyAtomTable @ 0x14057CC80 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1407213C0 (RtlEmptyAtomTable.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PsReturnSharedPoolQuota @ 0x140486060 (PsReturnSharedPoolQuota.c)
 */

void __fastcall RtlpFreeAtom(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 16);
  PsReturnSharedPoolQuota(*(char **)(a1 - 16), *(_QWORD *)(a1 - 16 + 8), 0LL);
  ExFreePoolWithTag(v1, 0);
}
