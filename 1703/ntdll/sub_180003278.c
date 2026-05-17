/*
 * XREFs of sub_180003278 @ 0x180003278
 * Callers:
 *     sub_1800031C4 @ 0x1800031C4 (sub_1800031C4.c)
 * Callees:
 *     sub_1800031C4 @ 0x1800031C4 (sub_1800031C4.c)
 */

__int64 __fastcall sub_180003278(_DWORD *a1)
{
  unsigned int v1; // edi

  v1 = 0;
  if ( a1 && (unsigned int)sub_1800031C4((__int64)a1, 0) )
    return (unsigned int)(2 * (a1[14] + 16 * a1[13] + 24 * a1[15]) + 104);
  return v1;
}
