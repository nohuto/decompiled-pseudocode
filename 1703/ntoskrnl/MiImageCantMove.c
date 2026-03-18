/*
 * XREFs of MiImageCantMove @ 0x140222CD4
 * Callers:
 *     MiValidateSectionCreate @ 0x140422CC0 (MiValidateSectionCreate.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiImageCantMove(__int64 a1)
{
  KIRQL v2; // al
  unsigned __int64 v3; // rbx

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  *(_DWORD *)(a1 + 92) |= 0x100000u;
  v3 = v2;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  __writecr8(v3);
}
