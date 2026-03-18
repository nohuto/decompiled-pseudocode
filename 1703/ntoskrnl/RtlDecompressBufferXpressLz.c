/*
 * XREFs of RtlDecompressBufferXpressLz @ 0x14005CE70
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
  _BYTE *v6; // r10
  __int64 v8; // r12
  _BYTE *v9; // rdx
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r13
  _BYTE *v12; // rbp
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r15
  int v15; // eax
  bool v16; // sf
  int v17; // eax
  unsigned __int64 v18; // rdi
  char v19; // r8
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // r8
  signed __int64 v22; // r9
  signed __int64 v23; // r11
  _BYTE *v24; // rsi
  signed __int64 v25; // r8
  _DWORD *v26; // rsi
  unsigned __int64 v27; // r8
  __int64 v28; // r8
  unsigned __int64 v29; // rdi
  char v30; // cl
  __int16 v31; // cx
  unsigned __int64 v32; // rdi
  char v33; // r8
  unsigned __int64 v34; // r8
  _BYTE *v35; // r9
  void *v36; // rdi
  unsigned __int64 v37; // r8
  __int64 v38; // r8
  __int64 v40; // r8
  __int64 v41; // r8

  v6 = a3;
  if ( a4 < 5 )
    return 3221226050LL;
  v8 = a2;
  v9 = a1;
  v10 = (unsigned __int64)&a1[v8];
  v11 = (unsigned __int64)&a3[a4];
  v12 = 0LL;
  v13 = v10 - 352;
  v14 = v11 - 86;
LABEL_3:
  v15 = *(_DWORD *)v6;
  v6 += 4;
  if ( (unsigned __int64)v9 < v13 && (unsigned __int64)v6 < v14 )
  {
    v16 = v15 < 0;
    v17 = 2 * v15 + 1;
    if ( !v16 )
    {
      while ( 1 )
      {
        if ( v17 < 0 )
        {
          *v9++ = *v6++;
          goto LABEL_12;
        }
        v16 = (v17 & 0x40000000) != 0;
        v17 *= 2;
        if ( v16 )
        {
          *(_WORD *)v9 = *(_WORD *)v6;
          v9 += 2;
          v6 += 2;
          goto LABEL_12;
        }
        v16 = (v17 & 0x40000000) != 0;
        v17 *= 2;
        *(_DWORD *)v9 = *(_DWORD *)v6;
        if ( v16 )
        {
          v9 += 3;
          v6 += 3;
          goto LABEL_12;
        }
        v9 += 4;
        v6 += 4;
        v16 = (v17 & 0x40000000) != 0;
        v17 *= 2;
        if ( v16 )
          goto LABEL_12;
LABEL_10:
        v17 *= 2;
      }
    }
    while ( 1 )
    {
      v18 = *(unsigned __int16 *)v6;
      v6 += 2;
      v19 = v18;
      v20 = (v18 >> 3) + 1;
      v21 = v19 & 7;
      if ( v21 == 7 )
      {
        if ( v12 )
        {
          v27 = (unsigned __int64)(unsigned __int8)*v12 >> 4;
          v12 = 0LL;
        }
        else
        {
          v12 = v6++;
          v27 = *v12 & 0xF;
        }
        if ( v27 == 15 )
        {
          if ( (unsigned __int64)(v6 + 7) >= v14 )
            goto LABEL_66;
          v28 = (unsigned __int8)*v6++;
          if ( v28 == 255 )
          {
            v41 = *(unsigned __int16 *)v6;
            v6 += 2;
            if ( !v41 )
            {
              v41 = *(unsigned int *)v6;
              v6 += 4;
            }
            if ( v41 < 22 || &v9[v41 + 3] < v9 )
              return 3221226050LL;
            v28 = v41 - 22;
          }
          v27 = v28 + 15;
        }
        v21 = v27 + 7;
      }
      v22 = v21;
      v23 = v21;
      v24 = &v9[-v20];
      v25 = v21 + 3;
      if ( &v9[-v20] < a1 )
        return 3221226050LL;
      if ( v20 < 4 )
        break;
LABEL_16:
      *(_DWORD *)v9 = *(_DWORD *)v24;
      *((_DWORD *)v9 + 1) = *((_DWORD *)v24 + 1);
      if ( v25 >= 9 )
      {
        v9 += 8;
        v26 = v24 + 8;
        v25 -= 8LL;
        while ( (unsigned __int64)v9 < v13 )
        {
          *(_DWORD *)v9 = *v26;
          *((_DWORD *)v9 + 1) = v26[1];
          *((_DWORD *)v9 + 2) = v26[2];
          *((_DWORD *)v9 + 3) = v26[3];
          if ( v25 < 17 )
            goto LABEL_17;
          v9 += 16;
          v26 += 4;
          v25 -= 16LL;
        }
        v35 = &v9[v25];
        if ( (unsigned __int64)&v9[v25] <= v10 )
          goto LABEL_58;
        return 3221226050LL;
      }
LABEL_17:
      v9 += v25;
LABEL_18:
      if ( v17 >= 0 )
        goto LABEL_10;
LABEL_12:
      v17 *= 2;
      if ( !v17 )
        goto LABEL_3;
    }
    *v9 = *v24;
    v29 = v20 - 1;
    if ( v29 )
    {
      v9[1] = v24[1];
      if ( v29 == 1 )
      {
        v25 -= 2LL;
        v9 += 2;
LABEL_37:
        if ( !v25 )
          goto LABEL_18;
        goto LABEL_16;
      }
      v30 = v24[2];
      v25 = v23;
    }
    else
    {
      v25 = v22;
      v9[1] = *v24;
      v30 = *v24;
    }
    v9[2] = v30;
    v9 += 3;
    goto LABEL_37;
  }
LABEL_43:
  v16 = v15 < 0;
  v17 = 2 * v15 + 1;
  if ( !v16 )
  {
LABEL_44:
    if ( v17 >= 0 )
    {
      do
      {
        v17 *= 2;
        if ( (unsigned __int64)(v6 + 2) > v11 || (unsigned __int64)(v9 + 2) > v10 )
          return 3221226050LL;
        v31 = *(_WORD *)v6;
        v6 += 2;
        *(_WORD *)v9 = v31;
        v9 += 2;
        if ( v17 < 0 )
          goto LABEL_52;
        v16 = (v17 & 0x40000000) != 0;
        v17 *= 2;
      }
      while ( !v16 );
    }
    if ( (unsigned __int64)v6 >= v11 || (unsigned __int64)v9 >= v10 )
      return 3221226050LL;
    *v9++ = *v6++;
    goto LABEL_52;
  }
  while ( 1 )
  {
    if ( v6 == (_BYTE *)v11 )
      goto LABEL_69;
    if ( (unsigned __int64)(v6 + 1) >= v11 )
      break;
    v32 = *(unsigned __int16 *)v6;
    v6 += 2;
    v33 = v32;
    v20 = (v32 >> 3) + 1;
    v34 = v33 & 7;
    if ( v34 == 7 )
    {
      if ( v12 )
      {
        v37 = (unsigned __int64)(unsigned __int8)*v12 >> 4;
        v12 = 0LL;
      }
      else
      {
        if ( (unsigned __int64)v6 >= v11 )
          return 3221226050LL;
        v12 = v6++;
        v37 = *v12 & 0xF;
      }
      if ( v37 == 15 )
      {
LABEL_66:
        if ( (unsigned __int64)v6 >= v11 )
          return 3221226050LL;
        v38 = (unsigned __int8)*v6++;
        if ( v38 == 255 )
        {
          if ( (unsigned __int64)(v6 + 1) >= v11 )
            return 3221226050LL;
          v40 = *(unsigned __int16 *)v6;
          v6 += 2;
          if ( !v40 )
          {
            if ( (unsigned __int64)(v6 + 3) >= v11 )
              return 3221226050LL;
            v40 = *(unsigned int *)v6;
            v6 += 4;
          }
          if ( v40 < 22 || &v9[v40 + 3] < v9 )
            return 3221226050LL;
          v38 = v40 - 22;
        }
        v37 = v38 + 15;
      }
      v34 = v37 + 7;
    }
    v25 = v34 + 3;
    v26 = &v9[-v20];
    if ( &v9[-v20] < a1 )
      return 3221226050LL;
    v35 = &v9[v25];
    if ( (unsigned __int64)&v9[v25] > v10 )
      return 3221226050LL;
LABEL_58:
    v36 = v9;
    v9 = v35;
    qmemcpy(v36, v26, v25);
    if ( v17 >= 0 )
    {
      v17 *= 2;
      goto LABEL_44;
    }
LABEL_52:
    v17 *= 2;
    if ( !v17 )
    {
      if ( (unsigned __int64)(v6 + 3) >= v11 )
        return 3221226050LL;
      v15 = *(_DWORD *)v6;
      v6 += 4;
      goto LABEL_43;
    }
  }
  if ( (unsigned __int64)v9 < v10 )
    return 3221226050LL;
LABEL_69:
  *a6 = (_DWORD)v9 - (_DWORD)a1;
  return 0LL;
}
