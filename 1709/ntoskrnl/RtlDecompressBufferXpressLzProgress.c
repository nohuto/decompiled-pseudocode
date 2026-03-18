/*
 * XREFs of RtlDecompressBufferXpressLzProgress @ 0x14025A0D0
 * Callers:
 *     RtlDecompressBufferProgress @ 0x140259674 (RtlDecompressBufferProgress.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x14025A984 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlDecompressBufferXpressLzProgress(
        _BYTE *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7)
{
  _BYTE *v8; // r8
  unsigned int v9; // esi
  _BYTE *v11; // rdi
  unsigned __int64 v12; // rbp
  _BYTE *v13; // r14
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rdx
  unsigned __int8 *v17; // rsi
  int v18; // r15d
  __int64 XpressCallback; // rax
  bool v20; // sf
  int v21; // r15d
  unsigned __int64 v22; // rcx
  char v23; // r14
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r14
  unsigned __int8 *v26; // rax
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // r14
  signed __int64 v30; // r14
  _BYTE *v31; // rsi
  unsigned __int64 v32; // rcx
  char v33; // al
  __int64 v34; // rax
  _DWORD *v35; // rsi
  unsigned __int64 v36; // r14
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  char v39; // r14
  unsigned __int64 v40; // r14
  unsigned __int8 *v41; // rax
  unsigned __int64 v42; // r14
  unsigned __int64 v43; // r14
  unsigned __int64 v44; // r14
  _BYTE *v45; // rsi
  unsigned __int64 v46; // rcx
  char v47; // al
  __int64 v48; // rax
  __int16 v49; // ax
  unsigned __int64 v50; // rdx
  char v51; // cl
  __int64 v52; // rdx
  unsigned __int64 v53; // rcx
  unsigned __int8 *v54; // rax
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rcx
  unsigned __int8 *v59; // [rsp+20h] [rbp-58h]
  _BYTE *v60; // [rsp+28h] [rbp-50h]
  _QWORD v61[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v62; // [rsp+40h] [rbp-38h]

  v8 = a1;
  v9 = 4096;
  if ( (unsigned int)a4 < 5 )
    return 3221226050LL;
  v11 = a1;
  v12 = (unsigned __int64)&a3[(unsigned int)a4];
  v13 = &a1[a2];
  v60 = v13;
  v14 = v12 - 86;
  v15 = (unsigned __int64)(v13 - 352);
  if ( !a6 || a2 < 0x1000 )
    v9 = a2;
  v16 = (unsigned __int64)&a1[v9];
  v62 = v9;
  v61[0] = a6;
  v61[1] = a7;
  if ( v15 < v16 )
    v16 = (unsigned __int64)(v13 - 352);
  v17 = 0LL;
  v59 = 0LL;
LABEL_9:
  v18 = *(_DWORD *)a3;
  a3 += 4;
  if ( (unsigned __int64)a3 < v14 )
  {
    if ( (unsigned __int64)v11 >= v16 )
    {
      if ( (unsigned __int64)v11 >= v15 )
      {
LABEL_122:
        v36 = (unsigned __int64)v60;
        while ( 1 )
        {
          v20 = v18 < 0;
          v21 = 2 * v18 + 1;
          if ( !v20 )
            break;
          do
          {
            if ( a3 == (unsigned __int8 *)v12 )
              goto LABEL_156;
            if ( (unsigned __int64)(a3 + 1) >= v12 )
            {
              if ( (unsigned __int64)v11 < v36 )
                return 3221226050LL;
LABEL_156:
              *a5 = (_DWORD)v11 - (_DWORD)v8;
              return 0LL;
            }
            v50 = *(unsigned __int16 *)a3;
            a3 += 2;
            v51 = v50;
            v52 = (v50 >> 3) + 1;
            v53 = v51 & 7;
            if ( v53 == 7 )
            {
              if ( v17 )
              {
                v55 = (unsigned __int64)*v17 >> 4;
                v54 = 0LL;
              }
              else
              {
                if ( (unsigned __int64)a3 >= v12 )
                  return 3221226050LL;
                v54 = a3++;
                v55 = *v54 & 0xF;
              }
              v59 = v54;
              if ( v55 == 15 )
              {
                if ( (unsigned __int64)a3 >= v12 )
                  return 3221226050LL;
                v56 = *a3++;
                if ( v56 == 255 )
                {
                  if ( (unsigned __int64)(a3 + 1) >= v12 )
                    return 3221226050LL;
                  v57 = *(unsigned __int16 *)a3;
                  a3 += 2;
                  if ( !v57 )
                  {
                    if ( (unsigned __int64)(a3 + 3) >= v12 )
                      return 3221226050LL;
                    v57 = *(unsigned int *)a3;
                    a3 += 4;
                  }
                  if ( v57 < 0x16 || &v11[v57 + 3] < v11 )
                    return 3221226050LL;
                  v56 = v57 - 22;
                }
                v55 = v56 + 15;
              }
              v53 = v55 + 7;
            }
            v58 = v53 + 3;
            if ( &v11[-v52] < v8 || (unsigned __int64)&v11[v58] > v36 )
              return 3221226050LL;
            qmemcpy(v11, &v11[-v52], v58);
            v17 = v59;
            v11 += v58;
LABEL_128:
            if ( v21 >= 0 )
            {
              v21 *= 2;
              goto LABEL_124;
            }
LABEL_119:
            v21 *= 2;
          }
          while ( v21 );
          if ( (unsigned __int64)(a3 + 3) >= v12 )
            return 3221226050LL;
          v18 = *(_DWORD *)a3;
          a3 += 4;
        }
LABEL_124:
        if ( v21 < 0 )
        {
          if ( (unsigned __int64)a3 < v12 && (unsigned __int64)v11 < v36 )
          {
            *v11++ = *a3++;
            goto LABEL_119;
          }
        }
        else
        {
          v21 *= 2;
          if ( (unsigned __int64)(a3 + 2) <= v12 && (unsigned __int64)(v11 + 2) <= v36 )
          {
            v49 = *(_WORD *)a3;
            a3 += 2;
            *(_WORD *)v11 = v49;
            v11 += 2;
            goto LABEL_128;
          }
        }
        return 3221226050LL;
      }
      XpressCallback = RtlpMakeXpressCallback(v61, v15, v11, a4);
      v8 = a1;
      v16 = XpressCallback;
    }
    v20 = v18 < 0;
    v21 = 2 * v18 + 1;
    if ( !v20 )
      goto LABEL_14;
    while ( 1 )
    {
      v22 = *(unsigned __int16 *)a3;
      a3 += 2;
      v23 = v22;
      v24 = (v22 >> 3) + 1;
      v25 = v23 & 7;
      if ( v25 == 7 )
      {
        if ( v17 )
        {
          v27 = (unsigned __int64)*v17 >> 4;
          v26 = 0LL;
        }
        else
        {
          v26 = a3++;
          v27 = *v26 & 0xF;
        }
        v59 = v26;
        if ( v27 == 15 )
        {
          if ( (unsigned __int64)(a3 + 7) >= v14 )
            goto LABEL_72;
          v28 = *a3++;
          if ( v28 == 255 )
          {
            v29 = *(unsigned __int16 *)a3;
            a3 += 2;
            if ( !v29 )
            {
              v29 = *(unsigned int *)a3;
              a3 += 4;
            }
            if ( v29 < 0x16 || &v11[v29 + 3] < v11 )
              return 3221226050LL;
            v28 = v29 - 22;
          }
          v27 = v28 + 15;
        }
        v25 = v27 + 7;
      }
      v30 = v25 + 3;
      v31 = &v11[-v24];
      if ( &v11[-v24] < v8 )
        return 3221226050LL;
      if ( v24 < 4 )
        break;
LABEL_45:
      *(_DWORD *)v11 = *(_DWORD *)v31;
      *((_DWORD *)v11 + 1) = *((_DWORD *)v31 + 1);
      if ( v30 >= 9 )
      {
        v11 += 8;
        v35 = v31 + 8;
        for ( v30 -= 8LL; ; v30 -= 16LL )
        {
          if ( (unsigned __int64)v11 >= v16 )
          {
            if ( (unsigned __int64)v11 >= v15 )
              goto LABEL_57;
            v16 = RtlpMakeXpressCallback(v61, v15, v11, a4);
          }
          *(_DWORD *)v11 = *v35;
          *((_DWORD *)v11 + 1) = v35[1];
          *((_DWORD *)v11 + 2) = v35[2];
          *((_DWORD *)v11 + 3) = v35[3];
          if ( v30 < 17 )
            break;
          v11 += 16;
          v35 += 4;
        }
        v8 = a1;
      }
      v11 += v30;
LABEL_54:
      v17 = v59;
      if ( v21 >= 0 )
      {
        for ( v21 *= 2; ; v21 *= 2 )
        {
LABEL_14:
          if ( v21 < 0 )
          {
            *v11++ = *a3++;
            break;
          }
          v20 = (v21 & 0x40000000) != 0;
          v21 *= 2;
          if ( v20 )
          {
            *(_WORD *)v11 = *(_WORD *)a3;
            v11 += 2;
            a3 += 2;
            break;
          }
          v20 = (v21 & 0x40000000) != 0;
          v21 *= 2;
          *(_DWORD *)v11 = *(_DWORD *)a3;
          if ( v20 )
          {
            v11 += 3;
            a3 += 3;
            break;
          }
          v11 += 4;
          a3 += 4;
          v20 = (v21 & 0x40000000) != 0;
          v21 *= 2;
          if ( v20 )
            break;
        }
      }
      v21 *= 2;
      if ( !v21 )
        goto LABEL_9;
    }
    *v11 = *v31;
    v32 = v24 - 1;
    if ( v32 )
    {
      v11[1] = v31[1];
      if ( v32 == 1 )
      {
        v11 += 2;
        v34 = -2LL;
        goto LABEL_44;
      }
      v33 = v31[2];
    }
    else
    {
      v11[1] = *v31;
      v33 = *v31;
    }
    v11[2] = v33;
    v34 = -3LL;
    v11 += 3;
LABEL_44:
    v30 += v34;
    if ( !v30 )
      goto LABEL_54;
    goto LABEL_45;
  }
  while ( 1 )
  {
    if ( (unsigned __int64)v11 >= v16 )
    {
      if ( (unsigned __int64)v11 >= v15 )
        goto LABEL_122;
      v37 = RtlpMakeXpressCallback(v61, v15, v11, a4);
      v8 = a1;
      v16 = v37;
    }
    v20 = v18 < 0;
    v21 = 2 * v18 + 1;
    if ( v20 )
      break;
    while ( 1 )
    {
      if ( v21 < 0 )
      {
        if ( (unsigned __int64)a3 >= v12 )
          return 3221226050LL;
        *v11++ = *a3++;
        goto LABEL_114;
      }
      v20 = (v21 & 0x40000000) != 0;
      v21 *= 2;
      if ( v20 )
      {
        if ( (unsigned __int64)(a3 + 1) >= v12 )
          return 3221226050LL;
        *(_WORD *)v11 = *(_WORD *)a3;
        v11 += 2;
        a3 += 2;
        goto LABEL_114;
      }
      v20 = (v21 & 0x40000000) != 0;
      v21 *= 2;
      if ( v20 )
        break;
      v21 *= 2;
      if ( (unsigned __int64)(a3 + 3) >= v12 )
        return 3221226050LL;
      *(_DWORD *)v11 = *(_DWORD *)a3;
      v11 += 4;
      a3 += 4;
LABEL_101:
      if ( v21 < 0 )
        goto LABEL_114;
      v21 *= 2;
    }
    if ( (unsigned __int64)(a3 + 2) >= v12 )
      return 3221226050LL;
    *(_WORD *)v11 = *(_WORD *)a3;
    v11[2] = a3[2];
    v11 += 3;
    a3 += 3;
LABEL_114:
    v17 = v59;
    v21 *= 2;
    if ( v21 )
      break;
    if ( (unsigned __int64)(a3 + 3) >= v12 )
      return 3221226050LL;
    v18 = *(_DWORD *)a3;
    a3 += 4;
  }
  if ( a3 == (unsigned __int8 *)v12 )
    goto LABEL_59;
  if ( (unsigned __int64)(a3 + 1) >= v12 )
  {
    v36 = (unsigned __int64)v60;
    if ( v11 >= v60 )
      goto LABEL_128;
    return 3221226050LL;
  }
  v38 = *(unsigned __int16 *)a3;
  a3 += 2;
  v39 = v38;
  v24 = (v38 >> 3) + 1;
  v40 = v39 & 7;
  if ( v40 == 7 )
  {
    if ( v17 )
    {
      v42 = (unsigned __int64)*v17 >> 4;
      v41 = 0LL;
    }
    else
    {
      if ( (unsigned __int64)a3 >= v12 )
        return 3221226050LL;
      v41 = a3++;
      v42 = *v41 & 0xF;
    }
    v59 = v41;
    if ( v42 == 15 )
    {
LABEL_72:
      if ( (unsigned __int64)a3 >= v12 )
        return 3221226050LL;
      v43 = *a3++;
      if ( v43 == 255 )
      {
        if ( (unsigned __int64)(a3 + 1) >= v12 )
          return 3221226050LL;
        v44 = *(unsigned __int16 *)a3;
        a3 += 2;
        if ( !v44 )
        {
          if ( (unsigned __int64)(a3 + 3) >= v12 )
            return 3221226050LL;
          v44 = *(unsigned int *)a3;
          a3 += 4;
        }
        if ( v44 < 0x16 || &v11[v44 + 3] < v11 )
          return 3221226050LL;
        v43 = v44 - 22;
      }
      v42 = v43 + 15;
    }
    v40 = v42 + 7;
  }
  v30 = v40 + 3;
  v45 = &v11[-v24];
  if ( &v11[-v24] < v8 )
    return 3221226050LL;
  if ( v24 >= 4 )
    goto LABEL_92;
  *v11 = *v45;
  v46 = v24 - 1;
  if ( v46 )
  {
    v11[1] = v45[1];
    if ( v46 == 1 )
    {
      v11 += 2;
      v48 = -2LL;
      goto LABEL_91;
    }
    v47 = v45[2];
  }
  else
  {
    v11[1] = *v45;
    v47 = *v45;
  }
  v11[2] = v47;
  v48 = -3LL;
  v11 += 3;
LABEL_91:
  v30 += v48;
  if ( !v30 )
    goto LABEL_101;
LABEL_92:
  *(_DWORD *)v11 = *(_DWORD *)v45;
  *((_DWORD *)v11 + 1) = *((_DWORD *)v45 + 1);
  if ( v30 < 9 )
  {
LABEL_100:
    v11 += v30;
    goto LABEL_101;
  }
  v11 += 8;
  v35 = v45 + 8;
  for ( v30 -= 8LL; ; v30 -= 16LL )
  {
    if ( (unsigned __int64)v11 < v16 )
      goto LABEL_97;
    if ( (unsigned __int64)v11 >= v15 )
      break;
    v16 = RtlpMakeXpressCallback(v61, v15, v11, a4);
LABEL_97:
    *(_DWORD *)v11 = *v35;
    *((_DWORD *)v11 + 1) = v35[1];
    *((_DWORD *)v11 + 2) = v35[2];
    *((_DWORD *)v11 + 3) = v35[3];
    if ( v30 < 17 )
    {
      v8 = a1;
      goto LABEL_100;
    }
    v11 += 16;
    v35 += 4;
  }
LABEL_57:
  if ( &v11[v30] <= v60 )
  {
    v8 = a1;
    qmemcpy(v11, v35, v30);
    v17 = v59;
    v11 += v30;
LABEL_59:
    v36 = (unsigned __int64)v60;
    goto LABEL_128;
  }
  return 3221226050LL;
}
