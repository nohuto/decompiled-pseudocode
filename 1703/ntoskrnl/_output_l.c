/*
 * XREFs of _output_l @ 0x14016D6E0
 * Callers:
 *     _vsnprintf_l @ 0x14016964C (_vsnprintf_l.c)
 *     _snprintf @ 0x140169AD0 (_snprintf.c)
 *     sprintf @ 0x14016AE90 (sprintf.c)
 *     _vsprintf_l @ 0x14016BA2C (_vsprintf_l.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14014A440 (xHalTimerWatchdogStop.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     wctomb_s @ 0x14016C260 (wctomb_s.c)
 *     write_multi_char_0 @ 0x14016DF38 (write_multi_char_0.c)
 *     write_string_0 @ 0x14016DF90 (write_string_0.c)
 *     _get_printf_count_output @ 0x14016E614 (_get_printf_count_output.c)
 *     write_char_0 @ 0x14017120C (write_char_0.c)
 */

__int64 __fastcall output_l(__int64 a1, char *a2, __int64 a3, int *a4)
{
  __int64 v6; // r10
  int v7; // edi
  int v8; // r14d
  int v9; // edx
  int v10; // r11d
  char v12; // r9
  int v13; // r15d
  int v14; // r8d
  char *v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  char *v18; // rax
  __int64 v19; // rcx
  __int64 j; // rax
  char *v21; // rax
  char *i; // rax
  errno_t v23; // eax
  unsigned __int64 v24; // r10
  __int64 v25; // rax
  int v26; // r8d
  unsigned int v27; // r12d
  unsigned __int64 v28; // r8
  char *v29; // rbx
  int v30; // ecx
  char v31; // r11
  int v32; // r9d
  unsigned __int64 v33; // rdx
  char v34; // al
  int v35; // eax
  _WORD *v36; // rsi
  unsigned int v37; // r15d
  unsigned int v38; // r14d
  __int64 v39; // rcx
  __int64 v40; // r15
  int v41; // esi
  wchar_t *v42; // r15
  wchar_t v43; // r9
  __int64 v44; // rcx
  int v45; // eax
  char v46; // al
  __int64 v47; // rcx
  __int64 v48; // rcx
  int v49; // [rsp+30h] [rbp-D0h]
  int SizeConverted; // [rsp+34h] [rbp-CCh] BYREF
  int v51; // [rsp+38h] [rbp-C8h] BYREF
  int v52; // [rsp+3Ch] [rbp-C4h]
  _BYTE v53[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v54; // [rsp+44h] [rbp-BCh]
  int v55; // [rsp+48h] [rbp-B8h]
  int v56; // [rsp+4Ch] [rbp-B4h]
  __int64 v57; // [rsp+50h] [rbp-B0h]
  int v58; // [rsp+58h] [rbp-A8h]
  int v59; // [rsp+5Ch] [rbp-A4h]
  char *v60; // [rsp+60h] [rbp-A0h]
  int v61; // [rsp+68h] [rbp-98h] BYREF
  char MbCh[144]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v63; // [rsp+100h] [rbp+0h] BYREF
  char v64; // [rsp+26Fh] [rbp+16Fh] BYREF
  char v65[8]; // [rsp+270h] [rbp+170h] BYREF

  v57 = a1;
  v59 = 0;
  v54 = 0;
  v52 = 0;
  v6 = a1;
  v49 = 0;
  v7 = 0;
  v58 = 0;
  v8 = 0;
  v55 = 0;
  v9 = 0;
  v10 = 0;
  if ( a1 && a2 )
  {
    v12 = *a2;
    v13 = 0;
    v51 = 0;
    v14 = 0;
    SizeConverted = 0;
    if ( v12 )
    {
      v15 = v60;
      do
      {
        v60 = ++a2;
        if ( v13 < 0 )
          return (unsigned int)v13;
        if ( (unsigned __int8)(v12 - 32) > 0x58u )
          v16 = 0;
        else
          v16 = _lookuptable[v12 - 32] & 0xF;
        v17 = v14 + 8 * v16;
        v18 = _lookuptable;
        v14 = _lookuptable[v17] >> 4;
        v56 = v14;
        switch ( v14 )
        {
          case 0:
            v48 = 0LL;
            goto LABEL_182;
          case 1:
            v9 = -1;
            v58 = 0;
            v8 = 0;
            v54 = 0;
            v10 = 0;
            v49 = 0;
            v7 = 0;
            v52 = -1;
            v55 = 0;
            break;
          case 2:
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
            break;
          case 3:
            if ( v12 != 42 )
            {
              v8 = v12 + 2 * (5 * v8 - 24);
              goto LABEL_169;
            }
            v8 = *a4;
            a4 += 2;
            v54 = v8;
            if ( v8 < 0 )
            {
              v7 |= 4u;
              v8 = -v8;
LABEL_169:
              v54 = v8;
            }
            break;
          case 4:
            v9 = 0;
            goto LABEL_164;
          case 5:
            if ( v12 != 42 )
            {
              v9 = v12 + 2 * (5 * v9 - 24);
              goto LABEL_164;
            }
            v9 = *a4;
            a4 += 2;
            v52 = v9;
            if ( v9 < 0 )
            {
              v9 = -1;
LABEL_164:
              v52 = v9;
            }
            break;
          case 6:
            if ( v12 != 73 )
            {
              switch ( v12 )
              {
                case 'h':
                  v7 |= 0x20u;
                  break;
                case 'l':
                  if ( *a2 == 108 )
                  {
                    ++a2;
                    v45 = 4096;
                  }
                  else
                  {
                    v45 = 16;
                  }
                  v7 |= v45;
                  break;
                case 'w':
                  v7 |= 0x800u;
                  break;
              }
              break;
            }
            v46 = *a2;
            v7 |= 0x8000u;
            if ( *a2 == 54 && a2[1] == 52 )
            {
              a2 += 2;
              v7 |= 0x8000u;
            }
            else
            {
              if ( v46 != 51 || a2[1] != 50 )
              {
                LOBYTE(v18) = v46 - 88;
                if ( (unsigned __int8)v18 <= 0x20u )
                {
                  v47 = 0x120821001LL;
                  if ( _bittest64(&v47, (unsigned __int64)v18) )
                    break;
                }
                v48 = 0LL;
                v56 = 0;
LABEL_182:
                v55 = 0;
                LOBYTE(v48) = v12;
                write_char_0(v48, v6, &v51);
                v13 = v51;
LABEL_183:
                v10 = v49;
LABEL_184:
                v14 = v56;
                v6 = v57;
                v9 = v52;
                break;
              }
              a2 += 2;
              v7 &= ~0x8000u;
            }
            break;
          case 7:
            if ( v12 > 105 )
            {
              switch ( v12 )
              {
                case 'n':
                  v36 = *(_WORD **)a4;
                  a4 += 2;
                  if ( !get_printf_count_output() )
                    goto LABEL_187;
                  if ( (v7 & 0x20) != 0 )
                    *v36 = v13;
                  else
                    *(_DWORD *)v36 = v13;
                  a2 = v60;
                  v10 = v49;
                  v58 = 1;
                  goto LABEL_26;
                case 'o':
                  v24 = 8LL;
                  if ( (v7 & 0x80u) != 0 )
                    v7 |= 0x200u;
                  goto LABEL_56;
                case 'p':
                  v52 = 16;
                  v7 |= 0x8000u;
                  goto LABEL_79;
              }
              if ( v12 != 115 )
              {
                v19 = (unsigned int)(v12 - 117);
                if ( v12 == 117 )
                  goto LABEL_55;
                if ( v12 != 120 )
                  goto LABEL_26;
                v26 = 39;
                goto LABEL_80;
              }
            }
            else
            {
              if ( v12 == 105 )
                goto LABEL_54;
              v19 = (unsigned int)(v12 - 67);
              if ( v12 == 67 )
              {
                if ( (v7 & 0x830) == 0 )
                  v7 |= 0x800u;
                goto LABEL_49;
              }
              if ( v12 != 83 )
              {
                if ( v12 != 88 )
                {
                  if ( v12 != 90 )
                  {
                    v19 = (unsigned int)(v12 - 99);
                    if ( v12 != 99 )
                    {
                      if ( v12 != 100 )
                        goto LABEL_26;
LABEL_54:
                      v7 |= 0x40u;
LABEL_55:
                      v24 = 10LL;
LABEL_56:
                      if ( (v7 & 0x8000) != 0 || (v7 & 0x1000) != 0 )
                      {
                        v25 = *(_QWORD *)a4;
                        a4 += 2;
                      }
                      else
                      {
                        a4 += 2;
                        if ( (v7 & 0x20) != 0 )
                        {
                          if ( (v7 & 0x40) != 0 )
                            v25 = *((__int16 *)a4 - 4);
                          else
                            v25 = *((unsigned __int16 *)a4 - 4);
                        }
                        else if ( (v7 & 0x40) != 0 )
                        {
                          v25 = *(a4 - 2);
                        }
                        else
                        {
                          v25 = (unsigned int)*(a4 - 2);
                        }
                      }
                      if ( (v7 & 0x40) != 0 && v25 < 0 )
                      {
                        v25 = -v25;
                        v7 |= 0x100u;
                      }
                      v27 = v52;
                      v28 = (unsigned int)v25;
                      if ( (v7 & 0x9000) != 0 )
                        v28 = v25;
                      if ( v52 >= 0 )
                      {
                        v7 &= ~8u;
                        if ( v52 > 512 )
                          v27 = 512;
                      }
                      else
                      {
                        v27 = 1;
                      }
                      v29 = &v64;
                      v30 = v28 != 0 ? v10 : 0;
                      v31 = v59;
                      v49 = v30;
                      v32 = v30;
                      while ( 1 )
                      {
                        v19 = v27--;
                        if ( (int)v19 <= 0 && !v28 )
                          break;
                        v33 = v28 % v24;
                        v28 /= v24;
                        v34 = v33 + 48;
                        if ( (int)v33 + 48 > 57 )
                          v34 += v31;
                        *v29-- = v34;
                      }
                      v52 = v27;
                      v35 = (unsigned int)&v63 + 367 - (_DWORD)v29;
                      v15 = v29 + 1;
                      SizeConverted = v35;
                      v10 = v32;
                      if ( (v7 & 0x200) != 0 )
                      {
                        if ( !v35 || (v49 = v32, *v15 != 48) )
                        {
                          --v15;
                          v49 = v32;
                          ++SizeConverted;
                          *v15 = 48;
                        }
                      }
LABEL_26:
                      if ( v58 )
                        goto LABEL_184;
                      if ( (v7 & 0x40) == 0 )
                        goto LABEL_121;
                      if ( (v7 & 0x100) != 0 )
                      {
                        v53[0] = 45;
                        goto LABEL_118;
                      }
                      if ( (v7 & 1) != 0 )
                      {
                        v53[0] = 43;
                        goto LABEL_118;
                      }
                      if ( (v7 & 2) != 0 )
                      {
                        v53[0] = 32;
LABEL_118:
                        v37 = 1;
                        v49 = 1;
                      }
                      else
                      {
LABEL_121:
                        v37 = v49;
                      }
                      v38 = v8 - SizeConverted - v37;
                      if ( (v7 & 0xC) == 0 )
                      {
                        LOBYTE(v19) = 32;
                        write_multi_char_0(v19, v38, v57, &v51);
                      }
                      write_string_0(v53, v37, v57, &v51);
                      v40 = v57;
                      if ( (v7 & 0xC) == 8 )
                      {
                        LOBYTE(v39) = 48;
                        write_multi_char_0(v39, v38, v57, &v51);
                      }
                      v41 = SizeConverted;
                      if ( v55 && SizeConverted > 0 )
                      {
                        v42 = (wchar_t *)v15;
                        while ( 1 )
                        {
                          v43 = *v42++;
                          --v41;
                          if ( wctomb_s(&v61, v65, 6uLL, v43) || !v61 )
                            break;
                          write_string_0(v65, (unsigned int)v61, v57, &v51);
                          if ( !v41 )
                            goto LABEL_135;
                        }
                        v13 = -1;
                        v51 = -1;
                      }
                      else
                      {
                        write_string_0(v15, (unsigned int)SizeConverted, v40, &v51);
LABEL_135:
                        v13 = v51;
                      }
                      if ( v13 >= 0 && (v7 & 4) != 0 )
                      {
                        LOBYTE(v44) = 32;
                        write_multi_char_0(v44, v38, v57, &v51);
                        v13 = v51;
                      }
                      a2 = v60;
                      v8 = v54;
                      goto LABEL_183;
                    }
LABEL_49:
                    a4 += 2;
                    if ( (v7 & 0x810) != 0 )
                    {
                      v23 = wctomb_s(&SizeConverted, MbCh, 0x200uLL, *((_WORD *)a4 - 4));
                      v10 = v49;
                      if ( v23 )
                        v58 = 1;
                    }
                    else
                    {
                      MbCh[0] = *((_BYTE *)a4 - 8);
                      SizeConverted = 1;
                    }
                    v15 = MbCh;
                    goto LABEL_26;
                  }
                  v19 = *(_QWORD *)a4;
                  a4 += 2;
                  if ( !v19 || (v15 = *(char **)(v19 + 8)) == 0LL )
                  {
                    v15 = "(null)";
                    SizeConverted = 6;
                    goto LABEL_26;
                  }
                  LOWORD(j) = *(_WORD *)v19;
                  if ( *(_WORD *)(v19 + 2) < *(_WORD *)v19 )
                    goto LABEL_187;
                  if ( (v7 & 0x800) != 0 )
                  {
                    if ( (j & 1) != 0 || ((unsigned __int8)v15 & 1) != 0 )
                    {
LABEL_187:
                      xHalTimerWatchdogStop();
                      return 0xFFFFFFFFLL;
                    }
                    SizeConverted = (unsigned __int16)j >> 1;
                    v55 = 1;
                    goto LABEL_26;
                  }
                  v55 = 0;
                  LODWORD(j) = (unsigned __int16)j;
LABEL_77:
                  SizeConverted = j;
                  goto LABEL_26;
                }
LABEL_79:
                v26 = 7;
LABEL_80:
                v59 = v26;
                if ( (v7 & 0x80u) != 0 )
                {
                  v53[0] = 48;
                  v53[1] = v26 + 81;
                  v10 = 2;
                }
                v24 = 16LL;
                goto LABEL_56;
              }
              if ( (v7 & 0x830) == 0 )
                v7 |= 0x800u;
            }
            v19 = (unsigned int)v9;
            if ( v9 == -1 )
              v19 = 0x7FFFFFFFLL;
            v21 = *(char **)a4;
            a4 += 2;
            if ( (v7 & 0x810) != 0 )
            {
              v55 = 1;
              v15 = (char *)L"(null)";
              if ( v21 )
                v15 = v21;
              for ( i = v15; (_DWORD)v19; i += 2 )
              {
                v19 = (unsigned int)(v19 - 1);
                if ( !*(_WORD *)i )
                  break;
              }
              j = (i - v15) >> 1;
            }
            else
            {
              v15 = "(null)";
              if ( v21 )
                v15 = v21;
              for ( j = (__int64)v15; (_DWORD)v19; ++j )
              {
                v19 = (unsigned int)(v19 - 1);
                if ( !*(_BYTE *)j )
                  break;
              }
              LODWORD(j) = j - (_DWORD)v15;
            }
            goto LABEL_77;
        }
        v12 = *a2;
      }
      while ( *a2 );
    }
    return (unsigned int)v13;
  }
  else
  {
    xHalTimerWatchdogStop();
    return 0xFFFFFFFFLL;
  }
}
