/*
 * XREFs of sub_1800E04E8 @ 0x1800E04E8
 * Callers:
 *     sub_18003FB50 @ 0x18003FB50 (sub_18003FB50.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800E04E8(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v4; // r10

  v4 = a3 * (unsigned __int64)a2;
  if ( v4 > 0xFFFFFFFF || (unsigned int)v4 + a1 < (unsigned int)v4 )
    return 0;
  return a1 < a4 && (unsigned int)v4 + a1 <= a4;
}
