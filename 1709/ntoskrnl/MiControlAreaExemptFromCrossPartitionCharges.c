/*
 * XREFs of MiControlAreaExemptFromCrossPartitionCharges @ 0x1400A1520
 * Callers:
 *     MiIncrementSubsectionViewCount @ 0x1400A1430 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A1FF0 (MiDecrementSubsectionViewCount.c)
 *     MiControlAreaRequiresCharge @ 0x1400A27AC (MiControlAreaRequiresCharge.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiControlAreaExemptFromCrossPartitionCharges(__int64 a1)
{
  return (*(_DWORD *)(a1 + 56) & 0x40000000) != 0 || !*(_QWORD *)(a1 + 64) && (*(_DWORD *)(a1 + 92) & 0x10000) != 0;
}
