/*
 * XREFs of MantissaToFraction @ 0x1C00EE2CC
 * Callers:
 *     AntiLog @ 0x1C00EE06C (AntiLog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MantissaToFraction(__int16 a1, unsigned int a2)
{
  unsigned __int16 v2; // r11
  unsigned int v3; // ebx
  __int16 v4; // r10
  unsigned int v5; // r8d
  unsigned __int16 v6; // dx
  __int16 v7; // r9
  __int16 v8; // cx
  bool v9; // zf
  unsigned __int16 v10; // bx
  unsigned __int16 v11; // ax
  unsigned __int16 i; // ax

  v2 = (unsigned __int16)a2 >> 9;
  v3 = HIWORD(a2);
  v4 = a2 & 0x1FF;
  v5 = 0;
  v6 = (a2 & 0x1FF) + (((unsigned __int16)a2 >> 9) & 7);
  v7 = 1;
  v8 = a1 - v6;
  v9 = v8 == 0;
  if ( v8 > 0 )
  {
    v7 = 2;
    v6 = v4 + ((v2 >> 3) & 7);
    v8 -= v6;
    v9 = v8 == 0;
    if ( v8 > 0 )
    {
      v7 = 3;
      v6 = v4 + (v3 & 7);
      v8 -= v6;
      v9 = v8 == 0;
      if ( v8 > 0 )
      {
        v10 = (unsigned __int16)v3 >> 3;
        v7 = 4;
        v11 = v10 | 0x2000;
        v6 = v4 + (v10 & 7);
        if ( (v2 & 0x40) == 0 )
          v11 = v10;
        for ( i = v11 >> 1; ; v6 = v4 + (i & 3) )
        {
          v8 -= v6;
          v9 = v8 == 0;
          if ( v8 <= 0 )
            break;
          i >>= 2;
          ++v7;
        }
      }
    }
  }
  if ( !v9 )
  {
    --v7;
    v5 = (100000 * (v6 + v8) + (v6 >> 1)) / (unsigned int)v6;
  }
  if ( v7 )
    v5 += dword_1C02E9D68[(__int16)(v7 - 1)];
  return v5;
}
