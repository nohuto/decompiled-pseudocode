/*
 * XREFs of _winput_s @ 0x140172EA8
 * Callers:
 *     _swinput_s @ 0x140172DE4 (_swinput_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14014A440 (xHalTimerWatchdogStop.c)
 *     iswctype @ 0x14016C840 (iswctype.c)
 *     ReadString_0 @ 0x140172A08 (ReadString_0.c)
 *     ReadStringDelimited_0 @ 0x140172C44 (ReadStringDelimited_0.c)
 *     _whiteout @ 0x140172E50 (_whiteout.c)
 *     _fgetwc_nolock @ 0x140173904 (_fgetwc_nolock.c)
 *     _ungetwc_nolock @ 0x14017395C (_ungetwc_nolock.c)
 */

__int64 __fastcall winput_s(FILE *File, wint_t *a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  unsigned __int16 *v4; // r12
  int v5; // edi
  FILE *v6; // rsi
  unsigned int v8; // esi
  wint_t v9; // ax
  int v10; // r13d
  unsigned int v11; // ecx
  wint_t v12; // ax
  char v13; // r9
  int v14; // r11d
  int v15; // r10d
  char v16; // r13
  char v17; // r8
  char v18; // r14
  int v19; // esi
  int v20; // edx
  unsigned __int16 *v21; // rax
  unsigned __int16 v22; // ax
  unsigned __int16 *v23; // rcx
  unsigned __int16 *v24; // rcx
  unsigned __int16 v25; // ax
  __int64 v26; // rcx
  char v27; // dl
  unsigned __int64 Src; // r9
  char v29; // r15
  int v30; // esi
  unsigned __int16 v31; // ax
  _DWORD *v32; // r8
  __int64 *v33; // rax
  bool v34; // cc
  int v35; // r14d
  int v36; // ecx
  char v37; // cl
  FILE *v38; // r14
  wint_t v39; // ax
  int v40; // r8d
  int v41; // r14d
  wint_t v42; // ax
  wint_t v43; // ax
  wint_t v44; // ax
  __int64 v45; // rcx
  unsigned __int16 v46; // dx
  __int64 v47; // rcx
  wint_t v48; // ax
  __int64 v49; // rax
  int v50; // ecx
  unsigned __int16 v51; // dx
  int v52; // ecx
  wint_t v53; // ax
  char v54; // al
  char v55; // cl
  char v56; // al
  int v57; // eax
  wint_t v58; // ax
  wint_t v59; // ax
  FILE *v60; // rdx
  int v61; // [rsp+50h] [rbp-49h] BYREF
  char v62; // [rsp+54h] [rbp-45h]
  int v63; // [rsp+58h] [rbp-41h] BYREF
  char v64; // [rsp+5Ch] [rbp-3Dh]
  char v65; // [rsp+5Dh] [rbp-3Ch]
  int v66; // [rsp+60h] [rbp-39h]
  int v67; // [rsp+64h] [rbp-35h]
  int v68; // [rsp+68h] [rbp-31h]
  int v69; // [rsp+6Ch] [rbp-2Dh]
  int v70; // [rsp+70h] [rbp-29h]
  unsigned int v71; // [rsp+78h] [rbp-21h] BYREF
  int v72; // [rsp+7Ch] [rbp-1Dh]
  __int64 v73; // [rsp+80h] [rbp-19h]
  _DWORD *v74; // [rsp+88h] [rbp-11h]
  __int64 *v75; // [rsp+90h] [rbp-9h]
  __int64 v76[11]; // [rsp+98h] [rbp-1h] BYREF
  unsigned __int16 *v78; // [rsp+108h] [rbp+6Fh] BYREF
  _DWORD *v79; // [rsp+110h] [rbp+77h]
  char v80; // [rsp+118h] [rbp+7Fh]

  v79 = a3;
  v3 = 0;
  v4 = a2;
  LOWORD(v61) = 0;
  LOWORD(v5) = 0;
  v66 = 0;
  v6 = File;
  v74 = 0LL;
  if ( !a2 )
  {
    xHalTimerWatchdogStop();
    return 0xFFFFFFFFLL;
  }
  if ( !File )
  {
    v8 = -1;
LABEL_202:
    xHalTimerWatchdogStop();
    return v8;
  }
  v9 = *a2;
  v10 = 0;
  v62 = 0;
  v11 = 0;
  v63 = 0;
  v71 = 0;
  if ( !v9 )
    return v11;
  while ( iswctype(v9, 8u) )
  {
    v63 = v10 - 1;
    v12 = whiteout(&v63, v6);
    if ( v12 != 0xFFFF )
      ungetwc_nolock(v12, v6);
    do
      ++v4;
    while ( iswctype(*v4, 8u) );
    v10 = v63;
LABEL_187:
    v9 = *v4;
    if ( !*v4 )
      goto LABEL_198;
  }
  if ( *v4 != 37 )
    goto LABEL_183;
  if ( v4[1] == 37 )
  {
    ++v4;
LABEL_183:
    v63 = ++v10;
    v58 = fgetwc_nolock(v6);
    v5 = v58;
    LOWORD(v61) = v58;
    v59 = *v4++;
    v66 = v5;
    if ( v59 == (_WORD)v5 )
      goto LABEL_184;
    if ( (_WORD)v5 == 0xFFFF )
      goto LABEL_203;
    v60 = v6;
    goto LABEL_197;
  }
  v13 = 1;
  v69 = 0;
  v72 = 0;
  v64 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  do
  {
    v78 = ++v4;
    v20 = *v4;
    if ( (v20 & 0xFF00) == 0 && (pctype[(unsigned __int8)v20] & 4) != 0 )
    {
      ++v14;
      v15 = v20 + 2 * (5 * v15 - 24);
      continue;
    }
    switch ( v20 )
    {
      case '*':
        ++v16;
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
            v78 = v23;
LABEL_35:
            ++v19;
            v73 = 0LL;
            break;
          }
        }
        if ( v22 == 51 )
        {
          v24 = v4 + 2;
          if ( v4[2] == 50 )
          {
            v4 += 2;
            v78 = v24;
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
        v73 = 0LL;
        break;
      case 'L':
        ++v13;
        break;
      case 'N':
        break;
      case 'h':
        --v13;
        --v18;
        break;
      case 'l':
        v21 = v4 + 1;
        if ( v4[1] != 108 )
        {
          ++v13;
LABEL_29:
          ++v18;
          break;
        }
        ++v4;
        v78 = v21;
        goto LABEL_35;
      case 'w':
        goto LABEL_29;
      default:
        ++v17;
        break;
    }
  }
  while ( !v17 );
  v5 = v66;
  v65 = v16;
  v27 = v16;
  v10 = v63;
  v80 = v13;
  Src = 0LL;
  v70 = v19;
  v68 = v14;
  v67 = v15;
  if ( v27 )
  {
    v75 = 0LL;
    v76[0] = 0LL;
  }
  else
  {
    v74 = v79;
    v79 += 2;
    v75 = (__int64 *)*((_QWORD *)v79 - 1);
    v76[0] = (__int64)v75;
  }
  v29 = 0;
  if ( !v18 )
    v18 = ((*v4 - 67) & 0xFFEF) != 0 ? 1 : -1;
  v30 = *v4 | 0x20;
  if ( v30 == 110 )
  {
LABEL_57:
    if ( !v14 || v15 )
    {
      if ( v27 || ((v30 - 99) & 0xFFFFFFE7) != 0 || v30 == 107 )
      {
        v32 = v74;
      }
      else
      {
        v32 = v74 + 2;
        v74 = v32;
        v33 = (__int64 *)*((_QWORD *)v32 - 1);
        v75 = v33;
        v76[0] = (__int64)v33;
        v79 = v32 + 2;
        Src = (unsigned int)*v32;
        if ( !*v32 )
        {
          v34 = v18 <= 0;
          v35 = 0;
          if ( v34 )
            *(_BYTE *)v33 = 0;
          else
            *(_WORD *)v33 = 0;
LABEL_199:
          if ( (_WORD)v5 == 0xFFFF )
            goto LABEL_203;
          if ( v35 == 1 )
          {
            v8 = v71;
            goto LABEL_202;
          }
          return v71;
        }
      }
      if ( v30 > 112 )
      {
        switch ( v30 )
        {
          case 's':
            v37 = 32;
            break;
          case 'u':
            goto LABEL_73;
          case 'x':
            goto LABEL_78;
          case '{':
            v37 = 64;
            break;
          default:
            goto LABEL_87;
        }
      }
      else
      {
        if ( v30 == 112 )
        {
          ++v70;
          v80 = 1;
          v73 = 0LL;
          goto LABEL_73;
        }
        if ( v30 != 99 )
        {
          if ( v30 == 100 )
            goto LABEL_73;
          if ( v30 != 105 )
          {
            if ( v30 == 110 )
            {
              v36 = v10;
              if ( v27 )
              {
LABEL_181:
                ++v62;
                v6 = File;
                ++v4;
LABEL_184:
                if ( (_WORD)v5 == 0xFFFF && (*v4 != 37 || v4[1] != 110) )
                  goto LABEL_203;
                goto LABEL_187;
              }
LABEL_164:
              if ( v70 )
              {
                *v75 = v73;
              }
              else if ( v80 )
              {
                *(_DWORD *)v75 = v36;
              }
              else
              {
                *(_WORD *)v75 = v36;
              }
              goto LABEL_181;
            }
            if ( v30 == 111 )
            {
LABEL_73:
              if ( (_WORD)v5 == 45 )
              {
                v64 = 1;
              }
              else if ( (_WORD)v5 != 43 )
              {
                goto LABEL_117;
              }
              v67 = v15 - 1;
              if ( v15 == 1 && v14 )
              {
                v29 = 1;
                v41 = 0;
LABEL_118:
                v40 = v68;
                goto LABEL_119;
              }
              v63 = ++v10;
              v44 = fgetwc_nolock(File);
              v5 = v44;
              LOWORD(v61) = v44;
              v66 = v44;
LABEL_117:
              v41 = v67;
              goto LABEL_118;
            }
LABEL_87:
            if ( *v4 != (_WORD)v5 )
            {
              if ( (_WORD)v5 != 0xFFFF )
                ungetwc_nolock(v5, File);
              v35 = 1;
              goto LABEL_199;
            }
            --v62;
            if ( !v27 )
              v79 = v32;
            goto LABEL_181;
          }
          v30 = 100;
LABEL_78:
          if ( (_WORD)v5 == 45 )
          {
            v64 = 1;
          }
          else if ( (_WORD)v5 != 43 )
          {
            goto LABEL_95;
          }
          v67 = v15 - 1;
          if ( v15 != 1 || !v14 )
          {
            v38 = File;
            v63 = ++v10;
            v42 = fgetwc_nolock(File);
            v5 = v42;
            LOWORD(v61) = v42;
            v66 = v42;
            goto LABEL_96;
          }
          v29 = 1;
LABEL_95:
          v38 = File;
LABEL_96:
          if ( (_WORD)v5 == 48 )
          {
            v63 = ++v10;
            v39 = fgetwc_nolock(v38);
            v5 = v39;
            LOWORD(v61) = v39;
            v66 = v39;
            if ( ((v39 - 88) & 0xFFDF) == 0 )
            {
              v63 = ++v10;
              v43 = fgetwc_nolock(v38);
              v40 = v68;
              v5 = v43;
              v41 = v67;
              v66 = v43;
              LOWORD(v61) = v43;
              if ( v68 )
              {
                v41 = v67 - 2;
                if ( v67 - 2 < 1 )
                  ++v29;
              }
              v30 = 120;
              goto LABEL_119;
            }
            v72 = 1;
            if ( v30 != 120 )
            {
              v40 = v68;
              v41 = v67;
              if ( v68 )
              {
                v41 = v67 - 1;
                if ( v67 == 1 )
                  ++v29;
              }
              v30 = 111;
              goto LABEL_119;
            }
            v63 = --v10;
            if ( v39 != 0xFFFF )
              ungetwc_nolock(v39, v38);
            v5 = 48;
            v66 = 48;
            LOWORD(v61) = 48;
          }
          v41 = v67;
          v40 = v68;
LABEL_119:
          if ( v70 )
          {
            if ( !v29 )
            {
              while ( 1 )
              {
                if ( ((v30 - 112) & 0xFFFFFFF7) != 0 )
                {
                  if ( (v5 & 0xFF00) != 0 || (pctype[(unsigned __int8)v5] & 4) == 0 )
                    goto LABEL_135;
                  if ( v30 == 111 )
                  {
                    if ( (unsigned __int16)v5 >= 0x38u )
                      goto LABEL_135;
                    v45 = 8 * v73;
                  }
                  else
                  {
                    v45 = 10 * v73;
                  }
                }
                else
                {
                  if ( (v5 & 0xFF00) != 0 || (v46 = pctype[(unsigned __int8)v5], (v46 & 0x80u) == 0) )
                  {
LABEL_135:
                    v63 = --v10;
                    if ( (_WORD)v5 != 0xFFFF )
                      ungetwc_nolock(v5, File);
                    break;
                  }
                  v45 = 16 * v73;
                  if ( (v46 & 4) == 0 )
                  {
                    LOWORD(v5) = (v5 & 0xFFDF) - 7;
                    v66 = v5;
                    LOWORD(v61) = v5;
                  }
                }
                ++v72;
                v47 = (unsigned __int16)v5 - 48 + v45;
                v73 = v47;
                if ( v40 )
                {
                  if ( !--v41 )
                    goto LABEL_138;
                }
                v63 = ++v10;
                v48 = fgetwc_nolock(File);
                v40 = v68;
                v5 = v48;
                v66 = v48;
                LOWORD(v61) = v48;
              }
            }
            v47 = v73;
LABEL_138:
            v49 = -v47;
            if ( !v64 )
              v49 = v47;
            v73 = v49;
          }
          else
          {
            if ( !v29 )
            {
              while ( 1 )
              {
                if ( ((v30 - 112) & 0xFFFFFFF7) != 0 )
                {
                  if ( (v5 & 0xFF00) != 0 || (pctype[(unsigned __int8)v5] & 4) == 0 )
                    goto LABEL_156;
                  if ( v30 == 111 )
                  {
                    if ( (unsigned __int16)v5 >= 0x38u )
                      goto LABEL_156;
                    v50 = 8 * v69;
                  }
                  else
                  {
                    v50 = 10 * v69;
                  }
                }
                else
                {
                  if ( (v5 & 0xFF00) != 0 || (v51 = pctype[(unsigned __int8)v5], (v51 & 0x80u) == 0) )
                  {
LABEL_156:
                    v63 = --v10;
                    if ( (_WORD)v5 != 0xFFFF )
                      ungetwc_nolock(v5, File);
                    break;
                  }
                  v50 = 16 * v69;
                  if ( (v51 & 4) == 0 )
                  {
                    LOWORD(v5) = (v5 & 0xFFDF) - 7;
                    v66 = v5;
                    LOWORD(v61) = v5;
                  }
                }
                ++v72;
                v52 = (unsigned __int16)v5 + v50 - 48;
                v69 = v52;
                if ( v40 )
                {
                  if ( !--v41 )
                    goto LABEL_159;
                }
                v63 = ++v10;
                v53 = fgetwc_nolock(File);
                v40 = v68;
                v5 = v53;
                v66 = v53;
                LOWORD(v61) = v53;
              }
            }
            v52 = v69;
LABEL_159:
            if ( v64 )
              v69 = -v52;
          }
          if ( !v72 )
            goto LABEL_198;
          if ( v65 )
            goto LABEL_181;
          ++v71;
          v36 = v69;
          goto LABEL_164;
        }
        v37 = 16;
        if ( !v14 )
        {
          v14 = 1;
          ++v15;
        }
      }
      v54 = v37 | 1;
      if ( !v14 )
        v54 = v37;
      v55 = v54 | 2;
      if ( v18 <= 0 )
        v55 = v54;
      v56 = v55 | 4;
      if ( !v27 )
        v56 = v55;
      if ( v30 == 123 )
      {
        v57 = ReadStringDelimited_0(v56, &v78, (wint_t *)&v61, &v63, (void **)v76, v15, File, Src, &v71);
        v4 = v78;
      }
      else
      {
        v57 = ReadString_0(v56, 0LL, (wint_t *)&v61, &v63, (void **)v76, v15, File, Src, &v71);
      }
      LOWORD(v5) = v61;
      if ( v57 )
        goto LABEL_198;
      v10 = v63;
      v66 = (unsigned __int16)v61;
      goto LABEL_181;
    }
    if ( (_WORD)v5 == 0xFFFF )
      goto LABEL_203;
    v60 = File;
LABEL_197:
    ungetwc_nolock(v5, v60);
LABEL_198:
    v35 = 0;
    goto LABEL_199;
  }
  if ( v30 == 99 || v30 == 123 )
  {
    v10 = ++v63;
    v31 = fgetwc_nolock(File);
  }
  else
  {
    v31 = whiteout(&v63, File);
    v10 = v63;
  }
  v5 = v31;
  LOWORD(v61) = v31;
  v66 = v31;
  if ( v31 != 0xFFFF )
  {
    v15 = v67;
    Src = 0LL;
    v14 = v68;
    v27 = v65;
    goto LABEL_57;
  }
LABEL_203:
  if ( v71 || v62 )
    return v71;
  return v3;
}
