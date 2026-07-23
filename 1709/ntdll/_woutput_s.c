/*
 * XREFs of _woutput_s @ 0x18009E080
 * Callers:
 *     _swoutput_s @ 0x18009DF6C (_swoutput_s.c)
 * Callees:
 *     _invalid_parameter @ 0x180090BC0 (_invalid_parameter.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     _safecrt_mbtowc @ 0x18009CFEC (_safecrt_mbtowc.c)
 *     write_char_2 @ 0x18009E9A8 (write_char_2.c)
 *     write_string_2 @ 0x18009E9F4 (write_string_2.c)
 */

__int64 __fastcall woutput_s(__int64 a1, WCHAR *a2, int *a3)
{
  int v4; // edi
  int v5; // r14d
  int v6; // edx
  int v7; // r11d
  WCHAR v9; // r9
  int v10; // esi
  __int64 v11; // r12
  int v12; // r10d
  WCHAR *v13; // rbx
  int v14; // ecx
  unsigned int v15; // r10d
  __int64 v16; // rax
  int *v17; // r8
  unsigned __int16 *v18; // rcx
  int v19; // ecx
  WCHAR *v20; // rax
  _BYTE *v21; // rax
  WCHAR v22; // ax
  int v23; // eax
  int v24; // eax
  _WORD *j; // r12
  int v26; // r13d
  unsigned __int64 v27; // r8
  char *v28; // rbx
  int v29; // ecx
  char v30; // r11
  int v31; // r9d
  int v32; // ecx
  unsigned __int64 v33; // rdx
  char v34; // al
  __int16 v35; // ax
  unsigned int v36; // r11d
  __int64 v37; // rdx
  int v38; // r14d
  int v39; // esi
  int v40; // r10d
  __int64 v41; // rdx
  int v42; // r11d
  int v43; // r10d
  UCHAR *v44; // r15
  int v45; // esi
  int v46; // r10d
  __int64 v47; // r11
  __int64 v48; // r10
  bool i; // zf
  int v50; // eax
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  int v53; // [rsp+30h] [rbp-D0h]
  int v54; // [rsp+34h] [rbp-CCh]
  int v55; // [rsp+38h] [rbp-C8h]
  int v56; // [rsp+3Ch] [rbp-C4h] BYREF
  int v57; // [rsp+40h] [rbp-C0h]
  int *v58; // [rsp+48h] [rbp-B8h]
  int v59; // [rsp+50h] [rbp-B0h]
  UCHAR v60[4]; // [rsp+54h] [rbp-ACh] BYREF
  WCHAR v61[2]; // [rsp+58h] [rbp-A8h] BYREF
  _WORD v62[2]; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v63; // [rsp+60h] [rbp-A0h]
  int v64; // [rsp+68h] [rbp-98h]
  int v65; // [rsp+6Ch] [rbp-94h]
  int v66; // [rsp+70h] [rbp-90h]
  int v67; // [rsp+74h] [rbp-8Ch]
  int v68; // [rsp+78h] [rbp-88h]
  WCHAR *v69; // [rsp+80h] [rbp-80h]
  WCHAR v70[56]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v71; // [rsp+100h] [rbp+0h] BYREF
  char v72; // [rsp+28Fh] [rbp+18Fh] BYREF

  v58 = a3;
  v63 = a1;
  v64 = 0;
  v4 = 0;
  v57 = 0;
  v5 = 0;
  v55 = 0;
  v6 = 0;
  v54 = 0;
  v7 = 0;
  v65 = 0;
  v59 = 0;
  if ( !a1 || !a2 )
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
  v9 = *a2;
  v10 = 0;
  v56 = 0;
  LODWORD(v11) = 0;
  v12 = 0;
  if ( !v9 )
    return (unsigned int)v10;
  v13 = v69;
  v14 = 0;
  v66 = 32;
  do
  {
    v69 = ++a2;
    if ( v10 < 0 )
      break;
    if ( (unsigned __int16)(v9 - v66) <= 0x58u )
      v14 = _lookuptable_s[v9 - 32] & 0xF;
    v12 = _lookuptable_s[v14 + v12 + 8 * v14] >> 4;
    v53 = v12;
    switch ( v12 )
    {
      case 8:
        goto LABEL_190;
      case 0:
LABEL_189:
        v59 = 1;
        write_char_2(v9, v63, &v56);
        v10 = v56;
        a3 = v58;
        v6 = v55;
        goto LABEL_145;
      case 1:
        v6 = -1;
        v65 = 0;
        v55 = -1;
        v5 = 0;
        v57 = 0;
        v7 = 0;
        v54 = 0;
        v4 = 0;
        v59 = 0;
        break;
      case 2:
        if ( v9 == 32 )
        {
          v4 |= 2u;
        }
        else if ( v9 == 35 )
        {
          v4 |= 0x80u;
        }
        else if ( v9 == 43 )
        {
          v4 |= 1u;
        }
        else
        {
          if ( v9 != 45 )
          {
            if ( v9 == 48 )
              v4 |= 8u;
            goto LABEL_145;
          }
          v4 |= 4u;
        }
        break;
      case 3:
        if ( v9 == 42 )
        {
          v5 = *a3;
          a3 += 2;
          v58 = a3;
          v57 = v5;
          if ( v5 < 0 )
          {
            v4 |= 4u;
            v5 = -v5;
            v57 = v5;
          }
          goto LABEL_145;
        }
        v5 = v9 + 2 * (5 * v5 - 24);
        v57 = v5;
        break;
      case 4:
        v6 = 0;
LABEL_172:
        v55 = v6;
        break;
      case 5:
        if ( v9 == 42 )
        {
          v6 = *a3;
          a3 += 2;
          v58 = a3;
          v55 = v6;
          if ( v6 < 0 )
          {
            v6 = -1;
            v55 = -1;
          }
          goto LABEL_145;
        }
        v6 = v9 + 2 * (5 * v6 - 24);
        goto LABEL_172;
      case 6:
        switch ( v9 )
        {
          case 'I':
            v51 = *a2;
            v4 |= 0x8000u;
            if ( (_WORD)v51 == 54 )
            {
              if ( a2[1] != 52 )
                goto LABEL_189;
              a2 += 2;
            }
            else if ( (_WORD)v51 == 51 )
            {
              if ( a2[1] != 50 )
                goto LABEL_189;
              a2 += 2;
              v4 &= ~0x8000u;
            }
            else
            {
              LOWORD(v51) = v51 - 88;
              if ( (unsigned __int16)v51 > 0x20u )
                goto LABEL_189;
              v52 = 0x120821001LL;
              if ( !_bittest64(&v52, v51) )
                goto LABEL_189;
            }
            break;
          case 'h':
            v4 |= 0x20u;
            break;
          case 'l':
            if ( *a2 == 108 )
            {
              ++a2;
              v50 = 4096;
            }
            else
            {
              v50 = 16;
            }
            v4 |= v50;
            break;
          case 'w':
            v4 |= 0x800u;
            break;
        }
        break;
      case 7:
        if ( v9 <= 0x69u )
        {
          if ( v9 == 105 )
            goto LABEL_26;
          if ( v9 == 67 )
          {
            if ( (v4 & 0x830) == 0 )
              v4 |= 0x20u;
            goto LABEL_52;
          }
          if ( v9 != 83 )
          {
            if ( v9 != 88 )
            {
              if ( v9 == 90 )
              {
                v18 = *(unsigned __int16 **)a3;
                v58 = a3 + 2;
                if ( v18 && (v13 = (WCHAR *)*((_QWORD *)v18 + 1)) != 0LL )
                {
                  if ( v18[1] < *v18 )
                    goto LABEL_190;
                  LODWORD(v11) = *v18;
                  if ( (v4 & 0x800) != 0 )
                  {
                    if ( (v11 & 1) != 0 || ((unsigned __int8)v13 & 1) != 0 )
                      goto LABEL_190;
                    LODWORD(v11) = *v18 >> 1;
                    v59 = 1;
                  }
                  else
                  {
                    v59 = 0;
                  }
                }
                else
                {
                  v13 = (WCHAR *)"(null)";
                  LODWORD(v11) = 6;
                }
                goto LABEL_105;
              }
              if ( v9 != 99 )
              {
                if ( v9 == 100 )
                {
LABEL_26:
                  v4 |= 0x40u;
                  goto LABEL_27;
                }
LABEL_105:
                if ( v65 )
                  goto LABEL_143;
                if ( (v4 & 0x40) != 0 )
                {
                  if ( (v4 & 0x100) != 0 )
                  {
                    v35 = 45;
                    goto LABEL_111;
                  }
                  if ( (v4 & 1) != 0 )
                  {
                    v35 = 43;
LABEL_111:
                    v62[0] = v35;
LABEL_112:
                    v36 = 1;
                    v54 = 1;
LABEL_116:
                    v37 = v63;
                    v38 = v5 - v11 - v36;
                    v39 = v4 & 0xC;
                    v68 = v38;
                    v67 = v39;
                    if ( (v4 & 0xC) == 0 && v38 > 0 )
                    {
                      do
                        write_char_2(32LL, v37, &v56);
                      while ( v56 != -1 && v40 > 0 );
                      v39 = v67;
                      v36 = v54;
                    }
                    write_string_2(v62, v36, v37, &v56);
                    v41 = v63;
                    v42 = 0;
                    if ( v39 == 8 && v38 > 0 )
                    {
                      do
                        write_char_2(48LL, v41, &v56);
                      while ( v56 != -1 && v43 > 0 );
                      v38 = v68;
                    }
                    if ( v59 == v42 && (int)v11 > 0 )
                    {
                      v44 = (UCHAR *)v13;
                      v45 = v11;
                      while ( 1 )
                      {
                        --v45;
                        v46 = safecrt_mbtowc(v61, v44, _mb_cur_max);
                        if ( v46 == 2 )
                          --v45;
                        v47 = v63;
                        if ( v46 <= 0 )
                          break;
                        write_char_2(v61[0], v63, &v56);
                        v44 += v48;
                        if ( v45 <= 0 )
                        {
                          a2 = v69;
                          goto LABEL_136;
                        }
                      }
                      a2 = v69;
                      v10 = -1;
                      v56 = -1;
                    }
                    else
                    {
                      write_string_2(v13, (unsigned int)v11, v41, &v56);
                      v47 = v63;
LABEL_136:
                      v10 = v56;
                    }
                    if ( v10 >= 0 )
                    {
                      for ( i = (v4 & 4) == 0; !i && v38 > 0; i = v56 == -1 )
                      {
                        --v38;
                        write_char_2(32LL, v47, &v56);
                        v10 = v56;
                      }
                    }
                    v5 = v57;
                    v7 = v54;
LABEL_143:
                    a3 = v58;
                    v6 = v55;
                    break;
                  }
                  if ( (v4 & 2) != 0 )
                  {
                    v62[0] = 32;
                    goto LABEL_112;
                  }
                }
                v36 = v54;
                goto LABEL_116;
              }
LABEL_52:
              v22 = *(_WORD *)a3;
              v61[0] = *(_WORD *)a3;
              v59 = 1;
              v58 = a3 + 2;
              if ( (v4 & 0x20) != 0 )
              {
                v60[0] = v22;
                v60[1] = 0;
                v23 = safecrt_mbtowc(v70, v60, _mb_cur_max);
                v7 = v54;
                if ( v23 < 0 )
                  v65 = 1;
              }
              else
              {
                v70[0] = v22;
              }
              v13 = v70;
              LODWORD(v11) = 1;
              goto LABEL_105;
            }
LABEL_72:
            v24 = 7;
LABEL_73:
            v64 = v24;
            v15 = 16;
            if ( (v4 & 0x80u) != 0 )
            {
              v62[0] = 48;
              v7 = 2;
              v62[1] = v24 + 81;
            }
            goto LABEL_28;
          }
          if ( (v4 & 0x830) == 0 )
            v4 |= 0x20u;
LABEL_41:
          v19 = v6;
          if ( v6 == -1 )
            v19 = 0x7FFFFFFF;
          v20 = *(WCHAR **)a3;
          v58 = a3 + 2;
          if ( (v4 & 0x20) != 0 )
          {
            v13 = (WCHAR *)"(null)";
            LODWORD(v11) = 0;
            if ( v20 )
              v13 = v20;
            v21 = v13;
            if ( v19 > 0 )
            {
              do
              {
                if ( !*v21 )
                  break;
                ++v21;
                LODWORD(v11) = v11 + 1;
              }
              while ( (int)v11 < v19 );
            }
          }
          else
          {
            v59 = 1;
            v13 = L"(null)";
            if ( v20 )
              v13 = v20;
            for ( j = v13; v19; ++j )
            {
              --v19;
              if ( !*j )
                break;
            }
            v11 = j - v13;
          }
          goto LABEL_105;
        }
        switch ( v9 )
        {
          case 'n':
            goto LABEL_190;
          case 'o':
            v15 = 8;
            if ( (v4 & 0x80u) != 0 )
              v4 |= 0x200u;
            goto LABEL_28;
          case 'p':
            v55 = 16;
            v4 |= 0x8000u;
            goto LABEL_72;
          case 's':
            goto LABEL_41;
        }
        if ( v9 != 117 )
        {
          if ( v9 != 120 )
            goto LABEL_105;
          v24 = 39;
          goto LABEL_73;
        }
LABEL_27:
        v15 = 10;
LABEL_28:
        if ( (v4 & 0x8000) != 0 || (v4 & 0x1000) != 0 )
        {
          v16 = *(_QWORD *)a3;
          v17 = a3 + 2;
        }
        else
        {
          v17 = a3 + 2;
          if ( (v4 & 0x20) != 0 )
          {
            v58 = v17;
            if ( (v4 & 0x40) != 0 )
              v16 = *((__int16 *)v17 - 4);
            else
              v16 = *((unsigned __int16 *)v17 - 4);
            goto LABEL_86;
          }
          if ( (v4 & 0x40) != 0 )
            v16 = *(v17 - 2);
          else
            v16 = (unsigned int)*(v17 - 2);
        }
        v58 = v17;
LABEL_86:
        if ( (v4 & 0x40) != 0 && v16 < 0 )
        {
          v16 = -v16;
          v4 |= 0x100u;
        }
        v26 = v55;
        v27 = (unsigned int)v16;
        if ( (v4 & 0x9000) != 0 )
          v27 = v16;
        if ( v55 >= 0 )
        {
          v4 &= ~8u;
          if ( v55 > 512 )
            v26 = 512;
        }
        else
        {
          v26 = 1;
        }
        v28 = &v72;
        v29 = v27 != 0 ? v7 : 0;
        v30 = v64;
        v54 = v29;
        v31 = v29;
        while ( 1 )
        {
          v32 = v26--;
          if ( v32 <= 0 && !v27 )
            break;
          v33 = v27 % v15;
          v27 /= v15;
          v34 = v33 + 48;
          if ( (int)v33 + 48 > 57 )
            v34 += v30;
          *v28-- = v34;
        }
        v55 = v26;
        LODWORD(v11) = (unsigned int)&v71 + 399 - (_DWORD)v28;
        v13 = (WCHAR *)(v28 + 1);
        v7 = v31;
        if ( (v4 & 0x200) != 0 )
        {
          if ( !(_DWORD)v11 || (v54 = v31, *(_BYTE *)v13 != 48) )
          {
            v13 = (WCHAR *)((char *)v13 - 1);
            v54 = v31;
            LODWORD(v11) = v11 + 1;
            *(_BYTE *)v13 = 48;
          }
        }
        goto LABEL_105;
    }
    v12 = v53;
LABEL_145:
    v9 = *a2;
    v14 = 0;
  }
  while ( *a2 );
  if ( v12 && v12 != 7 )
  {
LABEL_190:
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
  return (unsigned int)v10;
}
