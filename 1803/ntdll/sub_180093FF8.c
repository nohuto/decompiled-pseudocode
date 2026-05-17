/*
 * XREFs of sub_180093FF8 @ 0x180093FF8
 * Callers:
 *     fabs @ 0x18008E7A0 (fabs.c)
 *     sub_180092E68 @ 0x180092E68 (sub_180092E68.c)
 *     sub_180092F8C @ 0x180092F8C (sub_180092F8C.c)
 *     sub_1800936D0 @ 0x1800936D0 (sub_1800936D0.c)
 *     sub_180093A28 @ 0x180093A28 (sub_180093A28.c)
 *     sub_180093D58 @ 0x180093D58 (sub_180093D58.c)
 * Callees:
 *     sub_180094FF0 @ 0x180094FF0 (sub_180094FF0.c)
 *     sub_1800A1370 @ 0x1800A1370 (sub_1800A1370.c)
 */

__int64 __fastcall sub_180093FF8(int a1, int a2)
{
  unsigned int v4; // esi
  __int64 v5; // rcx

  v4 = sub_1800A1370();
  v5 = a2 & a1 | v4 & (~(_WORD)a2 | 0xFFFF807F);
  if ( byte_180156EE0 && (((unsigned __int8)(a2 & a1) | v4 & ((unsigned __int8)~(_BYTE)a2 | 0x7F)) & 0x40) != 0 )
    sub_180094FF0(v5);
  else
    sub_180094FF0((unsigned int)v5 & 0xFFFFFFBF);
  return v4;
}
