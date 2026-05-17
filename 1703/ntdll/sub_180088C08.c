/*
 * XREFs of sub_180088C08 @ 0x180088C08
 * Callers:
 *     RtlCopyMappedMemory @ 0x180088BF0 (RtlCopyMappedMemory.c)
 * Callees:
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800F1C78 @ 0x1800F1C78 (sub_1800F1C78.c)
 */

__int64 __fastcall sub_180088C08(__int64 a1, void *a2, const void *a3, size_t a4)
{
  memmove(a2, a3, a4);
  return 0LL;
}
