/*
 * XREFs of sub_180091650 @ 0x180091650
 * Callers:
 *     _snprintf @ 0x18008BF80 (_snprintf.c)
 *     sub_18008C738 @ 0x18008C738 (sub_18008C738.c)
 *     sub_18008C918 @ 0x18008C918 (sub_18008C918.c)
 *     sprintf @ 0x18008F710 (sprintf.c)
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_180091E94 @ 0x180091E94 (sub_180091E94.c)
 *     sub_180091EDC @ 0x180091EDC (sub_180091EDC.c)
 *     sub_180091F30 @ 0x180091F30 (sub_180091F30.c)
 *     sub_180094E74 @ 0x180094E74 (sub_180094E74.c)
 *     sub_180094F40 @ 0x180094F40 (sub_180094F40.c)
 */

__int64 __fastcall sub_180091650(__int64 a1, _BYTE *a2, __int64 a3, int *a4)
{
  _BYTE *v5; // r14
  __int64 v6; // r10
  int v7; // edi
  int v8; // r11d
  int v9; // esi
  char v11; // r9
  int v12; // r15d
  const wchar_t *v13; // rbx
  _BYTE *v14; // r8
  int v15; // eax
  __int64 v16; // rcx
  char *v17; // rax
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  __int64 v25; // rcx
  wchar_t *v26; // rax
  const wchar_t *v27; // rax
  unsigned int v28; // r10d
  int v29; // edx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rax
  unsigned __int64 v33; // r8
  char v34; // r12
  char *v35; // rbx
  int v36; // eax
  char *v37; // rdx
  unsigned __int64 v38; // rdx
  char v39; // al
  int v40; // eax
  wchar_t *v41; // rsi
  unsigned int v42; // r14d
  __int64 v43; // rcx
  __int64 v44; // r15
  int v45; // esi
  const wchar_t *v46; // r15
  __int64 v47; // r9
  __int64 v48; // rcx
  int v49; // eax
  char v50; // al
  __int64 v51; // rcx
  __int64 v52; // rcx
  int v53; // eax
  unsigned int v54; // [rsp+30h] [rbp-D0h]
  int v55; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v56[4]; // [rsp+38h] [rbp-C8h] BYREF
  int v57; // [rsp+3Ch] [rbp-C4h]
  int v58; // [rsp+40h] [rbp-C0h] BYREF
  int v59; // [rsp+44h] [rbp-BCh]
  int v60; // [rsp+48h] [rbp-B8h]
  __int64 v61; // [rsp+50h] [rbp-B0h]
  int v62; // [rsp+58h] [rbp-A8h]
  int v63; // [rsp+5Ch] [rbp-A4h]
  int v64; // [rsp+60h] [rbp-A0h]
  unsigned int v65; // [rsp+64h] [rbp-9Ch] BYREF
  _BYTE *v66; // [rsp+68h] [rbp-98h]
  const char *v67; // [rsp+70h] [rbp-90h]
  _BYTE v68[128]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v69; // [rsp+100h] [rbp+0h] BYREF
  char v70; // [rsp+27Fh] [rbp+17Fh] BYREF
  char v71[8]; // [rsp+280h] [rbp+180h] BYREF

  v61 = a1;
  v63 = 0;
  v59 = 0;
  v5 = a2;
  v57 = 0;
  v6 = a1;
  v54 = 0;
  v7 = 0;
  v62 = 0;
  v8 = 0;
  v60 = 0;
  v9 = 0;
  if ( a1 && a2 )
  {
    v11 = *a2;
    v12 = 0;
    v55 = 0;
    v58 = 0;
    v64 = 0;
    if ( v11 )
    {
      v13 = (const wchar_t *)v67;
      do
      {
        v14 = v5++;
        v66 = v5;
        if ( v12 < 0 )
          return (unsigned int)v12;
        if ( (unsigned __int8)(v11 - 32) > 0x58u )
          v15 = 0;
        else
          v15 = byte_1801181C0[v11 - 32] & 0xF;
        v16 = v64 + 8 * v15;
        v17 = byte_1801181C0;
        v18 = byte_1801181C0[v16] >> 4;
        v64 = v18;
        if ( !v18 )
        {
          v52 = 0LL;
          goto LABEL_183;
        }
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( !v20 )
          {
            switch ( v11 )
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
            goto LABEL_185;
          }
          v21 = v20 - 1;
          if ( !v21 )
          {
            if ( v11 == 42 )
            {
              a4 += 2;
              v53 = v7 | 4;
              if ( *(a4 - 2) >= 0 )
                v53 = v7;
              v7 = v53;
              v8 = abs32(*(a4 - 2));
            }
            else
            {
              v8 = v11 + 2 * (5 * v8 - 24);
            }
            v59 = v8;
            goto LABEL_185;
          }
          v22 = v21 - 1;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( !v23 )
            {
              if ( v11 == 42 )
              {
                v9 = *a4;
                a4 += 2;
                v57 = v9;
                if ( v9 < 0 )
                {
                  v9 = -1;
                  v57 = -1;
                }
              }
              else
              {
                v9 = v11 + 2 * (5 * v9 - 24);
                v57 = v9;
              }
              goto LABEL_185;
            }
            v24 = v23 - 1;
            if ( v24 )
            {
              v25 = (unsigned int)(v24 - 1);
              if ( !(_DWORD)v25 )
              {
                if ( v11 > 105 )
                {
                  switch ( v11 )
                  {
                    case 'n':
                      v41 = *(wchar_t **)a4;
                      a4 += 2;
                      if ( !(unsigned int)sub_180094E74(v25, (unsigned int)(v11 - 110), v14) )
                        goto LABEL_187;
                      if ( (v7 & 0x20) != 0 )
                        *v41 = v12;
                      else
                        *(_DWORD *)v41 = v12;
                      v9 = v57;
                      v62 = 1;
                      goto LABEL_26;
                    case 'o':
                      v28 = 8;
                      if ( (v7 & 0x80u) != 0 )
                        v7 |= 0x200u;
                      goto LABEL_57;
                    case 'p':
                      v9 = 16;
                      v7 |= 0x8000u;
                      goto LABEL_81;
                  }
                  if ( v11 != 115 )
                  {
                    if ( v11 == 117 )
                      goto LABEL_56;
                    if ( v11 != 120 )
                      goto LABEL_26;
                    v31 = 39;
                    goto LABEL_82;
                  }
                }
                else
                {
                  if ( v11 == 105 )
                    goto LABEL_55;
                  if ( v11 == 67 )
                  {
                    if ( (v7 & 0x830) == 0 )
                      v7 |= 0x800u;
                    goto LABEL_50;
                  }
                  if ( v11 != 83 )
                  {
                    if ( v11 != 88 )
                    {
                      if ( v11 == 90 )
                      {
                        v26 = *(wchar_t **)a4;
                        a4 += 2;
                        if ( v26 && (v13 = (const wchar_t *)*((_QWORD *)v26 + 1)) != 0LL )
                        {
                          LOWORD(v25) = *v26;
                          if ( v26[1] < *v26 )
                            goto LABEL_187;
                          v25 = (unsigned __int16)v25;
                          if ( (v7 & 0x800) != 0 )
                          {
                            if ( (v25 & 1) != 0 || ((unsigned __int8)v13 & 1) != 0 )
                            {
LABEL_187:
                              sub_18008B020();
                              return 0xFFFFFFFFLL;
                            }
                            v60 = 1;
                            v25 = (unsigned __int16)v25 >> 1;
                          }
                          else
                          {
                            v60 = 0;
                          }
                        }
                        else
                        {
                          v13 = (const wchar_t *)"(null)";
                          v25 = 6LL;
                        }
                        v58 = v25;
                        goto LABEL_26;
                      }
                      if ( v11 != 99 )
                      {
                        if ( v11 != 100 )
                          goto LABEL_26;
LABEL_55:
                        v7 |= 0x40u;
LABEL_56:
                        v28 = 10;
LABEL_57:
                        v29 = v54;
LABEL_58:
                        a4 += 2;
                        if ( (v7 & 0x8000) != 0 || (v7 & 0x1000) != 0 )
                        {
                          v30 = *((_QWORD *)a4 - 1);
                        }
                        else if ( (v7 & 0x20) != 0 )
                        {
                          if ( (v7 & 0x40) != 0 )
                            v30 = *((__int16 *)a4 - 4);
                          else
                            v30 = *((unsigned __int16 *)a4 - 4);
                        }
                        else if ( (v7 & 0x40) != 0 )
                        {
                          v30 = *(a4 - 2);
                        }
                        else
                        {
                          v30 = (unsigned int)*(a4 - 2);
                        }
                        if ( (v7 & 0x40) != 0 && v30 < 0 )
                        {
                          v30 = -v30;
                          v7 |= 0x100u;
                        }
                        v33 = (unsigned int)v30;
                        if ( (v7 & 0x9000) != 0 )
                          v33 = v30;
                        if ( v9 >= 0 )
                        {
                          v7 &= ~8u;
                          if ( v9 > 512 )
                            v9 = 512;
                        }
                        else
                        {
                          v9 = 1;
                        }
                        v34 = v63;
                        v35 = &v70;
                        v25 = v29 & (unsigned int)-(v33 != 0);
                        v54 = v33 != 0 ? v29 : 0;
                        while ( 1 )
                        {
                          v36 = v9;
                          v37 = v35;
                          --v9;
                          if ( v36 <= 0 && !v33 )
                            break;
                          v25 = v28;
                          v38 = v33 % v28;
                          v33 /= v28;
                          v39 = v38 + 48;
                          if ( (int)v38 + 48 > 57 )
                            v39 += v34;
                          *v35-- = v39;
                        }
                        v57 = v9;
                        v40 = (unsigned int)&v69 + 383 - (_DWORD)v35;
                        v13 = (const wchar_t *)(v35 + 1);
                        v58 = v40;
                        if ( (v7 & 0x200) != 0 && (!v40 || *(_BYTE *)v13 != 48) )
                        {
                          *v37 = 48;
                          v58 = v40 + 1;
                          v13 = (const wchar_t *)v37;
                        }
LABEL_26:
                        if ( v62 )
                          goto LABEL_184;
                        if ( (v7 & 0x40) != 0 )
                        {
                          if ( (v7 & 0x100) != 0 )
                          {
                            v56[0] = 45;
                            goto LABEL_121;
                          }
                          if ( (v7 & 1) != 0 )
                          {
                            v56[0] = 43;
                            goto LABEL_121;
                          }
                          if ( (v7 & 2) != 0 )
                          {
                            v56[0] = 32;
LABEL_121:
                            v54 = 1;
                          }
                        }
                        v42 = v59 - v58 - v54;
                        if ( (v7 & 0xC) == 0 )
                        {
                          LOBYTE(v25) = 32;
                          sub_180091EDC(v25, v42, v61, &v55);
                        }
                        sub_180091F30(v56, v54, v61, &v55);
                        v44 = v61;
                        if ( (v7 & 0xC) == 8 )
                        {
                          LOBYTE(v43) = 48;
                          sub_180091EDC(v43, v42, v61, &v55);
                        }
                        v45 = v58;
                        if ( v60 && v58 > 0 )
                        {
                          v46 = v13;
                          while ( 1 )
                          {
                            v47 = *v46++;
                            --v45;
                            if ( (unsigned int)sub_180094F40(&v65, v71, 6LL, v47) || !v65 )
                              break;
                            sub_180091F30(v71, v65, v61, &v55);
                            if ( !v45 )
                              goto LABEL_135;
                          }
                          v12 = -1;
                          v55 = -1;
                        }
                        else
                        {
                          sub_180091F30(v13, (unsigned int)v58, v44, &v55);
LABEL_135:
                          v12 = v55;
                        }
                        if ( v12 >= 0 && (v7 & 4) != 0 )
                        {
                          LOBYTE(v48) = 32;
                          sub_180091EDC(v48, v42, v61, &v55);
                          v12 = v55;
                        }
                        v9 = v57;
                        v5 = v66;
                        goto LABEL_184;
                      }
LABEL_50:
                      a4 += 2;
                      if ( (v7 & 0x810) != 0 )
                      {
                        if ( (unsigned int)sub_180094F40(&v58, v68, 512LL, *((unsigned __int16 *)a4 - 4)) )
                          v62 = 1;
                      }
                      else
                      {
                        v68[0] = *((_BYTE *)a4 - 8);
                        v58 = 1;
                      }
                      v13 = (const wchar_t *)v68;
                      goto LABEL_26;
                    }
LABEL_81:
                    v31 = 7;
LABEL_82:
                    v63 = v31;
                    v28 = 16;
                    if ( (v7 & 0x80u) == 0 )
                      goto LABEL_57;
                    v56[0] = 48;
                    v56[1] = v31 + 81;
                    v29 = 2;
                    goto LABEL_58;
                  }
                  if ( (v7 & 0x830) == 0 )
                    v7 |= 0x800u;
                }
                v13 = *(const wchar_t **)a4;
                v25 = (unsigned int)v9;
                if ( v9 == -1 )
                  v25 = 0x7FFFFFFFLL;
                a4 += 2;
                if ( (v7 & 0x810) != 0 )
                {
                  v27 = v13;
                  if ( !v13 )
                  {
                    v13 = L"(null)";
                    v27 = L"(null)";
                  }
                  v60 = 1;
                  while ( (_DWORD)v25 )
                  {
                    v25 = (unsigned int)(v25 - 1);
                    if ( !*v27 )
                      break;
                    ++v27;
                  }
                  v32 = v27 - v13;
                }
                else
                {
                  v32 = (__int64)"(null)";
                  if ( v13 )
                    v32 = (__int64)v13;
                  v13 = (const wchar_t *)v32;
                  while ( (_DWORD)v25 )
                  {
                    v25 = (unsigned int)(v25 - 1);
                    if ( !*(_BYTE *)v32 )
                      break;
                    ++v32;
                  }
                  LODWORD(v32) = v32 - (_DWORD)v13;
                }
                v58 = v32;
                goto LABEL_26;
              }
            }
            else
            {
              if ( v11 != 73 )
              {
                switch ( v11 )
                {
                  case 'h':
                    v7 |= 0x20u;
                    break;
                  case 'l':
                    v49 = 4096;
                    if ( *v5 != 108 )
                      v49 = 16;
                    v7 |= v49;
                    if ( *v5 != 108 )
                      v5 = v14;
                    ++v5;
                    break;
                  case 'w':
                    v7 |= 0x800u;
                    break;
                }
                goto LABEL_185;
              }
              v50 = *v5;
              v7 |= 0x8000u;
              if ( *v5 == 54 )
              {
                if ( v14[2] != 52 )
                  goto LABEL_159;
                v5 = v14 + 3;
              }
              else
              {
                if ( v50 != 51 )
                {
                  LOBYTE(v17) = v50 - 88;
                  if ( (unsigned __int8)v17 <= 0x20u )
                  {
                    v51 = 0x120821001LL;
                    if ( _bittest64(&v51, (unsigned __int64)v17) )
                      goto LABEL_185;
                  }
LABEL_159:
                  v52 = 0LL;
                  v64 = 0;
LABEL_183:
                  v60 = 0;
                  LOBYTE(v52) = v11;
                  sub_180091E94(v52, v6, &v55);
                  v12 = v55;
LABEL_184:
                  v8 = v59;
                  v6 = v61;
                  goto LABEL_185;
                }
                if ( v14[2] != 50 )
                  goto LABEL_159;
                v5 = v14 + 3;
                v7 &= ~0x8000u;
              }
            }
          }
          else
          {
            v9 = 0;
            v57 = 0;
          }
        }
        else
        {
          v57 = -1;
          v62 = 0;
          v8 = 0;
          v59 = 0;
          v7 = 0;
          v54 = 0;
          v9 = -1;
          v60 = 0;
        }
LABEL_185:
        v11 = *v5;
      }
      while ( *v5 );
    }
    return (unsigned int)v12;
  }
  else
  {
    sub_18008B020();
    return 0xFFFFFFFFLL;
  }
}
