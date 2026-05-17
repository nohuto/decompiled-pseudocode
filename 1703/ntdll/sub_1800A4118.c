/*
 * XREFs of sub_1800A4118 @ 0x1800A4118
 * Callers:
 *     sub_1800A4064 @ 0x1800A4064 (sub_1800A4064.c)
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     iswctype @ 0x180099620 (iswctype.c)
 *     sub_1800A3C94 @ 0x1800A3C94 (sub_1800A3C94.c)
 *     sub_1800A3EC8 @ 0x1800A3EC8 (sub_1800A3EC8.c)
 *     sub_1800A40C8 @ 0x1800A40C8 (sub_1800A40C8.c)
 *     sub_1800A4AD0 @ 0x1800A4AD0 (sub_1800A4AD0.c)
 *     sub_1800A4B20 @ 0x1800A4B20 (sub_1800A4B20.c)
 */

__int64 __fastcall sub_1800A4118(__int64 a1, wint_t *a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  unsigned __int16 *v4; // r12
  int v5; // edi
  __int64 v6; // rsi
  unsigned int v8; // esi
  wint_t v9; // ax
  int v10; // r13d
  unsigned int v11; // ecx
  __int64 v12; // rdx
  unsigned __int16 v13; // ax
  char v14; // r9
  int v15; // r11d
  int v16; // r10d
  char v17; // r13
  char v18; // r8
  char v19; // r14
  int v20; // esi
  __int64 v21; // rdx
  unsigned __int16 *v22; // rax
  unsigned __int16 v23; // ax
  unsigned __int16 *v24; // rcx
  unsigned __int16 *v25; // rcx
  unsigned __int16 v26; // ax
  __int64 v27; // rcx
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
  __int64 v38; // r14
  unsigned __int16 v39; // ax
  int v40; // r8d
  int v41; // r14d
  unsigned __int16 v42; // ax
  unsigned __int16 v43; // ax
  unsigned __int16 v44; // ax
  __int64 v45; // rcx
  __int64 v46; // rcx
  unsigned __int16 v47; // ax
  __int64 v48; // rax
  int v49; // ecx
  int v50; // ecx
  unsigned __int16 v51; // ax
  char v52; // al
  char v53; // cl
  char v54; // al
  int v55; // eax
  unsigned __int16 v56; // ax
  wint_t v57; // ax
  __int64 v58; // rdx
  int v59; // [rsp+50h] [rbp-49h] BYREF
  char v60; // [rsp+54h] [rbp-45h]
  int v61; // [rsp+58h] [rbp-41h] BYREF
  char v62; // [rsp+5Ch] [rbp-3Dh]
  char v63; // [rsp+5Dh] [rbp-3Ch]
  int v64; // [rsp+60h] [rbp-39h]
  int v65; // [rsp+64h] [rbp-35h]
  int v66; // [rsp+68h] [rbp-31h]
  int v67; // [rsp+6Ch] [rbp-2Dh]
  int v68; // [rsp+70h] [rbp-29h]
  unsigned int v69; // [rsp+78h] [rbp-21h] BYREF
  int v70; // [rsp+7Ch] [rbp-1Dh]
  __int64 v71; // [rsp+80h] [rbp-19h]
  _DWORD *v72; // [rsp+88h] [rbp-11h]
  __int64 *v73; // [rsp+90h] [rbp-9h]
  __int64 v74[11]; // [rsp+98h] [rbp-1h] BYREF
  unsigned __int16 *v76; // [rsp+108h] [rbp+6Fh] BYREF
  _DWORD *v77; // [rsp+110h] [rbp+77h]
  char v78; // [rsp+118h] [rbp+7Fh]

  v77 = a3;
  v3 = 0;
  v4 = a2;
  LOWORD(v59) = 0;
  LOWORD(v5) = 0;
  v64 = 0;
  v6 = a1;
  v72 = 0LL;
  if ( !a2 )
  {
    sub_180095DE0();
    return 0xFFFFFFFFLL;
  }
  if ( !a1 )
  {
    v8 = -1;
LABEL_202:
    sub_180095DE0();
    return v8;
  }
  v9 = *a2;
  v10 = 0;
  v60 = 0;
  v11 = 0;
  v61 = 0;
  v69 = 0;
  if ( !v9 )
    return v11;
  while ( iswctype(v9, 8u) )
  {
    v61 = v10 - 1;
    v13 = sub_1800A40C8(&v61, v6);
    if ( v13 != 0xFFFF )
      sub_1800A4B20(v13, v6);
    do
      ++v4;
    while ( iswctype(*v4, 8u) );
    v10 = v61;
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
    v61 = ++v10;
    v56 = sub_1800A4AD0(v6, v12);
    v5 = v56;
    LOWORD(v59) = v56;
    v57 = *v4++;
    v64 = v5;
    if ( v57 == (_WORD)v5 )
      goto LABEL_184;
    if ( (_WORD)v5 == 0xFFFF )
      goto LABEL_203;
    v58 = v6;
    goto LABEL_197;
  }
  v14 = 1;
  v67 = 0;
  v70 = 0;
  v62 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  do
  {
    v76 = ++v4;
    v21 = *v4;
    if ( (v21 & 0xFF00) == 0 && (off_180155000[(unsigned __int8)v21] & 4) != 0 )
    {
      ++v15;
      v16 = v21 + 2 * (5 * v16 - 24);
      continue;
    }
    switch ( (_DWORD)v21 )
    {
      case '*':
        ++v17;
        break;
      case 'F':
        break;
      case 'I':
        v23 = v4[1];
        if ( v23 == 54 )
        {
          v24 = v4 + 2;
          if ( v4[2] == 52 )
          {
            v4 += 2;
            v76 = v24;
LABEL_35:
            ++v20;
            v71 = 0LL;
            break;
          }
        }
        if ( v23 == 51 )
        {
          v25 = v4 + 2;
          if ( v4[2] == 50 )
          {
            v4 += 2;
            v76 = v25;
            break;
          }
        }
        v26 = v23 - 88;
        if ( v26 <= 0x20u )
        {
          v27 = 0x100821001LL;
          if ( _bittest64(&v27, v26) )
            goto LABEL_35;
        }
        ++v20;
        v71 = 0LL;
        break;
      case 'L':
        ++v14;
        break;
      case 'N':
        break;
      case 'h':
        --v14;
        --v19;
        break;
      case 'l':
        v22 = v4 + 1;
        if ( v4[1] != 108 )
        {
          ++v14;
LABEL_29:
          ++v19;
          break;
        }
        ++v4;
        v76 = v22;
        goto LABEL_35;
      case 'w':
        goto LABEL_29;
      default:
        ++v18;
        break;
    }
  }
  while ( !v18 );
  v5 = v64;
  v63 = v17;
  LOBYTE(v21) = v17;
  v10 = v61;
  v78 = v14;
  Src = 0LL;
  v68 = v20;
  v66 = v15;
  v65 = v16;
  if ( (_BYTE)v21 )
  {
    v73 = 0LL;
    v74[0] = 0LL;
  }
  else
  {
    v72 = v77;
    v77 += 2;
    v73 = (__int64 *)*((_QWORD *)v77 - 1);
    v74[0] = (__int64)v73;
  }
  v29 = 0;
  if ( !v19 )
    v19 = ((*v4 - 67) & 0xFFEF) != 0 ? 1 : -1;
  v30 = *v4 | 0x20;
  if ( v30 == 110 )
  {
LABEL_57:
    if ( !v15 || v16 )
    {
      if ( (_BYTE)v21 || ((v30 - 99) & 0xFFFFFFE7) != 0 || v30 == 107 )
      {
        v32 = v72;
      }
      else
      {
        v32 = v72 + 2;
        v72 = v32;
        v33 = (__int64 *)*((_QWORD *)v32 - 1);
        v73 = v33;
        v74[0] = (__int64)v33;
        v77 = v32 + 2;
        Src = (unsigned int)*v32;
        if ( !*v32 )
        {
          v34 = v19 <= 0;
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
            v8 = v69;
            goto LABEL_202;
          }
          return v69;
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
          ++v68;
          v78 = 1;
          v71 = 0LL;
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
              if ( (_BYTE)v21 )
              {
LABEL_181:
                ++v60;
                v6 = a1;
                ++v4;
LABEL_184:
                if ( (_WORD)v5 == 0xFFFF && (*v4 != 37 || v4[1] != 110) )
                  goto LABEL_203;
                goto LABEL_187;
              }
LABEL_164:
              if ( v68 )
              {
                *v73 = v71;
              }
              else if ( v78 )
              {
                *(_DWORD *)v73 = v36;
              }
              else
              {
                *(_WORD *)v73 = v36;
              }
              goto LABEL_181;
            }
            if ( v30 == 111 )
            {
LABEL_73:
              if ( (_WORD)v5 == 45 )
              {
                v62 = 1;
              }
              else if ( (_WORD)v5 != 43 )
              {
                goto LABEL_117;
              }
              v65 = v16 - 1;
              if ( v16 == 1 && v15 )
              {
                v29 = 1;
                v41 = 0;
LABEL_118:
                v40 = v66;
                goto LABEL_119;
              }
              v61 = ++v10;
              v44 = sub_1800A4AD0(a1, v21);
              v5 = v44;
              LOWORD(v59) = v44;
              v64 = v44;
LABEL_117:
              v41 = v65;
              goto LABEL_118;
            }
LABEL_87:
            if ( *v4 != (_WORD)v5 )
            {
              if ( (_WORD)v5 != 0xFFFF )
                sub_1800A4B20((unsigned __int16)v5, a1);
              v35 = 1;
              goto LABEL_199;
            }
            --v60;
            if ( !(_BYTE)v21 )
              v77 = v32;
            goto LABEL_181;
          }
          v30 = 100;
LABEL_78:
          if ( (_WORD)v5 == 45 )
          {
            v62 = 1;
          }
          else if ( (_WORD)v5 != 43 )
          {
            goto LABEL_95;
          }
          v65 = v16 - 1;
          if ( v16 != 1 || !v15 )
          {
            v38 = a1;
            v61 = ++v10;
            v42 = sub_1800A4AD0(a1, v21);
            v5 = v42;
            LOWORD(v59) = v42;
            v64 = v42;
            goto LABEL_96;
          }
          v29 = 1;
LABEL_95:
          v38 = a1;
LABEL_96:
          if ( (_WORD)v5 == 48 )
          {
            v61 = ++v10;
            v39 = sub_1800A4AD0(v38, v21);
            v5 = v39;
            LOWORD(v59) = v39;
            v64 = v39;
            if ( ((v39 - 88) & 0xFFDF) == 0 )
            {
              v61 = ++v10;
              v43 = sub_1800A4AD0(v38, v21);
              v40 = v66;
              v5 = v43;
              v41 = v65;
              v64 = v43;
              LOWORD(v59) = v43;
              if ( v66 )
              {
                v41 = v65 - 2;
                if ( v65 - 2 < 1 )
                  ++v29;
              }
              v30 = 120;
              goto LABEL_119;
            }
            v70 = 1;
            if ( v30 != 120 )
            {
              v40 = v66;
              v41 = v65;
              if ( v66 )
              {
                v41 = v65 - 1;
                if ( v65 == 1 )
                  ++v29;
              }
              v30 = 111;
              goto LABEL_119;
            }
            v61 = --v10;
            if ( v39 != 0xFFFF )
              sub_1800A4B20(v39, v38);
            v5 = 48;
            v64 = 48;
            LOWORD(v59) = 48;
          }
          v41 = v65;
          v40 = v66;
LABEL_119:
          if ( v68 )
          {
            if ( !v29 )
            {
              while ( 1 )
              {
                if ( ((v30 - 112) & 0xFFFFFFF7) != 0 )
                {
                  if ( (v5 & 0xFF00) != 0 || (off_180155000[(unsigned __int8)v5] & 4) == 0 )
                    goto LABEL_135;
                  if ( v30 == 111 )
                  {
                    if ( (unsigned __int16)v5 >= 0x38u )
                      goto LABEL_135;
                    v45 = 8 * v71;
                  }
                  else
                  {
                    v45 = 10 * v71;
                  }
                }
                else
                {
                  if ( (v5 & 0xFF00) != 0 || (v21 = off_180155000[(unsigned __int8)v5], (v21 & 0x80u) == 0LL) )
                  {
LABEL_135:
                    v61 = --v10;
                    if ( (_WORD)v5 != 0xFFFF )
                      sub_1800A4B20((unsigned __int16)v5, a1);
                    break;
                  }
                  v45 = 16 * v71;
                  if ( (v21 & 4) == 0 )
                  {
                    LOWORD(v5) = (v5 & 0xFFDF) - 7;
                    v64 = v5;
                    LOWORD(v59) = v5;
                  }
                }
                ++v70;
                v46 = (unsigned __int16)v5 - 48 + v45;
                v71 = v46;
                if ( v40 )
                {
                  if ( !--v41 )
                    goto LABEL_138;
                }
                v61 = ++v10;
                v47 = sub_1800A4AD0(a1, v21);
                v40 = v66;
                v5 = v47;
                v64 = v47;
                LOWORD(v59) = v47;
              }
            }
            v46 = v71;
LABEL_138:
            v48 = -v46;
            if ( !v62 )
              v48 = v46;
            v71 = v48;
          }
          else
          {
            if ( !v29 )
            {
              while ( 1 )
              {
                if ( ((v30 - 112) & 0xFFFFFFF7) != 0 )
                {
                  if ( (v5 & 0xFF00) != 0 || (off_180155000[(unsigned __int8)v5] & 4) == 0 )
                    goto LABEL_156;
                  if ( v30 == 111 )
                  {
                    if ( (unsigned __int16)v5 >= 0x38u )
                      goto LABEL_156;
                    v49 = 8 * v67;
                  }
                  else
                  {
                    v49 = 10 * v67;
                  }
                }
                else
                {
                  if ( (v5 & 0xFF00) != 0 || (v21 = off_180155000[(unsigned __int8)v5], (v21 & 0x80u) == 0LL) )
                  {
LABEL_156:
                    v61 = --v10;
                    if ( (_WORD)v5 != 0xFFFF )
                      sub_1800A4B20((unsigned __int16)v5, a1);
                    break;
                  }
                  v49 = 16 * v67;
                  if ( (v21 & 4) == 0 )
                  {
                    LOWORD(v5) = (v5 & 0xFFDF) - 7;
                    v64 = v5;
                    LOWORD(v59) = v5;
                  }
                }
                ++v70;
                v50 = (unsigned __int16)v5 + v49 - 48;
                v67 = v50;
                if ( v40 )
                {
                  if ( !--v41 )
                    goto LABEL_159;
                }
                v61 = ++v10;
                v51 = sub_1800A4AD0(a1, v21);
                v40 = v66;
                v5 = v51;
                v64 = v51;
                LOWORD(v59) = v51;
              }
            }
            v50 = v67;
LABEL_159:
            if ( v62 )
              v67 = -v50;
          }
          if ( !v70 )
            goto LABEL_198;
          if ( v63 )
            goto LABEL_181;
          ++v69;
          v36 = v67;
          goto LABEL_164;
        }
        v37 = 16;
        if ( !v15 )
        {
          v15 = 1;
          ++v16;
        }
      }
      v52 = v37 | 1;
      if ( !v15 )
        v52 = v37;
      v53 = v52 | 2;
      if ( v19 <= 0 )
        v53 = v52;
      v54 = v53 | 4;
      if ( !(_BYTE)v21 )
        v54 = v53;
      if ( v30 == 123 )
      {
        v55 = sub_1800A3EC8(v54, &v76, (unsigned __int16 *)&v59, &v61, (void **)v74, v16, a1, Src, &v69);
        v4 = v76;
      }
      else
      {
        v55 = sub_1800A3C94(v54, 0LL, (unsigned __int16 *)&v59, &v61, (void **)v74, v16, a1, Src, &v69);
      }
      LOWORD(v5) = v59;
      if ( v55 )
        goto LABEL_198;
      v10 = v61;
      v64 = (unsigned __int16)v59;
      goto LABEL_181;
    }
    if ( (_WORD)v5 == 0xFFFF )
      goto LABEL_203;
    v58 = a1;
LABEL_197:
    sub_1800A4B20((unsigned __int16)v5, v58);
LABEL_198:
    v35 = 0;
    goto LABEL_199;
  }
  if ( v30 == 99 || v30 == 123 )
  {
    v10 = ++v61;
    v31 = sub_1800A4AD0(a1, v21);
  }
  else
  {
    v31 = sub_1800A40C8(&v61, a1);
    v10 = v61;
  }
  v5 = v31;
  LOWORD(v59) = v31;
  v64 = v31;
  if ( v31 != 0xFFFF )
  {
    v16 = v65;
    Src = 0LL;
    v15 = v66;
    LOBYTE(v21) = v63;
    goto LABEL_57;
  }
LABEL_203:
  if ( v69 || v60 )
    return v69;
  return v3;
}
