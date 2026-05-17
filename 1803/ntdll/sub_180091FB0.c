/*
 * XREFs of sub_180091FB0 @ 0x180091FB0
 * Callers:
 *     _snwprintf @ 0x18008C030 (_snwprintf.c)
 *     swprintf @ 0x18008C660 (swprintf.c)
 *     sub_18008C85C @ 0x18008C85C (sub_18008C85C.c)
 *     sub_18008C9E8 @ 0x18008C9E8 (sub_18008C9E8.c)
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_1800928DC @ 0x1800928DC (sub_1800928DC.c)
 *     sub_180092928 @ 0x180092928 (sub_180092928.c)
 *     sub_18009297C @ 0x18009297C (sub_18009297C.c)
 *     sub_180094E74 @ 0x180094E74 (sub_180094E74.c)
 *     sub_180094FA0 @ 0x180094FA0 (sub_180094FA0.c)
 */

__int64 __fastcall sub_180091FB0(__int64 a1, _WORD *a2, __int64 a3, char **a4)
{
  char **v4; // rsi
  _WORD *v5; // r10
  __int64 v6; // r11
  int v7; // edi
  int v8; // r12d
  unsigned __int16 v10; // r9
  int v11; // r15d
  __int64 v12; // r13
  const char *v13; // rbx
  _WORD *v14; // r8
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  __int64 v23; // rcx
  int v24; // eax
  __int16 v25; // ax
  char *v26; // rax
  unsigned __int16 v27; // ax
  unsigned int v28; // r10d
  int v29; // edx
  char **v30; // rsi
  __int64 v31; // rax
  __int16 v32; // ax
  int v33; // ecx
  const char *v34; // rax
  const wchar_t *v35; // rax
  const wchar_t *i; // r13
  unsigned __int64 v37; // r8
  char v38; // r11
  char *v39; // rbx
  int v40; // eax
  char *v41; // rcx
  unsigned __int64 v42; // rdx
  char v43; // al
  char *v44; // rsi
  unsigned int v45; // r15d
  unsigned int v46; // r12d
  __int64 v47; // rsi
  const char *v48; // r15
  int v49; // esi
  int v50; // eax
  __int64 v51; // r14
  int v52; // eax
  unsigned __int64 v53; // rax
  __int64 v54; // rcx
  char **v55; // rsi
  int v56; // eax
  int v57; // ecx
  int v58; // [rsp+30h] [rbp-D0h]
  int v59; // [rsp+34h] [rbp-CCh]
  int v60; // [rsp+38h] [rbp-C8h] BYREF
  int v61; // [rsp+3Ch] [rbp-C4h]
  int v62; // [rsp+40h] [rbp-C0h]
  __int64 v63; // [rsp+48h] [rbp-B8h]
  _BYTE v64[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v65; // [rsp+54h] [rbp-ACh] BYREF
  _WORD v66[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v67; // [rsp+5Ch] [rbp-A4h]
  char **v68; // [rsp+60h] [rbp-A0h]
  int v69; // [rsp+68h] [rbp-98h]
  int v70; // [rsp+6Ch] [rbp-94h]
  _WORD *v71; // [rsp+70h] [rbp-90h]
  const char *v72; // [rsp+78h] [rbp-88h]
  _WORD v73[64]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v74; // [rsp+100h] [rbp+0h] BYREF
  char v75; // [rsp+27Fh] [rbp+17Fh] BYREF

  v68 = a4;
  v63 = a1;
  v4 = a4;
  v69 = 0;
  v5 = a2;
  v67 = 0;
  v6 = a1;
  v61 = 0;
  v7 = 0;
  v59 = 0;
  v8 = 0;
  v58 = 0;
  v62 = 0;
  if ( a1 && a2 )
  {
    v10 = *a2;
    v11 = 0;
    v60 = 0;
    LODWORD(v12) = 0;
    v70 = 0;
    if ( v10 )
    {
      v13 = v72;
      while ( 1 )
      {
        v14 = v5++;
        v71 = v5;
        if ( v11 < 0 )
          return (unsigned int)v11;
        if ( (unsigned __int16)(v10 - 32) > 0x58u )
          v15 = 0;
        else
          v15 = byte_1801181C0[v10 - 32] & 0xF;
        v16 = byte_1801181C0[8 * v15 + v70] >> 4;
        v70 = v16;
        if ( !v16 )
          goto LABEL_161;
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( v19 )
            {
              v20 = v19 - 1;
              if ( v20 )
              {
                v21 = v20 - 1;
                if ( v21 )
                {
                  v22 = v21 - 1;
                  if ( v22 )
                  {
                    v23 = (unsigned int)(v22 - 1);
                    if ( (_DWORD)v23 )
                      goto LABEL_163;
                    if ( v10 > 0x69u )
                    {
                      switch ( v10 )
                      {
                        case 'n':
                          v68 = v4 + 1;
                          v44 = *v4;
                          if ( !(unsigned int)sub_180094E74(v23, (unsigned int)v10 - 110, v14) )
                            goto LABEL_187;
                          if ( (v7 & 0x20) != 0 )
                            *(_WORD *)v44 = v11;
                          else
                            *(_DWORD *)v44 = v11;
                          v24 = 1;
                          v58 = 1;
                          goto LABEL_27;
                        case 'o':
                          v28 = 8;
                          if ( (v7 & 0x80u) == 0 )
                            goto LABEL_51;
                          v29 = v59;
                          v7 |= 0x200u;
LABEL_52:
                          v30 = v4 + 1;
                          v68 = v30;
                          if ( (v7 & 0x8000) != 0 || (v7 & 0x1000) != 0 )
                          {
                            v31 = (__int64)*(v30 - 1);
                          }
                          else if ( (v7 & 0x20) != 0 )
                          {
                            if ( (v7 & 0x40) != 0 )
                              v31 = *((__int16 *)v30 - 4);
                            else
                              v31 = *((unsigned __int16 *)v30 - 4);
                          }
                          else if ( (v7 & 0x40) != 0 )
                          {
                            v31 = *((int *)v30 - 2);
                          }
                          else
                          {
                            v31 = *((unsigned int *)v30 - 2);
                          }
                          if ( (v7 & 0x40) != 0 && v31 < 0 )
                          {
                            v31 = -v31;
                            v7 |= 0x100u;
                          }
                          v37 = (unsigned int)v31;
                          if ( (v7 & 0x9000) != 0 )
                            v37 = v31;
                          if ( v8 >= 0 )
                          {
                            v7 &= ~8u;
                            if ( v8 > 512 )
                              v8 = 512;
                          }
                          else
                          {
                            v8 = 1;
                          }
                          v38 = v69;
                          v39 = &v75;
                          v59 = v37 != 0 ? v29 : 0;
                          while ( 1 )
                          {
                            v40 = v8;
                            v41 = v39;
                            --v8;
                            if ( v40 <= 0 && !v37 )
                              break;
                            v42 = v37 % v28;
                            v37 /= v28;
                            v43 = v42 + 48;
                            if ( (int)v42 + 48 > 57 )
                              v43 += v38;
                            *v39-- = v43;
                          }
                          v61 = v8;
                          LODWORD(v12) = (unsigned int)&v74 + 383 - (_DWORD)v39;
                          v13 = v39 + 1;
                          if ( (v7 & 0x200) != 0 )
                          {
                            if ( !(_DWORD)v12 || (v68 = v30, *v13 != 48) )
                            {
                              v13 = v41;
                              *v41 = 48;
                              LODWORD(v12) = v12 + 1;
                              v68 = v30;
                            }
                          }
                          goto LABEL_26;
                        case 'p':
                          v8 = 16;
                          v7 |= 0x8000u;
                          goto LABEL_79;
                      }
                      if ( v10 != 115 )
                      {
                        if ( v10 == 117 )
                          goto LABEL_50;
                        if ( v10 != 120 )
                          goto LABEL_26;
                        v69 = 39;
                        v32 = 120;
                        goto LABEL_80;
                      }
                    }
                    else
                    {
                      if ( v10 == 105 )
                        goto LABEL_49;
                      if ( v10 == 67 )
                      {
                        if ( (v7 & 0x830) == 0 )
                          v7 |= 0x20u;
                        goto LABEL_44;
                      }
                      if ( v10 != 83 )
                      {
                        if ( v10 != 88 )
                        {
                          switch ( v10 )
                          {
                            case 'Z':
                              v26 = *v4;
                              v68 = v4 + 1;
                              if ( v26 && (v13 = (const char *)*((_QWORD *)v26 + 1)) != 0LL )
                              {
                                if ( *((_WORD *)v26 + 1) < *(_WORD *)v26 )
                                  goto LABEL_187;
                                LODWORD(v12) = *(unsigned __int16 *)v26;
                                if ( (v7 & 0x800) != 0 )
                                {
                                  if ( (v12 & 1) != 0 || ((unsigned __int8)v13 & 1) != 0 )
                                  {
LABEL_187:
                                    sub_18008B020();
                                    return 0xFFFFFFFFLL;
                                  }
                                  LODWORD(v12) = *(unsigned __int16 *)v26 >> 1;
                                  v62 = 1;
                                }
                                else
                                {
                                  v62 = 0;
                                }
                              }
                              else
                              {
                                v13 = "(null)";
                                LODWORD(v12) = 6;
                              }
                              break;
                            case 'c':
LABEL_44:
                              v27 = *(_WORD *)v4;
                              v65 = *(_WORD *)v4;
                              v62 = 1;
                              v68 = v4 + 1;
                              if ( (v7 & 0x20) != 0 )
                              {
                                v64[0] = v27;
                                v64[1] = 0;
                                if ( (int)sub_180094FA0(v73, v64, dword_180156EF4) < 0 )
                                  v58 = 1;
                              }
                              else
                              {
                                v73[0] = v27;
                              }
                              v13 = (const char *)v73;
                              LODWORD(v12) = 1;
                              break;
                            case 'd':
LABEL_49:
                              v7 |= 0x40u;
LABEL_50:
                              v28 = 10;
LABEL_51:
                              v29 = v59;
                              goto LABEL_52;
                            default:
                              break;
                          }
LABEL_26:
                          v24 = v58;
LABEL_27:
                          if ( v24 )
                            goto LABEL_162;
                          if ( (v7 & 0x40) != 0 )
                          {
                            if ( (v7 & 0x100) != 0 )
                            {
                              v25 = 45;
                              goto LABEL_117;
                            }
                            if ( (v7 & 1) != 0 )
                            {
                              v25 = 43;
LABEL_117:
                              v66[0] = v25;
LABEL_118:
                              v45 = 1;
                              v59 = 1;
LABEL_122:
                              v46 = v67 - v12 - v45;
                              if ( (v7 & 0xC) == 0 )
                                sub_180092928(32LL, v46, v63, &v60);
                              sub_18009297C(v66, v45, v63, &v60);
                              v47 = v63;
                              if ( (v7 & 0xC) == 8 )
                                sub_180092928(48LL, v46, v63, &v60);
                              if ( v62 || (int)v12 <= 0 )
                              {
                                sub_18009297C(v13, (unsigned int)v12, v47, &v60);
LABEL_136:
                                v11 = v60;
                              }
                              else
                              {
                                v48 = v13;
                                v49 = v12;
                                while ( 1 )
                                {
                                  --v49;
                                  v50 = sub_180094FA0(&v65, v48, dword_180156EF4);
                                  v51 = v50;
                                  if ( v50 == 2 )
                                    --v49;
                                  if ( v50 <= 0 )
                                    break;
                                  sub_1800928DC(v65, v63, &v60);
                                  v48 += v51;
                                  if ( v49 <= 0 )
                                  {
                                    v47 = v63;
                                    goto LABEL_136;
                                  }
                                }
                                v47 = v63;
                                v11 = -1;
                                v60 = -1;
                              }
                              if ( v11 >= 0 && (v7 & 4) != 0 )
                              {
                                sub_180092928(32LL, v46, v47, &v60);
                                v11 = v60;
                              }
                              v8 = v61;
                              goto LABEL_162;
                            }
                            if ( (v7 & 2) != 0 )
                            {
                              v66[0] = 32;
                              goto LABEL_118;
                            }
                          }
                          v45 = v59;
                          goto LABEL_122;
                        }
LABEL_79:
                        v69 = 7;
                        v32 = 88;
LABEL_80:
                        v28 = 16;
                        if ( (v7 & 0x80u) == 0 )
                          goto LABEL_51;
                        v66[1] = v32;
                        v66[0] = 48;
                        v29 = 2;
                        goto LABEL_52;
                      }
                      if ( (v7 & 0x830) == 0 )
                        v7 |= 0x20u;
                    }
                    v13 = *v4;
                    v33 = v8;
                    if ( v8 == -1 )
                      v33 = 0x7FFFFFFF;
                    v68 = v4 + 1;
                    if ( (v7 & 0x20) != 0 )
                    {
                      LODWORD(v12) = 0;
                      v34 = v13;
                      if ( !v13 )
                      {
                        v13 = "(null)";
                        v34 = "(null)";
                      }
                      if ( v33 > 0 )
                      {
                        do
                        {
                          if ( !*v34 )
                            break;
                          ++v34;
                          LODWORD(v12) = v12 + 1;
                        }
                        while ( (int)v12 < v33 );
                      }
                    }
                    else
                    {
                      v62 = 1;
                      v35 = L"(null)";
                      if ( v13 )
                        v35 = (const wchar_t *)v13;
                      v13 = (const char *)v35;
                      for ( i = v35; v33; ++i )
                      {
                        --v33;
                        if ( !*i )
                          break;
                      }
                      v12 = i - v35;
                    }
                    goto LABEL_26;
                  }
                  switch ( v10 )
                  {
                    case 'I':
                      v53 = (unsigned __int16)*v5;
                      v7 |= 0x8000u;
                      if ( (_WORD)v53 == 54 )
                      {
                        if ( v14[2] == 52 )
                        {
                          v5 = v14 + 3;
                          break;
                        }
LABEL_160:
                        v70 = 0;
LABEL_161:
                        v62 = 1;
                        sub_1800928DC(v10, v6, &v60);
                        v11 = v60;
LABEL_162:
                        v6 = v63;
                        v5 = v71;
                        break;
                      }
                      if ( (_WORD)v53 == 51 )
                      {
                        if ( v14[2] == 50 )
                        {
                          v5 = v14 + 3;
                          v7 &= ~0x8000u;
                          break;
                        }
                        goto LABEL_160;
                      }
                      LOWORD(v53) = v53 - 88;
                      if ( (unsigned __int16)v53 > 0x20u )
                        goto LABEL_160;
                      v54 = 0x120821001LL;
                      if ( !_bittest64(&v54, v53) )
                        goto LABEL_160;
                      break;
                    case 'h':
                      v7 |= 0x20u;
                      break;
                    case 'l':
                      v52 = 4096;
                      if ( *v5 != 108 )
                        v52 = 16;
                      v7 |= v52;
                      if ( *v5 != 108 )
                        v5 = v14;
                      ++v5;
                      break;
                    case 'w':
                      v7 |= 0x800u;
                      break;
                  }
                }
                else if ( v10 == 42 )
                {
                  v8 = *(_DWORD *)v4;
                  v68 = v4 + 1;
                  v61 = v8;
                  if ( v8 < 0 )
                  {
                    v8 = -1;
                    v61 = -1;
                  }
                }
                else
                {
                  v8 = v10 + 2 * (5 * v8 - 24);
                  v61 = v8;
                }
              }
              else
              {
                v8 = 0;
                v61 = 0;
              }
            }
            else
            {
              if ( v10 == 42 )
              {
                v55 = v4 + 1;
                v68 = v55;
                v56 = v7 | 4;
                if ( *((int *)v55 - 2) >= 0 )
                  v56 = v7;
                v7 = v56;
                v57 = abs32(*((_DWORD *)v55 - 2));
              }
              else
              {
                v57 = v10 + 2 * (5 * v67 - 24);
              }
              v67 = v57;
            }
          }
          else
          {
            switch ( v10 )
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
          }
        }
        else
        {
          v61 = -1;
          v58 = 0;
          v7 = 0;
          v67 = 0;
          v8 = -1;
          v59 = 0;
          v62 = 0;
        }
LABEL_163:
        v10 = *v5;
        if ( !*v5 )
          return (unsigned int)v11;
        v4 = v68;
      }
    }
    return (unsigned int)v11;
  }
  else
  {
    sub_18008B020();
    return 0xFFFFFFFFLL;
  }
}
