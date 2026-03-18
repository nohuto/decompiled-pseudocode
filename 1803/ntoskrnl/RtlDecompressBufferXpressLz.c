/*
 * XREFs of RtlDecompressBufferXpressLz @ 0x140164830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlDecompressBufferXpressLz(
        _BYTE *a1,
        unsigned int a2,
        _BYTE *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  __int64 v7; // r15
  _BYTE *v8; // rdx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbp
  _BYTE *v11; // r14
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rbx
  int v14; // ecx
  int v15; // eax
  bool v16; // sf
  unsigned __int64 v17; // rdi
  char v18; // r9
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r9
  signed __int64 v21; // r9
  _BYTE *v22; // rsi
  _DWORD *v23; // rsi
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // rdi
  __int64 v27; // rcx
  char v28; // cl
  __int16 v29; // cx
  unsigned __int64 v30; // rdi
  char v31; // r9
  unsigned __int64 v32; // r9
  _BYTE *v33; // r10
  void *v34; // rdi
  unsigned __int64 v35; // r9
  unsigned __int64 v36; // r9
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // r9

  if ( a4 < 5 )
    return 3221226050LL;
  v7 = a2;
  v8 = a1;
  v9 = (unsigned __int64)&a1[v7];
  v10 = (unsigned __int64)&a3[a4];
  v11 = 0LL;
  v12 = v9 - 352;
  v13 = v10 - 86;
LABEL_3:
  v14 = *(_DWORD *)a3;
  a3 += 4;
  if ( (unsigned __int64)v8 < v12 && (unsigned __int64)a3 < v13 )
  {
    v15 = 2 * v14 + 1;
    if ( v14 >= 0 )
    {
      while ( 1 )
      {
        if ( v15 < 0 )
        {
          *v8++ = *a3++;
          goto LABEL_12;
        }
        v16 = (v15 & 0x40000000) != 0;
        v15 *= 2;
        if ( v16 )
        {
          *(_WORD *)v8 = *(_WORD *)a3;
          v8 += 2;
          a3 += 2;
          goto LABEL_12;
        }
        v16 = (v15 & 0x40000000) != 0;
        v15 *= 2;
        *(_DWORD *)v8 = *(_DWORD *)a3;
        if ( v16 )
        {
          v8 += 3;
          a3 += 3;
          goto LABEL_12;
        }
        v8 += 4;
        a3 += 4;
        v16 = (v15 & 0x40000000) != 0;
        v15 *= 2;
        if ( v16 )
          goto LABEL_12;
LABEL_10:
        v15 *= 2;
      }
    }
    while ( 1 )
    {
      v17 = *(unsigned __int16 *)a3;
      a3 += 2;
      v18 = v17;
      v19 = (v17 >> 3) + 1;
      v20 = v18 & 7;
      if ( v20 == 7 )
      {
        if ( v11 )
        {
          v24 = (unsigned __int64)(unsigned __int8)*v11 >> 4;
          v11 = 0LL;
        }
        else
        {
          v11 = a3++;
          v24 = *v11 & 0xF;
        }
        if ( v24 == 15 )
        {
          if ( (unsigned __int64)(a3 + 7) >= v13 )
            goto LABEL_67;
          v25 = (unsigned __int8)*a3++;
          if ( v25 == 255 )
          {
            v39 = *(unsigned __int16 *)a3;
            a3 += 2;
            if ( !v39 )
            {
              v39 = *(unsigned int *)a3;
              a3 += 4;
            }
            if ( v39 < 0x16 || &v8[v39 + 3] < v8 )
              return 3221226050LL;
            v25 = v39 - 22;
          }
          v24 = v25 + 15;
        }
        v20 = v24 + 7;
      }
      v21 = v20 + 3;
      v22 = &v8[-v19];
      if ( &v8[-v19] < a1 )
        return 3221226050LL;
      if ( v19 < 4 )
        break;
LABEL_16:
      *(_DWORD *)v8 = *(_DWORD *)v22;
      *((_DWORD *)v8 + 1) = *((_DWORD *)v22 + 1);
      if ( v21 >= 9 )
      {
        v8 += 8;
        v23 = v22 + 8;
        v21 -= 8LL;
        while ( (unsigned __int64)v8 < v12 )
        {
          *(_DWORD *)v8 = *v23;
          *((_DWORD *)v8 + 1) = v23[1];
          *((_DWORD *)v8 + 2) = v23[2];
          *((_DWORD *)v8 + 3) = v23[3];
          if ( v21 < 17 )
            goto LABEL_17;
          v8 += 16;
          v23 += 4;
          v21 -= 16LL;
        }
        v33 = &v8[v21];
        if ( (unsigned __int64)&v8[v21] <= v9 )
          goto LABEL_59;
        return 3221226050LL;
      }
LABEL_17:
      v8 += v21;
LABEL_18:
      if ( v15 >= 0 )
        goto LABEL_10;
LABEL_12:
      v15 *= 2;
      if ( !v15 )
        goto LABEL_3;
    }
    *v8 = *v22;
    v26 = v19 - 1;
    if ( v26 )
    {
      v8[1] = v22[1];
      if ( v26 == 1 )
      {
        v8 += 2;
        v27 = -2LL;
        goto LABEL_39;
      }
      v28 = v22[2];
    }
    else
    {
      v8[1] = *v22;
      v28 = *v22;
    }
    v8[2] = v28;
    v27 = -3LL;
    v8 += 3;
LABEL_39:
    v21 += v27;
    if ( !v21 )
      goto LABEL_18;
    goto LABEL_16;
  }
LABEL_44:
  v15 = 2 * v14 + 1;
  if ( v14 >= 0 )
  {
LABEL_45:
    if ( v15 >= 0 )
    {
      do
      {
        v15 *= 2;
        if ( (unsigned __int64)(a3 + 2) > v10 || (unsigned __int64)(v8 + 2) > v9 )
          return 3221226050LL;
        v29 = *(_WORD *)a3;
        a3 += 2;
        *(_WORD *)v8 = v29;
        v8 += 2;
        if ( v15 < 0 )
          goto LABEL_53;
        v16 = (v15 & 0x40000000) != 0;
        v15 *= 2;
      }
      while ( !v16 );
    }
    if ( (unsigned __int64)a3 >= v10 || (unsigned __int64)v8 >= v9 )
      return 3221226050LL;
    *v8++ = *a3++;
    goto LABEL_53;
  }
  while ( 1 )
  {
    if ( a3 == (_BYTE *)v10 )
      goto LABEL_70;
    if ( (unsigned __int64)(a3 + 1) >= v10 )
      break;
    v30 = *(unsigned __int16 *)a3;
    a3 += 2;
    v31 = v30;
    v19 = (v30 >> 3) + 1;
    v32 = v31 & 7;
    if ( v32 == 7 )
    {
      if ( v11 )
      {
        v35 = (unsigned __int64)(unsigned __int8)*v11 >> 4;
        v11 = 0LL;
      }
      else
      {
        if ( (unsigned __int64)a3 >= v10 )
          return 3221226050LL;
        v11 = a3++;
        v35 = *v11 & 0xF;
      }
      if ( v35 == 15 )
      {
LABEL_67:
        if ( (unsigned __int64)a3 >= v10 )
          return 3221226050LL;
        v36 = (unsigned __int8)*a3++;
        if ( v36 == 255 )
        {
          if ( (unsigned __int64)(a3 + 1) >= v10 )
            return 3221226050LL;
          v38 = *(unsigned __int16 *)a3;
          a3 += 2;
          if ( !v38 )
          {
            if ( (unsigned __int64)(a3 + 3) >= v10 )
              return 3221226050LL;
            v38 = *(unsigned int *)a3;
            a3 += 4;
          }
          if ( v38 < 0x16 || &v8[v38 + 3] < v8 )
            return 3221226050LL;
          v36 = v38 - 22;
        }
        v35 = v36 + 15;
      }
      v32 = v35 + 7;
    }
    v21 = v32 + 3;
    v23 = &v8[-v19];
    if ( &v8[-v19] < a1 )
      return 3221226050LL;
    v33 = &v8[v21];
    if ( (unsigned __int64)&v8[v21] > v9 )
      return 3221226050LL;
LABEL_59:
    v34 = v8;
    v8 = v33;
    qmemcpy(v34, v23, v21);
    if ( v15 >= 0 )
    {
      v15 *= 2;
      goto LABEL_45;
    }
LABEL_53:
    v15 *= 2;
    if ( !v15 )
    {
      if ( (unsigned __int64)(a3 + 3) >= v10 )
        return 3221226050LL;
      v14 = *(_DWORD *)a3;
      a3 += 4;
      goto LABEL_44;
    }
  }
  if ( (unsigned __int64)v8 < v9 )
    return 3221226050LL;
LABEL_70:
  *a6 = (_DWORD)v8 - (_DWORD)a1;
  return 0LL;
}
