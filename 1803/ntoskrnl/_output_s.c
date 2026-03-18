/*
 * XREFs of _output_s @ 0x14018F004
 * Callers:
 *     _soutput_s @ 0x14018F978 (_soutput_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14016CD90 (xHalTimerWatchdogStop.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     write_char_0 @ 0x14018C5B0 (write_char_0.c)
 *     write_multi_char_0 @ 0x14018C600 (write_multi_char_0.c)
 *     _safecrt_wctomb_s @ 0x14018F8A0 (_safecrt_wctomb_s.c)
 *     write_string_1 @ 0x14018FA54 (write_string_1.c)
 */

__int64 __fastcall output_s(FILE *a1, char *a2, int *a3)
{
  int *v3; // rsi
  char *v4; // r11
  int v5; // edi
  int v6; // r15d
  unsigned int v7; // r12d
  char v9; // r9
  __int64 v10; // r14
  int v11; // r8d
  const wchar_t *v12; // rbx
  char *v13; // r10
  int v14; // r8d
  unsigned __int64 v15; // rax
  unsigned __int16 *v16; // rax
  unsigned __int16 v17; // cx
  int v18; // ecx
  const wchar_t *v19; // r14
  int *v20; // rsi
  int v21; // eax
  unsigned int v22; // r10d
  int *v23; // rsi
  __int64 v24; // rax
  int v25; // eax
  const char *v26; // rax
  unsigned __int64 v27; // r8
  char *v28; // rbx
  unsigned int v29; // ecx
  char v30; // r12
  int v31; // eax
  char *v32; // rdx
  unsigned __int64 v33; // rdx
  char v34; // al
  int v35; // eax
  bool v36; // zf
  int v37; // r15d
  FILE *v38; // rsi
  unsigned __int16 *v39; // r12
  int v40; // esi
  __int64 v41; // r9
  int v42; // eax
  char v43; // al
  __int64 v44; // rcx
  int v45; // ecx
  int v46; // eax
  int v47; // ecx
  _BYTE v48[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v49; // [rsp+34h] [rbp-CCh] BYREF
  int v50; // [rsp+38h] [rbp-C8h]
  int v51; // [rsp+3Ch] [rbp-C4h]
  int v52; // [rsp+40h] [rbp-C0h] BYREF
  int v53; // [rsp+44h] [rbp-BCh]
  int v54; // [rsp+48h] [rbp-B8h]
  int v55; // [rsp+4Ch] [rbp-B4h]
  int *v56; // [rsp+50h] [rbp-B0h]
  FILE *v57; // [rsp+58h] [rbp-A8h]
  int v58; // [rsp+60h] [rbp-A0h]
  int v59; // [rsp+64h] [rbp-9Ch]
  const char *v60; // [rsp+68h] [rbp-98h]
  unsigned int v61[4]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v62[128]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v63; // [rsp+100h] [rbp+0h] BYREF
  char v64; // [rsp+27Fh] [rbp+17Fh] BYREF
  char v65[8]; // [rsp+280h] [rbp+180h] BYREF

  v56 = a3;
  v57 = a1;
  v3 = a3;
  v58 = 0;
  v4 = a2;
  v55 = 0;
  v5 = 0;
  v51 = 0;
  v6 = 0;
  v50 = 0;
  v7 = 0;
  v59 = 0;
  v54 = 0;
  if ( !a1 || !a2 )
  {
    xHalTimerWatchdogStop();
    return 0xFFFFFFFFLL;
  }
  v9 = *a2;
  LODWORD(v10) = 0;
  v49 = 0;
  v11 = 0;
  v52 = 0;
  v53 = 0;
  if ( !v9 )
    return (unsigned int)v49;
  v12 = (const wchar_t *)v60;
  while ( 1 )
  {
    v13 = v4++;
    v60 = v4;
    if ( v49 < 0 )
      break;
    if ( (unsigned __int8)(v9 - 32) > 0x58u )
      v14 = 0;
    else
      v14 = _lookuptable_s[v9 - 32] & 0xF;
    v15 = 0LL;
    v11 = _lookuptable_s[v53 + 8 * v14 + v14] >> 4;
    v53 = v11;
    switch ( v11 )
    {
      case 8:
        goto LABEL_179;
      case 0:
        goto LABEL_156;
      case 1:
        v51 = -1;
        v59 = 0;
        v7 = 0;
        v55 = 0;
        v5 = 0;
        v50 = 0;
        v6 = -1;
        v54 = 0;
        break;
      case 2:
        switch ( v9 )
        {
          case ' ':
            v5 |= 2u;
            break;
          case '#':
            v5 |= 0x80u;
            break;
          case '+':
            v5 |= 1u;
            break;
          case '-':
            v5 |= 4u;
            break;
          case '0':
            v5 |= 8u;
            break;
        }
        break;
      case 3:
        if ( v9 == 42 )
        {
          v45 = *v3;
          v56 = v3 + 2;
          v46 = v5 | 4;
          if ( v45 >= 0 )
            v46 = v5;
          v5 = v46;
          v47 = abs32(v45);
        }
        else
        {
          v47 = v9 + 2 * (5 * v55 - 24);
        }
        v55 = v47;
        break;
      case 4:
        v6 = 0;
        v51 = 0;
        break;
      case 5:
        if ( v9 == 42 )
        {
          v6 = *v3;
          v56 = v3 + 2;
          v51 = v6;
          if ( v6 < 0 )
          {
            v6 = -1;
            v51 = -1;
          }
        }
        else
        {
          v6 = v9 + 2 * (5 * v6 - 24);
          v51 = v6;
        }
        break;
      case 6:
        switch ( v9 )
        {
          case 'I':
            v43 = *v4;
            v5 |= 0x8000u;
            if ( *v4 == 54 )
            {
              if ( v13[2] != 52 )
                goto LABEL_155;
              v4 = v13 + 3;
            }
            else if ( v43 == 51 )
            {
              if ( v13[2] != 50 )
                goto LABEL_155;
              v4 = v13 + 3;
              v5 &= ~0x8000u;
            }
            else
            {
              LOBYTE(v15) = v43 - 88;
              if ( (unsigned __int8)v15 > 0x20u || (v44 = 0x120821001LL, !_bittest64(&v44, v15)) )
              {
LABEL_155:
                v53 = 0;
LABEL_156:
                v54 = 0;
                write_char_0(v9, v57, &v49);
LABEL_133:
                v4 = (char *)v60;
                v11 = v53;
              }
            }
            break;
          case 'h':
            v5 |= 0x20u;
            break;
          case 'l':
            v42 = 4096;
            if ( *v4 != 108 )
              v42 = 16;
            v5 |= v42;
            if ( *v4 != 108 )
              v4 = v13;
            ++v4;
            break;
          case 'w':
            v5 |= 0x800u;
            break;
        }
        break;
      case 7:
        if ( v9 > 105 )
        {
          switch ( v9 )
          {
            case 'n':
              goto LABEL_179;
            case 'o':
              v22 = 8;
              if ( (v5 & 0x80u) != 0 )
                v5 |= 0x200u;
              goto LABEL_58;
            case 'p':
              v6 = 16;
              v5 |= 0x8000u;
              goto LABEL_80;
          }
          if ( v9 != 115 )
          {
            if ( v9 == 117 )
              goto LABEL_57;
            if ( v9 != 120 )
              goto LABEL_27;
            v25 = 39;
            goto LABEL_81;
          }
        }
        else
        {
          if ( v9 == 105 )
            goto LABEL_56;
          if ( v9 == 67 )
          {
            if ( (v5 & 0x830) == 0 )
              v5 |= 0x800u;
            goto LABEL_51;
          }
          if ( v9 != 83 )
          {
            if ( v9 != 88 )
            {
              if ( v9 != 90 )
              {
                if ( v9 != 99 )
                {
                  if ( v9 != 100 )
                    goto LABEL_27;
LABEL_56:
                  v5 |= 0x40u;
LABEL_57:
                  v22 = 10;
LABEL_58:
                  v23 = v3 + 2;
                  v56 = v23;
                  if ( (v5 & 0x8000) != 0 || (v5 & 0x1000) != 0 )
                  {
                    v24 = *((_QWORD *)v23 - 1);
                  }
                  else if ( (v5 & 0x20) != 0 )
                  {
                    if ( (v5 & 0x40) != 0 )
                      v24 = *((__int16 *)v23 - 4);
                    else
                      v24 = *((unsigned __int16 *)v23 - 4);
                  }
                  else if ( (v5 & 0x40) != 0 )
                  {
                    v24 = *(v23 - 2);
                  }
                  else
                  {
                    v24 = (unsigned int)*(v23 - 2);
                  }
                  if ( (v5 & 0x40) != 0 && v24 < 0 )
                  {
                    v24 = -v24;
                    v5 |= 0x100u;
                  }
                  v27 = (unsigned int)v24;
                  if ( (v5 & 0x9000) != 0 )
                    v27 = v24;
                  if ( v6 >= 0 )
                  {
                    v5 &= ~8u;
                    if ( v6 > 512 )
                      v6 = 512;
                  }
                  else
                  {
                    v6 = 1;
                  }
                  v28 = &v64;
                  v29 = v27 != 0 ? v7 : 0;
                  v30 = v58;
                  v50 = v29;
                  while ( 1 )
                  {
                    v31 = v6;
                    v32 = v28;
                    --v6;
                    if ( v31 <= 0 && !v27 )
                      break;
                    v33 = v27 % v22;
                    v27 /= v22;
                    v34 = v33 + 48;
                    if ( (int)v33 + 48 > 57 )
                      v34 += v30;
                    *v28-- = v34;
                  }
                  v51 = v6;
                  v35 = (unsigned int)&v63 + 383 - (_DWORD)v28;
                  v12 = (const wchar_t *)(v28 + 1);
                  v52 = v35;
                  LODWORD(v10) = v35;
                  v7 = v29;
                  if ( (v5 & 0x200) != 0 )
                  {
                    if ( !v35 || (v36 = *(_BYTE *)v12 == 48, v56 = v23, v50 = v29, !v36) )
                    {
                      LODWORD(v10) = v35 + 1;
                      *v32 = 48;
                      v52 = v35 + 1;
                      v12 = (const wchar_t *)v32;
                      v56 = v23;
                      v7 = v29;
                      v50 = v29;
                    }
                  }
LABEL_27:
                  if ( v59 )
                    goto LABEL_133;
                  if ( (v5 & 0x40) != 0 )
                  {
                    if ( (v5 & 0x100) != 0 )
                    {
                      v48[0] = 45;
                      goto LABEL_115;
                    }
                    if ( (v5 & 1) != 0 )
                    {
                      v48[0] = 43;
                      goto LABEL_115;
                    }
                    if ( (v5 & 2) != 0 )
                    {
                      v48[0] = 32;
LABEL_115:
                      v7 = 1;
                      v50 = 1;
                    }
                  }
                  v37 = v55 - v10 - v7;
                  if ( (v5 & 0xC) == 0 )
                    write_multi_char_0(32, v37, v57, &v49);
                  write_string_1(v48, v7, v57, &v49);
                  v38 = v57;
                  if ( (v5 & 0xC) == 8 )
                    write_multi_char_0(48, v37, v57, &v49);
                  if ( v54 && (int)v10 > 0 )
                  {
                    v39 = (unsigned __int16 *)v12;
                    v40 = v10;
                    while ( 1 )
                    {
                      v41 = *v39++;
                      --v40;
                      if ( (unsigned int)safecrt_wctomb_s(v61, v65, 6LL, v41) || !v61[0] )
                        break;
                      write_string_1(v65, v61[0], v57, &v49);
                      if ( !v40 )
                      {
                        v7 = v50;
                        v38 = v57;
                        goto LABEL_129;
                      }
                    }
                    v7 = v50;
                    v38 = v57;
                    v49 = -1;
                  }
                  else
                  {
                    write_string_1(v12, (unsigned int)v10, v38, &v49);
                  }
LABEL_129:
                  if ( v49 >= 0 && (v5 & 4) != 0 )
                    write_multi_char_0(32, v37, v38, &v49);
                  v6 = v51;
                  goto LABEL_133;
                }
LABEL_51:
                v20 = v3 + 2;
                v56 = v20;
                if ( (v5 & 0x810) != 0 )
                {
                  v21 = safecrt_wctomb_s(&v52, v62, 512LL, *((unsigned __int16 *)v20 - 4));
                  LODWORD(v10) = v52;
                  if ( v21 )
                    v59 = 1;
                }
                else
                {
                  LODWORD(v10) = 1;
                  v62[0] = *((_BYTE *)v20 - 8);
                  v52 = 1;
                }
                v12 = (const wchar_t *)v62;
                goto LABEL_27;
              }
              v16 = *(unsigned __int16 **)v3;
              v56 = v3 + 2;
              if ( v16 && (v12 = (const wchar_t *)*((_QWORD *)v16 + 1)) != 0LL )
              {
                if ( v16[1] < *v16 )
                  goto LABEL_179;
                v17 = *v16;
                LODWORD(v10) = *v16;
                if ( (v5 & 0x800) != 0 )
                {
                  if ( (v10 & 1) != 0 || ((unsigned __int8)v12 & 1) != 0 )
                    goto LABEL_179;
                  v54 = 1;
                  LODWORD(v10) = v17 >> 1;
                }
                else
                {
                  v54 = 0;
                }
              }
              else
              {
                v12 = (const wchar_t *)"(null)";
                LODWORD(v10) = 6;
              }
LABEL_40:
              v52 = v10;
              goto LABEL_27;
            }
LABEL_80:
            v25 = 7;
LABEL_81:
            v58 = v25;
            v22 = 16;
            if ( (v5 & 0x80u) != 0 )
            {
              v48[0] = 48;
              v48[1] = v25 + 81;
              v7 = 2;
            }
            goto LABEL_58;
          }
          if ( (v5 & 0x830) == 0 )
            v5 |= 0x800u;
        }
        v12 = *(const wchar_t **)v3;
        v18 = v6;
        if ( v6 == -1 )
          v18 = 0x7FFFFFFF;
        v56 = v3 + 2;
        if ( (v5 & 0x810) != 0 )
        {
          v19 = v12;
          if ( !v12 )
          {
            v12 = L"(null)";
            v19 = L"(null)";
          }
          v54 = 1;
          while ( v18 )
          {
            --v18;
            if ( !*v19 )
              break;
            ++v19;
          }
          v10 = v19 - v12;
        }
        else
        {
          v26 = "(null)";
          if ( v12 )
            v26 = (const char *)v12;
          v12 = (const wchar_t *)v26;
          while ( v18 )
          {
            --v18;
            if ( !*v26 )
              break;
            ++v26;
          }
          LODWORD(v10) = (_DWORD)v26 - (_DWORD)v12;
        }
        goto LABEL_40;
      default:
        break;
    }
    v9 = *v4;
    if ( !*v4 )
      break;
    v3 = v56;
  }
  if ( v11 && v11 != 7 )
  {
LABEL_179:
    xHalTimerWatchdogStop();
    return 0xFFFFFFFFLL;
  }
  return (unsigned int)v49;
}
