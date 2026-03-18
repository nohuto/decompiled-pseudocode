/*
 * XREFs of FQuadraticEqn @ 0x1C02BF6C0
 * Callers:
 *     CurveTransitions @ 0x1C02BF0E8 (CurveTransitions.c)
 * Callees:
 *     QDiv2 @ 0x1C02BFEB8 (QDiv2.c)
 */

void __fastcall FQuadraticEqn(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 *a5, __int64 *a6)
{
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 i; // rdx
  __int64 v13; // r10
  __int64 v14; // r11
  __int64 v15; // rax

  v6 = 0LL;
  v7 = a2;
  *a4 = 0;
  if ( a1 )
  {
    v9 = 2 * a1;
    v10 = 2 * a3 * 2 * a1;
    v11 = a2 * a2 - v10;
    if ( v11 > 0 )
    {
      *a4 = 2;
      for ( i = 0x4000000000000000LL; i >= 0x8000; i >>= 1 )
      {
        if ( i + v6 <= v11 )
        {
          v11 -= i + v6;
          v6 |= 2 * i;
        }
        v11 *= 2LL;
      }
      *a5 = QDiv2(((v6 + 0x8000) >> 16) - (v7 << 16), v9);
      v15 = QDiv2(-(v13 + v14), v9);
      goto LABEL_13;
    }
    if ( a2 * a2 != v10 )
      return;
    a2 = v9;
    v8 = -65536 * v7;
  }
  else
  {
    if ( !a2 )
      return;
    v8 = -65536 * a3;
  }
  *a4 = 1;
  v15 = QDiv2(v8, a2);
  a6 = a5;
LABEL_13:
  *a6 = v15;
}
