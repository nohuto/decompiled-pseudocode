/*
 * XREFs of HvpMapEntryReleaseBlockAddress @ 0x1401E55AC
 * Callers:
 *     HvpCopyModifiedData @ 0x1406A2F00 (HvpCopyModifiedData.c)
 * Callees:
 *     HvpMapEntryReleaseBinAddress @ 0x1400812E0 (HvpMapEntryReleaseBinAddress.c)
 */

__int64 __fastcall HvpMapEntryReleaseBlockAddress(__int64 a1, struct _EX_RUNDOWN_REF *a2, _WORD *a3)
{
  return HvpMapEntryReleaseBinAddress(a1, a2, a3);
}
