/*
 * XREFs of sub_1800441A8 @ 0x1800441A8
 * Callers:
 *     sub_180044080 @ 0x180044080 (sub_180044080.c)
 *     sub_1800E0A40 @ 0x1800E0A40 (sub_1800E0A40.c)
 * Callees:
 *     sub_1800441D8 @ 0x1800441D8 (sub_1800441D8.c)
 *     sub_1800E03C0 @ 0x1800E03C0 (sub_1800E03C0.c)
 */

char __fastcall sub_1800441A8(_BYTE *a1, char *a2)
{
  char v2; // r10
  char v3; // al

  v2 = 0;
  v3 = *a2;
  if ( (unsigned __int8)(*a1 - 5) <= 3u )
  {
    if ( (unsigned __int8)(v3 - 5) > 3u )
      return v2;
    return sub_1800E03C0();
  }
  if ( (unsigned __int8)(v3 - 5) > 3u )
    return sub_1800441D8();
  return v2;
}
