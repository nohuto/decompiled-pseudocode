/*
 * XREFs of XpressDoHuffmanPass @ 0x140292B88
 * Callers:
 *     RtlCompressBufferXpressHuffMax @ 0x140290404 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x140290A94 (RtlCompressBufferXpressHuffStandard.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall XpressDoHuffmanPass(__int64 a1, unsigned __int8 *a2, unsigned __int64 a3, __int64 a4, int a5)
{
  _OWORD *v7; // rdx
  unsigned __int64 v8; // r13
  __int64 v9; // rcx
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  _WORD *v12; // r15
  unsigned __int64 v13; // r8
  _WORD *v14; // r12
  __int16 v15; // dx
  _BYTE *v16; // r9
  int v17; // eax
  int v18; // r11d
  __int64 v19; // rsi
  unsigned __int64 v20; // rcx
  unsigned __int16 v21; // di
  int v22; // eax
  bool v23; // sf
  int v24; // edi
  unsigned __int8 *v25; // r10
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int16 v28; // bp
  unsigned __int64 v29; // r8
  __int16 v30; // dx
  __int64 v31; // rax
  __int16 v32; // cx
  unsigned __int8 v33; // al
  unsigned __int16 v34; // si
  unsigned __int8 v35; // di
  unsigned __int64 v36; // rcx
  unsigned __int16 v37; // r10
  __int16 v38; // r14
  _BYTE *result; // rax

  v7 = (_OWORD *)(a1 + 31264);
  v8 = a3;
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
  v13 = 16LL;
  v14 = (_WORD *)(a4 + 258);
  v15 = 0;
  v16 = (_BYTE *)(a4 + 260);
LABEL_4:
  v17 = *(_DWORD *)a2;
  a2 += 4;
  v18 = 2 * v17 + 1;
  if ( v17 >= 0 )
  {
LABEL_5:
    v19 = *a2++;
    v20 = *(unsigned __int16 *)(a1 + 4 * v19);
    v21 = *(_WORD *)(a1 + 4 * v19 + 2);
    if ( v13 < v20 )
    {
      *v12 = (v15 << v13) | (v21 >> (v20 - v13));
      v12 = v14;
      v15 = *(_WORD *)(a1 + 4 * v19 + 2);
      v14 = v16;
      v16 += 2;
      v13 += 16 - v20;
    }
    else
    {
      v13 -= v20;
      v15 = v21 | (v15 << v20);
    }
    goto LABEL_8;
  }
  while ( (unsigned __int64)a2 < v8 )
  {
    _mm_lfence();
    v24 = *a2;
    v25 = a2 + 1;
    v26 = (unsigned int)(v24 + 256);
    v27 = *(unsigned __int16 *)(a1 + 4 * v26);
    v28 = *(_WORD *)(a1 + 4 * v26 + 2);
    if ( v13 < v27 )
    {
      *v12 = (v15 << v13) | (v28 >> (v27 - v13));
      v12 = v14;
      v14 = v16;
      v16 += 2;
      v29 = 16 - v27 + v13;
      v30 = *(_WORD *)(a1 + 4LL * (unsigned int)(v24 + 256) + 2);
    }
    else
    {
      v29 = v13 - v27;
      v30 = v28 | (v15 << v27);
    }
    if ( (v24 & 0xF) == 0xF )
    {
      v31 = *v25++;
      *v16++ = v31;
      if ( v31 == 255 )
      {
        v32 = *(_WORD *)v25;
        *v16 = *(_WORD *)v25;
        v33 = v25[1];
        v25 += 2;
        v16[1] = v33;
        v16 += 2;
        if ( !v32 )
        {
          *v16 = *v25;
          v16[1] = v25[1];
          v16[2] = v25[2];
          v16[3] = v25[3];
          v16 += 4;
          v25 += 4;
        }
      }
    }
    v34 = *(_WORD *)v25;
    v35 = (unsigned __int8)v24 >> 4;
    if ( v29 < v35 )
    {
      *v12 = (v30 << v29) | (v34 >> (v35 - v29));
      v12 = v14;
      v15 = *(_WORD *)v25;
      v14 = v16;
      v16 += 2;
      v13 = 16LL - v35 + v29;
    }
    else
    {
      v13 = v29 - v35;
      v15 = v34 | (v30 << v35);
    }
    v8 = a3;
    a2 = v25 + 2;
LABEL_8:
    v22 = 2 * v18;
    v23 = v18 < 0;
    v18 *= 2;
    if ( !v23 )
      goto LABEL_5;
    if ( !v22 )
      goto LABEL_4;
  }
  if ( a5 )
  {
    v36 = *(unsigned __int16 *)(a1 + 1024);
    v37 = *(_WORD *)(a1 + 1026);
    if ( v13 < v36 )
    {
      v38 = 16 - *(_WORD *)(a1 + 1024);
      *v12 = (v15 << v13) | (v37 >> (v36 - v13));
      v12 = v14;
      v15 = *(_WORD *)(a1 + 1026);
      v14 = v16;
      v16 += 2;
      LOBYTE(v13) = v38 + v13;
    }
    else
    {
      LOBYTE(v13) = v13 - v36;
      v15 = v37 | (v15 << v36);
    }
  }
  result = v16;
  *v12 = v15 << v13;
  *v14 = 0;
  return result;
}
