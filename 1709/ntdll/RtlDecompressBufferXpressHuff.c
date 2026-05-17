/*
 * XREFs of RtlDecompressBufferXpressHuff @ 0x180088E00
 * Callers:
 *     <none>
 * Callees:
 *     XpressBuildHuffmanDecodingTable @ 0x18008931C (XpressBuildHuffmanDecodingTable.c)
 */

__int64 __fastcall RtlDecompressBufferXpressHuff(
        _BYTE *a1,
        int a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        _DWORD *a6,
        __int64 a7)
{
  unsigned __int8 *v7; // rbx
  unsigned __int64 v9; // rbp
  _BYTE *v10; // rdi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rsi
  _BYTE *v13; // r13
  unsigned __int16 *v14; // rbx
  __int64 v15; // r8
  int v16; // r9d
  int v17; // eax
  unsigned int v18; // r9d
  unsigned __int64 v19; // r14
  __int16 v20; // ax
  __int64 v21; // rcx
  __int16 v22; // ax
  int v23; // ecx
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // r11
  _BYTE *v27; // rsi
  int v28; // edx
  int v29; // edx
  _DWORD *v30; // rsi
  int v31; // ecx
  unsigned __int64 v32; // r10
  char v33; // al
  __int64 v34; // rax
  unsigned __int64 v35; // r10
  int v37; // ecx
  unsigned __int64 v38; // r10
  __int16 v39; // ax
  __int64 v40; // rcx
  int v41; // edx
  int v42; // edx
  int v43; // ecx
  unsigned __int64 v44; // r10
  unsigned __int64 v45; // r10
  _BYTE *v46; // [rsp+80h] [rbp+38h]

  v7 = a3;
  if ( !a7 )
    return 3221225704LL;
  v9 = (a7 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v10 = a1;
  v11 = (unsigned __int64)&a3[a4];
  v12 = (unsigned __int64)&a1[a2];
  v46 = (_BYTE *)v12;
LABEL_3:
  if ( (__int64)(v11 - (_QWORD)v7) < 260 )
  {
    if ( v10 != (_BYTE *)v12 )
      return 3221226050LL;
    goto LABEL_50;
  }
  if ( (unsigned int)XpressBuildHuffmanDecodingTable(v9, v7) )
    return 3221226050LL;
  v13 = v10 + 0x10000;
  v14 = (unsigned __int16 *)(v7 + 256);
  v15 = 16LL;
  v16 = *v14;
  v17 = v14[1];
  v7 = (unsigned __int8 *)(v14 + 2);
  v18 = v17 + (v16 << 16);
  if ( (unsigned __int64)(v10 + 0x10000) > v12 )
    v13 = (_BYTE *)v12;
  v19 = (unsigned __int64)(v13 - 188);
  if ( v10 < v13 - 188 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v20 = *(_WORD *)(v9 + 2 * ((unsigned __int64)v18 >> 22) + 1056);
          if ( v20 <= 0 )
          {
            v18 <<= 10;
            v15 -= 10LL;
            do
            {
              --v15;
              v31 = (unsigned __int64)v18 >> 31;
              v18 *= 2;
              v20 = *(_WORD *)(v9 + 2LL * (__int16)(v31 - v20) + 3104);
            }
            while ( v20 <= 0 );
          }
          else
          {
            v21 = v20 & 0xF;
            v18 <<= v21;
            v15 -= v21;
          }
          v22 = (v20 >> 4) - 256;
          if ( v15 < 0 )
          {
            if ( (unsigned __int64)v10 >= v19 )
              goto LABEL_63;
            if ( (unsigned __int64)(v7 + 1) >= v11 )
              return 3221226050LL;
            v28 = *(unsigned __int16 *)v7;
            v7 += 2;
            v18 += v28 << -(char)v15;
            v15 += 16LL;
          }
          if ( v22 >= 0 )
            break;
          *v10++ = v22;
        }
        if ( !v22 && (unsigned __int64)v7 >= v11 && v10 == v46 )
          goto LABEL_50;
        v23 = v22 / 16;
        v24 = v22 % 16;
        if ( v24 == 15 )
        {
          if ( (unsigned __int64)v7 >= v11 )
            return 3221226050LL;
          v32 = *v7++;
          if ( v32 == 255 )
          {
            if ( (unsigned __int64)(v7 + 1) >= v11 )
              return 3221226050LL;
            v35 = *(unsigned __int16 *)v7;
            v7 += 2;
            if ( !v35 )
            {
              if ( (unsigned __int64)(v7 + 3) >= v11 )
                return 3221226050LL;
              v35 = *(unsigned int *)v7;
              v7 += 4;
            }
            if ( v35 < 0xF || &v10[v35 + 3] < v10 )
              return 3221226050LL;
            v32 = v35 - 15;
          }
          v24 = v32 + 15;
        }
        v25 = v24 + 3;
        v26 = (1LL << v23) + ((unsigned __int64)v18 >> (31 - (unsigned __int8)v23) >> 1);
        v18 <<= v23;
        v15 -= v23;
        if ( v15 < 0 )
        {
          if ( (unsigned __int64)v10 >= v19 )
            goto LABEL_65;
          if ( (unsigned __int64)(v7 + 1) >= v11 )
            return 3221226050LL;
          v29 = *(unsigned __int16 *)v7;
          v7 += 2;
          v18 += v29 << -(char)v15;
          v15 += 16LL;
        }
        v27 = &v10[-v26];
        if ( &v10[-v26] < a1 )
          return 3221226050LL;
        if ( v26 < 4 )
          break;
LABEL_18:
        *(_DWORD *)v10 = *(_DWORD *)v27;
        *((_DWORD *)v10 + 1) = *((_DWORD *)v27 + 1);
        if ( v25 >= 9 )
        {
          v10 += 8;
          v30 = v27 + 8;
          v25 -= 8LL;
          while ( (unsigned __int64)v10 < v19 )
          {
            *(_DWORD *)v10 = *v30;
            *((_DWORD *)v10 + 1) = v30[1];
            *((_DWORD *)v10 + 2) = v30[2];
            *((_DWORD *)v10 + 3) = v30[3];
            if ( v25 < 0x11 )
              goto LABEL_19;
            v10 += 16;
            v30 += 4;
            v25 -= 16LL;
          }
LABEL_55:
          if ( &v10[v25] <= v46 )
          {
            qmemcpy(v10, v30, v25);
            v10 += v25;
            goto LABEL_57;
          }
          return 3221226050LL;
        }
LABEL_19:
        v10 += v25;
      }
      *v10 = *v27;
      if ( v26 == 1 )
      {
        v10[1] = *v27;
        v33 = *v27;
      }
      else
      {
        v10[1] = v27[1];
        if ( v26 == 2 )
        {
          v10 += 2;
          v34 = -2LL;
          goto LABEL_39;
        }
        v33 = v27[2];
      }
      v10[2] = v33;
      v34 = -3LL;
      v10 += 3;
LABEL_39:
      v25 += v34;
      if ( v25 )
        goto LABEL_18;
    }
  }
  while ( 1 )
  {
LABEL_57:
    if ( v10 >= v13 )
    {
      v12 = (unsigned __int64)v46;
      goto LABEL_3;
    }
    v39 = *(_WORD *)(v9 + 2 * ((unsigned __int64)v18 >> 22) + 1056);
    if ( v39 <= 0 )
    {
      v18 <<= 10;
      v15 -= 10LL;
      do
      {
        --v15;
        v43 = (unsigned __int64)v18 >> 31;
        v18 *= 2;
        v39 = *(_WORD *)(v9 + 2LL * (__int16)(v43 - v39) + 3104);
      }
      while ( v39 <= 0 );
    }
    else
    {
      v40 = v39 & 0xF;
      v18 <<= v40;
      v15 -= v40;
    }
    v22 = (v39 >> 4) - 256;
    if ( v15 < 0 )
    {
LABEL_63:
      if ( (unsigned __int64)(v7 + 1) < v11 )
      {
        v41 = *(unsigned __int16 *)v7;
        v7 += 2;
        v18 += v41 << -(char)v15;
        v15 += 16LL;
        goto LABEL_61;
      }
      return 3221226050LL;
    }
LABEL_61:
    if ( v22 >= 0 )
      break;
    *v10++ = v22;
  }
  if ( !v22 && (unsigned __int64)v7 >= v11 && v10 == v46 )
  {
LABEL_50:
    *a6 = (_DWORD)v10 - (_DWORD)a1;
    return 0LL;
  }
  v37 = v22 / 16;
  v38 = v22 % 16;
  if ( v38 != 15 )
    goto LABEL_53;
  if ( (unsigned __int64)v7 >= v11 )
    return 3221226050LL;
  v44 = *v7++;
  if ( v44 == 255 )
  {
    if ( (unsigned __int64)(v7 + 1) >= v11 )
      return 3221226050LL;
    v45 = *(unsigned __int16 *)v7;
    v7 += 2;
    if ( !v45 )
    {
      if ( (unsigned __int64)(v7 + 3) >= v11 )
        return 3221226050LL;
      v45 = *(unsigned int *)v7;
      v7 += 4;
    }
    if ( v45 >= 0xF && &v10[v45 + 3] >= v10 )
    {
      v44 = v45 - 15;
      goto LABEL_73;
    }
  }
  else
  {
LABEL_73:
    v38 = v44 + 15;
LABEL_53:
    v25 = v38 + 3;
    v26 = (1LL << v37) + ((unsigned __int64)v18 >> (31 - (unsigned __int8)v37) >> 1);
    v18 <<= v37;
    v15 -= v37;
    if ( v15 < 0 )
    {
LABEL_65:
      if ( (unsigned __int64)(v7 + 1) >= v11 )
        return 3221226050LL;
      v42 = *(unsigned __int16 *)v7;
      v7 += 2;
      v18 += v42 << -(char)v15;
      v15 += 16LL;
    }
    v30 = &v10[-v26];
    if ( &v10[-v26] >= a1 )
      goto LABEL_55;
  }
  return 3221226050LL;
}
