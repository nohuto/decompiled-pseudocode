/*
 * XREFs of sub_180064B00 @ 0x180064B00
 * Callers:
 *     sub_1800642B0 @ 0x1800642B0 (sub_1800642B0.c)
 *     sub_180103534 @ 0x180103534 (sub_180103534.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall sub_180064B00(__int64 a1, unsigned __int8 *a2, unsigned __int64 a3, __int64 a4, int a5)
{
  _OWORD *v7; // rax
  _OWORD *v8; // rdx
  __int64 v9; // r9
  __int128 v12; // xmm1
  _WORD *v13; // r12
  _WORD *v14; // r13
  unsigned __int64 v15; // r9
  unsigned __int16 v16; // ax
  _BYTE *v17; // r14
  int v18; // ecx
  int v19; // r8d
  __int64 v20; // rcx
  unsigned __int16 v21; // dx
  unsigned __int16 *v22; // r11
  unsigned __int64 v23; // rcx
  int v24; // r11d
  unsigned __int8 *v25; // r10
  __int64 v26; // rcx
  unsigned __int16 v27; // si
  unsigned __int16 *v28; // rdi
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r9
  unsigned __int16 v31; // ax
  unsigned __int16 v32; // bx
  unsigned __int8 v33; // r11
  int v34; // ecx
  bool v35; // sf
  __int64 v36; // rcx
  __int16 v37; // dx
  unsigned __int8 v38; // cl
  unsigned __int64 v39; // rcx
  unsigned __int16 v40; // dx
  __int16 v41; // r8

  v7 = (_OWORD *)a4;
  v8 = (_OWORD *)(a1 + 31264);
  v9 = 2LL;
  do
  {
    *v7 = *v8;
    v7[1] = v8[1];
    v7[2] = v8[2];
    v7[3] = v8[3];
    v7[4] = v8[4];
    v7[5] = v8[5];
    v7[6] = v8[6];
    v7 += 8;
    v12 = v8[7];
    v8 += 8;
    *(v7 - 1) = v12;
    --v9;
  }
  while ( v9 );
  v13 = (_WORD *)(a4 + 256);
  v14 = (_WORD *)(a4 + 258);
  v15 = 16LL;
  v16 = 0;
  v17 = (_BYTE *)(a4 + 260);
LABEL_4:
  v18 = *(_DWORD *)a2;
  a2 += 4;
  v19 = 2 * v18 + 1;
  if ( v18 >= 0 )
  {
LABEL_5:
    v20 = *a2++;
    v21 = *(_WORD *)(a1 + 4 * v20 + 2);
    v22 = (unsigned __int16 *)(a1 + 4 * v20);
    v23 = *v22;
    if ( v15 >= v23 )
    {
      v15 -= *v22;
      v16 = v21 | (v16 << v23);
    }
    else
    {
      *v13 = (v16 << v15) | (v21 >> (v23 - v15));
      v13 = v14;
      v14 = v17;
      v17 += 2;
      v15 += 16LL - (unsigned int)v23;
      v16 = v22[1];
    }
    goto LABEL_15;
  }
  while ( (unsigned __int64)a2 < a3 )
  {
    _mm_lfence();
    v24 = *a2;
    v25 = a2 + 1;
    v26 = (unsigned int)(v24 + 256);
    v27 = *(_WORD *)(a1 + 4 * v26 + 2);
    v28 = (unsigned __int16 *)(a1 + 4 * v26);
    v29 = *v28;
    if ( v15 < v29 )
    {
      *v13 = (v16 << v15) | (v27 >> (v29 - v15));
      v13 = v14;
      v14 = v17;
      v17 += 2;
      v30 = 16LL - (unsigned int)v29 + v15;
      v31 = v28[1];
    }
    else
    {
      v30 = v15 - v29;
      v31 = v27 | (v16 << v29);
    }
    if ( (v24 & 0xF) == 0xF )
    {
      v36 = *v25++;
      *v17++ = v36;
      if ( v36 == 255 )
      {
        v37 = *(_WORD *)v25;
        *v17 = *(_WORD *)v25;
        v38 = v25[1];
        v25 += 2;
        v17[1] = v38;
        v17 += 2;
        if ( !v37 )
        {
          *v17 = *v25;
          v17[1] = v25[1];
          v17[2] = v25[2];
          v17[3] = v25[3];
          v17 += 4;
          v25 += 4;
        }
      }
    }
    v32 = *(_WORD *)v25;
    v33 = (unsigned __int8)v24 >> 4;
    if ( v30 < v33 )
    {
      *v13 = (v31 << v30) | (v32 >> (v33 - v30));
      v13 = v14;
      v14 = v17;
      v17 += 2;
      v15 = 16LL - v33 + v30;
      v16 = *(_WORD *)v25;
    }
    else
    {
      v15 = v30 - v33;
      v16 = v32 | (v31 << v33);
    }
    a2 = v25 + 2;
LABEL_15:
    v34 = 2 * v19;
    v35 = v19 < 0;
    v19 *= 2;
    if ( !v35 )
      goto LABEL_5;
    if ( !v34 )
      goto LABEL_4;
  }
  if ( a5 )
  {
    v39 = *(unsigned __int16 *)(a1 + 1024);
    v40 = *(_WORD *)(a1 + 1026);
    v41 = *(_WORD *)(a1 + 1024);
    if ( v15 >= v39 )
    {
      LOBYTE(v15) = v15 - v41;
      v16 = v40 | (v16 << v39);
    }
    else
    {
      *v13 = (v16 << v15) | (v40 >> (v39 - v15));
      v13 = v14;
      v14 = v17;
      v17 += 2;
      LOBYTE(v15) = 16 - v41 + v15;
      v16 = *(_WORD *)(a1 + 1026);
    }
  }
  *v13 = v16 << v15;
  *v14 = 0;
  return v17;
}
