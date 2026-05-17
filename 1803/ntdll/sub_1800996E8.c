/*
 * XREFs of sub_1800996E8 @ 0x1800996E8
 * Callers:
 *     sub_180099634 @ 0x180099634 (sub_180099634.c)
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     iswctype @ 0x18008EA80 (iswctype.c)
 *     sub_18009924C @ 0x18009924C (sub_18009924C.c)
 *     sub_180099480 @ 0x180099480 (sub_180099480.c)
 *     sub_180099698 @ 0x180099698 (sub_180099698.c)
 *     sub_18009A10C @ 0x18009A10C (sub_18009A10C.c)
 *     sub_18009A150 @ 0x18009A150 (sub_18009A150.c)
 */

__int64 __fastcall sub_1800996E8(__int64 a1, wint_t *a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned __int16 *v4; // r15
  int v5; // edi
  __int64 v6; // r14
  unsigned int v8; // r14d
  wint_t v9; // ax
  int v10; // esi
  unsigned int v11; // ecx
  unsigned __int16 v12; // ax
  int v13; // r11d
  int v14; // r10d
  char v15; // r9
  char v16; // r8
  char v17; // si
  char v18; // r13
  int v19; // r14d
  int v20; // edx
  unsigned __int16 *v21; // rax
  unsigned __int16 v22; // ax
  unsigned __int16 *v23; // rcx
  unsigned __int16 *v24; // rcx
  unsigned __int16 v25; // ax
  __int64 v26; // rcx
  unsigned __int64 Src; // r9
  char v28; // r8
  unsigned int *v29; // r13
  _BYTE *v30; // rdx
  unsigned int *v31; // rcx
  char v32; // r12
  int v33; // r14d
  unsigned __int16 v34; // ax
  int v35; // eax
  int v36; // eax
  char v37; // cl
  int v38; // eax
  __int64 v39; // r13
  int v40; // esi
  int v41; // esi
  unsigned __int16 v42; // ax
  int v43; // r9d
  int v44; // r8d
  unsigned __int16 v45; // ax
  int v46; // r13d
  int v47; // esi
  __int64 v48; // rcx
  unsigned __int16 v49; // ax
  unsigned __int16 v50; // ax
  wchar_t v51; // dx
  __int64 v52; // rcx
  unsigned __int16 v53; // ax
  __int64 v54; // rax
  int v55; // esi
  int v56; // ecx
  wchar_t v57; // dx
  int v58; // ecx
  unsigned __int16 v59; // ax
  char v60; // al
  char v61; // cl
  char v62; // al
  int v63; // eax
  unsigned __int16 v64; // ax
  wint_t v65; // ax
  __int64 v66; // rdx
  int v67; // eax
  int v68; // [rsp+50h] [rbp-49h] BYREF
  int v69; // [rsp+54h] [rbp-45h] BYREF
  char v70; // [rsp+58h] [rbp-41h]
  char v71; // [rsp+59h] [rbp-40h]
  char v72; // [rsp+5Ah] [rbp-3Fh]
  int v73; // [rsp+5Ch] [rbp-3Dh]
  int v74; // [rsp+60h] [rbp-39h]
  int v75; // [rsp+64h] [rbp-35h]
  int v76; // [rsp+68h] [rbp-31h]
  int v77; // [rsp+6Ch] [rbp-2Dh]
  unsigned int v78; // [rsp+74h] [rbp-25h] BYREF
  int v79; // [rsp+78h] [rbp-21h]
  __int64 v80; // [rsp+80h] [rbp-19h]
  unsigned int *v81; // [rsp+88h] [rbp-11h]
  _BYTE *v82; // [rsp+90h] [rbp-9h]
  __int64 v83[11]; // [rsp+98h] [rbp-1h] BYREF
  unsigned __int16 *v85; // [rsp+108h] [rbp+6Fh] BYREF
  unsigned int *v86; // [rsp+110h] [rbp+77h]
  char v87; // [rsp+118h] [rbp+7Fh]

  v86 = (unsigned int *)a3;
  v3 = 0;
  v4 = a2;
  LOWORD(v68) = 0;
  LOWORD(v5) = 0;
  v74 = 0;
  v6 = a1;
  v81 = 0LL;
  if ( !a2 )
  {
    sub_18008B020();
    return 0xFFFFFFFFLL;
  }
  if ( !a1 )
  {
    v8 = -1;
LABEL_213:
    sub_18008B020();
    return v8;
  }
  v9 = *a2;
  v10 = 0;
  v71 = 0;
  v11 = 0;
  v69 = 0;
  v78 = 0;
  if ( !v9 )
    return v11;
  while ( 2 )
  {
    v83[0] = a3;
    if ( iswctype(v9, 8u) )
    {
      v69 = v10 - 1;
      v12 = sub_180099698(&v69, v6);
      if ( v12 != 0xFFFF )
        sub_18009A150(v12, v6);
      do
        ++v4;
      while ( iswctype(*v4, 8u) );
      goto LABEL_196;
    }
    if ( *v4 != 37 )
      goto LABEL_192;
    if ( v4[1] == 37 )
    {
      ++v4;
LABEL_192:
      v69 = v10 + 1;
      v64 = sub_18009A10C(v6);
      v5 = v64;
      LOWORD(v68) = v64;
      v65 = *v4++;
      v74 = v5;
      if ( v65 == (_WORD)v5 )
        goto LABEL_193;
      if ( (_WORD)v5 == 0xFFFF )
        break;
      v66 = v6;
      goto LABEL_208;
    }
    v76 = 0;
    v79 = 0;
    v13 = 0;
    v14 = 0;
    v72 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 1;
    v19 = 0;
    do
    {
      v85 = ++v4;
      v20 = *v4;
      if ( (v20 & 0xFF00) == 0 && (off_180156000[(unsigned __int8)*v4] & 4) != 0 )
      {
        ++v13;
        v14 = v20 + 2 * (5 * v14 - 24);
        continue;
      }
      switch ( v20 )
      {
        case '*':
          ++v15;
          break;
        case 'F':
          break;
        case 'I':
          v22 = v4[1];
          if ( v22 == 54 )
          {
            v23 = v4 + 2;
            if ( v4[2] == 52 )
            {
              v4 += 2;
              v85 = v23;
LABEL_35:
              ++v19;
              v80 = 0LL;
              break;
            }
          }
          if ( v22 == 51 )
          {
            v24 = v4 + 2;
            if ( v4[2] == 50 )
            {
              v4 += 2;
              v85 = v24;
              break;
            }
          }
          v25 = v22 - 88;
          if ( v25 <= 0x20u )
          {
            v26 = 0x100821001LL;
            if ( _bittest64(&v26, v25) )
              goto LABEL_35;
          }
          ++v19;
          v80 = 0LL;
          break;
        case 'L':
          ++v18;
          break;
        case 'N':
          break;
        case 'h':
          --v18;
          --v17;
          break;
        case 'l':
          v21 = v4 + 1;
          if ( v4[1] != 108 )
          {
            ++v18;
LABEL_29:
            ++v17;
            break;
          }
          ++v4;
          v85 = v21;
          goto LABEL_35;
        case 'w':
          goto LABEL_29;
        default:
          ++v16;
          break;
      }
    }
    while ( !v16 );
    v5 = v74;
    v87 = v15;
    Src = 0LL;
    v28 = v87;
    v70 = v18;
    v29 = (unsigned int *)v83[0];
    v77 = v19;
    v75 = v13;
    v73 = v14;
    if ( v87 )
    {
      v30 = 0LL;
      v82 = 0LL;
    }
    else
    {
      v30 = *(_BYTE **)v86;
      v82 = *(_BYTE **)v86;
    }
    v83[0] = (__int64)v30;
    v31 = v29 + 2;
    v32 = 0;
    if ( v87 )
    {
      v31 = v29;
      v29 = v81;
    }
    v86 = v31;
    if ( !v17 )
      v17 = ((*v4 - 67) & 0xFFEF) != 0 ? 1 : -1;
    v33 = *v4 | 0x20;
    if ( v33 == 110 )
      goto LABEL_63;
    if ( v33 == 99 || v33 == 123 )
    {
      ++v69;
      v34 = sub_18009A10C(a1);
    }
    else
    {
      v34 = sub_180099698(&v69, a1);
    }
    v31 = v86;
    v5 = v34;
    v28 = v87;
    v13 = v75;
    Src = 0LL;
    v30 = v82;
    v14 = v73;
    LOWORD(v68) = v34;
    v74 = v34;
    if ( v34 != 0xFFFF )
    {
LABEL_63:
      if ( v13 && !v14 )
      {
        if ( (_WORD)v5 == 0xFFFF )
          break;
        v66 = a1;
LABEL_208:
        sub_18009A150((unsigned __int16)v5, v66);
LABEL_209:
        v67 = 0;
        goto LABEL_210;
      }
      v81 = v29;
      if ( !v28 )
      {
        if ( ((v33 - 99) & 0xFFFFFFEF) == 0 || (v81 = v29, v86 = v31, v33 == 123) )
        {
          v30 = *(_BYTE **)v29;
          v29 += 2;
          v81 = v29;
          v82 = v30;
          v83[0] = (__int64)v30;
          v86 = v29 + 2;
          Src = *v29;
          if ( !*v29 )
          {
            v67 = 0;
            if ( v17 <= 0 )
              *v30 = 0;
            else
              *(_WORD *)v30 = 0;
LABEL_210:
            if ( (_WORD)v5 == 0xFFFF )
              break;
            if ( v67 == 1 )
            {
              v8 = v78;
              goto LABEL_213;
            }
            return v78;
          }
        }
      }
      if ( v33 > 112 )
      {
        if ( v33 == 115 )
        {
          v37 = 32;
          goto LABEL_179;
        }
        if ( v33 == 117 )
          goto LABEL_75;
        if ( v33 != 120 )
        {
          if ( v33 != 123 )
          {
LABEL_92:
            if ( *v4 == (_WORD)v5 )
            {
              --v71;
              if ( !v28 )
                v86 = v29;
              goto LABEL_190;
            }
            if ( (_WORD)v5 != 0xFFFF )
              sub_18009A150((unsigned __int16)v5, a1);
            v67 = 1;
            goto LABEL_210;
          }
          v37 = 64;
LABEL_179:
          v60 = v37 | 1;
          if ( !v13 )
            v60 = v37;
          v61 = v60 | 2;
          if ( v17 <= 0 )
            v61 = v60;
          v62 = v61 | 4;
          if ( !v28 )
            v62 = v61;
          if ( v33 == 123 )
          {
            v63 = sub_180099480(v62, &v85, (unsigned __int16 *)&v68, &v69, (void **)v83, v14, a1, Src, &v78);
            v4 = v85;
          }
          else
          {
            v63 = sub_18009924C(v62, 0LL, (unsigned __int16 *)&v68, &v69, (void **)v83, v14, a1, Src, &v78);
          }
          LOWORD(v5) = v68;
          if ( v63 )
            goto LABEL_209;
          v74 = (unsigned __int16)v68;
          goto LABEL_190;
        }
LABEL_80:
        if ( (_WORD)v5 == 45 )
        {
          v72 = 1;
        }
        else if ( (_WORD)v5 != 43 )
        {
          goto LABEL_100;
        }
        v73 = v14 - 1;
        if ( v14 != 1 || !v13 )
        {
          v39 = a1;
          v40 = ++v69;
          v45 = sub_18009A10C(a1);
          v5 = v45;
          LOWORD(v68) = v45;
          v74 = v45;
LABEL_101:
          if ( (_WORD)v5 == 48 )
          {
            v41 = v40 + 1;
            v69 = v41;
            v42 = sub_18009A10C(v39);
            v5 = v42;
            LOWORD(v68) = v42;
            v74 = v42;
            if ( ((v42 - 88) & 0xFFDF) == 0 )
            {
              v69 = v41 + 1;
              v49 = sub_18009A10C(v39);
              v43 = v75;
              v5 = v49;
              v44 = v73;
              v74 = v49;
              LOWORD(v68) = v49;
              if ( v75 )
              {
                v44 = v73 - 2;
                if ( v73 - 2 < 1 )
                  ++v32;
              }
              v33 = 120;
              goto LABEL_114;
            }
            v79 = 1;
            if ( v33 != 120 )
            {
              v43 = v75;
              v44 = v73;
              if ( v75 )
              {
                v44 = v73 - 1;
                if ( v73 == 1 )
                  ++v32;
              }
              v33 = 111;
              goto LABEL_114;
            }
            v69 = v41 - 1;
            if ( v42 != 0xFFFF )
              sub_18009A150(v42, v39);
            v5 = 48;
            v74 = 48;
            LOWORD(v68) = 48;
          }
LABEL_112:
          v44 = v73;
          goto LABEL_113;
        }
        v32 = 1;
LABEL_100:
        v39 = a1;
        v40 = v69;
        goto LABEL_101;
      }
      switch ( v33 )
      {
        case 'p':
          ++v77;
          v70 = 1;
          v80 = 0LL;
          goto LABEL_75;
        case 'c':
          v36 = v14 + 1;
          v37 = 16;
          if ( v13 )
            v36 = v14;
          v14 = v36;
          v38 = 1;
          if ( v13 )
            v38 = v13;
          v13 = v38;
          goto LABEL_179;
        case 'd':
          goto LABEL_75;
        case 'i':
          v33 = 100;
          goto LABEL_80;
      }
      if ( v33 != 110 )
      {
        if ( v33 != 111 )
          goto LABEL_92;
LABEL_75:
        if ( (_WORD)v5 == 45 )
        {
          v72 = 1;
LABEL_128:
          v73 = v14 - 1;
          if ( v14 == 1 && v13 )
          {
            v32 = 1;
            v44 = 0;
LABEL_113:
            v43 = v75;
LABEL_114:
            v46 = v69;
          }
          else
          {
            v46 = ++v69;
            v50 = sub_18009A10C(a1);
            v44 = v73;
            v5 = v50;
            v43 = v75;
            v74 = v50;
            LOWORD(v68) = v50;
          }
          if ( v77 )
          {
            if ( !v32 )
            {
              while ( 1 )
              {
                v47 = v44;
                if ( ((v33 - 112) & 0xFFFFFFF7) != 0 )
                {
                  if ( (v5 & 0xFF00) != 0 || (off_180156000[(unsigned __int8)v5] & 4) == 0 )
                    goto LABEL_142;
                  if ( v33 == 111 )
                  {
                    if ( (unsigned __int16)v5 >= 0x38u )
                      goto LABEL_142;
                    v48 = 8 * v80;
                  }
                  else
                  {
                    v48 = 10 * v80;
                  }
                }
                else
                {
                  if ( (v5 & 0xFF00) != 0 || (v51 = off_180156000[(unsigned __int8)v5], (v51 & 0x80u) == 0) )
                  {
LABEL_142:
                    v69 = v46 - 1;
                    if ( (_WORD)v5 != 0xFFFF )
                      sub_18009A150((unsigned __int16)v5, a1);
                    break;
                  }
                  v48 = 16 * v80;
                  if ( (v51 & 4) == 0 )
                  {
                    LOWORD(v5) = (v5 & 0xFFDF) - 7;
                    v74 = v5;
                    LOWORD(v68) = v5;
                  }
                }
                ++v79;
                v52 = (unsigned __int16)v5 + v48 - 48;
                v80 = v52;
                if ( v43 && v44 == 1 )
                  goto LABEL_145;
                v69 = ++v46;
                v53 = sub_18009A10C(a1);
                v43 = v75;
                v44 = v47 - 1;
                LOWORD(v68) = v53;
                v5 = v53;
                if ( !v75 )
                  v44 = v47;
                v74 = v53;
              }
            }
            v52 = v80;
LABEL_145:
            v54 = -v52;
            if ( !v72 )
              v54 = v52;
            v80 = v54;
          }
          else
          {
            if ( !v32 )
            {
              while ( 1 )
              {
                v55 = v44;
                if ( ((v33 - 112) & 0xFFFFFFF7) != 0 )
                {
                  if ( (v5 & 0xFF00) != 0 || (off_180156000[(unsigned __int8)v5] & 4) == 0 )
                    goto LABEL_165;
                  if ( v33 == 111 )
                  {
                    if ( (unsigned __int16)v5 >= 0x38u )
                      goto LABEL_165;
                    v56 = 8 * v76;
                  }
                  else
                  {
                    v56 = 10 * v76;
                  }
                }
                else
                {
                  if ( (v5 & 0xFF00) != 0 || (v57 = off_180156000[(unsigned __int8)v5], (v57 & 0x80u) == 0) )
                  {
LABEL_165:
                    v69 = v46 - 1;
                    if ( (_WORD)v5 != 0xFFFF )
                      sub_18009A150((unsigned __int16)v5, a1);
                    break;
                  }
                  v56 = 16 * v76;
                  if ( (v57 & 4) == 0 )
                  {
                    LOWORD(v5) = (v5 & 0xFFDF) - 7;
                    v74 = v5;
                    LOWORD(v68) = v5;
                  }
                }
                ++v79;
                v58 = (unsigned __int16)v5 + v56 - 48;
                v76 = v58;
                if ( v43 && v44 == 1 )
                  goto LABEL_168;
                v69 = ++v46;
                v59 = sub_18009A10C(a1);
                v43 = v75;
                v44 = v55 - 1;
                LOWORD(v68) = v59;
                v5 = v59;
                if ( !v75 )
                  v44 = v55;
                v74 = v59;
              }
            }
            v58 = v76;
LABEL_168:
            if ( v72 )
              v76 = -v58;
          }
          if ( !v79 )
            goto LABEL_209;
          if ( v87 )
            goto LABEL_190;
          ++v78;
          v30 = v82;
          v35 = v76;
LABEL_173:
          if ( v77 )
          {
            *(_QWORD *)v30 = v80;
          }
          else if ( v70 )
          {
            *(_DWORD *)v30 = v35;
          }
          else
          {
            *(_WORD *)v30 = v35;
          }
          goto LABEL_190;
        }
        if ( (_WORD)v5 == 43 )
          goto LABEL_128;
        goto LABEL_112;
      }
      v35 = v69;
      if ( !v28 )
        goto LABEL_173;
LABEL_190:
      ++v71;
      v6 = a1;
      ++v4;
LABEL_193:
      if ( (_WORD)v5 == 0xFFFF && (*v4 != 37 || v4[1] != 110) )
        break;
LABEL_196:
      v9 = *v4;
      if ( !*v4 )
        goto LABEL_209;
      v10 = v69;
      a3 = (__int64)v86;
      continue;
    }
    break;
  }
  if ( v78 || v71 )
    return v78;
  return v3;
}
