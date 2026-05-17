/*
 * XREFs of sub_1800641B0 @ 0x1800641B0
 * Callers:
 *     sub_180063990 @ 0x180063990 (sub_180063990.c)
 *     sub_180093FFC @ 0x180093FFC (sub_180093FFC.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall sub_1800641B0(__int64 a1, unsigned __int8 *a2, unsigned __int64 a3, __int64 a4, int a5)
{
  __int128 *v6; // rdx
  _OWORD *v9; // rax
  __int64 v10; // r11
  __int128 v11; // xmm0
  unsigned __int64 v12; // r8
  unsigned __int16 v13; // ax
  _WORD *v14; // r14
  _BYTE *v15; // rsi
  _WORD *v16; // r15
  int v17; // r9d
  bool v18; // sf
  int v19; // r9d
  __int64 v20; // rcx
  unsigned __int16 *v21; // r11
  unsigned __int64 v22; // rcx
  __int64 v23; // r11
  unsigned __int8 *v24; // r10
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r8
  __int16 v27; // ax
  unsigned __int8 v28; // r11
  __int16 v29; // dx
  __int16 v30; // ax
  unsigned __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned __int8 v34; // cl
  unsigned __int64 v35; // rcx
  __int16 v36; // r9
  _BYTE *result; // rax

  v6 = (__int128 *)(a1 + 31264);
  v9 = (_OWORD *)a4;
  v10 = 2LL;
  do
  {
    v11 = *v6;
    v6 += 8;
    *v9 = v11;
    v9[1] = *(v6 - 7);
    v9[2] = *(v6 - 6);
    v9[3] = *(v6 - 5);
    v9[4] = *(v6 - 4);
    v9[5] = *(v6 - 3);
    v9[6] = *(v6 - 2);
    v9 += 8;
    *(v9 - 1) = *(v6 - 1);
    --v10;
  }
  while ( v10 );
  v12 = 16LL;
  v13 = 0;
  v14 = (_WORD *)(a4 + 256);
  v15 = (_BYTE *)(a4 + 260);
  v16 = (_WORD *)(a4 + 258);
LABEL_4:
  v17 = *(_DWORD *)a2;
  a2 += 4;
  v18 = v17 < 0;
  v19 = 2 * v17 + 1;
  if ( !v18 )
  {
LABEL_7:
    v20 = *a2++;
    v21 = (unsigned __int16 *)(a1 + 4 * v20);
    v22 = *v21;
    if ( v12 < v22 )
    {
      *v14 = (v13 << v12) | (v21[1] >> (v22 - v12));
      v14 = v16;
      v13 = v21[1];
      v16 = v15;
      v15 += 2;
      v12 = v12 - (unsigned int)v22 + 16;
    }
    else
    {
      v12 -= v22;
      v13 = v21[1] | (v13 << v22);
    }
    goto LABEL_17;
  }
  while ( (unsigned __int64)a2 < a3 )
  {
    _mm_lfence();
    v23 = *a2;
    v24 = a2 + 1;
    v25 = *(unsigned __int16 *)(a1 + 4 * v23 + 1024);
    if ( v12 < v25 )
    {
      v29 = *(_WORD *)(a1 + 4 * v23 + 1026) >> (v25 - v12);
      v30 = v13 << v12;
      v31 = v12 - *(unsigned __int16 *)(a1 + 4 * v23 + 1024);
      *v14 = v30 | v29;
      v14 = v16;
      v27 = *(_WORD *)(a1 + 4 * v23 + 1026);
      v16 = v15;
      v15 += 2;
      v26 = v31 + 16;
    }
    else
    {
      v26 = v12 - v25;
      v27 = *(_WORD *)(a1 + 4 * v23 + 1026) | (v13 << v25);
    }
    if ( (v23 & 0xF) == 0xF )
    {
      v32 = *v24++;
      *v15++ = v32;
      if ( v32 == 255 )
      {
        v33 = *(unsigned __int16 *)v24;
        *v15 = *v24;
        v34 = v24[1];
        v24 += 2;
        v15[1] = v34;
        v15 += 2;
        if ( !v33 )
        {
          *v15 = *v24;
          v15[1] = v24[1];
          v15[2] = v24[2];
          v15[3] = v24[3];
          v15 += 4;
          v24 += 4;
        }
      }
    }
    v28 = (unsigned __int8)v23 >> 4;
    if ( v26 < v28 )
    {
      *v14 = (v27 << v26) | (*(_WORD *)v24 >> (v28 - v26));
      v14 = v16;
      v16 = v15;
      v15 += 2;
      v12 = 16LL - v28 + v26;
      v13 = *(_WORD *)v24;
    }
    else
    {
      v12 = v26 - v28;
      v13 = *(_WORD *)v24 | (v27 << v28);
    }
    a2 = v24 + 2;
LABEL_17:
    if ( v19 >= 0 )
    {
      v19 *= 2;
      goto LABEL_7;
    }
    v19 *= 2;
    if ( !v19 )
      goto LABEL_4;
  }
  if ( a5 )
  {
    v35 = *(unsigned __int16 *)(a1 + 1024);
    v36 = *(_WORD *)(a1 + 1024);
    if ( v12 >= v35 )
    {
      LOBYTE(v12) = v12 - v36;
      v13 = *(_WORD *)(a1 + 1026) | (v13 << v35);
    }
    else
    {
      *v14 = (v13 << v12) | (*(_WORD *)(a1 + 1026) >> (v35 - v12));
      v14 = v16;
      v13 = *(_WORD *)(a1 + 1026);
      v16 = v15;
      v15 += 2;
      LOBYTE(v12) = v12 - v36 + 16;
    }
  }
  *v14 = v13 << v12;
  result = v15;
  *v16 = 0;
  return result;
}
