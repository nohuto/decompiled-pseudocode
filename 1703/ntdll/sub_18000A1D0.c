/*
 * XREFs of sub_18000A1D0 @ 0x18000A1D0
 * Callers:
 *     sub_18000A268 @ 0x18000A268 (sub_18000A268.c)
 *     sub_18001F314 @ 0x18001F314 (sub_18001F314.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000A1D0(__int64 a1, int a2)
{
  __int64 result; // rax
  int v3; // r9d
  _BYTE *v4; // r8

  *(_BYTE *)(a1 + 91) = -2;
  *(_BYTE *)(a1 + 88) |= 8u;
  if ( a2 )
  {
    v3 = a2 - 1;
    *(_BYTE *)(a1 + 88) |= 2u;
    if ( a2 != 1 )
    {
      v4 = (_BYTE *)(a1 + 120);
      do
      {
        *v4 |= 2u;
        v4 += 32;
        --v3;
      }
      while ( v3 );
    }
  }
  result = a1;
  *(_BYTE *)(a1 + 90) = ~(_BYTE)a2;
  *(_BYTE *)(a1 + 8187) = -2;
  *(_DWORD *)(a1 + 64) = -857879331;
  return result;
}
