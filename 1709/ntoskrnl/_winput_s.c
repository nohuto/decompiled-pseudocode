/*
 * XREFs of _winput_s @ 0x1401677A8
 * Callers:
 *     _swinput_s @ 0x1401676E4 (_swinput_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140131CB0 (xHalTimerWatchdogStop.c)
 *     iswctype @ 0x140161120 (iswctype.c)
 *     ReadString_0 @ 0x140167308 (ReadString_0.c)
 *     ReadStringDelimited_0 @ 0x140167544 (ReadStringDelimited_0.c)
 *     _whiteout @ 0x140167750 (_whiteout.c)
 *     _fgetwc_nolock @ 0x1401681D8 (_fgetwc_nolock.c)
 *     _ungetwc_nolock @ 0x140168220 (_ungetwc_nolock.c)
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
  __int64 v44; // rcx
  unsigned __int16 v45; // dx
  __int64 v46; // rcx
  wint_t v47; // ax
  __int64 v48; // rax
  int v49; // ecx
  unsigned __int16 v50; // dx
  int v51; // ecx
  wint_t v52; // ax
  char v53; // al
  char v54; // cl
  char v55; // al
  int v56; // eax
  wint_t v57; // ax
  wint_t v58; // ax
  FILE *v59; // rdx
  int v60; // [rsp+50h] [rbp-49h] BYREF
  char v61; // [rsp+54h] [rbp-45h]
  int v62; // [rsp+58h] [rbp-41h] BYREF
  char v63; // [rsp+5Ch] [rbp-3Dh]
  char v64; // [rsp+5Dh] [rbp-3Ch]
  int v65; // [rsp+60h] [rbp-39h]
  int v66; // [rsp+64h] [rbp-35h]
  int v67; // [rsp+68h] [rbp-31h]
  int v68; // [rsp+6Ch] [rbp-2Dh]
  int v69; // [rsp+70h] [rbp-29h]
  unsigned int v70; // [rsp+78h] [rbp-21h] BYREF
  int v71; // [rsp+7Ch] [rbp-1Dh]
  __int64 v72; // [rsp+80h] [rbp-19h]
  _DWORD *v73; // [rsp+88h] [rbp-11h]
  __int64 *v74; // [rsp+90h] [rbp-9h]
  __int64 v75[11]; // [rsp+98h] [rbp-1h] BYREF
  unsigned __int16 *v77; // [rsp+108h] [rbp+6Fh] BYREF
  _DWORD *v78; // [rsp+110h] [rbp+77h]
  char v79; // [rsp+118h] [rbp+7Fh]

  v78 = a3;
  v3 = 0;
  v4 = a2;
  LOWORD(v60) = 0;
  LOWORD(v5) = 0;
  v65 = 0;
  v6 = File;
  v73 = 0LL;
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
  v61 = 0;
  v11 = 0;
  v62 = 0;
  v70 = 0;
  if ( !v9 )
    return v11;
  while ( iswctype(v9, 8u) )
  {
    v62 = v10 - 1;
    v12 = whiteout(&v62, v6);
    if ( v12 != 0xFFFF )
      ungetwc_nolock(v12, v6);
    do
      ++v4;
    while ( iswctype(*v4, 8u) );
    v10 = v62;
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
    v62 = ++v10;
    v57 = fgetwc_nolock(v6);
    v5 = v57;
    LOWORD(v60) = v57;
    v58 = *v4++;
    v65 = v5;
    if ( v58 == (_WORD)v5 )
      goto LABEL_184;
    if ( (_WORD)v5 == 0xFFFF )
      goto LABEL_203;
    v59 = v6;
    goto LABEL_197;
  }
  v13 = 1;
  v68 = 0;
  v71 = 0;
  v63 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  do
  {
    v77 = ++v4;
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
            v77 = v23;
LABEL_35:
            ++v19;
            v72 = 0LL;
            break;
          }
        }
        if ( v22 == 51 )
        {
          v24 = v4 + 2;
          if ( v4[2] == 50 )
          {
            v4 += 2;
            v77 = v24;
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
        v72 = 0LL;
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
        v77 = v21;
        goto LABEL_35;
      case 'w':
        goto LABEL_29;
      default:
        ++v17;
        break;
    }
  }
  while ( !v17 );
  v5 = v65;
  v64 = v16;
  v27 = v16;
  v10 = v62;
  v79 = v13;
  Src = 0LL;
  v69 = v19;
  v67 = v14;
  v66 = v15;
  if ( v27 )
  {
    v74 = 0LL;
    v75[0] = 0LL;
  }
  else
  {
    v73 = v78;
    v78 += 2;
    v74 = (__int64 *)*((_QWORD *)v78 - 1);
    v75[0] = (__int64)v74;
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
        v32 = v73;
      }
      else
      {
        v32 = v73 + 2;
        v73 = v32;
        v33 = (__int64 *)*((_QWORD *)v32 - 1);
        v74 = v33;
        v75[0] = (__int64)v33;
        v78 = v32 + 2;
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
            v8 = v70;
            goto LABEL_202;
          }
          return v70;
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
          ++v69;
          v79 = 1;
          v72 = 0LL;
          goto LABEL_73;
        }
        if ( v30 != 99 )
        {
          if ( v30 != 100 )
          {
            if ( v30 != 105 )
            {
              if ( v30 == 110 )
              {
                v36 = v10;
                if ( v27 )
                {
LABEL_181:
                  ++v61;
                  v6 = File;
                  ++v4;
LABEL_184:
                  if ( (_WORD)v5 == 0xFFFF && (*v4 != 37 || v4[1] != 110) )
                    goto LABEL_203;
                  goto LABEL_187;
                }
LABEL_164:
                if ( v69 )
                {
                  *v74 = v72;
                }
                else if ( v79 )
                {
                  *(_DWORD *)v74 = v36;
                }
                else
                {
                  *(_WORD *)v74 = v36;
                }
                goto LABEL_181;
              }
              if ( v30 == 111 )
                goto LABEL_73;
LABEL_87:
              if ( *v4 != (_WORD)v5 )
              {
                if ( (_WORD)v5 != 0xFFFF )
                  ungetwc_nolock(v5, File);
                v35 = 1;
                goto LABEL_199;
              }
              --v61;
              if ( !v27 )
                v78 = v32;
              goto LABEL_181;
            }
            v30 = 100;
LABEL_78:
            if ( (_WORD)v5 == 45 )
            {
              v63 = 1;
            }
            else if ( (_WORD)v5 != 43 )
            {
              goto LABEL_95;
            }
            v66 = v15 - 1;
            if ( v15 != 1 || !v14 )
            {
              v38 = File;
              v62 = ++v10;
              v42 = fgetwc_nolock(File);
              v5 = v42;
              LOWORD(v60) = v42;
              v65 = v42;
LABEL_96:
              if ( (_WORD)v5 == 48 )
              {
                v62 = ++v10;
                v39 = fgetwc_nolock(v38);
                v5 = v39;
                LOWORD(v60) = v39;
                v65 = v39;
                if ( ((v39 - 88) & 0xFFDF) == 0 )
                {
                  v62 = ++v10;
                  v43 = fgetwc_nolock(v38);
                  v40 = v67;
                  v5 = v43;
                  v41 = v66;
                  v65 = v43;
                  LOWORD(v60) = v43;
                  if ( v67 )
                  {
                    v41 = v66 - 2;
                    if ( v66 - 2 < 1 )
                      ++v29;
                  }
                  v30 = 120;
                  goto LABEL_119;
                }
                v71 = 1;
                if ( v30 != 120 )
                {
                  v40 = v67;
                  v41 = v66;
                  if ( v67 )
                  {
                    v41 = v66 - 1;
                    if ( v66 == 1 )
                      ++v29;
                  }
                  v30 = 111;
                  goto LABEL_119;
                }
                v62 = --v10;
                if ( v39 != 0xFFFF )
                  ungetwc_nolock(v39, v38);
                v5 = 48;
LABEL_116:
                LOWORD(v60) = v5;
                v65 = v5;
                goto LABEL_117;
              }
              goto LABEL_117;
            }
            v29 = 1;
LABEL_95:
            v38 = File;
            goto LABEL_96;
          }
LABEL_73:
          if ( (_WORD)v5 == 45 )
          {
            v63 = 1;
            goto LABEL_112;
          }
          if ( (_WORD)v5 == 43 )
          {
LABEL_112:
            v66 = v15 - 1;
            if ( v15 == 1 && v14 )
            {
              v29 = 1;
              v41 = 0;
LABEL_118:
              v40 = v67;
LABEL_119:
              if ( v69 )
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
                        v44 = 8 * v72;
                      }
                      else
                      {
                        v44 = 10 * v72;
                      }
                    }
                    else
                    {
                      if ( (v5 & 0xFF00) != 0 || (v45 = pctype[(unsigned __int8)v5], (v45 & 0x80u) == 0) )
                      {
LABEL_135:
                        v62 = --v10;
                        if ( (_WORD)v5 != 0xFFFF )
                          ungetwc_nolock(v5, File);
                        break;
                      }
                      v44 = 16 * v72;
                      if ( (v45 & 4) == 0 )
                      {
                        LOWORD(v5) = (v5 & 0xFFDF) - 7;
                        v65 = v5;
                        LOWORD(v60) = v5;
                      }
                    }
                    ++v71;
                    v46 = (unsigned __int16)v5 + v44 - 48;
                    v72 = v46;
                    if ( v40 )
                    {
                      if ( !--v41 )
                        goto LABEL_138;
                    }
                    v62 = ++v10;
                    v47 = fgetwc_nolock(File);
                    v40 = v67;
                    v5 = v47;
                    v65 = v47;
                    LOWORD(v60) = v47;
                  }
                }
                v46 = v72;
LABEL_138:
                v48 = -v46;
                if ( !v63 )
                  v48 = v46;
                v72 = v48;
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
                        v49 = 8 * v68;
                      }
                      else
                      {
                        v49 = 10 * v68;
                      }
                    }
                    else
                    {
                      if ( (v5 & 0xFF00) != 0 || (v50 = pctype[(unsigned __int8)v5], (v50 & 0x80u) == 0) )
                      {
LABEL_156:
                        v62 = --v10;
                        if ( (_WORD)v5 != 0xFFFF )
                          ungetwc_nolock(v5, File);
                        break;
                      }
                      v49 = 16 * v68;
                      if ( (v50 & 4) == 0 )
                      {
                        LOWORD(v5) = (v5 & 0xFFDF) - 7;
                        v65 = v5;
                        LOWORD(v60) = v5;
                      }
                    }
                    ++v71;
                    v51 = (unsigned __int16)v5 + v49 - 48;
                    v68 = v51;
                    if ( v40 )
                    {
                      if ( !--v41 )
                        goto LABEL_159;
                    }
                    v62 = ++v10;
                    v52 = fgetwc_nolock(File);
                    v40 = v67;
                    v5 = v52;
                    v65 = v52;
                    LOWORD(v60) = v52;
                  }
                }
                v51 = v68;
LABEL_159:
                if ( v63 )
                  v68 = -v51;
              }
              if ( !v71 )
                goto LABEL_198;
              if ( v64 )
                goto LABEL_181;
              ++v70;
              v36 = v68;
              goto LABEL_164;
            }
            v62 = ++v10;
            v5 = fgetwc_nolock(File);
            goto LABEL_116;
          }
LABEL_117:
          v41 = v66;
          goto LABEL_118;
        }
        v37 = 16;
        if ( !v14 )
        {
          v14 = 1;
          ++v15;
        }
      }
      v53 = v37 | 1;
      if ( !v14 )
        v53 = v37;
      v54 = v53 | 2;
      if ( v18 <= 0 )
        v54 = v53;
      v55 = v54 | 4;
      if ( !v27 )
        v55 = v54;
      if ( v30 == 123 )
      {
        v56 = ReadStringDelimited_0(v55, &v77, (wint_t *)&v60, &v62, (void **)v75, v15, File, Src, &v70);
        v4 = v77;
      }
      else
      {
        v56 = ReadString_0(v55, 0LL, (wint_t *)&v60, &v62, (void **)v75, v15, File, Src, &v70);
      }
      LOWORD(v5) = v60;
      if ( v56 )
        goto LABEL_198;
      v10 = v62;
      v65 = (unsigned __int16)v60;
      goto LABEL_181;
    }
    if ( (_WORD)v5 == 0xFFFF )
      goto LABEL_203;
    v59 = File;
LABEL_197:
    ungetwc_nolock(v5, v59);
LABEL_198:
    v35 = 0;
    goto LABEL_199;
  }
  if ( v30 == 99 || v30 == 123 )
  {
    v10 = ++v62;
    v31 = fgetwc_nolock(File);
  }
  else
  {
    v31 = whiteout(&v62, File);
    v10 = v62;
  }
  v5 = v31;
  LOWORD(v60) = v31;
  v65 = v31;
  if ( v31 != 0xFFFF )
  {
    v15 = v66;
    Src = 0LL;
    v14 = v67;
    v27 = v64;
    goto LABEL_57;
  }
LABEL_203:
  if ( v70 || v61 )
    return v70;
  return v3;
}
