/*
 * XREFs of sub_18010DCB4 @ 0x18010DCB4
 * Callers:
 *     sub_18010DCE8 @ 0x18010DCE8 (sub_18010DCE8.c)
 * Callees:
 *     memcmp @ 0x18008EED0 (memcmp.c)
 */

_BOOL8 __fastcall sub_18010DCB4(__int64 a1, unsigned int *a2)
{
  return *(unsigned __int8 *)(a1 + 19) == *a2 && !memcmp((const void *)(a1 + 24), *((const void **)a2 + 1), 8LL * *a2);
}
