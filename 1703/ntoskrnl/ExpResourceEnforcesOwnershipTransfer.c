/*
 * XREFs of ExpResourceEnforcesOwnershipTransfer @ 0x1400EF440
 * Callers:
 *     ExpSetResourceOwnerPointerEx @ 0x14001BAA0 (ExpSetResourceOwnerPointerEx.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1400EF2B0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExDeleteResourceLite @ 0x14011B1A0 (ExDeleteResourceLite.c)
 *     ExReinitializeResourceLite @ 0x14011C340 (ExReinitializeResourceLite.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpResourceEnforcesOwnershipTransfer(__int64 a1)
{
  return (*(_BYTE *)(a1 + 26) & 1) != 0 || ExpResourceEnforceOwnerTransfer;
}
