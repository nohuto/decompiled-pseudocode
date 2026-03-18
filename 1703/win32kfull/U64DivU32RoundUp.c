/*
 * XREFs of U64DivU32RoundUp @ 0x1C00376FC
 * Callers:
 *     DivFD6 @ 0x1C0034DF8 (DivFD6.c)
 *     MulDivFD6Pairs @ 0x1C01038FC (MulDivFD6Pairs.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall U64DivU32RoundUp(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r10d
  unsigned int v4; // edi
  unsigned int v5; // esi
  unsigned __int64 v6; // rtt
  unsigned __int16 v7; // r11
  unsigned int v8; // eax
  unsigned __int16 v9; // r9
  int v11; // r9d
  int v12; // r10d
  int v13; // r10d
  unsigned int v14; // ebx
  unsigned int v15; // r10d
  unsigned int v16; // r10d
  unsigned int v17; // r10d
  unsigned int v18; // r10d
  unsigned int v19; // r10d
  unsigned int v20; // ebx
  unsigned __int16 v21; // ax
  unsigned __int16 v22; // ax
  unsigned int v23; // edx
  unsigned int v24; // ebx
  __int16 v25; // r9

  v3 = a1 + 1;
  v4 = a2 + (a3 >> 1);
  if ( v4 >= a2 )
    v3 = a1;
  v5 = HIWORD(a3);
  if ( !(_WORD)a3 )
  {
    v7 = v3 / v5;
    v8 = (HIWORD(v4) | ((v3 % v5) << 16)) / v5;
    goto LABEL_6;
  }
  if ( !HIWORD(a3) )
  {
    v6 = (v3 << 16) | (unsigned __int64)HIWORD(v4);
    v7 = v6 / (unsigned __int16)a3;
    LOWORD(v8) = (((unsigned int)(v6 % (unsigned __int16)a3) << 16) | (unsigned __int64)(unsigned __int16)v4)
               / (unsigned __int16)a3;
LABEL_6:
    v9 = v8;
    return v9 | (v7 << 16);
  }
  v7 = v3 / v5;
  v11 = v7 * (unsigned __int16)a3;
  v12 = HIWORD(v4) | ((v3 - v5 * v7) << 16);
  if ( v11 < 0 )
  {
    v22 = (v11 - v12) / a3;
    v7 -= v22;
    v11 -= a3 * v22;
  }
  v13 = v12 - v11;
  if ( v13 < 0 )
  {
    --v7;
    v13 += a3;
    if ( v13 < 0 )
    {
      --v7;
      v13 += a3;
      if ( v13 < 0 )
      {
        --v7;
        v13 += a3;
        if ( v13 < 0 )
        {
          --v7;
          v13 += a3;
          if ( v13 < 0 )
          {
            --v7;
            v13 += a3;
            if ( v13 < 0 )
            {
              --v7;
              v13 += a3;
              if ( v13 < 0 )
              {
                v23 = -v13 % a3;
                v7 -= -v13 / a3;
                if ( v23 )
                {
                  --v7;
                  v13 = a3 - v23;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( HIWORD(v13) >= HIWORD(a3) )
  {
    v24 = ((unsigned __int16)a3 << 16) - ((unsigned __int16)v4 | (v13 << 16));
    v25 = v24 / a3 + 1;
    if ( v24 <= a3 * (unsigned __int16)(v24 / a3) )
      v25 = v24 / a3;
    v9 = -v25;
  }
  else
  {
    v9 = v13 / v5;
    v14 = v9 * (unsigned __int16)a3;
    v15 = (unsigned __int16)v4 | ((v13 - v5 * v9) << 16);
    if ( v15 < v14 )
    {
      --v9;
      v16 = a3 + v15;
      if ( v16 < v14 )
      {
        --v9;
        v17 = a3 + v16;
        if ( v17 < v14 )
        {
          --v9;
          v18 = a3 + v17;
          if ( v18 < v14 )
          {
            --v9;
            v19 = a3 + v18;
            if ( v19 < v14 )
            {
              v20 = v14 - v19;
              v21 = v20 / a3;
              v9 -= v21;
              if ( v20 > a3 * v21 )
                --v9;
            }
          }
        }
      }
    }
  }
  return v9 | (v7 << 16);
}
