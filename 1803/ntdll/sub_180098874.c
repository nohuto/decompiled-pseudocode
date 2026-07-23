/*
 * XREFs of sub_180098874 @ 0x180098874
 * Callers:
 *     sub_180098760 @ 0x180098760 (sub_180098760.c)
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_180097738 @ 0x180097738 (sub_180097738.c)
 *     sub_1800991A4 @ 0x1800991A4 (sub_1800991A4.c)
 *     sub_1800991F0 @ 0x1800991F0 (sub_1800991F0.c)
 */

__int64 __fastcall sub_180098874(__int64 a1, const char *a2, int *a3)
{
  int *v3; // rsi
  const char *v4; // r10
  int v5; // edi
  int v6; // r15d
  unsigned __int16 v8; // r9
  int v9; // r14d
  __int64 v10; // r12
  int v11; // r11d
  WCHAR *v12; // rbx
  const char *v13; // r8
  int v14; // edx
  unsigned int v15; // r10d
  int v16; // edx
  int *v17; // rsi
  __int64 v18; // rax
  unsigned __int16 *v19; // rax
  int v20; // ecx
  const char *v21; // rax
  WCHAR v22; // ax
  __int16 v23; // ax
  const wchar_t *v24; // rax
  const wchar_t *j; // r12
  unsigned __int64 v26; // r8
  char v27; // r13
  char *v28; // rbx
  int v29; // eax
  char *v30; // rcx
  unsigned __int64 v31; // rdx
  char v32; // al
  __int16 v33; // ax
  unsigned int v34; // r11d
  __int64 v35; // rdx
  int v36; // esi
  unsigned int v37; // r11d
  int v38; // r10d
  __int64 v39; // rdx
  int v40; // r11d
  int v41; // r10d
  UCHAR *v42; // r15
  int v43; // r14d
  int v44; // r10d
  __int64 v45; // r11
  __int64 v46; // r10
  bool i; // zf
  int v48; // eax
  unsigned __int64 v49; // rax
  __int64 v50; // rcx
  int v51; // ecx
  int v52; // eax
  int v53; // [rsp+30h] [rbp-D0h]
  int v54; // [rsp+34h] [rbp-CCh]
  int v55; // [rsp+38h] [rbp-C8h] BYREF
  int v56; // [rsp+3Ch] [rbp-C4h]
  int v57; // [rsp+40h] [rbp-C0h]
  UCHAR v58[4]; // [rsp+44h] [rbp-BCh] BYREF
  WCHAR v59[2]; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v60[2]; // [rsp+4Ch] [rbp-B4h] BYREF
  int v61; // [rsp+50h] [rbp-B0h]
  __int64 v62; // [rsp+58h] [rbp-A8h]
  int *v63; // [rsp+60h] [rbp-A0h]
  int v64; // [rsp+68h] [rbp-98h]
  int v65; // [rsp+6Ch] [rbp-94h]
  const char *v66; // [rsp+70h] [rbp-90h]
  WCHAR v67[64]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v68; // [rsp+100h] [rbp+0h] BYREF
  char v69; // [rsp+27Fh] [rbp+17Fh] BYREF

  v3 = a3;
  v63 = a3;
  v62 = a1;
  v64 = 0;
  v4 = a2;
  v61 = 0;
  v5 = 0;
  v56 = 0;
  v6 = 0;
  v54 = 0;
  v65 = 0;
  v57 = 0;
  if ( !a1 || !a2 )
  {
    sub_18008B020();
    return 0xFFFFFFFFLL;
  }
  v8 = *(_WORD *)a2;
  v9 = 0;
  v55 = 0;
  LODWORD(v10) = 0;
  v11 = 0;
  if ( !v8 )
    return (unsigned int)v9;
  v12 = (WCHAR *)v66;
  while ( 1 )
  {
    v13 = v4;
    v4 += 2;
    v66 = v4;
    if ( v9 < 0 )
      break;
    if ( (unsigned __int16)(v8 - 32) > 0x58u )
      v14 = 0;
    else
      v14 = byte_180118300[v8 - 32] & 0xF;
    v11 = byte_180118300[v14 + v11 + 8 * v14] >> 4;
    v53 = v11;
    switch ( v11 )
    {
      case 8:
        goto LABEL_190;
      case 0:
        goto LABEL_189;
      case 1:
        v65 = 0;
        v5 = 0;
        v61 = 0;
        v6 = -1;
        v54 = 0;
        v56 = -1;
        v57 = 0;
        goto LABEL_145;
      case 2:
        switch ( v8 )
        {
          case ' ':
            v5 |= 2u;
            goto LABEL_145;
          case '#':
            v5 |= 0x80u;
            goto LABEL_145;
          case '+':
            v5 |= 1u;
            goto LABEL_145;
          case '-':
            v5 |= 4u;
            goto LABEL_145;
          case '0':
            v5 |= 8u;
            break;
        }
        break;
      case 3:
        if ( v8 == 42 )
        {
          v51 = *v3;
          v63 = v3 + 2;
          v52 = v5 | 4;
          if ( v51 >= 0 )
            v52 = v5;
          v5 = v52;
          v61 = abs32(v51);
        }
        else
        {
          v61 = v8 + 2 * (5 * v61 - 24);
        }
        break;
      case 4:
        v6 = 0;
        v56 = 0;
        goto LABEL_145;
      case 5:
        if ( v8 != 42 )
        {
          v6 = v8 + 2 * (5 * v6 - 24);
          v56 = v6;
          goto LABEL_145;
        }
        v6 = *v3;
        v63 = v3 + 2;
        v56 = v6;
        if ( v6 < 0 )
        {
          v6 = -1;
          v56 = -1;
        }
        break;
      case 6:
        if ( v8 != 73 )
        {
          switch ( v8 )
          {
            case 'h':
              v5 |= 0x20u;
              break;
            case 'l':
              v48 = 4096;
              if ( *(_WORD *)v4 != 108 )
                v48 = 16;
              v5 |= v48;
              if ( *(_WORD *)v4 != 108 )
                v4 = v13;
              v4 += 2;
              break;
            case 'w':
              v5 |= 0x800u;
              break;
          }
          goto LABEL_145;
        }
        v49 = *(unsigned __int16 *)v4;
        v5 |= 0x8000u;
        if ( (_WORD)v49 == 54 )
        {
          if ( *((_WORD *)v13 + 2) == 52 )
          {
            v4 = v13 + 6;
            goto LABEL_145;
          }
        }
        else if ( (_WORD)v49 == 51 )
        {
          if ( *((_WORD *)v13 + 2) == 50 )
          {
            v4 = v13 + 6;
            v5 &= ~0x8000u;
            goto LABEL_145;
          }
        }
        else
        {
          LOWORD(v49) = v49 - 88;
          if ( (unsigned __int16)v49 <= 0x20u )
          {
            v50 = 0x120821001LL;
            if ( _bittest64(&v50, v49) )
              goto LABEL_145;
          }
        }
LABEL_189:
        v57 = 1;
        sub_1800991A4(v8, v62, &v55);
        v9 = v55;
        break;
      case 7:
        if ( v8 > 0x69u )
        {
          switch ( v8 )
          {
            case 'n':
              goto LABEL_190;
            case 'o':
              v15 = 8;
              if ( (v5 & 0x80u) != 0 )
              {
                v16 = v54;
                v5 |= 0x200u;
LABEL_30:
                v17 = v3 + 2;
                v63 = v17;
                if ( (v5 & 0x8000) != 0 || (v5 & 0x1000) != 0 )
                {
                  v18 = *((_QWORD *)v17 - 1);
                }
                else if ( (v5 & 0x20) != 0 )
                {
                  if ( (v5 & 0x40) != 0 )
                    v18 = *((__int16 *)v17 - 4);
                  else
                    v18 = *((unsigned __int16 *)v17 - 4);
                }
                else if ( (v5 & 0x40) != 0 )
                {
                  v18 = *(v17 - 2);
                }
                else
                {
                  v18 = (unsigned int)*(v17 - 2);
                }
                if ( (v5 & 0x40) != 0 && v18 < 0 )
                {
                  v18 = -v18;
                  v5 |= 0x100u;
                }
                v26 = (unsigned int)v18;
                if ( (v5 & 0x9000) != 0 )
                  v26 = v18;
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
                v27 = v64;
                v28 = &v69;
                v54 = v26 != 0 ? v16 : 0;
                while ( 1 )
                {
                  v29 = v6;
                  v30 = v28;
                  --v6;
                  if ( v29 <= 0 && !v26 )
                    break;
                  v31 = v26 % v15;
                  v26 /= v15;
                  v32 = v31 + 48;
                  if ( (int)v31 + 48 > 57 )
                    v32 += v27;
                  *v28-- = v32;
                }
                v56 = v6;
                LODWORD(v10) = (unsigned int)&v68 + 383 - (_DWORD)v28;
                v12 = (WCHAR *)(v28 + 1);
                if ( (v5 & 0x200) != 0 )
                {
                  if ( !(_DWORD)v10 || (v63 = v17, *(_BYTE *)v12 != 48) )
                  {
                    v12 = (WCHAR *)v30;
                    *v30 = 48;
                    LODWORD(v10) = v10 + 1;
                    v63 = v17;
                  }
                }
                goto LABEL_106;
              }
LABEL_29:
              v16 = v54;
              goto LABEL_30;
            case 'p':
              v6 = 16;
              v5 |= 0x8000u;
              goto LABEL_75;
          }
          if ( v8 != 115 )
          {
            if ( v8 != 117 )
            {
              if ( v8 != 120 )
                goto LABEL_106;
              v64 = 39;
              v23 = 120;
              goto LABEL_76;
            }
LABEL_28:
            v15 = 10;
            goto LABEL_29;
          }
        }
        else
        {
          if ( v8 == 105 )
            goto LABEL_27;
          if ( v8 == 67 )
          {
            if ( (v5 & 0x830) == 0 )
              v5 |= 0x20u;
            goto LABEL_55;
          }
          if ( v8 != 83 )
          {
            if ( v8 != 88 )
            {
              if ( v8 == 90 )
              {
                v19 = *(unsigned __int16 **)v3;
                v63 = v3 + 2;
                if ( v19 && (v12 = (WCHAR *)*((_QWORD *)v19 + 1)) != 0LL )
                {
                  if ( v19[1] < *v19 )
                    goto LABEL_190;
                  LODWORD(v10) = *v19;
                  if ( (v5 & 0x800) != 0 )
                  {
                    if ( (v10 & 1) != 0 || ((unsigned __int8)v12 & 1) != 0 )
                      goto LABEL_190;
                    LODWORD(v10) = *v19 >> 1;
                    v57 = 1;
                  }
                  else
                  {
                    v57 = 0;
                  }
                }
                else
                {
                  v12 = (WCHAR *)"(null)";
                  LODWORD(v10) = 6;
                }
                goto LABEL_106;
              }
              if ( v8 != 99 )
              {
                if ( v8 == 100 )
                {
LABEL_27:
                  v5 |= 0x40u;
                  goto LABEL_28;
                }
LABEL_106:
                if ( v65 )
                  goto LABEL_144;
                if ( (v5 & 0x40) != 0 )
                {
                  if ( (v5 & 0x100) != 0 )
                  {
                    v33 = 45;
                    goto LABEL_112;
                  }
                  if ( (v5 & 1) != 0 )
                  {
                    v33 = 43;
LABEL_112:
                    v60[0] = v33;
LABEL_113:
                    v34 = 1;
                    v54 = 1;
LABEL_117:
                    v35 = v62;
                    v36 = v61 - v10 - v34;
                    if ( (v5 & 0xC) == 0 && v36 > 0 )
                    {
                      v37 = 32;
                      do
                        sub_1800991A4(v37, v35, &v55);
                      while ( v55 != -1 && v38 > 0 );
                      v6 = v56;
                      v34 = v54;
                    }
                    sub_1800991F0(v60, v34, v35, &v55);
                    v39 = v62;
                    v40 = 0;
                    if ( (v5 & 0xC) == 8 && v36 > 0 )
                    {
                      do
                        sub_1800991A4(48LL, v39, &v55);
                      while ( v55 != -1 && v41 > 0 );
                      v6 = v56;
                    }
                    if ( v57 == v40 && (int)v10 > 0 )
                    {
                      v42 = (UCHAR *)v12;
                      v43 = v10;
                      while ( 1 )
                      {
                        --v43;
                        v44 = sub_180097738(v59, v42, dword_180156EF4);
                        if ( v44 == 2 )
                          --v43;
                        v45 = v62;
                        if ( v44 <= 0 )
                          break;
                        sub_1800991A4(v59[0], v62, &v55);
                        v42 += v46;
                        if ( v43 <= 0 )
                        {
                          v6 = v56;
                          goto LABEL_138;
                        }
                      }
                      v6 = v56;
                      v9 = -1;
                      v55 = -1;
                    }
                    else
                    {
                      sub_1800991F0(v12, (unsigned int)v10, v39, &v55);
                      v45 = v62;
LABEL_138:
                      v9 = v55;
                    }
                    if ( v9 >= 0 )
                    {
                      for ( i = (v5 & 4) == 0; !i && v36 > 0; i = v55 == -1 )
                      {
                        --v36;
                        sub_1800991A4(32LL, v45, &v55);
                        v9 = v55;
                      }
                    }
LABEL_144:
                    v4 = v66;
LABEL_145:
                    v11 = v53;
                    break;
                  }
                  if ( (v5 & 2) != 0 )
                  {
                    v60[0] = 32;
                    goto LABEL_113;
                  }
                }
                v34 = v54;
                goto LABEL_117;
              }
LABEL_55:
              v22 = *(_WORD *)v3;
              v63 = v3 + 2;
              v57 = 1;
              v59[0] = v22;
              if ( (v5 & 0x20) != 0 )
              {
                v58[0] = v22;
                v58[1] = 0;
                if ( (int)sub_180097738(v67, v58, dword_180156EF4) < 0 )
                  v65 = 1;
              }
              else
              {
                v67[0] = v22;
              }
              v12 = v67;
              LODWORD(v10) = 1;
              goto LABEL_106;
            }
LABEL_75:
            v64 = 7;
            v23 = 88;
LABEL_76:
            v15 = 16;
            if ( (v5 & 0x80u) != 0 )
            {
              v60[1] = v23;
              v60[0] = 48;
              v16 = 2;
              goto LABEL_30;
            }
            goto LABEL_29;
          }
          if ( (v5 & 0x830) == 0 )
            v5 |= 0x20u;
        }
        v12 = *(WCHAR **)v3;
        v20 = v6;
        if ( v6 == -1 )
          v20 = 0x7FFFFFFF;
        v63 = v3 + 2;
        if ( (v5 & 0x20) != 0 )
        {
          v21 = (const char *)v12;
          if ( !v12 )
          {
            v12 = (WCHAR *)"(null)";
            v21 = "(null)";
          }
          LODWORD(v10) = 0;
          if ( v20 > 0 )
          {
            do
            {
              if ( !*v21 )
                break;
              ++v21;
              LODWORD(v10) = v10 + 1;
            }
            while ( (int)v10 < v20 );
          }
        }
        else
        {
          v57 = 1;
          v24 = L"(null)";
          if ( v12 )
            v24 = v12;
          v12 = (WCHAR *)v24;
          for ( j = v24; v20; ++j )
          {
            --v20;
            if ( !*j )
              break;
          }
          v10 = j - v24;
        }
        goto LABEL_106;
      default:
        goto LABEL_145;
    }
    v8 = *(_WORD *)v4;
    if ( !*(_WORD *)v4 )
      break;
    v3 = v63;
  }
  if ( v11 && v11 != 7 )
  {
LABEL_190:
    sub_18008B020();
    return 0xFFFFFFFFLL;
  }
  return (unsigned int)v9;
}
