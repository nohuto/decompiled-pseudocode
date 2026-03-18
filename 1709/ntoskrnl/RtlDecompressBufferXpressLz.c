/*
 * XREFs of RtlDecompressBufferXpressLz @ 0x140259D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlDecompressBufferXpressLz(_BYTE *a1, int a2, _BYTE *a3, unsigned int a4, int a5, _DWORD *a6)
{
  _BYTE *v6; // r15
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r14
  _BYTE *v10; // rbp
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // rbx
  int v13; // r9d
  bool v14; // sf
  int v15; // r9d
  unsigned __int64 v16; // rdi
  char v17; // dl
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  signed __int64 v23; // rdx
  _BYTE *v24; // rsi
  unsigned __int64 v25; // rdi
  char v26; // al
  __int64 v27; // rax
  _DWORD *v28; // rsi
  __int16 v29; // ax
  unsigned __int64 v30; // rdi
  char v31; // dl
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rdx

  v6 = a1;
  if ( a4 < 5 )
    return 3221226050LL;
  v8 = (unsigned __int64)&a3[a4];
  v9 = (unsigned __int64)&a1[a2];
  v10 = 0LL;
  v11 = v8 - 86;
  v12 = v9 - 352;
LABEL_4:
  v13 = *(_DWORD *)a3;
  a3 += 4;
  if ( (unsigned __int64)a3 >= v11 || (unsigned __int64)a1 >= v12 )
    goto LABEL_60;
  v14 = v13 < 0;
  v15 = 2 * v13 + 1;
  if ( !v14 )
  {
    while ( 1 )
    {
      if ( v15 < 0 )
      {
        *a1++ = *a3++;
        goto LABEL_14;
      }
      v14 = (v15 & 0x40000000) != 0;
      v15 *= 2;
      if ( v14 )
      {
        *(_WORD *)a1 = *(_WORD *)a3;
        a1 += 2;
        a3 += 2;
        goto LABEL_14;
      }
      v14 = (v15 & 0x40000000) != 0;
      v15 *= 2;
      *(_DWORD *)a1 = *(_DWORD *)a3;
      if ( v14 )
      {
        a1 += 3;
        a3 += 3;
        goto LABEL_14;
      }
      a1 += 4;
      a3 += 4;
      v14 = (v15 & 0x40000000) != 0;
      v15 *= 2;
      if ( v14 )
        goto LABEL_14;
LABEL_45:
      v15 *= 2;
    }
  }
  while ( 1 )
  {
    v16 = *(unsigned __int16 *)a3;
    a3 += 2;
    v17 = v16;
    v18 = (v16 >> 3) + 1;
    v19 = v17 & 7;
    if ( v19 == 7 )
    {
      if ( v10 )
      {
        v20 = (unsigned __int64)(unsigned __int8)*v10 >> 4;
        v10 = 0LL;
      }
      else
      {
        v10 = a3++;
        v20 = *v10 & 0xF;
      }
      if ( v20 == 15 )
      {
        if ( (unsigned __int64)(a3 + 7) >= v11 )
          goto LABEL_69;
        v21 = (unsigned __int8)*a3++;
        if ( v21 == 255 )
        {
          v22 = *(unsigned __int16 *)a3;
          a3 += 2;
          if ( !v22 )
          {
            v22 = *(unsigned int *)a3;
            a3 += 4;
          }
          if ( v22 < 0x16 || &a1[v22 + 3] < a1 )
            return 3221226050LL;
          v21 = v22 - 22;
        }
        v20 = v21 + 15;
      }
      v19 = v20 + 7;
    }
    v23 = v19 + 3;
    v24 = &a1[-v18];
    if ( &a1[-v18] < v6 )
      return 3221226050LL;
    if ( v18 >= 4 )
      break;
    *a1 = *v24;
    v25 = v18 - 1;
    if ( v25 )
    {
      a1[1] = v24[1];
      if ( v25 == 1 )
      {
        a1 += 2;
        v27 = -2LL;
        goto LABEL_37;
      }
      v26 = v24[2];
    }
    else
    {
      a1[1] = *v24;
      v26 = *v24;
    }
    a1[2] = v26;
    v27 = -3LL;
    a1 += 3;
LABEL_37:
    v23 += v27;
    if ( v23 )
      break;
LABEL_44:
    if ( v15 >= 0 )
      goto LABEL_45;
LABEL_14:
    v15 *= 2;
    if ( !v15 )
      goto LABEL_4;
  }
  *(_DWORD *)a1 = *(_DWORD *)v24;
  *((_DWORD *)a1 + 1) = *((_DWORD *)v24 + 1);
  if ( v23 < 9 )
  {
LABEL_43:
    a1 += v23;
    goto LABEL_44;
  }
  a1 += 8;
  v28 = v24 + 8;
  v23 -= 8LL;
  while ( (unsigned __int64)a1 < v12 )
  {
    *(_DWORD *)a1 = *v28;
    *((_DWORD *)a1 + 1) = v28[1];
    *((_DWORD *)a1 + 2) = v28[2];
    *((_DWORD *)a1 + 3) = v28[3];
    if ( v23 < 17 )
      goto LABEL_43;
    a1 += 16;
    v28 += 4;
    v23 -= 16LL;
  }
  while ( (unsigned __int64)&a1[v23] <= v9 )
  {
    qmemcpy(a1, v28, v23);
    a1 += v23;
    if ( v15 >= 0 )
    {
      v15 *= 2;
      goto LABEL_49;
    }
LABEL_57:
    while ( 1 )
    {
      v15 *= 2;
      if ( v15 )
        break;
      if ( (unsigned __int64)(a3 + 3) >= v8 )
        return 3221226050LL;
      v13 = *(_DWORD *)a3;
      a3 += 4;
LABEL_60:
      v14 = v13 < 0;
      v15 = 2 * v13 + 1;
      if ( v14 )
        break;
LABEL_49:
      if ( v15 >= 0 )
      {
        do
        {
          v15 *= 2;
          if ( (unsigned __int64)(a3 + 2) > v8 || (unsigned __int64)(a1 + 2) > v9 )
            return 3221226050LL;
          v29 = *(_WORD *)a3;
          a3 += 2;
          *(_WORD *)a1 = v29;
          a1 += 2;
          if ( v15 < 0 )
            goto LABEL_57;
          v14 = (v15 & 0x40000000) != 0;
          v15 *= 2;
        }
        while ( !v14 );
      }
      if ( (unsigned __int64)a3 >= v8 || (unsigned __int64)a1 >= v9 )
        return 3221226050LL;
      *a1++ = *a3++;
    }
    if ( a3 == (_BYTE *)v8 )
      goto LABEL_83;
    if ( (unsigned __int64)(a3 + 1) >= v8 )
    {
      if ( (unsigned __int64)a1 < v9 )
        return 3221226050LL;
LABEL_83:
      *a6 = (_DWORD)a1 - (_DWORD)v6;
      return 0LL;
    }
    v30 = *(unsigned __int16 *)a3;
    a3 += 2;
    v31 = v30;
    v18 = (v30 >> 3) + 1;
    v32 = v31 & 7;
    if ( v32 == 7 )
    {
      if ( v10 )
      {
        v33 = (unsigned __int64)(unsigned __int8)*v10 >> 4;
        v10 = 0LL;
      }
      else
      {
        if ( (unsigned __int64)a3 >= v8 )
          return 3221226050LL;
        v10 = a3++;
        v33 = *v10 & 0xF;
      }
      if ( v33 == 15 )
      {
LABEL_69:
        if ( (unsigned __int64)a3 >= v8 )
          return 3221226050LL;
        v34 = (unsigned __int8)*a3++;
        if ( v34 == 255 )
        {
          if ( (unsigned __int64)(a3 + 1) >= v8 )
            return 3221226050LL;
          v35 = *(unsigned __int16 *)a3;
          a3 += 2;
          if ( !v35 )
          {
            if ( (unsigned __int64)(a3 + 3) >= v8 )
              return 3221226050LL;
            v35 = *(unsigned int *)a3;
            a3 += 4;
          }
          if ( v35 < 0x16 || &a1[v35 + 3] < a1 )
            return 3221226050LL;
          v34 = v35 - 22;
        }
        v33 = v34 + 15;
      }
      v32 = v33 + 7;
    }
    v23 = v32 + 3;
    v28 = &a1[-v18];
    if ( &a1[-v18] < v6 )
      return 3221226050LL;
  }
  return 3221226050LL;
}
