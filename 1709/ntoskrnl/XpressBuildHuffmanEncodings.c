/*
 * XREFs of XpressBuildHuffmanEncodings @ 0x14025A9CC
 * Callers:
 *     RtlCompressBufferXpressHuffMax @ 0x140258244 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x1402588CC (RtlCompressBufferXpressHuffStandard.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall XpressBuildHuffmanEncodings(_QWORD *a1)
{
  char **v1; // r13
  char *v3; // rsi
  char *v4; // rdi
  _DWORD *v5; // r8
  unsigned __int64 i; // rdx
  unsigned __int64 v7; // rcx
  _QWORD *v8; // r15
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
  char **v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rbp
  unsigned __int64 *v31; // rcx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rsi
  __int64 v36; // r9
  _BYTE *v37; // r11
  unsigned __int64 v38; // rdx
  unsigned int *v39; // r10
  __int64 v40; // rax

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
  if ( v4 <= (char *)a1 + 2072 )
  {
    if ( v4 == v3 )
      return 0LL;
    v10 = a1[258];
    if ( (v10 & 1) != 0 )
      *((_BYTE *)a1 + (v10 >> 1) + 31264) = 16;
    else
      *((_BYTE *)a1 + (v10 >> 1) + 31264) = 1;
    *((_DWORD *)a1 + v10) = 1;
    return *(_QWORD *)v3;
  }
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
  while ( 2 )
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
    v27 = v1;
    while ( *((_QWORD *)v21 + 1) )
    {
      *v25 = ++v24;
      v25 += 2;
      *v27 = (char *)*((_QWORD *)v21 + 1);
      v27 += 2;
      v21 = (char *)*((_QWORD *)v21 + 2);
      v29 = 1LL;
LABEL_37:
      v26 += v29;
    }
    v28 = *((_QWORD *)v21 + 2);
    *((_QWORD *)v21 + 1) = v24;
    *((_BYTE *)a1 + v28 + 28704) = v24;
    if ( v26 )
    {
      v25 -= 2;
      v27 -= 2;
      v29 = -1LL;
      v21 = *v27;
      v24 = *v25;
      goto LABEL_37;
    }
    v30 = a1[257];
    if ( v30 > 0xF )
    {
      v31 = a1 + 256;
      if ( v3 < v4 )
      {
        do
        {
          v32 = *v31 + 1;
          v31[1] = 0LL;
          *v31 = v32 >> 1;
          v31 += 3;
        }
        while ( v31 < (unsigned __int64 *)v4 );
      }
      continue;
    }
    break;
  }
  v33 = *((_QWORD *)v4 - 2);
  v34 = 0LL;
  v35 = 0LL;
  while ( v33 <= v30 )
  {
    v36 = 0LL;
    v37 = a1 + 3908;
    v38 = 0LL;
    v39 = (unsigned int *)(a1 + 3652);
    do
    {
      if ( *((unsigned __int8 *)a1 + v38 * 2 + 28704) == v33 )
      {
        v40 = *v39;
        *v37 |= v33;
        v36 += v40;
        WORD1(a1[v38]) = v34++;
        LOWORD(a1[v38]) = v33;
      }
      if ( *((unsigned __int8 *)a1 + v38 * 2 + 28705) == v33 )
      {
        v36 += v39[1];
        *v37 |= 16 * (_BYTE)v33;
        HIWORD(a1[v38]) = v34++;
        WORD2(a1[v38]) = v33;
      }
      ++v37;
      ++v38;
      v39 += 2;
    }
    while ( v38 < 256 );
    v34 *= 2LL;
    v35 += v33 * v36;
    ++v33;
  }
  return v35;
}
