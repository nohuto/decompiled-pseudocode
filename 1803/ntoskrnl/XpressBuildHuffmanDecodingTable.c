/*
 * XREFs of XpressBuildHuffmanDecodingTable @ 0x14007B460
 * Callers:
 *     RtlDecompressBufferXpressHuff @ 0x14007AF40 (RtlDecompressBufferXpressHuff.c)
 *     RtlDecompressBufferXpressHuffProgress @ 0x14029190C (RtlDecompressBufferXpressHuffProgress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XpressBuildHuffmanDecodingTable(_WORD *a1, __int64 a2)
{
  _WORD *v3; // rdi
  __int64 v4; // rcx
  __int16 v5; // r10
  unsigned __int64 i; // rax
  unsigned __int8 v8; // cl
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  __int64 v11; // rdi
  unsigned __int16 *v12; // r11
  __int16 v13; // dx
  __int16 v14; // r8
  unsigned __int64 j; // r9
  bool v16; // zf
  __int64 v17; // rcx
  unsigned __int64 v18; // r9
  bool v19; // zf
  __int16 *v20; // rcx
  int v21; // r11d
  unsigned __int16 *v22; // rsi
  __int64 v23; // rdx
  __int64 k; // r8
  int v25; // ecx
  unsigned __int64 v26; // rdi
  __int64 v28; // rcx
  _WORD *v29; // rax
  __int64 v30; // rcx
  _WORD *v31; // rax
  _WORD *v32; // rdx
  __int64 v33; // rcx
  _WORD *v34; // rax
  __int16 *v35; // rcx
  __int64 v36; // rcx
  _WORD *v37; // rax
  __int64 v38; // rcx
  _WORD *v39; // rax
  __int64 v40; // rcx
  _WORD *v41; // rax
  __int64 v42; // rax
  _WORD *m; // rcx
  _WORD *v44; // rdi
  __int64 n; // rcx

  v3 = a1 + 512;
  v4 = 16LL;
  v5 = 0;
  while ( v4 )
  {
    *v3++ = 512;
    --v4;
  }
  for ( i = 0LL; i < 0x100; ++i )
  {
    v8 = *(_BYTE *)(i + a2);
    v9 = v8 & 0xF;
    if ( (v8 & 0xF) != 0 )
    {
      a1[2 * i] = a1[v9 + 512];
      a1[v9 + 512] = 2 * i;
      v8 = *(_BYTE *)(i + a2);
    }
    v10 = (unsigned __int64)v8 >> 4;
    if ( v10 )
    {
      a1[2 * i + 1] = a1[v10 + 512];
      a1[v10 + 512] = 2 * i + 1;
    }
  }
  v11 = 1024LL;
  v12 = a1 + 527;
  v13 = -1024;
  v14 = -1023;
  for ( j = 15LL; j > 0xA; --j )
  {
    v16 = v14 == v13;
    if ( v14 < v13 )
    {
      v35 = &a1[v11 + 1552];
      v11 -= (unsigned __int16)(((unsigned __int16)(v13 - v14 - 1) >> 1) + 1);
      do
      {
        *v35-- = v14;
        v14 += 2;
        v16 = v14 == v13;
      }
      while ( v14 < v13 );
    }
    if ( v16 )
      return 3221226050LL;
    v17 = *v12;
    v14 = v13 + 1;
    if ( v17 != 512 )
    {
      v32 = &a1[v11 + 1552];
      do
      {
        --v11;
        *v32-- = j + 16 * v17;
        v17 = (unsigned __int16)a1[v17];
      }
      while ( v17 != 512 );
    }
    v13 = -(__int16)v11;
    --v12;
  }
  v18 = 1023LL;
  v19 = v14 == v13;
  if ( v14 < v13 )
  {
    v20 = a1 + 1551;
    v18 = 1023LL - (unsigned __int16)(((unsigned __int16)(v13 - v14 - 1) >> 1) + 1);
    do
    {
      *v20-- = v14;
      v14 += 2;
      v19 = v14 == v13;
    }
    while ( v14 < v13 );
  }
  if ( v19 )
    return 3221226050LL;
  v21 = 0;
  v22 = a1 + 522;
  v23 = 10LL;
  do
  {
    for ( k = *v22; k != 512; --v18 )
    {
      v5 = v23 + 16 * k;
      if ( v21 )
        return 3221226050LL;
      v25 = 10 - v23;
      if ( (v18 + 1) << (10 - (unsigned __int8)v23) > 0x400 )
        return 3221226050LL;
      v26 = v18 << v25;
      switch ( v25 )
      {
        case 0:
          goto LABEL_25;
        case 1:
          goto LABEL_24;
        case 2:
          goto LABEL_33;
        case 3:
          a1[v26 + 535] = v5;
          a1[v26 + 534] = v5;
          a1[v26 + 533] = v5;
          a1[v26 + 532] = v5;
LABEL_33:
          a1[v26 + 531] = v5;
          a1[v26 + 530] = v5;
LABEL_24:
          a1[v26 + 529] = v5;
LABEL_25:
          a1[v26 + 528] = v5;
          break;
        case 4:
          v28 = 4LL;
          v29 = &a1[v26 + 529];
          do
          {
            *(v29 - 1) = v5;
            *v29 = v5;
            v29[1] = v5;
            v29[2] = v5;
            v29 += 4;
            --v28;
          }
          while ( v28 );
          break;
        case 5:
          v30 = 8LL;
          v31 = &a1[v26 + 529];
          do
          {
            *(v31 - 1) = v5;
            *v31 = v5;
            v31[1] = v5;
            v31[2] = v5;
            v31 += 4;
            --v30;
          }
          while ( v30 );
          break;
        case 6:
          v33 = 16LL;
          v34 = &a1[v26 + 529];
          do
          {
            *(v34 - 1) = v5;
            *v34 = v5;
            v34[1] = v5;
            v34[2] = v5;
            v34 += 4;
            --v33;
          }
          while ( v33 );
          break;
        case 7:
          v36 = 32LL;
          v37 = &a1[v26 + 529];
          do
          {
            *(v37 - 1) = v5;
            *v37 = v5;
            v37[1] = v5;
            v37[2] = v5;
            v37 += 4;
            --v36;
          }
          while ( v36 );
          break;
        case 8:
          v38 = 64LL;
          v39 = &a1[v26 + 529];
          do
          {
            *(v39 - 1) = v5;
            *v39 = v5;
            v39[1] = v5;
            v39[2] = v5;
            v39 += 4;
            --v38;
          }
          while ( v38 );
          break;
        case 9:
          v40 = 128LL;
          v41 = &a1[v26 + 529];
          do
          {
            *(v41 - 1) = v5;
            *v41 = v5;
            v41[1] = v5;
            v41[2] = v5;
            v41 += 4;
            --v40;
          }
          while ( v40 );
          break;
        default:
          __fastfail(0x25u);
      }
      if ( !v18 )
        v21 = 1;
      k = (unsigned __int16)a1[k];
    }
    v18 >>= 1;
    --v22;
    --v23;
  }
  while ( v23 );
  if ( v21 )
    return 0LL;
  v42 = 2LL;
  for ( m = a1 + 514; *m == 512; ++m )
  {
    if ( (unsigned __int64)++v42 > 0xF )
    {
      if ( a1[513] == 512 )
        return 3221226050LL;
      v44 = a1 + 528;
      for ( n = 512LL; n; --n )
        *v44++ = v5;
      return 0LL;
    }
  }
  return 3221226050LL;
}
