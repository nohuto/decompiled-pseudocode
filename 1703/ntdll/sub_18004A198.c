/*
 * XREFs of sub_18004A198 @ 0x18004A198
 * Callers:
 *     sub_18004A080 @ 0x18004A080 (sub_18004A080.c)
 *     sub_1800E5D78 @ 0x1800E5D78 (sub_1800E5D78.c)
 * Callees:
 *     sub_18004A1C4 @ 0x18004A1C4 (sub_18004A1C4.c)
 *     sub_1800E5B10 @ 0x1800E5B10 (sub_1800E5B10.c)
 */

char __fastcall sub_18004A198(_BYTE *a1, _BYTE *a2)
{
  char v2; // r10

  v2 = 0;
  if ( *a1 >= 5u && *a1 <= 8u )
  {
    if ( (unsigned __int8)(*a2 - 5) <= 3u )
      return sub_1800E5B10();
    if ( *a1 <= 8u )
      return v2;
  }
  if ( (unsigned __int8)(*a2 - 5) > 3u )
    return sub_18004A1C4();
  return v2;
}
