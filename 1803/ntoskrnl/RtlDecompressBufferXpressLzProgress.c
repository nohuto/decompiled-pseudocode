/*
 * XREFs of RtlDecompressBufferXpressLzProgress @ 0x140291EE0
 * Callers:
 *     RtlDecompressBufferProgress @ 0x14029184C (RtlDecompressBufferProgress.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x14014ED2C (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlDecompressBufferXpressLzProgress(
        _BYTE *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned int a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int8 *v7; // rbx
  _BYTE *v8; // r10
  unsigned int v9; // esi
  _BYTE *v11; // rdi
  unsigned __int64 v12; // rbp
  _BYTE *v13; // r15
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r8
  unsigned __int8 *v17; // rdx
  int v18; // esi
  unsigned __int8 *v19; // rcx
  unsigned __int64 XpressCallback; // rax
  int v21; // r14d
  bool v22; // sf
  unsigned __int64 v23; // rcx
  char v24; // r15
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r15
  unsigned __int8 *v27; // rax
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // r15
  unsigned __int8 *v31; // rax
  unsigned __int64 v32; // rdx
  signed __int64 v33; // r15
  _BYTE *v34; // rsi
  unsigned __int64 v35; // rcx
  char v36; // al
  __int64 v37; // rax
  _DWORD *v38; // rsi
  unsigned __int64 v39; // r15
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rcx
  char v42; // r15
  unsigned __int64 v43; // r15
  unsigned __int8 *v44; // rax
  unsigned __int64 v45; // r15
  unsigned __int64 v46; // r15
  unsigned __int64 v47; // r15
  _BYTE *v48; // rsi
  unsigned __int64 v49; // rcx
  char v50; // al
  __int64 v51; // rax
  __int16 v52; // ax
  unsigned __int64 v53; // rdx
  char v54; // cl
  __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  unsigned __int8 *v57; // rax
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // rcx
  unsigned __int8 *v62; // [rsp+20h] [rbp-58h]
  _BYTE *v63; // [rsp+28h] [rbp-50h]
  _QWORD v64[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v65; // [rsp+40h] [rbp-38h]

  v7 = a3;
  v8 = a1;
  v9 = 4096;
  if ( a4 < 5 )
    return 3221226050LL;
  v11 = a1;
  v12 = (unsigned __int64)&a3[a4];
  v13 = &a1[a2];
  v63 = v13;
  v14 = v12 - 86;
  v15 = (unsigned __int64)(v13 - 352);
  if ( !a6 || a2 < 0x1000 )
    v9 = a2;
  v16 = (unsigned __int64)&a1[v9];
  v64[0] = a6;
  v64[1] = a7;
  v65 = v9;
  if ( v15 < v16 )
    v16 = (unsigned __int64)(v13 - 352);
  v17 = 0LL;
  v62 = 0LL;
LABEL_9:
  v18 = *(_DWORD *)v7;
  v19 = v7;
  v7 += 4;
  if ( (unsigned __int64)v7 < v14 )
  {
    if ( (unsigned __int64)v11 >= v16 )
    {
      if ( (unsigned __int64)v11 >= v15 )
      {
LABEL_124:
        v39 = (unsigned __int64)v63;
        while ( 1 )
        {
          v21 = 2 * v18 + 1;
          if ( v18 >= 0 )
            break;
          do
          {
            if ( v7 == (unsigned __int8 *)v12 )
              goto LABEL_158;
            if ( (unsigned __int64)(v7 + 1) >= v12 )
            {
              if ( (unsigned __int64)v11 < v39 )
                return 3221226050LL;
LABEL_158:
              *a5 = (_DWORD)v11 - (_DWORD)v8;
              return 0LL;
            }
            v53 = *(unsigned __int16 *)v7;
            v7 += 2;
            v54 = v53;
            v55 = (v53 >> 3) + 1;
            v56 = v54 & 7;
            if ( v56 == 7 )
            {
              if ( v62 )
              {
                v58 = (unsigned __int64)*v62 >> 4;
                v62 = 0LL;
              }
              else
              {
                if ( (unsigned __int64)v7 >= v12 )
                  return 3221226050LL;
                v57 = v7;
                v62 = v7++;
                v58 = *v57 & 0xF;
              }
              if ( v58 == 15 )
              {
                if ( (unsigned __int64)v7 >= v12 )
                  return 3221226050LL;
                v59 = *v7++;
                if ( v59 == 255 )
                {
                  if ( (unsigned __int64)(v7 + 1) >= v12 )
                    return 3221226050LL;
                  v60 = *(unsigned __int16 *)v7;
                  v7 += 2;
                  if ( !v60 )
                  {
                    if ( (unsigned __int64)(v7 + 3) >= v12 )
                      return 3221226050LL;
                    v60 = *(unsigned int *)v7;
                    v7 += 4;
                  }
                  if ( v60 < 0x16 || &v11[v60 + 3] < v11 )
                    return 3221226050LL;
                  v59 = v60 - 22;
                }
                v58 = v59 + 15;
              }
              v56 = v58 + 7;
            }
            v61 = v56 + 3;
            if ( &v11[-v55] < v8 || (unsigned __int64)&v11[v61] > v39 )
              return 3221226050LL;
            qmemcpy(v11, &v11[-v55], v61);
            v11 += v61;
LABEL_130:
            if ( v21 >= 0 )
            {
              v21 *= 2;
              goto LABEL_126;
            }
LABEL_121:
            v21 *= 2;
          }
          while ( v21 );
          if ( (unsigned __int64)(v7 + 3) >= v12 )
            return 3221226050LL;
          v18 = *(_DWORD *)v7;
          v7 += 4;
        }
LABEL_126:
        if ( v21 < 0 )
        {
          if ( (unsigned __int64)v7 < v12 && (unsigned __int64)v11 < v39 )
          {
            *v11++ = *v7++;
            goto LABEL_121;
          }
        }
        else
        {
          v21 *= 2;
          if ( (unsigned __int64)(v7 + 2) <= v12 && (unsigned __int64)(v11 + 2) <= v39 )
          {
            v52 = *(_WORD *)v7;
            v7 += 2;
            *(_WORD *)v11 = v52;
            v11 += 2;
            goto LABEL_130;
          }
        }
        return 3221226050LL;
      }
      XpressCallback = RtlpMakeXpressCallback((__int64)v64, v15, (__int64)v11);
      v17 = v62;
      v16 = XpressCallback;
      v8 = a1;
    }
    v21 = 2 * v18 + 1;
    if ( v18 >= 0 )
      goto LABEL_14;
    while ( 1 )
    {
      v23 = *(unsigned __int16 *)v7;
      v7 += 2;
      v24 = v23;
      v25 = (v23 >> 3) + 1;
      v26 = v24 & 7;
      if ( v26 == 7 )
      {
        if ( v17 )
        {
          v28 = (unsigned __int64)*v17 >> 4;
          v27 = 0LL;
        }
        else
        {
          v27 = v7++;
          v28 = *v27 & 0xF;
        }
        v62 = v27;
        if ( v28 == 15 )
        {
          if ( (unsigned __int64)(v7 + 7) >= v14 )
            goto LABEL_74;
          v29 = *v7++;
          if ( v29 == 255 )
          {
            v30 = *(unsigned __int16 *)v7;
            v31 = v7 + 2;
            v32 = v30;
            if ( !*(_WORD *)v7 )
              v30 = *(unsigned int *)v31;
            v7 += 6;
            if ( v32 )
              v7 = v31;
            if ( v30 < 0x16 || &v11[v30 + 3] < v11 )
              return 3221226050LL;
            v29 = v30 - 22;
          }
          v28 = v29 + 15;
        }
        v26 = v28 + 7;
      }
      v33 = v26 + 3;
      v34 = &v11[-v25];
      if ( &v11[-v25] < v8 )
        return 3221226050LL;
      if ( v25 < 4 )
        break;
LABEL_47:
      *(_DWORD *)v11 = *(_DWORD *)v34;
      *((_DWORD *)v11 + 1) = *((_DWORD *)v34 + 1);
      if ( v33 >= 9 )
      {
        v11 += 8;
        v38 = v34 + 8;
        for ( v33 -= 8LL; ; v33 -= 16LL )
        {
          if ( (unsigned __int64)v11 >= v16 )
          {
            if ( (unsigned __int64)v11 >= v15 )
              goto LABEL_59;
            v16 = RtlpMakeXpressCallback((__int64)v64, v15, (__int64)v11);
          }
          *(_DWORD *)v11 = *v38;
          *((_DWORD *)v11 + 1) = v38[1];
          *((_DWORD *)v11 + 2) = v38[2];
          *((_DWORD *)v11 + 3) = v38[3];
          if ( v33 < 17 )
            break;
          v11 += 16;
          v38 += 4;
        }
        v8 = a1;
      }
      v11 += v33;
LABEL_56:
      v17 = v62;
      if ( v21 >= 0 )
      {
        for ( v21 *= 2; ; v21 *= 2 )
        {
LABEL_14:
          if ( v21 < 0 )
          {
            *v11++ = *v7++;
            break;
          }
          v22 = (v21 & 0x40000000) != 0;
          v21 *= 2;
          if ( v22 )
          {
            *(_WORD *)v11 = *(_WORD *)v7;
            v11 += 2;
            v7 += 2;
            break;
          }
          v22 = (v21 & 0x40000000) != 0;
          v21 *= 2;
          *(_DWORD *)v11 = *(_DWORD *)v7;
          if ( v22 )
          {
            v11 += 3;
            v7 += 3;
            break;
          }
          v11 += 4;
          v7 += 4;
          v22 = (v21 & 0x40000000) != 0;
          v21 *= 2;
          if ( v22 )
            break;
        }
      }
      v21 *= 2;
      if ( !v21 )
        goto LABEL_9;
    }
    *v11 = *v34;
    v35 = v25 - 1;
    if ( v35 )
    {
      v11[1] = v34[1];
      if ( v35 == 1 )
      {
        v11 += 2;
        v37 = -2LL;
        goto LABEL_46;
      }
      v36 = v34[2];
    }
    else
    {
      v11[1] = *v34;
      v36 = *v34;
    }
    v11[2] = v36;
    v37 = -3LL;
    v11 += 3;
LABEL_46:
    v33 += v37;
    if ( !v33 )
      goto LABEL_56;
    goto LABEL_47;
  }
  while ( 1 )
  {
    v7 = v19 + 4;
    if ( (unsigned __int64)v11 >= v16 )
    {
      if ( (unsigned __int64)v11 >= v15 )
        goto LABEL_124;
      v40 = RtlpMakeXpressCallback((__int64)v64, v15, (__int64)v11);
      v17 = v62;
      v16 = v40;
      v8 = a1;
    }
    v21 = 2 * v18 + 1;
    if ( v18 < 0 )
      break;
    while ( 1 )
    {
      if ( v21 < 0 )
      {
        if ( (unsigned __int64)v7 >= v12 )
          return 3221226050LL;
        *v11++ = *v7++;
        goto LABEL_116;
      }
      v22 = (v21 & 0x40000000) != 0;
      v21 *= 2;
      if ( v22 )
      {
        if ( (unsigned __int64)(v7 + 1) >= v12 )
          return 3221226050LL;
        *(_WORD *)v11 = *(_WORD *)v7;
        v11 += 2;
        v7 += 2;
        goto LABEL_116;
      }
      v22 = (v21 & 0x40000000) != 0;
      v21 *= 2;
      if ( v22 )
        break;
      v21 *= 2;
      if ( (unsigned __int64)(v7 + 3) >= v12 )
        return 3221226050LL;
      *(_DWORD *)v11 = *(_DWORD *)v7;
      v11 += 4;
      v7 += 4;
LABEL_103:
      if ( v21 < 0 )
        goto LABEL_116;
      v21 *= 2;
    }
    if ( (unsigned __int64)(v7 + 2) >= v12 )
      return 3221226050LL;
    *(_WORD *)v11 = *(_WORD *)v7;
    v11[2] = v7[2];
    v11 += 3;
    v7 += 3;
LABEL_116:
    v17 = v62;
    v19 = v7;
    v21 *= 2;
    if ( v21 )
      break;
    if ( (unsigned __int64)(v7 + 3) >= v12 )
      return 3221226050LL;
    v18 = *(_DWORD *)v7;
  }
  if ( v7 == (unsigned __int8 *)v12 )
    goto LABEL_61;
  if ( (unsigned __int64)(v7 + 1) >= v12 )
  {
    v39 = (unsigned __int64)v63;
    if ( v11 >= v63 )
      goto LABEL_130;
    return 3221226050LL;
  }
  v41 = *(unsigned __int16 *)v7;
  v7 += 2;
  v42 = v41;
  v25 = (v41 >> 3) + 1;
  v43 = v42 & 7;
  if ( v43 == 7 )
  {
    if ( v17 )
    {
      v45 = (unsigned __int64)*v17 >> 4;
      v44 = 0LL;
    }
    else
    {
      if ( (unsigned __int64)v7 >= v12 )
        return 3221226050LL;
      v44 = v7++;
      v45 = *v44 & 0xF;
    }
    v62 = v44;
    if ( v45 == 15 )
    {
LABEL_74:
      if ( (unsigned __int64)v7 >= v12 )
        return 3221226050LL;
      v46 = *v7++;
      if ( v46 == 255 )
      {
        if ( (unsigned __int64)(v7 + 1) >= v12 )
          return 3221226050LL;
        v47 = *(unsigned __int16 *)v7;
        v7 += 2;
        if ( !v47 )
        {
          if ( (unsigned __int64)(v7 + 3) >= v12 )
            return 3221226050LL;
          v47 = *(unsigned int *)v7;
          v7 += 4;
        }
        if ( v47 < 0x16 || &v11[v47 + 3] < v11 )
          return 3221226050LL;
        v46 = v47 - 22;
      }
      v45 = v46 + 15;
    }
    v43 = v45 + 7;
  }
  v33 = v43 + 3;
  v48 = &v11[-v25];
  if ( &v11[-v25] < v8 )
    return 3221226050LL;
  if ( v25 >= 4 )
    goto LABEL_94;
  *v11 = *v48;
  v49 = v25 - 1;
  if ( v49 )
  {
    v11[1] = v48[1];
    if ( v49 == 1 )
    {
      v11 += 2;
      v51 = -2LL;
      goto LABEL_93;
    }
    v50 = v48[2];
  }
  else
  {
    v11[1] = *v48;
    v50 = *v48;
  }
  v11[2] = v50;
  v51 = -3LL;
  v11 += 3;
LABEL_93:
  v33 += v51;
  if ( !v33 )
    goto LABEL_103;
LABEL_94:
  *(_DWORD *)v11 = *(_DWORD *)v48;
  *((_DWORD *)v11 + 1) = *((_DWORD *)v48 + 1);
  if ( v33 < 9 )
  {
LABEL_102:
    v11 += v33;
    goto LABEL_103;
  }
  v11 += 8;
  v38 = v48 + 8;
  for ( v33 -= 8LL; ; v33 -= 16LL )
  {
    if ( (unsigned __int64)v11 < v16 )
      goto LABEL_99;
    if ( (unsigned __int64)v11 >= v15 )
      break;
    v16 = RtlpMakeXpressCallback((__int64)v64, v15, (__int64)v11);
LABEL_99:
    *(_DWORD *)v11 = *v38;
    *((_DWORD *)v11 + 1) = v38[1];
    *((_DWORD *)v11 + 2) = v38[2];
    *((_DWORD *)v11 + 3) = v38[3];
    if ( v33 < 17 )
    {
      v8 = a1;
      goto LABEL_102;
    }
    v11 += 16;
    v38 += 4;
  }
LABEL_59:
  if ( &v11[v33] <= v63 )
  {
    v8 = a1;
    qmemcpy(v11, v38, v33);
    v11 += v33;
LABEL_61:
    v39 = (unsigned __int64)v63;
    goto LABEL_130;
  }
  return 3221226050LL;
}
