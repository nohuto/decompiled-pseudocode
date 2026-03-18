/*
 * XREFs of sbit_NewTransform @ 0x1C02C4CC8
 * Callers:
 *     fs__NewTransformation @ 0x1C02BCA4C (fs__NewTransformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sbit_NewTransform(
        __int64 a1,
        __int16 a2,
        __int16 a3,
        __int16 a4,
        __int16 a5,
        __int16 a6,
        __int16 a7)
{
  unsigned __int16 v7; // r8
  unsigned __int16 v8; // ax

  *(_WORD *)(a1 + 30) = a5;
  *(_WORD *)(a1 + 32) = a6;
  *(_DWORD *)(a1 + 84) = 0;
  *(_WORD *)(a1 + 28) = 0;
  *(_WORD *)(a1 + 92) = a2;
  *(_WORD *)(a1 + 38) = a7;
  v7 = abs16(a3);
  *(_WORD *)(a1 + 96) = v7;
  v8 = abs16(a4);
  *(_WORD *)(a1 + 98) = v8;
  if ( ((a7 - 1) & 0xFFFD) == 0 )
  {
    *(_WORD *)(a1 + 96) = v8;
    *(_WORD *)(a1 + 98) = v7;
  }
  return 0LL;
}
