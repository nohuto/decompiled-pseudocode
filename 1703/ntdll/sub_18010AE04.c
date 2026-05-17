/*
 * XREFs of sub_18010AE04 @ 0x18010AE04
 * Callers:
 *     sub_18010AE38 @ 0x18010AE38 (sub_18010AE38.c)
 * Callees:
 *     memcmp @ 0x180099A70 (memcmp.c)
 */

_BOOL8 __fastcall sub_18010AE04(__int64 a1, unsigned int *a2)
{
  return *(unsigned __int8 *)(a1 + 19) == *a2 && !memcmp((const void *)(a1 + 24), *((const void **)a2 + 1), 8LL * *a2);
}
