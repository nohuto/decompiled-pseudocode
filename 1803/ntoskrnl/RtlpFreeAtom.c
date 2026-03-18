/*
 * XREFs of RtlpFreeAtom @ 0x1404EAF6C
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x14003F560 (RtlAddAtomToAtomTableEx.c)
 *     RtlpAllocateAtomTableEntry @ 0x14006A0A8 (RtlpAllocateAtomTableEntry.c)
 *     RtlDestroyLowBoxAtoms @ 0x1400A1240 (RtlDestroyLowBoxAtoms.c)
 *     RtlpDereferenceAtom @ 0x1400A13A8 (RtlpDereferenceAtom.c)
 *     RtlpFreeAllAtom @ 0x1400A1438 (RtlpFreeAllAtom.c)
 *     RtlCreateAtomTableEx @ 0x1400ADD30 (RtlCreateAtomTableEx.c)
 *     RtlDestroyAtomTable @ 0x140547520 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x140784AE0 (RtlEmptyAtomTable.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PsReturnSharedPoolQuota @ 0x1404EBEB8 (PsReturnSharedPoolQuota.c)
 */

void __fastcall RtlpFreeAtom(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 16);
  PsReturnSharedPoolQuota(*(PVOID *)(a1 - 16));
  ExFreePoolWithTag(v1, 0);
}
