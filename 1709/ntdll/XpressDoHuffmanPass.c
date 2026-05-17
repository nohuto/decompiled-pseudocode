/*
 * XREFs of XpressDoHuffmanPass @ 0x18005FD20
 * Callers:
 *     RtlCompressBufferXpressHuffStandard @ 0x18005F500 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressHuffMax @ 0x180107B4C (RtlCompressBufferXpressHuffMax.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall XpressDoHuffmanPass(__int64 a1, unsigned __int8 *a2, unsigned __int64 a3, __int64 a4, int a5)
{
  _OWORD *v7; // rax
  __int128 *v8; // rdx
  __int64 v9; // r9
  __int128 v12; // xmm0
  _WORD *v13; // r12
  _WORD *v14; // r13
  unsigned __int64 v15; // r9
  unsigned __int16 v16; // ax
  _BYTE *v17; // r14
  int v18; // r8d
  bool v19; // sf
  int v20; // r8d
  __int64 v21; // rcx
  unsigned __int16 *v22; // r11
  unsigned __int64 v23; // rcx
  int v24; // r11d
  unsigned __int8 *v25; // r10
  unsigned __int16 *v26; // rdi
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r9
  unsigned __int16 v29; // ax
  unsigned __int8 v30; // r11
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned __int8 v33; // cl
  unsigned __int64 v34; // rcx
  __int16 v35; // r8

  v7 = (_OWORD *)a4;
  v8 = (__int128 *)(a1 + 31264);
  v9 = 2LL;
  do
  {
    v12 = *v8;
    v8 += 8;
    *v7 = v12;
    v7[1] = *(v8 - 7);
    v7[2] = *(v8 - 6);
    v7[3] = *(v8 - 5);
    v7[4] = *(v8 - 4);
    v7[5] = *(v8 - 3);
    v7[6] = *(v8 - 2);
    v7 += 8;
    *(v7 - 1) = *(v8 - 1);
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
  v19 = v18 < 0;
  v20 = 2 * v18 + 1;
  if ( !v19 )
  {
LABEL_7:
    v21 = *a2++;
    v22 = (unsigned __int16 *)(a1 + 4 * v21);
    v23 = *v22;
    if ( v15 >= v23 )
    {
      v15 -= *v22;
      v16 = v22[1] | (v16 << v23);
    }
    else
    {
      *v13 = (v16 << v15) | (v22[1] >> (v23 - v15));
      v13 = v14;
      v14 = v17;
      v17 += 2;
      v15 += 16LL - (unsigned int)v23;
      v16 = v22[1];
    }
    goto LABEL_17;
  }
  while ( (unsigned __int64)a2 < a3 )
  {
    _mm_lfence();
    v24 = *a2;
    v25 = a2 + 1;
    v26 = (unsigned __int16 *)(a1 + 4LL * (unsigned int)(v24 + 256));
    v27 = *v26;
    if ( v15 < v27 )
    {
      *v13 = (v16 << v15) | (v26[1] >> (v27 - v15));
      v13 = v14;
      v14 = v17;
      v17 += 2;
      v28 = 16 - v27 + v15;
      v29 = v26[1];
    }
    else
    {
      v28 = v15 - v27;
      v29 = v26[1] | (v16 << v27);
    }
    if ( (v24 & 0xF) == 0xF )
    {
      v31 = *v25++;
      *v17++ = v31;
      if ( v31 == 255 )
      {
        v32 = *(unsigned __int16 *)v25;
        *v17 = *v25;
        v33 = v25[1];
        v25 += 2;
        v17[1] = v33;
        v17 += 2;
        if ( !v32 )
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
    v30 = (unsigned __int8)v24 >> 4;
    if ( v28 < v30 )
    {
      *v13 = (v29 << v28) | (*(_WORD *)v25 >> (v30 - v28));
      v13 = v14;
      v14 = v17;
      v17 += 2;
      v15 = 16LL - v30 + v28;
      v16 = *(_WORD *)v25;
    }
    else
    {
      v15 = v28 - v30;
      v16 = *(_WORD *)v25 | (v29 << v30);
    }
    a2 = v25 + 2;
LABEL_17:
    if ( v20 >= 0 )
    {
      v20 *= 2;
      goto LABEL_7;
    }
    v20 *= 2;
    if ( !v20 )
      goto LABEL_4;
  }
  if ( a5 )
  {
    v34 = *(unsigned __int16 *)(a1 + 1024);
    v35 = *(_WORD *)(a1 + 1024);
    if ( v15 >= v34 )
    {
      LOBYTE(v15) = v15 - v35;
      v16 = *(_WORD *)(a1 + 1026) | (v16 << v34);
    }
    else
    {
      *v13 = (v16 << v15) | (*(_WORD *)(a1 + 1026) >> (v34 - v15));
      v13 = v14;
      v14 = v17;
      v17 += 2;
      LOBYTE(v15) = 16 - v35 + v15;
      v16 = *(_WORD *)(a1 + 1026);
    }
  }
  *v13 = v16 << v15;
  *v14 = 0;
  return v17;
}
