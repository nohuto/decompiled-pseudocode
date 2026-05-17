/*
 * XREFs of sub_1800FAD5C @ 0x1800FAD5C
 * Callers:
 *     sub_1800F86F8 @ 0x1800F86F8 (sub_1800F86F8.c)
 * Callees:
 *     sub_1800FB0E8 @ 0x1800FB0E8 (sub_1800FB0E8.c)
 */

__int64 __fastcall sub_1800FAD5C(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  if ( !a1 || !a2 || !a3 || (*a3 & 2) == 0 )
    return 3221225485LL;
  if ( (int)sub_1800FB0E8(a1, a2, a3, &v5) < 0 )
    *(_WORD *)a3 |= 0x1000u;
  if ( !v5 )
    *(_WORD *)a3 |= 0x1000u;
  return 0LL;
}
