/*
 * XREFs of RtlpFreeAtom @ 0x14043136C
 * Callers:
 *     RtlCreateAtomTableEx @ 0x1400137A0 (RtlCreateAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x140018648 (RtlDestroyLowBoxAtoms.c)
 *     RtlpDereferenceAtom @ 0x140018718 (RtlpDereferenceAtom.c)
 *     RtlpFreeAllAtom @ 0x1400187A8 (RtlpFreeAllAtom.c)
 *     RtlpAllocateAtomTableEntry @ 0x14006B124 (RtlpAllocateAtomTableEntry.c)
 *     RtlAddAtomToAtomTableEx @ 0x14008B560 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyAtomTable @ 0x140431100 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1406E9560 (RtlEmptyAtomTable.c)
 * Callees:
 *     PsReturnSharedPoolQuota @ 0x1404F5AC0 (PsReturnSharedPoolQuota.c)
 */

void __fastcall RtlpFreeAtom(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 16);
  PsReturnSharedPoolQuota(*(PVOID *)(a1 - 16));
  ExFreePoolWithTag(v1, 0);
}
