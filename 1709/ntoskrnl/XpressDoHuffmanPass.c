/*
 * XREFs of XpressDoHuffmanPass @ 0x14025ADAC
 * Callers:
 *     RtlCompressBufferXpressHuffMax @ 0x140258244 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x1402588CC (RtlCompressBufferXpressHuffStandard.c)
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
  unsigned __int64 v13; // r11
  _WORD *v14; // r12
  __int16 v15; // r8
  _BYTE *v16; // r9
  int v17; // edi
  bool v18; // sf
  int v19; // edi
  __int64 v20; // rsi
  unsigned __int64 v21; // rcx
  int v22; // esi
  unsigned __int8 *v23; // r10
  unsigned __int64 v24; // rcx
  __int64 v25; // r13
  unsigned __int64 v26; // r11
  __int16 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int8 v30; // al
  unsigned __int8 v31; // si
  unsigned __int64 v32; // rcx
  __int16 v33; // dx
  char v34; // cl
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
  v18 = v17 < 0;
  v19 = 2 * v17 + 1;
  if ( !v18 )
  {
LABEL_5:
    v20 = *a2++;
    v21 = *(unsigned __int16 *)(a1 + 4 * v20);
    if ( v13 < v21 )
    {
      *v12 = (v15 << v13) | (*(_WORD *)(a1 + 4 * v20 + 2) >> (v21 - v13));
      v12 = v14;
      v15 = *(_WORD *)(a1 + 4 * v20 + 2);
      v14 = v16;
      v16 += 2;
      v13 += 16 - v21;
    }
    else
    {
      v13 -= v21;
      v15 = *(_WORD *)(a1 + 4 * v20 + 2) | (v15 << v21);
    }
    goto LABEL_8;
  }
  while ( (unsigned __int64)a2 < v8 )
  {
    _mm_lfence();
    v22 = *a2;
    v23 = a2 + 1;
    v24 = *(unsigned __int16 *)(a1 + 4LL * (unsigned int)(v22 + 256));
    v25 = (unsigned int)(v22 + 256);
    if ( v13 < v24 )
    {
      *v12 = (v15 << v13) | (*(_WORD *)(a1 + 4 * v25 + 2) >> (v24 - v13));
      v12 = v14;
      v27 = *(_WORD *)(a1 + 4 * v25 + 2);
      v14 = v16;
      v16 += 2;
      v26 = 16 - v24 + v13;
    }
    else
    {
      v26 = v13 - v24;
      v27 = *(_WORD *)(a1 + 4 * v25 + 2) | (v15 << v24);
    }
    if ( (v22 & 0xF) == 0xF )
    {
      v28 = *v23++;
      *v16++ = v28;
      if ( v28 == 255 )
      {
        v29 = *(unsigned __int16 *)v23;
        *v16 = *v23;
        v30 = v23[1];
        v23 += 2;
        v16[1] = v30;
        v16 += 2;
        if ( !v29 )
        {
          *v16 = *v23;
          v16[1] = v23[1];
          v16[2] = v23[2];
          v16[3] = v23[3];
          v16 += 4;
          v23 += 4;
        }
      }
    }
    v31 = (unsigned __int8)v22 >> 4;
    if ( v26 < v31 )
    {
      *v12 = (v27 << v26) | (*(_WORD *)v23 >> (v31 - v26));
      v12 = v14;
      v15 = *(_WORD *)v23;
      v14 = v16;
      v16 += 2;
      v13 = 16LL - v31 + v26;
    }
    else
    {
      v13 = v26 - v31;
      v15 = *(_WORD *)v23 | (v27 << v31);
    }
    v8 = a3;
    a2 = v23 + 2;
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
    v32 = *(unsigned __int16 *)(a1 + 1024);
    if ( v13 < v32 )
    {
      v33 = *(_WORD *)(a1 + 1026) >> (v32 - v13);
      v34 = v13;
      LOWORD(v13) = 16 - *(_WORD *)(a1 + 1024) + v13;
      *v12 = (v15 << v34) | v33;
      v12 = v14;
      v15 = *(_WORD *)(a1 + 1026);
      v14 = v16;
      v16 += 2;
    }
    else
    {
      LOBYTE(v13) = v13 - v32;
      v15 = *(_WORD *)(a1 + 1026) | (v15 << v32);
    }
  }
  result = v16;
  *v12 = v15 << v13;
  *v14 = 0;
  return result;
}
