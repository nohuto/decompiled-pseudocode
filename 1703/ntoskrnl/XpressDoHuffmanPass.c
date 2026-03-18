/*
 * XREFs of XpressDoHuffmanPass @ 0x140243B1C
 * Callers:
 *     RtlCompressBufferXpressHuffMax @ 0x140241D34 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x1402423BC (RtlCompressBufferXpressHuffStandard.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall XpressDoHuffmanPass(__int64 a1, unsigned __int8 *a2, unsigned __int64 a3, __int64 a4, int a5)
{
  _OWORD *v7; // rdx
  __int64 v9; // rcx
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  _WORD *v12; // r14
  _WORD *v13; // r15
  __int16 v14; // r8
  _BYTE *v15; // r9
  unsigned __int64 v16; // r11
  int v17; // esi
  bool v18; // sf
  int v19; // esi
  __int64 v20; // rdi
  unsigned __int64 v21; // rcx
  __int16 v22; // dx
  __int16 v23; // r8
  unsigned __int64 v24; // r11
  __int64 v25; // rdi
  unsigned __int8 *v26; // r10
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r11
  __int16 v29; // r8
  __int16 v30; // dx
  __int16 v31; // r8
  unsigned __int64 v32; // r11
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned __int8 v35; // al
  unsigned __int8 v36; // di
  unsigned __int64 v37; // rcx
  __int16 v38; // dx
  __int16 v39; // r8
  _BYTE *result; // rax

  v7 = (_OWORD *)(a1 + 31264);
  v9 = 2LL;
  v10 = (_OWORD *)a4;
  do
  {
    *v10 = *v7;
    v10[1] = v7[1];
    v10[2] = v7[2];
    v10[3] = v7[3];
    v10[4] = v7[4];
    v10[5] = v7[5];
    v10[6] = v7[6];
    v10 += 8;
    v11 = v7[7];
    v7 += 8;
    *(v10 - 1) = v11;
    --v9;
  }
  while ( v9 );
  v12 = (_WORD *)(a4 + 256);
  v13 = (_WORD *)(a4 + 258);
  v14 = 0;
  v15 = (_BYTE *)(a4 + 260);
  v16 = 16LL;
LABEL_4:
  v17 = *(_DWORD *)a2;
  a2 += 4;
  v18 = v17 < 0;
  v19 = 2 * v17 + 1;
  if ( !v18 )
  {
LABEL_5:
    v20 = *a2++;
    v21 = *(unsigned __int16 *)(a1 + 4 * v20);
    if ( v16 < v21 )
    {
      v22 = *(_WORD *)(a1 + 4 * v20 + 2) >> (v21 - v16);
      v23 = v14 << v16;
      v24 = v16 - *(unsigned __int16 *)(a1 + 4 * v20);
      *v12 = v23 | v22;
      v12 = v13;
      v14 = *(_WORD *)(a1 + 4 * v20 + 2);
      v13 = v15;
      v15 += 2;
      v16 = v24 + 16;
    }
    else
    {
      v16 -= v21;
      v14 = *(_WORD *)(a1 + 4 * v20 + 2) | (v14 << v21);
    }
    goto LABEL_8;
  }
  while ( (unsigned __int64)a2 < a3 )
  {
    _mm_lfence();
    v25 = *a2;
    v26 = a2 + 1;
    v27 = *(unsigned __int16 *)(a1 + 4 * v25 + 1024);
    if ( v16 < v27 )
    {
      v30 = *(_WORD *)(a1 + 4 * v25 + 1026) >> (v27 - v16);
      v31 = v14 << v16;
      v32 = v16 - *(unsigned __int16 *)(a1 + 4 * v25 + 1024);
      *v12 = v31 | v30;
      v12 = v13;
      v29 = *(_WORD *)(a1 + 4 * v25 + 1026);
      v13 = v15;
      v15 += 2;
      v28 = v32 + 16;
    }
    else
    {
      v28 = v16 - v27;
      v29 = *(_WORD *)(a1 + 4 * v25 + 1026) | (v14 << v27);
    }
    if ( (v25 & 0xF) == 0xF )
    {
      v33 = *v26++;
      *v15++ = v33;
      if ( v33 == 255 )
      {
        v34 = *(unsigned __int16 *)v26;
        *v15 = *v26;
        v35 = v26[1];
        v26 += 2;
        v15[1] = v35;
        v15 += 2;
        if ( !v34 )
        {
          *v15 = *v26;
          v15[1] = v26[1];
          v15[2] = v26[2];
          v15[3] = v26[3];
          v15 += 4;
          v26 += 4;
        }
      }
    }
    v36 = (unsigned __int8)v25 >> 4;
    if ( v28 < v36 )
    {
      *v12 = (v29 << v28) | (*(_WORD *)v26 >> (v36 - v28));
      v12 = v13;
      v14 = *(_WORD *)v26;
      v13 = v15;
      v15 += 2;
      v16 = 16LL - v36 + v28;
    }
    else
    {
      v16 = v28 - v36;
      v14 = *(_WORD *)v26 | (v29 << v36);
    }
    a2 = v26 + 2;
LABEL_8:
    if ( v19 >= 0 )
    {
      v19 *= 2;
      goto LABEL_5;
    }
    v19 *= 2;
    if ( !v19 )
      goto LABEL_4;
  }
  if ( a5 )
  {
    v37 = *(unsigned __int16 *)(a1 + 1024);
    if ( v16 < v37 )
    {
      v38 = *(_WORD *)(a1 + 1026) >> (v37 - v16);
      v39 = v14 << v16;
      LOWORD(v16) = v16 - *(_WORD *)(a1 + 1024) + 16;
      *v12 = v39 | v38;
      v12 = v13;
      v14 = *(_WORD *)(a1 + 1026);
      v13 = v15;
      v15 += 2;
    }
    else
    {
      LOBYTE(v16) = v16 - v37;
      v14 = *(_WORD *)(a1 + 1026) | (v14 << v37);
    }
  }
  result = v15;
  *v12 = v14 << v16;
  *v13 = 0;
  return result;
}
