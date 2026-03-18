/*
 * XREFs of _woutput_l @ 0x1C003B9EC
 * Callers:
 *     _vsnwprintf_l @ 0x1C003B8FC (_vsnwprintf_l.c)
 * Callees:
 *     ?AddChildList@FxDeviceBase@@UEAAXPEAVFxChildList@@@Z @ 0x1C000D110 (-AddChildList@FxDeviceBase@@UEAAXPEAVFxChildList@@@Z.c)
 *     __security_check_cookie @ 0x1C003B880 (__security_check_cookie.c)
 *     write_char @ 0x1C003C2CC (write_char.c)
 *     write_multi_char @ 0x1C003C320 (write_multi_char.c)
 *     write_string @ 0x1C003C378 (write_string.c)
 *     _get_printf_count_output @ 0x1C003C404 (_get_printf_count_output.c)
 *     mbtowc @ 0x1C003C470 (mbtowc.c)
 */

__int64 __fastcall woutput_l(_iobuf *stream, const wchar_t *format, localeinfo_struct *plocinfo, char *argptr)
{
  wchar_t *v5; // r11
  _iobuf *v6; // r10
  int v7; // edi
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // r12d
  wchar_t v12; // r9
  int v13; // r15d
  __int64 v14; // r13
  $B4FF2100EA110D8CD0B9C89F852FB035 *sz; // rbx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  wchar_t v24; // cx
  unsigned __int16 *v25; // rcx
  int v26; // ecx
  $B4FF2100EA110D8CD0B9C89F852FB035 *v27; // rax
  _BYTE *v28; // rax
  wchar_t v29; // ax
  unsigned int v30; // r10d
  __int64 v31; // rax
  char *v32; // r11
  int v33; // eax
  char *i; // r13
  unsigned __int64 v35; // r8
  unsigned int v36; // r9d
  char *v37; // rbx
  int v38; // ecx
  char v39; // r12
  int v40; // ecx
  unsigned __int64 v41; // rdx
  char v42; // al
  unsigned __int16 *v43; // rsi
  int v44; // r15d
  int v45; // r12d
  _iobuf *v46; // rsi
  const char *v47; // r15
  int v48; // esi
  int v49; // eax
  __int64 v50; // r14
  int v51; // eax
  unsigned __int64 v52; // rax
  __int64 v53; // rcx
  unsigned int v54; // [rsp+30h] [rbp-D0h]
  int v55; // [rsp+30h] [rbp-D0h]
  int v56; // [rsp+34h] [rbp-CCh]
  int charsout; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v58; // [rsp+3Ch] [rbp-C4h]
  char *v59; // [rsp+40h] [rbp-C0h]
  int v60; // [rsp+48h] [rbp-B8h]
  _iobuf *f; // [rsp+50h] [rbp-B0h]
  char tempchar[4]; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t wchar; // [rsp+5Ch] [rbp-A4h] BYREF
  wchar_t prefix[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v65; // [rsp+64h] [rbp-9Ch]
  int v66; // [rsp+68h] [rbp-98h]
  int v67; // [rsp+6Ch] [rbp-94h]
  $12F061FBE778B92DEB8200A0ACF7A038 text; // [rsp+70h] [rbp-90h]
  int v69; // [rsp+78h] [rbp-88h]
  $B4FF2100EA110D8CD0B9C89F852FB035 buffer; // [rsp+80h] [rbp-80h] BYREF

  v59 = argptr;
  f = stream;
  v66 = 0;
  v5 = (wchar_t *)argptr;
  v58 = 0;
  v6 = stream;
  v54 = 0;
  v7 = 0;
  v56 = 0;
  v8 = 0LL;
  v65 = 0;
  v9 = 0LL;
  v60 = 0;
  v10 = 0;
  if ( stream && format )
  {
    v12 = *format;
    v13 = 0;
    charsout = 0;
    LODWORD(v14) = 0;
    v67 = 0;
    if ( v12 )
    {
      sz = ($B4FF2100EA110D8CD0B9C89F852FB035 *)text.sz;
      do
      {
        text.sz = (char *)++format;
        if ( v13 < 0 )
          return (unsigned int)v13;
        if ( (unsigned __int16)(v12 - 32) > 0x58u )
          v16 = 0;
        else
          v16 = _lookuptable[v12 - 32] & 0xF;
        v17 = _lookuptable[8 * v16 + v67] >> 4;
        v67 = v17;
        if ( !v17 )
          goto $NORMAL_STATE;
        v18 = v17 - 1;
        if ( !v18 )
        {
          v9 = 0xFFFFFFFFLL;
          v65 = 0;
          v8 = 0LL;
          v58 = 0;
          v10 = 0;
          v56 = 0;
          v7 = 0;
          v54 = -1;
          v60 = 0;
          goto LABEL_142;
        }
        v19 = v18 - 1;
        if ( !v19 )
        {
          switch ( v12 )
          {
            case ' ':
              v7 |= 2u;
              break;
            case '#':
              v7 |= 0x80u;
              break;
            case '+':
              v7 |= 1u;
              break;
            case '-':
              v7 |= 4u;
              break;
            case '0':
              v7 |= 8u;
              break;
          }
          goto LABEL_142;
        }
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( !v21 )
          {
            v9 = 0LL;
            goto LABEL_169;
          }
          v22 = v21 - 1;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( !v23 )
            {
              if ( v12 != 73 )
              {
                switch ( v12 )
                {
                  case 'h':
                    v7 |= 0x20u;
                    break;
                  case 'l':
                    if ( *format == 108 )
                    {
                      ++format;
                      v51 = 4096;
                    }
                    else
                    {
                      v51 = 16;
                    }
                    v7 |= v51;
                    break;
                  case 'w':
                    v7 |= 0x800u;
                    break;
                }
                goto LABEL_142;
              }
              v52 = *format;
              v7 |= 0x8000u;
              if ( (_WORD)v52 == 54 )
              {
                if ( format[1] == 52 )
                {
                  format += 2;
                  goto LABEL_142;
                }
              }
              else if ( (_WORD)v52 == 51 )
              {
                if ( format[1] == 50 )
                {
                  format += 2;
                  v7 &= ~0x8000u;
                  goto LABEL_142;
                }
              }
              else
              {
                LOWORD(v52) = v52 - 88;
                if ( (unsigned __int16)v52 <= 0x20u )
                {
                  v53 = 0x120821001LL;
                  if ( _bittest64(&v53, v52) )
                    goto LABEL_142;
                }
              }
              v67 = 0;
$NORMAL_STATE:
              v60 = 1;
              write_char(v12, v6, &charsout);
              v13 = charsout;
              goto LABEL_141;
            }
            if ( v23 == 1 )
            {
              if ( v12 > 0x69u )
              {
                switch ( v12 )
                {
                  case 'n':
                    v43 = *(unsigned __int16 **)v5;
                    v59 = (char *)(v5 + 4);
                    if ( !(unsigned int)get_printf_count_output((unsigned int)v12 - 110, v9, v8) )
                      goto LABEL_186;
                    if ( (v7 & 0x20) != 0 )
                      *v43 = v13;
                    else
                      *(_DWORD *)v43 = v13;
                    format = (const wchar_t *)text.sz;
                    v65 = 1;
                    goto LABEL_26;
                  case 'o':
                    v30 = 8;
                    if ( (v7 & 0x80u) != 0 )
                      v7 |= 0x200u;
                    goto $COMMON_INT;
                  case 'p':
                    LODWORD(v9) = 16;
                    v7 |= 0x8000u;
                    goto LABEL_76;
                }
                if ( v12 != 115 )
                {
                  if ( v12 == 117 )
                    goto LABEL_58;
                  if ( v12 != 120 )
                    goto LABEL_26;
                  v33 = 39;
                  goto LABEL_77;
                }
              }
              else
              {
                if ( v12 == 105 )
                  goto LABEL_57;
                if ( v12 == 67 )
                {
                  if ( (v7 & 0x830) == 0 )
                    v7 |= 0x20u;
                  goto LABEL_52;
                }
                if ( v12 != 83 )
                {
                  if ( v12 != 88 )
                  {
                    if ( v12 == 90 )
                    {
                      v25 = *(unsigned __int16 **)v5;
                      v59 = (char *)(v5 + 4);
                      if ( v25 && (sz = ($B4FF2100EA110D8CD0B9C89F852FB035 *)*((_QWORD *)v25 + 1)) != 0LL )
                      {
                        if ( v25[1] < *v25 )
                          goto LABEL_186;
                        LODWORD(v14) = *v25;
                        if ( (v7 & 0x800) != 0 )
                        {
                          if ( (v14 & 1) != 0 || ((unsigned __int8)sz & 1) != 0 )
                          {
LABEL_186:
                            FxDeviceBase::AddChildList(0LL);
                            return 0xFFFFFFFFLL;
                          }
                          LODWORD(v14) = *v25 >> 1;
                          v60 = 1;
                        }
                        else
                        {
                          v60 = 0;
                        }
                      }
                      else
                      {
                        sz = ($B4FF2100EA110D8CD0B9C89F852FB035 *)"(null)";
                        LODWORD(v14) = 6;
                      }
                      goto LABEL_26;
                    }
                    if ( v12 != 99 )
                    {
                      if ( v12 != 100 )
                        goto LABEL_26;
LABEL_57:
                      v7 |= 0x40u;
LABEL_58:
                      v30 = 10;
$COMMON_INT:
                      if ( (v7 & 0x8000) != 0 || (v7 & 0x1000) != 0 )
                      {
                        v31 = *(_QWORD *)v5;
                        v32 = (char *)(v5 + 4);
                      }
                      else
                      {
                        v32 = (char *)(v5 + 4);
                        if ( (v7 & 0x20) != 0 )
                        {
                          v59 = v32;
                          if ( (v7 & 0x40) != 0 )
                            v31 = *((__int16 *)v32 - 4);
                          else
                            v31 = *((unsigned __int16 *)v32 - 4);
LABEL_90:
                          if ( (v7 & 0x40) != 0 && v31 < 0 )
                          {
                            v31 = -v31;
                            v7 |= 0x100u;
                          }
                          v35 = (unsigned int)v31;
                          if ( (v7 & 0x9000) != 0 )
                            v35 = v31;
                          if ( (int)v9 >= 0 )
                          {
                            v7 &= ~8u;
                            if ( (int)v9 > 512 )
                              LODWORD(v9) = 512;
                            v55 = v9;
                          }
                          else
                          {
                            v55 = 1;
                          }
                          v36 = v55;
                          v37 = &buffer.sz[511];
                          v38 = v35 != 0 ? v10 : 0;
                          v39 = v66;
                          v56 = v38;
                          v69 = v38;
                          while ( 1 )
                          {
                            v40 = v36--;
                            if ( v40 <= 0 && !v35 )
                              break;
                            v41 = v35 % v30;
                            v35 /= v30;
                            v42 = v41 + 48;
                            if ( (int)v41 + 48 > 57 )
                              v42 += v39;
                            *v37-- = v42;
                          }
                          v54 = v36;
                          LODWORD(v14) = (unsigned int)&buffer.wz[64] + 383 - (_DWORD)v37;
                          sz = ($B4FF2100EA110D8CD0B9C89F852FB035 *)(v37 + 1);
                          v10 = v69;
                          if ( (v7 & 0x200) != 0 )
                          {
                            if ( !(_DWORD)v14 || (v56 = v69, sz->sz[0] != 48) )
                            {
                              sz = ($B4FF2100EA110D8CD0B9C89F852FB035 *)((char *)sz - 1);
                              v56 = v69;
                              LODWORD(v14) = v14 + 1;
                              sz->sz[0] = 48;
                            }
                          }
LABEL_26:
                          if ( v65 )
                            goto LABEL_141;
                          if ( (v7 & 0x40) != 0 )
                          {
                            if ( (v7 & 0x100) != 0 )
                            {
                              v24 = 45;
                              goto LABEL_117;
                            }
                            if ( (v7 & 1) != 0 )
                            {
                              v24 = 43;
LABEL_117:
                              prefix[0] = v24;
LABEL_118:
                              v44 = 1;
                              v56 = 1;
LABEL_122:
                              v45 = v58 - v14 - v44;
                              if ( (v7 & 0xC) == 0 )
                                write_multi_char(0x20u, v45, f, &charsout);
                              write_string(prefix, v44, f, &charsout);
                              v46 = f;
                              if ( (v7 & 0xC) == 8 )
                                write_multi_char(0x30u, v45, f, &charsout);
                              if ( v60 || (int)v14 <= 0 )
                              {
                                write_string((wchar_t *)sz, v14, v46, &charsout);
LABEL_136:
                                v13 = charsout;
                              }
                              else
                              {
                                v47 = (const char *)sz;
                                v48 = v14;
                                while ( 1 )
                                {
                                  --v48;
                                  v49 = mbtowc(&wchar, v47, _mb_cur_max);
                                  v50 = v49;
                                  if ( v49 == 2 )
                                    --v48;
                                  if ( v49 <= 0 )
                                    break;
                                  write_char(wchar, f, &charsout);
                                  v47 += v50;
                                  if ( v48 <= 0 )
                                  {
                                    v46 = f;
                                    goto LABEL_136;
                                  }
                                }
                                v46 = f;
                                v13 = -1;
                                charsout = -1;
                              }
                              if ( v13 >= 0 && (v7 & 4) != 0 )
                              {
                                write_multi_char(0x20u, v45, v46, &charsout);
                                v13 = charsout;
                              }
                              format = (const wchar_t *)text.sz;
                              v10 = v56;
LABEL_141:
                              v5 = (wchar_t *)v59;
                              v9 = v54;
                              v8 = v58;
                              v6 = f;
                              goto LABEL_142;
                            }
                            if ( (v7 & 2) != 0 )
                            {
                              prefix[0] = 32;
                              goto LABEL_118;
                            }
                          }
                          v44 = v56;
                          goto LABEL_122;
                        }
                        if ( (v7 & 0x40) != 0 )
                          v31 = *((int *)v32 - 2);
                        else
                          v31 = *((unsigned int *)v32 - 2);
                      }
                      v59 = v32;
                      goto LABEL_90;
                    }
LABEL_52:
                    v29 = *v5;
                    wchar = *v5;
                    v60 = 1;
                    v59 = (char *)(v5 + 4);
                    if ( (v7 & 0x20) != 0 )
                    {
                      tempchar[0] = v29;
                      tempchar[1] = 0;
                      if ( mbtowc((wchar_t *)&buffer, tempchar, _mb_cur_max) < 0 )
                        v65 = 1;
                    }
                    else
                    {
                      buffer.wz[0] = v29;
                    }
                    sz = &buffer;
                    LODWORD(v14) = 1;
                    goto LABEL_26;
                  }
LABEL_76:
                  v33 = 7;
LABEL_77:
                  v66 = v33;
                  v30 = 16;
                  if ( (v7 & 0x80u) != 0 )
                  {
                    prefix[0] = 48;
                    v10 = 2;
                    prefix[1] = v33 + 81;
                  }
                  goto $COMMON_INT;
                }
                if ( (v7 & 0x830) == 0 )
                  v7 |= 0x20u;
              }
              v26 = v9;
              if ( (_DWORD)v9 == -1 )
                v26 = 0x7FFFFFFF;
              v27 = *($B4FF2100EA110D8CD0B9C89F852FB035 **)v5;
              v59 = (char *)(v5 + 4);
              if ( (v7 & 0x20) != 0 )
              {
                sz = ($B4FF2100EA110D8CD0B9C89F852FB035 *)"(null)";
                LODWORD(v14) = 0;
                if ( v27 )
                  sz = v27;
                v28 = sz;
                if ( v26 > 0 )
                {
                  do
                  {
                    if ( !*v28 )
                      break;
                    ++v28;
                    LODWORD(v14) = v14 + 1;
                  }
                  while ( (int)v14 < v26 );
                }
              }
              else
              {
                v60 = 1;
                sz = ($B4FF2100EA110D8CD0B9C89F852FB035 *)L"(null)";
                if ( v27 )
                  sz = v27;
                for ( i = (char *)sz; v26; i += 2 )
                {
                  --v26;
                  if ( !*(_WORD *)i )
                    break;
                }
                v14 = (i - (char *)sz) >> 1;
              }
              goto LABEL_26;
            }
          }
          else
          {
            if ( v12 != 42 )
            {
              v9 = (unsigned int)v12 + 2 * (5 * (_DWORD)v9 - 24);
              goto LABEL_169;
            }
            v9 = *(unsigned int *)v5;
            v5 += 4;
            v59 = (char *)v5;
            v54 = v9;
            if ( (int)v9 < 0 )
            {
              v9 = 0xFFFFFFFFLL;
LABEL_169:
              v54 = v9;
            }
          }
        }
        else
        {
          if ( v12 != 42 )
          {
            v8 = (unsigned int)v12 + 2 * (5 * (_DWORD)v8 - 24);
            goto LABEL_174;
          }
          v8 = *(unsigned int *)v5;
          v5 += 4;
          v59 = (char *)v5;
          v58 = v8;
          if ( (int)v8 < 0 )
          {
            v7 |= 4u;
            v8 = (unsigned int)-(int)v8;
LABEL_174:
            v58 = v8;
          }
        }
LABEL_142:
        v12 = *format;
      }
      while ( *format );
    }
    return (unsigned int)v13;
  }
  else
  {
    FxDeviceBase::AddChildList(0LL);
    return 0xFFFFFFFFLL;
  }
}
