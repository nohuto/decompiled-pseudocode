/*
 * XREFs of XpressBuildHuffmanEncodings @ 0x1402927A4
 * Callers:
 *     RtlCompressBufferXpressHuffMax @ 0x140290404 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x140290A94 (RtlCompressBufferXpressHuffStandard.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall XpressBuildHuffmanEncodings(_QWORD *a1)
{
  char *v2; // rsi
  char *v3; // rdi
  _DWORD *v4; // r8
  unsigned __int64 i; // rdx
  unsigned __int64 v6; // rcx
  _QWORD *v7; // r14
  unsigned __int64 v9; // r8
  _WORD *v10; // rcx
  __int64 v11; // rdx
  char *v12; // r8
  int v13; // eax
  __int64 v14; // r10
  unsigned __int16 *v15; // r11
  __int64 v16; // r8
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  char *v19; // r15
  char *v20; // rcx
  char *v21; // r8
  char *v22; // rdx
  __int64 v23; // rax
  char **v24; // rdx
  __int64 v25; // r9
  __int64 *v26; // r8
  __int64 v27; // r11
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

  memset(a1 + 3331, 0, 0x202uLL);
  memset((char *)a1 + 27162, 0, 0x202uLL);
  v2 = (char *)(a1 + 256);
  v3 = (char *)(a1 + 256);
  memset(a1 + 3588, 0, 0x200uLL);
  v4 = a1 + 3652;
  for ( i = 0LL; i < 0x200; ++i )
  {
    v6 = (unsigned int)*v4;
    if ( *v4 )
    {
      *(_QWORD *)v3 = v6;
      ++*((_WORD *)a1 + (unsigned __int8)v6 + 13325);
      ++*((_WORD *)a1 + (v6 >> 8) + 13582);
      *((_QWORD *)v3 + 1) = 0LL;
      *((_QWORD *)v3 + 2) = i;
      v3 += 24;
    }
    ++v4;
  }
  memset(a1 + 3908, 0, 0x100uLL);
  v7 = a1 + 259;
  if ( v3 <= (char *)a1 + 2072 )
  {
    if ( v3 == v2 )
      return 0LL;
    v9 = a1[258];
    *((_BYTE *)a1 + (v9 >> 1) + 31264) = (v9 & 1) != 0 ? 16 : 1;
    *((_DWORD *)a1 + v9) = 1;
    return *(_QWORD *)v2;
  }
  v10 = (_WORD *)a1 + 13325;
  v11 = 255LL;
  do
  {
    *v10 += *(v10 - 1);
    v10[257] += v10[256];
    ++v10;
    --v11;
  }
  while ( v11 );
  v12 = (char *)(a1 + 256);
  if ( v2 < v3 )
  {
    do
    {
      *((_WORD *)a1 + *((unsigned __int16 *)a1 + (unsigned __int8)*(_DWORD *)v12 + 13324) + 13838) = *((_WORD *)v12 + 8);
      v13 = *(_DWORD *)v12;
      v12 += 24;
      ++*((_WORD *)a1 + (unsigned __int8)v13 + 13324);
    }
    while ( v12 < v3 );
  }
  v14 = (v3 - (char *)a1 - 2048) / 24;
  if ( v14 )
  {
    v15 = (unsigned __int16 *)a1 + 13838;
    do
    {
      v16 = *v15++;
      v17 = *((unsigned int *)a1 + v16 + 7304);
      v18 = *((unsigned __int16 *)a1 + (v17 >> 8) + 13581);
      *((_WORD *)a1 + (v17 >> 8) + 13581) = v18 + 1;
      a1[3 * v18 + 258] = v16;
      a1[3 * v18 + 256] = v17;
      --v14;
    }
    while ( v14 );
  }
  v19 = (char *)(a1 + 262);
  while ( 2 )
  {
    *((_QWORD *)v3 + 1) = v2;
    v20 = v3;
    *((_QWORD *)v3 + 2) = v7;
    v21 = v19;
    v22 = v3;
    *(_QWORD *)v3 = *(_QWORD *)v2 + *v7;
    while ( v21 != v3 || v22 != v20 )
    {
      v20 += 24;
      if ( v21 == v3 || v22 < v20 && *(_QWORD *)v22 < *(_QWORD *)v21 )
      {
        *((_QWORD *)v20 + 1) = v22;
        v23 = *(_QWORD *)v22;
        v22 += 24;
      }
      else
      {
        *((_QWORD *)v20 + 1) = v21;
        v23 = *(_QWORD *)v21;
        v21 += 24;
      }
      *(_QWORD *)v20 = v23;
      if ( v21 == v3 || v22 < v20 && *(_QWORD *)v22 < *(_QWORD *)v21 )
      {
        *((_QWORD *)v20 + 2) = v22;
        *(_QWORD *)v20 += *(_QWORD *)v22;
        v22 += 24;
      }
      else
      {
        *((_QWORD *)v20 + 2) = v21;
        *(_QWORD *)v20 += *(_QWORD *)v21;
        v21 += 24;
      }
    }
    v24 = (char **)(a1 + 3331);
    v25 = 0LL;
    v26 = a1 + 3332;
    v27 = 0LL;
    while ( *((_QWORD *)v20 + 1) )
    {
      *v26 = ++v25;
      v26 += 2;
      *v24 = (char *)*((_QWORD *)v20 + 1);
      v24 += 2;
      v20 = (char *)*((_QWORD *)v20 + 2);
      v29 = 1LL;
LABEL_35:
      v27 += v29;
    }
    v28 = *((_QWORD *)v20 + 2);
    *((_QWORD *)v20 + 1) = v25;
    *((_BYTE *)a1 + v28 + 28704) = v25;
    if ( v27 )
    {
      v26 -= 2;
      v24 -= 2;
      v29 = -1LL;
      v20 = *v24;
      v25 = *v26;
      goto LABEL_35;
    }
    v30 = a1[257];
    v19 = (char *)(a1 + 262);
    if ( v30 > 0xF )
    {
      v31 = a1 + 256;
      if ( v2 < v3 )
      {
        do
        {
          v32 = *v31;
          v31[1] = 0LL;
          *v31 = (v32 + 1) >> 1;
          v31 += 3;
        }
        while ( v31 < (unsigned __int64 *)v3 );
      }
      continue;
    }
    break;
  }
  v33 = *((_QWORD *)v3 - 2);
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
