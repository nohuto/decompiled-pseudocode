/*
 * XREFs of XpressBuildHuffmanEncodings @ 0x18006000C
 * Callers:
 *     RtlCompressBufferXpressHuffStandard @ 0x18005F500 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressHuffMax @ 0x180107B4C (RtlCompressBufferXpressHuffMax.c)
 * Callees:
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall XpressBuildHuffmanEncodings(_QWORD *a1)
{
  unsigned __int8 **v1; // r13
  unsigned __int8 *v3; // rsi
  unsigned __int8 *v4; // rdi
  _DWORD *v5; // r8
  unsigned __int64 i; // rdx
  unsigned __int64 v7; // rcx
  _QWORD *v8; // r15
  _WORD *v9; // rcx
  __int64 v10; // rdx
  unsigned __int8 *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r10
  unsigned __int16 *v14; // r11
  __int64 v15; // r8
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int8 *v18; // rdx
  unsigned __int8 *v19; // rcx
  unsigned __int8 *v20; // r8
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 *v23; // r8
  __int64 v24; // r10
  unsigned __int8 **v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rbp
  unsigned __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rsi
  __int64 v32; // r9
  _BYTE *v33; // r11
  unsigned __int64 v34; // rdx
  unsigned int *v35; // r10
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  unsigned __int64 *v39; // rcx
  unsigned __int64 v40; // rax

  v1 = (unsigned __int8 **)(a1 + 3331);
  memset(a1 + 3331, 0, 0x202uLL);
  memset((char *)a1 + 27162, 0, 0x202uLL);
  v3 = (unsigned __int8 *)(a1 + 256);
  v4 = (unsigned __int8 *)(a1 + 256);
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
  if ( v4 <= (unsigned __int8 *)a1 + 2072 )
  {
    if ( v4 == v3 )
      return 0LL;
    v38 = a1[258];
    if ( (v38 & 1) != 0 )
      *((_BYTE *)a1 + (v38 >> 1) + 31264) = 16;
    else
      *((_BYTE *)a1 + (v38 >> 1) + 31264) = 1;
    *((_DWORD *)a1 + v38) = 1;
    return *(_QWORD *)v3;
  }
  v9 = (_WORD *)a1 + 13325;
  v10 = 255LL;
  do
  {
    *v9 += *(v9 - 1);
    v9[257] += v9[256];
    ++v9;
    --v10;
  }
  while ( v10 );
  v11 = (unsigned __int8 *)(a1 + 256);
  if ( v3 < v4 )
  {
    do
    {
      *((_WORD *)a1 + *((unsigned __int16 *)a1 + *v11 + 13324) + 13838) = *((_WORD *)v11 + 8);
      v12 = *v11;
      v11 += 24;
      ++*((_WORD *)a1 + v12 + 13324);
    }
    while ( v11 < v4 );
  }
  v13 = (v4 - (unsigned __int8 *)a1 - 2048) / 24;
  if ( v13 )
  {
    v14 = (unsigned __int16 *)a1 + 13838;
    do
    {
      v15 = *v14++;
      v16 = *((unsigned int *)a1 + v15 + 7304);
      v17 = *((unsigned __int16 *)a1 + (v16 >> 8) + 13581);
      *((_WORD *)a1 + (v16 >> 8) + 13581) = v17 + 1;
      a1[3 * v17 + 258] = v15;
      a1[3 * v17 + 256] = v16;
      --v13;
    }
    while ( v13 );
  }
  while ( 2 )
  {
    *((_QWORD *)v4 + 1) = v3;
    v18 = (unsigned __int8 *)(a1 + 262);
    *((_QWORD *)v4 + 2) = v8;
    v19 = v4;
    v20 = v4;
    *(_QWORD *)v4 = *(_QWORD *)v3 + *v8;
    while ( v18 != v4 || v20 != v19 )
    {
      v19 += 24;
      if ( v18 == v4 || v20 < v19 && *(_QWORD *)v20 < *(_QWORD *)v18 )
      {
        *((_QWORD *)v19 + 1) = v20;
        v21 = *(_QWORD *)v20;
        v20 += 24;
      }
      else
      {
        *((_QWORD *)v19 + 1) = v18;
        v21 = *(_QWORD *)v18;
        v18 += 24;
      }
      *(_QWORD *)v19 = v21;
      if ( v18 == v4 || v20 < v19 && *(_QWORD *)v20 < *(_QWORD *)v18 )
      {
        *((_QWORD *)v19 + 2) = v20;
        *(_QWORD *)v19 += *(_QWORD *)v20;
        v20 += 24;
      }
      else
      {
        *((_QWORD *)v19 + 2) = v18;
        *(_QWORD *)v19 += *(_QWORD *)v18;
        v18 += 24;
      }
    }
    v22 = 0LL;
    v23 = a1 + 3332;
    v24 = 0LL;
    v25 = v1;
    while ( *((_QWORD *)v19 + 1) )
    {
      *v23 = ++v22;
      v23 += 2;
      *v25 = (unsigned __int8 *)*((_QWORD *)v19 + 1);
      v25 += 2;
      v19 = (unsigned __int8 *)*((_QWORD *)v19 + 2);
      v27 = 1LL;
LABEL_30:
      v24 += v27;
    }
    v26 = *((_QWORD *)v19 + 2);
    *((_QWORD *)v19 + 1) = v22;
    *((_BYTE *)a1 + v26 + 28704) = v22;
    if ( v24 )
    {
      v23 -= 2;
      v25 -= 2;
      v27 = -1LL;
      v19 = *v25;
      v22 = *v23;
      goto LABEL_30;
    }
    v28 = a1[257];
    if ( v28 > 0xF )
    {
      v39 = a1 + 256;
      if ( v3 < v4 )
      {
        do
        {
          v40 = *v39 + 1;
          v39[1] = 0LL;
          *v39 = v40 >> 1;
          v39 += 3;
        }
        while ( v39 < (unsigned __int64 *)v4 );
      }
      continue;
    }
    break;
  }
  v29 = *((_QWORD *)v4 - 2);
  v30 = 0LL;
  v31 = 0LL;
  while ( v29 <= v28 )
  {
    v32 = 0LL;
    v33 = a1 + 3908;
    v34 = 0LL;
    v35 = (unsigned int *)(a1 + 3652);
    do
    {
      if ( *((unsigned __int8 *)a1 + v34 * 2 + 28704) == v29 )
      {
        v37 = *v35;
        *v33 |= v29;
        v32 += v37;
        WORD1(a1[v34]) = v30++;
        LOWORD(a1[v34]) = v29;
      }
      if ( *((unsigned __int8 *)a1 + v34 * 2 + 28705) == v29 )
      {
        v32 += v35[1];
        *v33 |= 16 * (_BYTE)v29;
        HIWORD(a1[v34]) = v30++;
        WORD2(a1[v34]) = v29;
      }
      ++v33;
      ++v34;
      v35 += 2;
    }
    while ( v34 < 256 );
    v30 *= 2LL;
    v31 += v29 * v32;
    ++v29;
  }
  return v31;
}
