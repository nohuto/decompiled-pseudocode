/*
 * XREFs of sub_180005F30 @ 0x180005F30
 * Callers:
 *     sub_180005E60 @ 0x180005E60 (sub_180005E60.c)
 *     sub_180024300 @ 0x180024300 (sub_180024300.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_180005F30(const void *a1, __int64 a2)
{
  return memcmp(a1, (const void *)(a2 + 24), 0x10uLL);
}
