/*
 * XREFs of sub_180083318 @ 0x180083318
 * Callers:
 *     RtlCopyMappedMemory @ 0x180083300 (RtlCopyMappedMemory.c)
 * Callees:
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800EE9D0 @ 0x1800EE9D0 (sub_1800EE9D0.c)
 */

__int64 __fastcall sub_180083318(__int64 a1, void *a2, const void *a3, size_t a4)
{
  memmove(a2, a3, a4);
  return 0LL;
}
