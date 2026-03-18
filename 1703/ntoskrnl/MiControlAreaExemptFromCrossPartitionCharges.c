/*
 * XREFs of MiControlAreaExemptFromCrossPartitionCharges @ 0x14009A250
 * Callers:
 *     MiControlAreaRequiresCharge @ 0x1400996E8 (MiControlAreaRequiresCharge.c)
 *     MiIncrementSubsectionViewCount @ 0x14009A170 (MiIncrementSubsectionViewCount.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiControlAreaExemptFromCrossPartitionCharges(__int64 a1)
{
  return (*(_DWORD *)(a1 + 56) & 0x40000000) != 0 || !*(_QWORD *)(a1 + 64) && (*(_DWORD *)(a1 + 92) & 0x10000) != 0;
}
