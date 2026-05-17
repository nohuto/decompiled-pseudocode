/*
 * XREFs of sub_180064DE8 @ 0x180064DE8
 * Callers:
 *     sub_1800642B0 @ 0x1800642B0 (sub_1800642B0.c)
 *     sub_180103534 @ 0x180103534 (sub_180103534.c)
 * Callees:
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_180064DE8(_QWORD *a1)
{
  unsigned __int8 *v2; // rsi
  unsigned __int8 *v3; // rdi
  _DWORD *v4; // r8
  unsigned __int64 i; // rdx
  unsigned __int64 v6; // rcx
  _QWORD *v7; // r14
  _WORD *v8; // rcx
  __int64 v9; // rdx
  unsigned __int8 *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r10
  unsigned __int16 *v13; // r11
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  unsigned __int8 *v17; // r15
  unsigned __int8 *v18; // rcx
  unsigned __int8 *v19; // r8
  unsigned __int8 *v20; // rdx
  __int64 v21; // rax
  unsigned __int8 **v22; // rdx
  __int64 v23; // r9
  __int64 *v24; // r8
  __int64 v25; // r11
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
  unsigned __int64 v38; // r8
  unsigned __int64 *v39; // rcx
  unsigned __int64 v40; // rax

  memset(a1 + 3331, 0, 0x202uLL);
  memset((char *)a1 + 27162, 0, 0x202uLL);
  v2 = (unsigned __int8 *)(a1 + 256);
  v3 = (unsigned __int8 *)(a1 + 256);
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
  if ( v3 <= (unsigned __int8 *)a1 + 2072 )
  {
    if ( v3 == v2 )
      return 0LL;
    v38 = a1[258];
    *((_BYTE *)a1 + (v38 >> 1) + 31264) = (v38 & 1) != 0 ? 16 : 1;
    *((_DWORD *)a1 + v38) = 1;
    return *(_QWORD *)v2;
  }
  v8 = (_WORD *)a1 + 13325;
  v9 = 255LL;
  do
  {
    *v8 += *(v8 - 1);
    v8[257] += v8[256];
    ++v8;
    --v9;
  }
  while ( v9 );
  v10 = (unsigned __int8 *)(a1 + 256);
  if ( v2 < v3 )
  {
    do
    {
      *((_WORD *)a1 + *((unsigned __int16 *)a1 + *v10 + 13324) + 13838) = *((_WORD *)v10 + 8);
      v11 = *v10;
      v10 += 24;
      ++*((_WORD *)a1 + v11 + 13324);
    }
    while ( v10 < v3 );
  }
  v12 = (v3 - (unsigned __int8 *)a1 - 2048) / 24;
  if ( v12 )
  {
    v13 = (unsigned __int16 *)a1 + 13838;
    do
    {
      v14 = *v13++;
      v15 = *((unsigned int *)a1 + v14 + 7304);
      v16 = *((unsigned __int16 *)a1 + (v15 >> 8) + 13581);
      *((_WORD *)a1 + (v15 >> 8) + 13581) = v16 + 1;
      a1[3 * v16 + 258] = v14;
      a1[3 * v16 + 256] = v15;
      --v12;
    }
    while ( v12 );
  }
  v17 = (unsigned __int8 *)(a1 + 262);
  while ( 2 )
  {
    *((_QWORD *)v3 + 1) = v2;
    v18 = v3;
    *((_QWORD *)v3 + 2) = v7;
    v19 = v17;
    v20 = v3;
    *(_QWORD *)v3 = *(_QWORD *)v2 + *v7;
    while ( v19 != v3 || v20 != v18 )
    {
      v18 += 24;
      if ( v19 == v3 || v20 < v18 && *(_QWORD *)v20 < *(_QWORD *)v19 )
      {
        *((_QWORD *)v18 + 1) = v20;
        v21 = *(_QWORD *)v20;
        v20 += 24;
      }
      else
      {
        *((_QWORD *)v18 + 1) = v19;
        v21 = *(_QWORD *)v19;
        v19 += 24;
      }
      *(_QWORD *)v18 = v21;
      if ( v19 == v3 || v20 < v18 && *(_QWORD *)v20 < *(_QWORD *)v19 )
      {
        *((_QWORD *)v18 + 2) = v20;
        *(_QWORD *)v18 += *(_QWORD *)v20;
        v20 += 24;
      }
      else
      {
        *((_QWORD *)v18 + 2) = v19;
        *(_QWORD *)v18 += *(_QWORD *)v19;
        v19 += 24;
      }
    }
    v22 = (unsigned __int8 **)(a1 + 3331);
    v23 = 0LL;
    v24 = a1 + 3332;
    v25 = 0LL;
    while ( *((_QWORD *)v18 + 1) )
    {
      *v24 = ++v23;
      v24 += 2;
      *v22 = (unsigned __int8 *)*((_QWORD *)v18 + 1);
      v22 += 2;
      v18 = (unsigned __int8 *)*((_QWORD *)v18 + 2);
      v27 = 1LL;
LABEL_31:
      v25 += v27;
    }
    v26 = *((_QWORD *)v18 + 2);
    *((_QWORD *)v18 + 1) = v23;
    *((_BYTE *)a1 + v26 + 28704) = v23;
    if ( v25 )
    {
      v24 -= 2;
      v22 -= 2;
      v27 = -1LL;
      v18 = *v22;
      v23 = *v24;
      goto LABEL_31;
    }
    v28 = a1[257];
    v17 = (unsigned __int8 *)(a1 + 262);
    if ( v28 > 0xF )
    {
      v39 = a1 + 256;
      if ( v2 < v3 )
      {
        do
        {
          v40 = *v39;
          v39[1] = 0LL;
          *v39 = (v40 + 1) >> 1;
          v39 += 3;
        }
        while ( v39 < (unsigned __int64 *)v3 );
      }
      continue;
    }
    break;
  }
  v29 = *((_QWORD *)v3 - 2);
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
