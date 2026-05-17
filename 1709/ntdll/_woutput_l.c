/*
 * XREFs of _woutput_l @ 0x180097B00
 * Callers:
 *     _snwprintf @ 0x180091BC0 (_snwprintf.c)
 *     _vswprintf_l @ 0x18009232C (_vswprintf_l.c)
 *     _vsnwprintf_l @ 0x1800924B8 (_vsnwprintf_l.c)
 *     swprintf @ 0x1800960C0 (swprintf.c)
 * Callees:
 *     _invalid_parameter @ 0x180090BC0 (_invalid_parameter.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     write_char_0 @ 0x1800983DC (write_char_0.c)
 *     write_multi_char_0 @ 0x180098428 (write_multi_char_0.c)
 *     write_string_0 @ 0x18009847C (write_string_0.c)
 *     _get_printf_count_output @ 0x18009A8B0 (_get_printf_count_output.c)
 *     mbtowc @ 0x18009A9DC (mbtowc.c)
 */

__int64 __fastcall woutput_l(__int64 a1, char *a2, __int64 a3, wchar_t *a4)
{
  wchar_t *v5; // r11
  __int64 v6; // r10
  int v7; // edi
  int v8; // r8d
  int v9; // edx
  int v10; // r12d
  unsigned __int16 v12; // r9
  int v13; // r15d
  __int64 v14; // r13
  char *v15; // rbx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  __int16 v24; // cx
  unsigned __int16 *v25; // rcx
  int v26; // ecx
  char *v27; // rax
  _BYTE *v28; // rax
  wchar_t v29; // ax
  unsigned int v30; // r10d
  __int64 v31; // rax
  wchar_t *v32; // r11
  int v33; // eax
  char *i; // r13
  unsigned __int64 v35; // r8
  int v36; // r9d
  char *v37; // rbx
  int v38; // ecx
  char v39; // r12
  int v40; // ecx
  unsigned __int64 v41; // rdx
  char v42; // al
  unsigned __int16 *v43; // rsi
  unsigned int v44; // r15d
  unsigned int v45; // r12d
  __int64 v46; // rsi
  const char *v47; // r15
  int v48; // esi
  int v49; // eax
  __int64 v50; // r14
  int v51; // eax
  unsigned __int64 v52; // rax
  __int64 v53; // rcx
  int v54; // [rsp+30h] [rbp-D0h]
  int v55; // [rsp+30h] [rbp-D0h]
  int v56; // [rsp+34h] [rbp-CCh]
  int v57; // [rsp+38h] [rbp-C8h] BYREF
  int v58; // [rsp+3Ch] [rbp-C4h]
  wchar_t *v59; // [rsp+40h] [rbp-C0h]
  int v60; // [rsp+48h] [rbp-B8h]
  __int64 v61; // [rsp+50h] [rbp-B0h]
  char SrcCh[4]; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t v63; // [rsp+5Ch] [rbp-A4h] BYREF
  _WORD v64[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v65; // [rsp+64h] [rbp-9Ch]
  int v66; // [rsp+68h] [rbp-98h]
  int v67; // [rsp+6Ch] [rbp-94h]
  char *v68; // [rsp+70h] [rbp-90h]
  int v69; // [rsp+78h] [rbp-88h]
  wchar_t DstCh[64]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v71; // [rsp+100h] [rbp+0h] BYREF
  char v72; // [rsp+27Fh] [rbp+17Fh] BYREF

  v59 = a4;
  v61 = a1;
  v66 = 0;
  v5 = a4;
  v58 = 0;
  v6 = a1;
  v54 = 0;
  v7 = 0;
  v56 = 0;
  v8 = 0;
  v65 = 0;
  v9 = 0;
  v60 = 0;
  v10 = 0;
  if ( a1 && a2 )
  {
    v12 = *(_WORD *)a2;
    v13 = 0;
    v57 = 0;
    LODWORD(v14) = 0;
    v67 = 0;
    if ( v12 )
    {
      v15 = v68;
      do
      {
        a2 += 2;
        v68 = a2;
        if ( v13 < 0 )
          return (unsigned int)v13;
        if ( (unsigned __int16)(v12 - 32) > 0x58u )
          v16 = 0;
        else
          v16 = _lookuptable[v12 - 32] & 0xF;
        v17 = _lookuptable[8 * v16 + v67] >> 4;
        v67 = v17;
        if ( !v17 )
          goto LABEL_163;
        v18 = v17 - 1;
        if ( !v18 )
        {
          v9 = -1;
          v65 = 0;
          v8 = 0;
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
            v9 = 0;
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
                    if ( *(_WORD *)a2 == 108 )
                    {
                      a2 += 2;
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
              v52 = *(unsigned __int16 *)a2;
              v7 |= 0x8000u;
              if ( (_WORD)v52 == 54 )
              {
                if ( *((_WORD *)a2 + 1) == 52 )
                {
                  a2 += 4;
                  goto LABEL_142;
                }
              }
              else if ( (_WORD)v52 == 51 )
              {
                if ( *((_WORD *)a2 + 1) == 50 )
                {
                  a2 += 4;
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
LABEL_163:
              v60 = 1;
              write_char_0(v12, v6, &v57);
              v13 = v57;
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
                    v59 = v5 + 4;
                    if ( !get_printf_count_output() )
                      goto LABEL_186;
                    if ( (v7 & 0x20) != 0 )
                      *v43 = v13;
                    else
                      *(_DWORD *)v43 = v13;
                    a2 = v68;
                    v65 = 1;
                    goto LABEL_26;
                  case 'o':
                    v30 = 8;
                    if ( (v7 & 0x80u) != 0 )
                      v7 |= 0x200u;
                    goto LABEL_59;
                  case 'p':
                    v9 = 16;
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
                      v59 = v5 + 4;
                      if ( v25 && (v15 = (char *)*((_QWORD *)v25 + 1)) != 0LL )
                      {
                        if ( v25[1] < *v25 )
                          goto LABEL_186;
                        LODWORD(v14) = *v25;
                        if ( (v7 & 0x800) != 0 )
                        {
                          if ( (v14 & 1) != 0 || ((unsigned __int8)v15 & 1) != 0 )
                          {
LABEL_186:
                            invalid_parameter();
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
                        v15 = "(null)";
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
LABEL_59:
                      if ( (v7 & 0x8000) != 0 || (v7 & 0x1000) != 0 )
                      {
                        v31 = *(_QWORD *)v5;
                        v32 = v5 + 4;
                      }
                      else
                      {
                        v32 = v5 + 4;
                        if ( (v7 & 0x20) != 0 )
                        {
                          v59 = v32;
                          if ( (v7 & 0x40) != 0 )
                            v31 = (__int16)*(v32 - 4);
                          else
                            v31 = *(v32 - 4);
LABEL_90:
                          if ( (v7 & 0x40) != 0 && v31 < 0 )
                          {
                            v31 = -v31;
                            v7 |= 0x100u;
                          }
                          v35 = (unsigned int)v31;
                          if ( (v7 & 0x9000) != 0 )
                            v35 = v31;
                          if ( v9 >= 0 )
                          {
                            v7 &= ~8u;
                            if ( v9 > 512 )
                              v9 = 512;
                            v55 = v9;
                          }
                          else
                          {
                            v55 = 1;
                          }
                          v36 = v55;
                          v37 = &v72;
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
                          LODWORD(v14) = (unsigned int)&v71 + 383 - (_DWORD)v37;
                          v15 = v37 + 1;
                          v10 = v69;
                          if ( (v7 & 0x200) != 0 )
                          {
                            if ( !(_DWORD)v14 || (v56 = v69, *v15 != 48) )
                            {
                              --v15;
                              v56 = v69;
                              LODWORD(v14) = v14 + 1;
                              *v15 = 48;
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
                              v64[0] = v24;
LABEL_118:
                              v44 = 1;
                              v56 = 1;
LABEL_122:
                              v45 = v58 - v14 - v44;
                              if ( (v7 & 0xC) == 0 )
                                write_multi_char_0(32LL, v45, v61, &v57);
                              write_string_0(v64, v44, v61, &v57);
                              v46 = v61;
                              if ( (v7 & 0xC) == 8 )
                                write_multi_char_0(48LL, v45, v61, &v57);
                              if ( v60 || (int)v14 <= 0 )
                              {
                                write_string_0(v15, (unsigned int)v14, v46, &v57);
LABEL_136:
                                v13 = v57;
                              }
                              else
                              {
                                v47 = v15;
                                v48 = v14;
                                while ( 1 )
                                {
                                  --v48;
                                  v49 = mbtowc(&v63, v47, _mb_cur_max);
                                  v50 = v49;
                                  if ( v49 == 2 )
                                    --v48;
                                  if ( v49 <= 0 )
                                    break;
                                  write_char_0(v63, v61, &v57);
                                  v47 += v50;
                                  if ( v48 <= 0 )
                                  {
                                    v46 = v61;
                                    goto LABEL_136;
                                  }
                                }
                                v46 = v61;
                                v13 = -1;
                                v57 = -1;
                              }
                              if ( v13 >= 0 && (v7 & 4) != 0 )
                              {
                                write_multi_char_0(32LL, v45, v46, &v57);
                                v13 = v57;
                              }
                              a2 = v68;
                              v10 = v56;
LABEL_141:
                              v5 = v59;
                              v9 = v54;
                              v8 = v58;
                              v6 = v61;
                              goto LABEL_142;
                            }
                            if ( (v7 & 2) != 0 )
                            {
                              v64[0] = 32;
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
                    v63 = *v5;
                    v60 = 1;
                    v59 = v5 + 4;
                    if ( (v7 & 0x20) != 0 )
                    {
                      SrcCh[0] = v29;
                      SrcCh[1] = 0;
                      if ( mbtowc(DstCh, SrcCh, _mb_cur_max) < 0 )
                        v65 = 1;
                    }
                    else
                    {
                      DstCh[0] = v29;
                    }
                    v15 = (char *)DstCh;
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
                    v64[0] = 48;
                    v10 = 2;
                    v64[1] = v33 + 81;
                  }
                  goto LABEL_59;
                }
                if ( (v7 & 0x830) == 0 )
                  v7 |= 0x20u;
              }
              v26 = v9;
              if ( v9 == -1 )
                v26 = 0x7FFFFFFF;
              v27 = *(char **)v5;
              v59 = v5 + 4;
              if ( (v7 & 0x20) != 0 )
              {
                v15 = "(null)";
                LODWORD(v14) = 0;
                if ( v27 )
                  v15 = v27;
                v28 = v15;
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
                v15 = (char *)L"(null)";
                if ( v27 )
                  v15 = v27;
                for ( i = v15; v26; i += 2 )
                {
                  --v26;
                  if ( !*(_WORD *)i )
                    break;
                }
                v14 = (i - v15) >> 1;
              }
              goto LABEL_26;
            }
          }
          else
          {
            if ( v12 != 42 )
            {
              v9 = v12 + 2 * (5 * v9 - 24);
              goto LABEL_169;
            }
            v9 = *(_DWORD *)v5;
            v5 += 4;
            v59 = v5;
            v54 = v9;
            if ( v9 < 0 )
            {
              v9 = -1;
LABEL_169:
              v54 = v9;
            }
          }
        }
        else
        {
          if ( v12 != 42 )
          {
            v8 = v12 + 2 * (5 * v8 - 24);
            goto LABEL_174;
          }
          v8 = *(_DWORD *)v5;
          v5 += 4;
          v59 = v5;
          v58 = v8;
          if ( v8 < 0 )
          {
            v7 |= 4u;
            v8 = -v8;
LABEL_174:
            v58 = v8;
          }
        }
LABEL_142:
        v12 = *(_WORD *)a2;
      }
      while ( *(_WORD *)a2 );
    }
    return (unsigned int)v13;
  }
  else
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
}
