/*
 * XREFs of RtlDecompressBufferXpressLzProgress @ 0x140137080
 * Callers:
 *     RtlDecompressBufferProgress @ 0x140137008 (RtlDecompressBufferProgress.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x140137838 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlDecompressBufferXpressLzProgress(
        _BYTE *a1,
        unsigned int a2,
        _BYTE *a3,
        unsigned int a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7)
{
  _BYTE *v7; // r15
  unsigned int v9; // esi
  _BYTE *v10; // rdi
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r9
  _BYTE *v14; // r12
  int v15; // ebx
  bool v16; // sf
  int v17; // ebx
  unsigned __int64 v18; // rcx
  char v19; // r14
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r14
  signed __int64 v22; // rdx
  signed __int64 v23; // r8
  _BYTE *v24; // rsi
  signed __int64 v25; // r14
  _DWORD *v26; // rsi
  unsigned __int64 v27; // r14
  __int64 v28; // r14
  unsigned __int64 v29; // rcx
  char v30; // al
  __int64 v31; // r14
  __int64 v32; // rax
  unsigned __int64 v33; // r11
  _BYTE *v34; // rax
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // rdx
  char v37; // cl
  __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  __int16 v41; // ax
  unsigned __int64 v42; // rcx
  __int64 v44; // rcx
  int v45; // eax
  unsigned __int64 v46; // rcx
  char v47; // r14
  unsigned __int64 v48; // r14
  signed __int64 v49; // rdx
  signed __int64 v50; // r8
  _BYTE *v51; // rsi
  unsigned __int64 v52; // r14
  __int64 v53; // r14
  __int64 v54; // r14
  char v55; // al
  __int64 XpressCallback; // rax
  __int64 v57; // rcx
  unsigned __int64 v58; // [rsp+28h] [rbp-50h]
  _BYTE *v59; // [rsp+30h] [rbp-48h]
  _QWORD v60[2]; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v61; // [rsp+48h] [rbp-30h]

  v7 = a3;
  v9 = 4096;
  if ( a4 < 5 )
    return 3221226050LL;
  v10 = a1;
  v59 = &a1[a2];
  v11 = (unsigned __int64)(v59 - 352);
  v58 = (unsigned __int64)&a3[a4];
  v12 = v58 - 86;
  if ( !a6 || a2 < 0x1000 )
    v9 = a2;
  v13 = (unsigned __int64)&a1[v9];
  v60[0] = a6;
  v60[1] = a7;
  v61 = v9;
  if ( v11 < v13 )
    v13 = (unsigned __int64)(v59 - 352);
  v14 = 0LL;
LABEL_7:
  v15 = *(_DWORD *)v7;
  v7 += 4;
  if ( (unsigned __int64)v7 >= v12 )
  {
    v35 = v58;
    while ( 1 )
    {
      if ( (unsigned __int64)v10 >= v13 )
      {
        if ( (unsigned __int64)v10 >= v11 )
          goto LABEL_93;
        XpressCallback = RtlpMakeXpressCallback(v60, v11, v10);
        v35 = v58;
        v13 = XpressCallback;
        v11 = (unsigned __int64)(v59 - 352);
      }
      v16 = v15 < 0;
      v17 = 2 * v15 + 1;
      if ( !v16 )
      {
        while ( 1 )
        {
          if ( v17 < 0 )
          {
            if ( (unsigned __int64)v7 < v35 )
            {
              *v10++ = *v7++;
              goto LABEL_111;
            }
            return 3221226050LL;
          }
          v16 = (v17 & 0x40000000) != 0;
          v17 *= 2;
          if ( v16 )
          {
            if ( (unsigned __int64)(v7 + 1) < v35 )
            {
              *(_WORD *)v10 = *(_WORD *)v7;
              v10 += 2;
              v7 += 2;
              goto LABEL_111;
            }
            return 3221226050LL;
          }
          v16 = (v17 & 0x40000000) != 0;
          v17 *= 2;
          if ( v16 )
            break;
          v17 *= 2;
          if ( (unsigned __int64)(v7 + 3) >= v35 )
            return 3221226050LL;
          v45 = *(_DWORD *)v7;
          v7 += 4;
          *(_DWORD *)v10 = v45;
          v10 += 4;
          if ( v17 < 0 )
            goto LABEL_111;
LABEL_104:
          v17 *= 2;
        }
        if ( (unsigned __int64)(v7 + 2) < v35 )
        {
          *(_WORD *)v10 = *(_WORD *)v7;
          v10[2] = v7[2];
          v10 += 3;
          v7 += 3;
          goto LABEL_111;
        }
        return 3221226050LL;
      }
      do
      {
        if ( v7 == (_BYTE *)v35 )
        {
          v33 = (unsigned __int64)v59;
          while ( 1 )
          {
LABEL_71:
            if ( v17 >= 0 )
            {
              v17 *= 2;
              goto LABEL_73;
            }
LABEL_64:
            while ( 1 )
            {
              v17 *= 2;
              if ( v17 )
                break;
              if ( (unsigned __int64)(v7 + 3) >= v35 )
                return 3221226050LL;
              v15 = *(_DWORD *)v7;
              v7 += 4;
LABEL_84:
              v16 = v15 < 0;
              v17 = 2 * v15 + 1;
              if ( v16 )
                break;
LABEL_73:
              while ( v17 >= 0 )
              {
                v17 *= 2;
                if ( (unsigned __int64)(v7 + 2) > v35 || (unsigned __int64)(v10 + 2) > v33 )
                  return 3221226050LL;
                v41 = *(_WORD *)v7;
                v7 += 2;
                *(_WORD *)v10 = v41;
                v10 += 2;
                if ( v17 < 0 )
                  goto LABEL_64;
                v17 *= 2;
              }
              if ( (unsigned __int64)v7 >= v35 || (unsigned __int64)v10 >= v33 )
                return 3221226050LL;
              *v10++ = *v7++;
            }
            if ( v7 == (_BYTE *)v35 )
              goto LABEL_88;
            if ( (unsigned __int64)(v7 + 1) >= v35 )
              break;
            v36 = *(unsigned __int16 *)v7;
            v7 += 2;
            v37 = v36;
            v38 = (v36 >> 3) + 1;
            v39 = v37 & 7;
            if ( v39 == 7 )
            {
              if ( v14 )
              {
                v42 = (unsigned __int64)(unsigned __int8)*v14 >> 4;
                v14 = 0LL;
              }
              else
              {
                if ( (unsigned __int64)v7 >= v35 )
                  return 3221226050LL;
                v14 = v7++;
                v42 = *v14 & 0xF;
              }
              if ( v42 == 15 )
              {
                if ( (unsigned __int64)v7 >= v35 )
                  return 3221226050LL;
                v44 = (unsigned __int8)*v7++;
                if ( v44 == 255 )
                {
                  if ( (unsigned __int64)(v7 + 1) >= v35 )
                    return 3221226050LL;
                  v57 = *(unsigned __int16 *)v7;
                  v7 += 2;
                  if ( !v57 )
                  {
                    if ( (unsigned __int64)(v7 + 3) >= v35 )
                      return 3221226050LL;
                    v57 = *(unsigned int *)v7;
                    v7 += 4;
                  }
                  if ( v57 < 22 || &v10[v57 + 3] < v10 )
                    return 3221226050LL;
                  v44 = v57 - 22;
                }
                v42 = v44 + 15;
              }
              v39 = v42 + 7;
            }
            v40 = v39 + 3;
            if ( &v10[-v38] < a1 || (unsigned __int64)&v10[v40] > v33 )
              return 3221226050LL;
            qmemcpy(v10, &v10[-v38], v40);
            v10 += v40;
          }
          if ( (unsigned __int64)v10 >= v33 )
          {
LABEL_88:
            *a5 = (_DWORD)v10 - (_DWORD)a1;
            return 0LL;
          }
          return 3221226050LL;
        }
        if ( (unsigned __int64)(v7 + 1) >= v35 )
        {
          v33 = (unsigned __int64)v59;
          if ( v10 >= v59 )
            goto LABEL_71;
          return 3221226050LL;
        }
        v46 = *(unsigned __int16 *)v7;
        v7 += 2;
        v47 = v46;
        v20 = (v46 >> 3) + 1;
        v48 = v47 & 7;
        if ( v48 == 7 )
        {
          if ( v14 )
          {
            v52 = (unsigned __int64)(unsigned __int8)*v14 >> 4;
            v14 = 0LL;
          }
          else
          {
            if ( (unsigned __int64)v7 >= v35 )
              return 3221226050LL;
            v14 = v7++;
            v52 = *v14 & 0xF;
          }
          if ( v52 == 15 )
          {
LABEL_126:
            if ( (unsigned __int64)v7 >= v35 )
              return 3221226050LL;
            v53 = (unsigned __int8)*v7++;
            if ( v53 == 255 )
            {
              if ( (unsigned __int64)(v7 + 1) >= v35 )
                return 3221226050LL;
              v54 = *(unsigned __int16 *)v7;
              v7 += 2;
              if ( !v54 )
              {
                if ( (unsigned __int64)(v7 + 3) >= v35 )
                  return 3221226050LL;
                v54 = *(unsigned int *)v7;
                v7 += 4;
              }
              if ( v54 < 22 || &v10[v54 + 3] < v10 )
                return 3221226050LL;
              v53 = v54 - 22;
            }
            v52 = v53 + 15;
          }
          v48 = v52 + 7;
        }
        v49 = v48;
        v50 = v48;
        v51 = &v10[-v20];
        v25 = v48 + 3;
        if ( &v10[-v20] < a1 )
          return 3221226050LL;
        if ( v20 < 4 )
        {
          *v10 = *v51;
          if ( v20 == 1 )
          {
            v25 = v49;
            v10[1] = *v51;
            v55 = *v51;
            goto LABEL_144;
          }
          v10[1] = v51[1];
          if ( v20 == 2 )
          {
            v25 -= 2LL;
            v10 += 2;
          }
          else
          {
            v55 = v51[2];
            v25 = v50;
LABEL_144:
            v10[2] = v55;
            v10 += 3;
          }
          if ( !v25 )
            goto LABEL_110;
        }
        *(_DWORD *)v10 = *(_DWORD *)v51;
        *((_DWORD *)v10 + 1) = *((_DWORD *)v51 + 1);
        if ( v25 >= 9 )
        {
          v10 += 8;
          v26 = v51 + 8;
          for ( v25 -= 8LL; ; v25 -= 16LL )
          {
            if ( (unsigned __int64)v10 >= v13 )
            {
              if ( (unsigned __int64)v10 >= v11 )
              {
                v33 = (unsigned __int64)v59;
                v34 = &v10[v25];
                if ( &v10[v25] <= v59 )
                {
LABEL_60:
                  v35 = v58;
                  qmemcpy(v10, v26, v25);
                  v10 = v34;
                  goto LABEL_71;
                }
                return 3221226050LL;
              }
              v13 = RtlpMakeXpressCallback(v60, v11, v10);
            }
            *(_DWORD *)v10 = *v26;
            *((_DWORD *)v10 + 1) = v26[1];
            *((_DWORD *)v10 + 2) = v26[2];
            *((_DWORD *)v10 + 3) = v26[3];
            if ( v25 < 17 )
            {
              v35 = v58;
              break;
            }
            v11 = (unsigned __int64)(v59 - 352);
            v10 += 16;
            v26 += 4;
          }
        }
        v10 += v25;
LABEL_110:
        if ( v17 >= 0 )
          goto LABEL_104;
LABEL_111:
        v11 = (unsigned __int64)(v59 - 352);
        v17 *= 2;
      }
      while ( v17 );
      if ( (unsigned __int64)(v7 + 3) >= v35 )
        return 3221226050LL;
      v15 = *(_DWORD *)v7;
      v7 += 4;
    }
  }
  if ( (unsigned __int64)v10 >= v13 )
  {
    if ( (unsigned __int64)v10 >= v11 )
    {
      v35 = v58;
LABEL_93:
      v33 = (unsigned __int64)v59;
      goto LABEL_84;
    }
    v32 = RtlpMakeXpressCallback(v60, v11, v10);
    v11 = (unsigned __int64)(v59 - 352);
    v13 = v32;
  }
  v16 = v15 < 0;
  v17 = 2 * v15 + 1;
  if ( !v16 )
    goto LABEL_20;
  while ( 1 )
  {
    v18 = *(unsigned __int16 *)v7;
    v7 += 2;
    v19 = v18;
    v20 = (v18 >> 3) + 1;
    v21 = v19 & 7;
    if ( v21 == 7 )
    {
      if ( v14 )
      {
        v27 = (unsigned __int64)(unsigned __int8)*v14 >> 4;
        v14 = 0LL;
      }
      else
      {
        v14 = v7++;
        v27 = *v14 & 0xF;
      }
      if ( v27 == 15 )
      {
        if ( (unsigned __int64)(v7 + 7) >= v12 )
        {
          v35 = v58;
          goto LABEL_126;
        }
        v28 = (unsigned __int8)*v7++;
        if ( v28 == 255 )
        {
          v31 = *(unsigned __int16 *)v7;
          v7 += 2;
          if ( !v31 )
          {
            v31 = *(unsigned int *)v7;
            v7 += 4;
          }
          if ( v31 < 22 || &v10[v31 + 3] < v10 )
            return 3221226050LL;
          v28 = v31 - 22;
        }
        v27 = v28 + 15;
      }
      v21 = v27 + 7;
    }
    v22 = v21;
    v23 = v21;
    v24 = &v10[-v20];
    v25 = v21 + 3;
    if ( &v10[-v20] < a1 )
      return 3221226050LL;
    if ( v20 >= 4 )
      break;
    *v10 = *v24;
    v29 = v20 - 1;
    if ( v29 )
    {
      v10[1] = v24[1];
      if ( v29 == 1 )
      {
        v25 -= 2LL;
        v10 += 2;
        goto LABEL_44;
      }
      v30 = v24[2];
      v25 = v23;
    }
    else
    {
      v25 = v22;
      v10[1] = *v24;
      v30 = *v24;
    }
    v10[2] = v30;
    v10 += 3;
LABEL_44:
    if ( v25 )
      break;
LABEL_18:
    v11 = (unsigned __int64)(v59 - 352);
    if ( v17 >= 0 )
    {
      for ( v17 *= 2; ; v17 *= 2 )
      {
LABEL_20:
        if ( v17 < 0 )
        {
          *v10++ = *v7++;
          goto LABEL_12;
        }
        v16 = (v17 & 0x40000000) != 0;
        v17 *= 2;
        if ( v16 )
        {
          *(_WORD *)v10 = *(_WORD *)v7;
          v10 += 2;
          v7 += 2;
          goto LABEL_12;
        }
        v16 = (v17 & 0x40000000) != 0;
        v17 *= 2;
        *(_DWORD *)v10 = *(_DWORD *)v7;
        if ( v16 )
          break;
        v10 += 4;
        v7 += 4;
        v16 = (v17 & 0x40000000) != 0;
        v17 *= 2;
        if ( v16 )
          goto LABEL_12;
      }
      v10 += 3;
      v7 += 3;
    }
LABEL_12:
    v17 *= 2;
    if ( !v17 )
      goto LABEL_7;
  }
  *(_DWORD *)v10 = *(_DWORD *)v24;
  *((_DWORD *)v10 + 1) = *((_DWORD *)v24 + 1);
  if ( v25 < 9 )
  {
LABEL_17:
    v10 += v25;
    goto LABEL_18;
  }
  v10 += 8;
  v26 = v24 + 8;
  v25 -= 8LL;
  while ( 2 )
  {
    if ( (unsigned __int64)v10 < v13 )
    {
LABEL_27:
      *(_DWORD *)v10 = *v26;
      *((_DWORD *)v10 + 1) = v26[1];
      *((_DWORD *)v10 + 2) = v26[2];
      *((_DWORD *)v10 + 3) = v26[3];
      if ( v25 < 17 )
        goto LABEL_17;
      v11 = (unsigned __int64)(v59 - 352);
      v10 += 16;
      v26 += 4;
      v25 -= 16LL;
      continue;
    }
    break;
  }
  if ( (unsigned __int64)v10 < v11 )
  {
    v13 = RtlpMakeXpressCallback(v60, v11, v10);
    goto LABEL_27;
  }
  v33 = (unsigned __int64)v59;
  v34 = &v10[v25];
  if ( &v10[v25] <= v59 )
    goto LABEL_60;
  return 3221226050LL;
}
