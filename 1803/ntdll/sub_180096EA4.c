/*
 * XREFs of sub_180096EA4 @ 0x180096EA4
 * Callers:
 *     sub_180097858 @ 0x180097858 (sub_180097858.c)
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_180097788 @ 0x180097788 (sub_180097788.c)
 *     sub_180097930 @ 0x180097930 (sub_180097930.c)
 *     sub_180097978 @ 0x180097978 (sub_180097978.c)
 *     sub_1800979CC @ 0x1800979CC (sub_1800979CC.c)
 */

__int64 __fastcall sub_180096EA4(__int64 a1, const char *a2, int *a3)
{
  int *v3; // rsi
  const char *v4; // r11
  int v5; // edi
  int v6; // r15d
  unsigned int v7; // r12d
  char v9; // r9
  __int64 v10; // r14
  int v11; // r8d
  const wchar_t *v12; // rbx
  const char *v13; // r10
  int v14; // r8d
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int16 *v17; // rax
  const wchar_t *v18; // r14
  int *v19; // rsi
  int v20; // eax
  unsigned int v21; // r10d
  int *v22; // rsi
  __int64 v23; // rax
  int v24; // eax
  const char *v25; // rax
  unsigned __int64 v26; // r8
  char *v27; // rbx
  char v28; // r12
  unsigned int v29; // r9d
  int v30; // eax
  char *v31; // rdx
  unsigned __int64 v32; // rdx
  char v33; // al
  int v34; // eax
  bool v35; // zf
  unsigned int v36; // r15d
  __int64 v37; // rcx
  __int64 v38; // rsi
  unsigned __int16 *v39; // r12
  int v40; // esi
  __int64 v41; // r9
  __int64 v42; // rcx
  int v43; // eax
  char v44; // al
  __int64 v45; // rcx
  int v46; // ecx
  int v47; // eax
  int v48; // ecx
  _BYTE v49[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v50; // [rsp+34h] [rbp-CCh] BYREF
  int v51; // [rsp+38h] [rbp-C8h]
  int v52; // [rsp+3Ch] [rbp-C4h]
  int v53; // [rsp+40h] [rbp-C0h] BYREF
  int v54; // [rsp+44h] [rbp-BCh]
  int v55; // [rsp+48h] [rbp-B8h]
  int v56; // [rsp+4Ch] [rbp-B4h]
  int *v57; // [rsp+50h] [rbp-B0h]
  __int64 v58; // [rsp+58h] [rbp-A8h]
  int v59; // [rsp+60h] [rbp-A0h]
  int v60; // [rsp+64h] [rbp-9Ch]
  const char *v61; // [rsp+68h] [rbp-98h]
  unsigned int v62[4]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v63[128]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v64; // [rsp+100h] [rbp+0h] BYREF
  char v65; // [rsp+27Fh] [rbp+17Fh] BYREF
  char v66[8]; // [rsp+280h] [rbp+180h] BYREF

  v57 = a3;
  v58 = a1;
  v3 = a3;
  v59 = 0;
  v4 = a2;
  v56 = 0;
  v5 = 0;
  v52 = 0;
  v6 = 0;
  v51 = 0;
  v7 = 0;
  v60 = 0;
  v55 = 0;
  if ( !a1 || !a2 )
  {
    sub_18008B020();
    return 0xFFFFFFFFLL;
  }
  v9 = *a2;
  LODWORD(v10) = 0;
  v50 = 0;
  v11 = 0;
  v53 = 0;
  v54 = 0;
  if ( !v9 )
    return (unsigned int)v50;
  v12 = (const wchar_t *)v61;
  while ( 1 )
  {
    v13 = v4++;
    v61 = v4;
    if ( v50 < 0 )
      break;
    if ( (unsigned __int8)(v9 - 32) > 0x58u )
      v14 = 0;
    else
      v14 = byte_180118300[v9 - 32] & 0xF;
    v15 = 0LL;
    v11 = byte_180118300[v54 + 8 * v14 + v14] >> 4;
    v54 = v11;
    switch ( v11 )
    {
      case 8:
        goto LABEL_179;
      case 0:
        goto LABEL_156;
      case 1:
        v52 = -1;
        v60 = 0;
        v7 = 0;
        v56 = 0;
        v5 = 0;
        v51 = 0;
        v6 = -1;
        v55 = 0;
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
          v46 = *v3;
          v57 = v3 + 2;
          v47 = v5 | 4;
          if ( v46 >= 0 )
            v47 = v5;
          v5 = v47;
          v48 = abs32(v46);
        }
        else
        {
          v48 = v9 + 2 * (5 * v56 - 24);
        }
        v56 = v48;
        break;
      case 4:
        v6 = 0;
        v52 = 0;
        break;
      case 5:
        if ( v9 == 42 )
        {
          v6 = *v3;
          v57 = v3 + 2;
          v52 = v6;
          if ( v6 < 0 )
          {
            v6 = -1;
            v52 = -1;
          }
        }
        else
        {
          v6 = v9 + 2 * (5 * v6 - 24);
          v52 = v6;
        }
        break;
      case 6:
        switch ( v9 )
        {
          case 'I':
            v44 = *v4;
            v5 |= 0x8000u;
            if ( *v4 == 54 )
            {
              if ( v13[2] != 52 )
                goto LABEL_155;
              v4 = v13 + 3;
            }
            else if ( v44 == 51 )
            {
              if ( v13[2] != 50 )
                goto LABEL_155;
              v4 = v13 + 3;
              v5 &= ~0x8000u;
            }
            else
            {
              LOBYTE(v15) = v44 - 88;
              if ( (unsigned __int8)v15 > 0x20u || (v45 = 0x120821001LL, !_bittest64(&v45, v15)) )
              {
LABEL_155:
                v54 = 0;
LABEL_156:
                v55 = 0;
                sub_180097930((unsigned __int8)v9, v58, &v50);
LABEL_133:
                v4 = v61;
                v11 = v54;
              }
            }
            break;
          case 'h':
            v5 |= 0x20u;
            break;
          case 'l':
            v43 = 4096;
            if ( *v4 != 108 )
              v43 = 16;
            v5 |= v43;
            if ( *v4 != 108 )
              v4 = v13;
            ++v4;
            break;
          case 'w':
            v5 |= 0x800u;
            break;
        }
        break;
      default:
        v16 = (unsigned int)(v11 - 7);
        if ( v11 != 7 )
          break;
        if ( v9 > 105 )
        {
          switch ( v9 )
          {
            case 'n':
              goto LABEL_179;
            case 'o':
              v21 = 8;
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
            v24 = 39;
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
                  v21 = 10;
LABEL_58:
                  v22 = v3 + 2;
                  v57 = v22;
                  if ( (v5 & 0x8000) != 0 || (v5 & 0x1000) != 0 )
                  {
                    v23 = *((_QWORD *)v22 - 1);
                  }
                  else if ( (v5 & 0x20) != 0 )
                  {
                    if ( (v5 & 0x40) != 0 )
                      v23 = *((__int16 *)v22 - 4);
                    else
                      v23 = *((unsigned __int16 *)v22 - 4);
                  }
                  else if ( (v5 & 0x40) != 0 )
                  {
                    v23 = *(v22 - 2);
                  }
                  else
                  {
                    v23 = (unsigned int)*(v22 - 2);
                  }
                  if ( (v5 & 0x40) != 0 && v23 < 0 )
                  {
                    v23 = -v23;
                    v5 |= 0x100u;
                  }
                  v26 = (unsigned int)v23;
                  if ( (v5 & 0x9000) != 0 )
                    v26 = v23;
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
                  v27 = &v65;
                  v16 = v26 != 0 ? v7 : 0;
                  v28 = v59;
                  v51 = v16;
                  v29 = v16;
                  while ( 1 )
                  {
                    v30 = v6;
                    v31 = v27;
                    --v6;
                    if ( v30 <= 0 && !v26 )
                      break;
                    v16 = v21;
                    v32 = v26 % v21;
                    v26 /= v21;
                    v33 = v32 + 48;
                    if ( (int)v32 + 48 > 57 )
                      v33 += v28;
                    *v27-- = v33;
                  }
                  v52 = v6;
                  v34 = (unsigned int)&v64 + 383 - (_DWORD)v27;
                  v12 = (const wchar_t *)(v27 + 1);
                  v53 = v34;
                  LODWORD(v10) = v34;
                  v7 = v29;
                  if ( (v5 & 0x200) != 0 )
                  {
                    if ( !v34 || (v35 = *(_BYTE *)v12 == 48, v57 = v22, v51 = v29, !v35) )
                    {
                      LODWORD(v10) = v34 + 1;
                      *v31 = 48;
                      v53 = v34 + 1;
                      v12 = (const wchar_t *)v31;
                      v57 = v22;
                      v7 = v29;
                      v51 = v29;
                    }
                  }
LABEL_27:
                  if ( v60 )
                    goto LABEL_133;
                  if ( (v5 & 0x40) != 0 )
                  {
                    if ( (v5 & 0x100) != 0 )
                    {
                      v49[0] = 45;
                      goto LABEL_115;
                    }
                    if ( (v5 & 1) != 0 )
                    {
                      v49[0] = 43;
                      goto LABEL_115;
                    }
                    if ( (v5 & 2) != 0 )
                    {
                      v49[0] = 32;
LABEL_115:
                      v7 = 1;
                      v51 = 1;
                    }
                  }
                  v36 = v56 - v10 - v7;
                  if ( (v5 & 0xC) == 0 )
                  {
                    LOBYTE(v16) = 32;
                    sub_180097978(v16, v36, v58, &v50);
                  }
                  sub_1800979CC(v49, v7, v58, &v50);
                  v38 = v58;
                  if ( (v5 & 0xC) == 8 )
                  {
                    LOBYTE(v37) = 48;
                    sub_180097978(v37, v36, v58, &v50);
                  }
                  if ( v55 && (int)v10 > 0 )
                  {
                    v39 = (unsigned __int16 *)v12;
                    v40 = v10;
                    while ( 1 )
                    {
                      v41 = *v39++;
                      --v40;
                      if ( (unsigned int)sub_180097788(v62, v66, 6LL, v41) || !v62[0] )
                        break;
                      sub_1800979CC(v66, v62[0], v58, &v50);
                      if ( !v40 )
                      {
                        v7 = v51;
                        v38 = v58;
                        goto LABEL_129;
                      }
                    }
                    v7 = v51;
                    v38 = v58;
                    v50 = -1;
                  }
                  else
                  {
                    sub_1800979CC(v12, (unsigned int)v10, v38, &v50);
                  }
LABEL_129:
                  if ( v50 >= 0 && (v5 & 4) != 0 )
                  {
                    LOBYTE(v42) = 32;
                    sub_180097978(v42, v36, v38, &v50);
                  }
                  v6 = v52;
                  goto LABEL_133;
                }
LABEL_51:
                v19 = v3 + 2;
                v57 = v19;
                if ( (v5 & 0x810) != 0 )
                {
                  v20 = sub_180097788(&v53, v63, 512LL, *((unsigned __int16 *)v19 - 4));
                  LODWORD(v10) = v53;
                  if ( v20 )
                    v60 = 1;
                }
                else
                {
                  LODWORD(v10) = 1;
                  v63[0] = *((_BYTE *)v19 - 8);
                  v53 = 1;
                }
                v12 = (const wchar_t *)v63;
                goto LABEL_27;
              }
              v17 = *(unsigned __int16 **)v3;
              v57 = v3 + 2;
              if ( v17 && (v12 = (const wchar_t *)*((_QWORD *)v17 + 1)) != 0LL )
              {
                v16 = *v17;
                if ( v17[1] < (unsigned __int16)v16 )
                  goto LABEL_179;
                LODWORD(v10) = (unsigned __int16)v16;
                if ( (v5 & 0x800) != 0 )
                {
                  if ( (v16 & 1) != 0 || ((unsigned __int8)v12 & 1) != 0 )
                    goto LABEL_179;
                  v55 = 1;
                  LODWORD(v10) = (unsigned __int16)v16 >> 1;
                }
                else
                {
                  v55 = 0;
                }
              }
              else
              {
                v12 = (const wchar_t *)"(null)";
                LODWORD(v10) = 6;
              }
LABEL_40:
              v53 = v10;
              goto LABEL_27;
            }
LABEL_80:
            v24 = 7;
LABEL_81:
            v59 = v24;
            v21 = 16;
            if ( (v5 & 0x80u) != 0 )
            {
              v49[0] = 48;
              v49[1] = v24 + 81;
              v7 = 2;
            }
            goto LABEL_58;
          }
          if ( (v5 & 0x830) == 0 )
            v5 |= 0x800u;
        }
        v12 = *(const wchar_t **)v3;
        v16 = (unsigned int)v6;
        if ( v6 == -1 )
          v16 = 0x7FFFFFFFLL;
        v57 = v3 + 2;
        if ( (v5 & 0x810) != 0 )
        {
          v18 = v12;
          if ( !v12 )
          {
            v12 = L"(null)";
            v18 = L"(null)";
          }
          v55 = 1;
          while ( (_DWORD)v16 )
          {
            v16 = (unsigned int)(v16 - 1);
            if ( !*v18 )
              break;
            ++v18;
          }
          v10 = v18 - v12;
        }
        else
        {
          v25 = "(null)";
          if ( v12 )
            v25 = (const char *)v12;
          v12 = (const wchar_t *)v25;
          while ( (_DWORD)v16 )
          {
            v16 = (unsigned int)(v16 - 1);
            if ( !*v25 )
              break;
            ++v25;
          }
          LODWORD(v10) = (_DWORD)v25 - (_DWORD)v12;
        }
        goto LABEL_40;
    }
    v9 = *v4;
    if ( !*v4 )
      break;
    v3 = v57;
  }
  if ( v11 && v11 != 7 )
  {
LABEL_179:
    sub_18008B020();
    return 0xFFFFFFFFLL;
  }
  return (unsigned int)v50;
}
