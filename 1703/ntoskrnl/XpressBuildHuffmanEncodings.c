/*
 * XREFs of XpressBuildHuffmanEncodings @ 0x14024373C
 * Callers:
 *     RtlCompressBufferXpressHuffMax @ 0x140241D34 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x1402423BC (RtlCompressBufferXpressHuffStandard.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall XpressBuildHuffmanEncodings(_QWORD *a1)
{
  char **v1; // r13
  char *v3; // rsi
  char *v4; // rdi
  _DWORD *v5; // r8
  unsigned __int64 i; // rdx
  unsigned __int64 v7; // rcx
  _QWORD *v8; // r14
  unsigned __int64 v10; // rdx
  _WORD *v11; // rcx
  __int64 v12; // rdx
  char *v13; // r8
  int v14; // eax
  __int64 v15; // r10
  unsigned __int16 *v16; // r11
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  char *v20; // rdx
  char *v21; // rcx
  char *v22; // r8
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 *v25; // r8
  __int64 v26; // r10
  char **j; // rdx
  __int64 v28; // rax
  unsigned __int64 *v29; // rcx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rbp
  __int64 v32; // r8
  unsigned __int64 v33; // rcx
  __int64 k; // rsi
  __int64 v35; // r9
  unsigned int *v36; // r10
  _BYTE *v37; // r11
  unsigned __int64 m; // rdx
  __int64 v39; // rax
  __int64 v40; // r9

  v1 = (char **)(a1 + 3331);
  memset(a1 + 3331, 0, 0x202uLL);
  memset((char *)a1 + 27162, 0, 0x202uLL);
  v3 = (char *)(a1 + 256);
  v4 = (char *)(a1 + 256);
  memset(a1 + 3588, 0, 0x200uLL);
  v5 = a1 + 3652;
  for ( i = 0LL; i < 0x200; ++i )
  {
    v7 = (unsigned int)*v5;
    if ( *v5 )
    {
      *(_QWORD *)v4 = v7;
      ++*((_WORD *)a1 + (unsigned __int8)v7 + 13325);
      ++*((_WORD *)a1 + (v7 >> 8) + 13582);
      *((_QWORD *)v4 + 1) = 0LL;
      *((_QWORD *)v4 + 2) = i;
      v4 += 24;
    }
    ++v5;
  }
  memset(a1 + 3908, 0, 0x100uLL);
  v8 = a1 + 259;
  if ( v4 > (char *)a1 + 2072 )
  {
    v11 = (_WORD *)a1 + 13325;
    v12 = 255LL;
    do
    {
      *v11 += *(v11 - 1);
      v11[257] += v11[256];
      ++v11;
      --v12;
    }
    while ( v12 );
    v13 = (char *)(a1 + 256);
    if ( v3 < v4 )
    {
      do
      {
        *((_WORD *)a1 + *((unsigned __int16 *)a1 + (unsigned __int8)*(_DWORD *)v13 + 13324) + 13838) = *((_WORD *)v13 + 8);
        v14 = *(_DWORD *)v13;
        v13 += 24;
        ++*((_WORD *)a1 + (unsigned __int8)v14 + 13324);
      }
      while ( v13 < v4 );
    }
    v15 = (v4 - (char *)a1 - 2048) / 24;
    if ( v15 )
    {
      v16 = (unsigned __int16 *)a1 + 13838;
      do
      {
        v17 = *v16++;
        v18 = *((unsigned int *)a1 + v17 + 7304);
        v19 = *((unsigned __int16 *)a1 + (v18 >> 8) + 13581);
        *((_WORD *)a1 + (v18 >> 8) + 13581) = v19 + 1;
        a1[3 * v19 + 258] = v17;
        a1[3 * v19 + 256] = v18;
        --v15;
      }
      while ( v15 );
    }
    while ( 1 )
    {
      *((_QWORD *)v4 + 1) = v3;
      v20 = (char *)(a1 + 262);
      *((_QWORD *)v4 + 2) = v8;
      v21 = v4;
      v22 = v4;
      *(_QWORD *)v4 = *(_QWORD *)v3 + *v8;
      while ( v20 != v4 || v22 != v21 )
      {
        v21 += 24;
        if ( v20 == v4 || v22 < v21 && *(_QWORD *)v22 < *(_QWORD *)v20 )
        {
          *((_QWORD *)v21 + 1) = v22;
          v23 = *(_QWORD *)v22;
          v22 += 24;
        }
        else
        {
          *((_QWORD *)v21 + 1) = v20;
          v23 = *(_QWORD *)v20;
          v20 += 24;
        }
        *(_QWORD *)v21 = v23;
        if ( v20 == v4 || v22 < v21 && *(_QWORD *)v22 < *(_QWORD *)v20 )
        {
          *((_QWORD *)v21 + 2) = v22;
          *(_QWORD *)v21 += *(_QWORD *)v22;
          v22 += 24;
        }
        else
        {
          *((_QWORD *)v21 + 2) = v20;
          *(_QWORD *)v21 += *(_QWORD *)v20;
          v20 += 24;
        }
      }
      v24 = 0LL;
      v25 = a1 + 3332;
      v26 = 0LL;
      for ( j = v1; ; v21 = *j )
      {
        while ( *((_QWORD *)v21 + 1) )
        {
          ++v24;
          ++v26;
          *v25 = v24;
          v25 += 2;
          *j = (char *)*((_QWORD *)v21 + 1);
          j += 2;
          v21 = (char *)*((_QWORD *)v21 + 2);
        }
        v28 = *((_QWORD *)v21 + 2);
        *((_QWORD *)v21 + 1) = v24;
        *((_BYTE *)a1 + v28 + 28704) = v24;
        if ( !v26 )
          break;
        v25 -= 2;
        --v26;
        j -= 2;
        v24 = *v25;
      }
      if ( a1[257] <= 0xFuLL )
        break;
      v29 = a1 + 256;
      if ( v3 < v4 )
      {
        do
        {
          v30 = *v29 + 1;
          v29[1] = 0LL;
          *v29 = v30 >> 1;
          v29 += 3;
        }
        while ( v29 < (unsigned __int64 *)v4 );
      }
    }
    v31 = a1[257];
    v32 = 0LL;
    v33 = *((_QWORD *)v4 - 2);
    for ( k = 0LL; v33 <= v31; k += v40 )
    {
      v35 = 0LL;
      v36 = (unsigned int *)(a1 + 3652);
      v37 = a1 + 3908;
      for ( m = 0LL; m < 256; ++m )
      {
        if ( *((unsigned __int8 *)a1 + m * 2 + 28704) == v33 )
        {
          v39 = *v36;
          *v37 |= v33;
          v35 += v39;
          WORD1(a1[m]) = v32++;
          LOWORD(a1[m]) = v33;
        }
        if ( *((unsigned __int8 *)a1 + m * 2 + 28705) == v33 )
        {
          v35 += v36[1];
          *v37 |= 16 * (_BYTE)v33;
          HIWORD(a1[m]) = v32++;
          WORD2(a1[m]) = v33;
        }
        ++v37;
        v36 += 2;
      }
      v40 = v33 * v35;
      v32 *= 2LL;
      ++v33;
    }
    return k;
  }
  else if ( v4 == v3 )
  {
    return 0LL;
  }
  else
  {
    v10 = a1[258];
    if ( (v10 & 1) != 0 )
      *((_BYTE *)a1 + (v10 >> 1) + 31264) = 16;
    else
      *((_BYTE *)a1 + (v10 >> 1) + 31264) = 1;
    *((_DWORD *)a1 + v10) = 1;
    return *(_QWORD *)v3;
  }
}
