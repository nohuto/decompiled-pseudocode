/*
 * XREFs of sub_1800FC7AC @ 0x1800FC7AC
 * Callers:
 *     sub_1800FA748 @ 0x1800FA748 (sub_1800FA748.c)
 * Callees:
 *     sub_1800FCB2C @ 0x1800FCB2C (sub_1800FCB2C.c)
 */

__int64 __fastcall sub_1800FC7AC(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  if ( !a1 || !a2 || !a3 || (*a3 & 2) == 0 )
    return 3221225485LL;
  if ( (int)sub_1800FCB2C(a1, a2, a3, &v5) < 0 )
    *(_WORD *)a3 |= 0x1000u;
  if ( !v5 )
    *(_WORD *)a3 |= 0x1000u;
  return 0LL;
}
