/*
 * XREFs of sub_1800A1A64 @ 0x1800A1A64
 * Callers:
 *     sub_1800A23A4 @ 0x1800A23A4 (sub_1800A23A4.c)
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800A22D4 @ 0x1800A22D4 (sub_1800A22D4.c)
 *     sub_1800A247C @ 0x1800A247C (sub_1800A247C.c)
 *     sub_1800A24C4 @ 0x1800A24C4 (sub_1800A24C4.c)
 *     sub_1800A2518 @ 0x1800A2518 (sub_1800A2518.c)
 */

__int64 __fastcall sub_1800A1A64(__int64 a1, char *a2, int *a3)
{
  int v4; // edx
  int v6; // edi
  int v7; // r10d
  int v8; // r11d
  int v9; // r15d
  char v11; // r9
  __int64 v12; // r12
  unsigned int v13; // r8d
  char *v14; // rbx
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v20; // r10
  __int64 v21; // rax
  char *v22; // rax
  char *j; // r12
  int v24; // eax
  int v25; // eax
  _BYTE *i; // rax
  unsigned __int64 v27; // r8
  char *v28; // rbx
  int v29; // ecx
  char v30; // r15
  int v31; // r9d
  unsigned __int64 v32; // rdx
  char v33; // al
  unsigned int v34; // eax
  unsigned int v35; // r15d
  __int64 v36; // rcx
  __int64 v37; // rsi
  unsigned __int16 *v38; // r14
  int v39; // esi
  __int64 v40; // r9
  __int64 v41; // rcx
  int v42; // eax
  char v43; // al
  int v44; // [rsp+30h] [rbp-D0h]
  int v45; // [rsp+34h] [rbp-CCh]
  _BYTE v46[4]; // [rsp+38h] [rbp-C8h] BYREF
  int v47; // [rsp+3Ch] [rbp-C4h] BYREF
  int v48; // [rsp+40h] [rbp-C0h] BYREF
  int v49; // [rsp+44h] [rbp-BCh]
  int v50; // [rsp+48h] [rbp-B8h]
  unsigned int v51; // [rsp+4Ch] [rbp-B4h]
  int v52; // [rsp+50h] [rbp-B0h]
  int v53; // [rsp+54h] [rbp-ACh]
  __int64 v54; // [rsp+58h] [rbp-A8h]
  unsigned int v55; // [rsp+60h] [rbp-A0h] BYREF
  char *v56; // [rsp+68h] [rbp-98h]
  _BYTE v57[144]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v58; // [rsp+100h] [rbp+0h] BYREF
  char v59; // [rsp+26Fh] [rbp+16Fh] BYREF
  char v60[8]; // [rsp+270h] [rbp+170h] BYREF

  v54 = a1;
  v4 = 0;
  v52 = 0;
  v6 = 0;
  v49 = 0;
  v7 = 0;
  v45 = 0;
  v8 = 0;
  v44 = 0;
  v9 = 0;
  v53 = 0;
  v50 = 0;
  if ( !a1 || !a2 )
  {
    sub_180095DE0();
    return 0xFFFFFFFFLL;
  }
  v11 = *a2;
  LODWORD(v12) = 0;
  v48 = 0;
  v13 = 0;
  v47 = 0;
  if ( !v11 )
    return (unsigned int)v48;
  v14 = v56;
  do
  {
    v56 = ++a2;
    if ( v48 < 0 )
      break;
    if ( (unsigned __int8)(v11 - 32) <= 0x58u )
      v4 = byte_180119100[v11 - 32] & 0xF;
    v15 = v13 + 8 * v4 + v4;
    v16 = (unsigned int)v15;
    v17 = byte_180119100[v15];
    v4 = 0;
    v13 = v17 >> 4;
    v51 = v13;
    if ( v13 == 8 )
      goto LABEL_181;
    v18 = v13;
    switch ( v13 )
    {
      case 0u:
        goto LABEL_153;
      case 1u:
        v53 = 0;
        v7 = 0;
        v49 = 0;
        v9 = 0;
        v44 = 0;
        v6 = 0;
        v8 = -1;
        v45 = -1;
        v50 = 0;
        break;
      case 2u:
        switch ( v11 )
        {
          case ' ':
            v6 |= 2u;
            break;
          case '#':
            v6 |= 0x80u;
            break;
          case '+':
            v6 |= 1u;
            break;
          case '-':
            v6 |= 4u;
            break;
          case '0':
            v6 |= 8u;
            break;
        }
        break;
      case 3u:
        if ( v11 != 42 )
        {
          v7 = v11 + 2 * (5 * v7 - 24);
          goto LABEL_163;
        }
        v7 = *a3;
        a3 += 2;
        v49 = v7;
        if ( v7 < 0 )
        {
          v6 |= 4u;
          v7 = -v7;
LABEL_163:
          v49 = v7;
        }
        break;
      case 4u:
        v8 = 0;
        v45 = 0;
        break;
      case 5u:
        if ( v11 == 42 )
        {
          v8 = *a3;
          a3 += 2;
          v45 = v8;
          if ( v8 < 0 )
          {
            v8 = -1;
            v45 = -1;
          }
        }
        else
        {
          v8 = v11 + 2 * (5 * v8 - 24);
          v45 = v8;
        }
        break;
      default:
        v18 = v13 - 6;
        if ( v13 == 6 )
        {
          if ( v11 != 73 )
          {
            switch ( v11 )
            {
              case 'h':
                v6 |= 0x20u;
                break;
              case 'l':
                if ( *a2 == 108 )
                {
                  ++a2;
                  v42 = 4096;
                }
                else
                {
                  v42 = 16;
                }
                v6 |= v42;
                break;
              case 'w':
                v6 |= 0x800u;
                break;
            }
            break;
          }
          v43 = *a2;
          v6 |= 0x8000u;
          if ( *a2 == 54 && a2[1] == 52 )
          {
            a2 += 2;
            v6 |= 0x8000u;
          }
          else
          {
            if ( v43 != 51 || a2[1] != 50 )
            {
              LOBYTE(v16) = v43 - 88;
              if ( (unsigned __int8)v16 <= 0x20u )
              {
                v18 = 0x120821001LL;
                if ( _bittest64(&v18, v16) )
                  break;
              }
              v51 = 0;
LABEL_153:
              v50 = 0;
              LOBYTE(v18) = v11;
              sub_1800A247C(v18, v54, &v48);
LABEL_133:
              v4 = 0;
              goto LABEL_176;
            }
            a2 += 2;
            v6 &= ~0x8000u;
          }
        }
        else if ( v13 == 7 )
        {
          if ( v11 > 105 )
          {
            switch ( v11 )
            {
              case 'n':
                goto LABEL_181;
              case 'o':
                v20 = 8LL;
                if ( (v6 & 0x80u) != 0 )
                  v6 |= 0x200u;
                goto LABEL_28;
              case 'p':
                v8 = 16;
                v6 |= 0x8000u;
                goto LABEL_74;
            }
            if ( v11 != 115 )
            {
              v19 = (unsigned int)(v11 - 117);
              if ( v11 != 117 )
              {
                if ( v11 != 120 )
                  goto LABEL_107;
                v25 = 39;
                goto LABEL_75;
              }
LABEL_27:
              v20 = 10LL;
LABEL_28:
              if ( (v6 & 0x8000) != 0 || (v6 & 0x1000) != 0 )
              {
                v21 = *(_QWORD *)a3;
                a3 += 2;
              }
              else
              {
                a3 += 2;
                if ( (v6 & 0x20) != 0 )
                {
                  if ( (v6 & 0x40) != 0 )
                    v21 = *((__int16 *)a3 - 4);
                  else
                    v21 = *((unsigned __int16 *)a3 - 4);
                }
                else if ( (v6 & 0x40) != 0 )
                {
                  v21 = *(a3 - 2);
                }
                else
                {
                  v21 = (unsigned int)*(a3 - 2);
                }
              }
              if ( (v6 & 0x40) != 0 && v21 < 0 )
              {
                v21 = -v21;
                v6 |= 0x100u;
              }
              v27 = (unsigned int)v21;
              if ( (v6 & 0x9000) != 0 )
                v27 = v21;
              if ( v8 >= 0 )
              {
                v6 &= ~8u;
                if ( v8 > 512 )
                  v8 = 512;
              }
              else
              {
                v8 = 1;
              }
              v28 = &v59;
              v29 = v27 != 0 ? v9 : 0;
              v30 = v52;
              v44 = v29;
              v31 = v29;
              while ( 1 )
              {
                v19 = (unsigned int)v8--;
                if ( (int)v19 <= 0 && !v27 )
                  break;
                v32 = v27 % v20;
                v27 /= v20;
                v33 = v32 + 48;
                if ( (int)v32 + 48 > 57 )
                  v33 += v30;
                *v28-- = v33;
                v4 = 0;
              }
              v45 = v8;
              LODWORD(v12) = (unsigned int)&v58 + 367 - (_DWORD)v28;
              v14 = v28 + 1;
              v47 = v12;
              v9 = v31;
              if ( (v6 & 0x200) == 0 )
                goto LABEL_107;
              if ( (_DWORD)v12 )
              {
                v44 = v31;
                if ( *v14 == 48 )
                  goto LABEL_107;
              }
              --v14;
              v44 = v31;
              LODWORD(v12) = v12 + 1;
              *v14 = 48;
              goto LABEL_106;
            }
          }
          else
          {
            if ( v11 == 105 )
              goto LABEL_26;
            v19 = (unsigned int)(v11 - 67);
            if ( v11 == 67 )
            {
              if ( (v6 & 0x830) == 0 )
                v6 |= 0x800u;
              goto LABEL_50;
            }
            if ( v11 != 83 )
            {
              if ( v11 != 88 )
              {
                if ( v11 != 90 )
                {
                  v19 = (unsigned int)(v11 - 99);
                  if ( v11 != 99 )
                  {
                    if ( v11 == 100 )
                    {
LABEL_26:
                      v6 |= 0x40u;
                      goto LABEL_27;
                    }
LABEL_107:
                    if ( !v53 )
                    {
                      if ( (v6 & 0x40) != 0 )
                      {
                        if ( (v6 & 0x100) != 0 )
                        {
                          v46[0] = 45;
                          goto LABEL_115;
                        }
                        if ( (v6 & 1) != 0 )
                        {
                          v46[0] = 43;
                          goto LABEL_115;
                        }
                        if ( (v6 & 2) != 0 )
                        {
                          v46[0] = 32;
LABEL_115:
                          v44 = 1;
                        }
                      }
                      v34 = v44;
                      v35 = v49 - v12 - v44;
                      if ( (v6 & 0xC) == 0 )
                      {
                        LOBYTE(v19) = 32;
                        sub_1800A24C4(v19, v35, v54, &v48);
                        v34 = v44;
                      }
                      sub_1800A2518(v46, v34, v54, &v48);
                      v37 = v54;
                      if ( (v6 & 0xC) == 8 )
                      {
                        LOBYTE(v36) = 48;
                        sub_1800A24C4(v36, v35, v54, &v48);
                      }
                      if ( v50 && (int)v12 > 0 )
                      {
                        v38 = (unsigned __int16 *)v14;
                        v39 = v12;
                        while ( 1 )
                        {
                          v40 = *v38++;
                          --v39;
                          if ( (unsigned int)sub_1800A22D4(&v55, v60, 6LL, v40) || !v55 )
                            break;
                          sub_1800A2518(v60, v55, v54, &v48);
                          v4 = 0;
                          if ( !v39 )
                          {
                            a2 = v56;
                            goto LABEL_130;
                          }
                        }
                        a2 = v56;
                        v48 = -1;
                      }
                      else
                      {
                        sub_1800A2518(v14, (unsigned int)v12, v37, &v48);
                      }
                      v4 = 0;
LABEL_130:
                      if ( v48 >= 0 && (v6 & 4) != 0 )
                      {
                        LOBYTE(v41) = 32;
                        sub_1800A24C4(v41, v35, v54, &v48);
                        v9 = v44;
                        goto LABEL_133;
                      }
                      v9 = v44;
LABEL_176:
                      v8 = v45;
                    }
                    v13 = v51;
                    v7 = v49;
                    break;
                  }
LABEL_50:
                  a3 += 2;
                  if ( (v6 & 0x810) != 0 )
                  {
                    v24 = sub_1800A22D4(&v47, v57, 512LL, *((unsigned __int16 *)a3 - 4));
                    LODWORD(v12) = v47;
                    v4 = 0;
                    v8 = v45;
                    if ( v24 )
                      v53 = 1;
                  }
                  else
                  {
                    LODWORD(v12) = 1;
                    v57[0] = *((_BYTE *)a3 - 8);
                    v47 = 1;
                  }
                  v14 = v57;
                  goto LABEL_107;
                }
                v19 = *(_QWORD *)a3;
                a3 += 2;
                if ( v19 && (v14 = *(char **)(v19 + 8)) != 0LL )
                {
                  if ( *(_WORD *)(v19 + 2) < *(_WORD *)v19 )
                    goto LABEL_181;
                  LODWORD(v12) = *(unsigned __int16 *)v19;
                  if ( (v6 & 0x800) != 0 )
                  {
                    if ( (v12 & 1) != 0 || ((unsigned __int8)v14 & 1) != 0 )
                      goto LABEL_181;
                    LODWORD(v12) = *(unsigned __int16 *)v19 >> 1;
                    v50 = 1;
                  }
                  else
                  {
                    v50 = 0;
                  }
                }
                else
                {
                  v14 = "(null)";
                  LODWORD(v12) = 6;
                }
LABEL_106:
                v47 = v12;
                goto LABEL_107;
              }
LABEL_74:
              v25 = 7;
LABEL_75:
              v52 = v25;
              if ( (v6 & 0x80u) != 0 )
              {
                v46[0] = 48;
                v46[1] = v25 + 81;
                v9 = 2;
              }
              v20 = 16LL;
              goto LABEL_28;
            }
            if ( (v6 & 0x830) == 0 )
              v6 |= 0x800u;
          }
          v19 = (unsigned int)v8;
          if ( v8 == -1 )
            v19 = 0x7FFFFFFFLL;
          v22 = *(char **)a3;
          a3 += 2;
          if ( (v6 & 0x810) == 0 )
          {
            v14 = "(null)";
            if ( v22 )
              v14 = v22;
            for ( i = v14; (_DWORD)v19; ++i )
            {
              v19 = (unsigned int)(v19 - 1);
              if ( !*i )
                break;
            }
            LODWORD(v12) = (_DWORD)i - (_DWORD)v14;
            v47 = (_DWORD)i - (_DWORD)v14;
            goto LABEL_107;
          }
          v50 = 1;
          v14 = (char *)L"(null)";
          if ( v22 )
            v14 = v22;
          for ( j = v14; (_DWORD)v19; j += 2 )
          {
            v19 = (unsigned int)(v19 - 1);
            if ( !*(_WORD *)j )
              break;
          }
          v12 = (j - v14) >> 1;
          goto LABEL_106;
        }
        break;
    }
    v11 = *a2;
  }
  while ( *a2 );
  if ( v13 && v13 != 7 )
  {
LABEL_181:
    sub_180095DE0();
    return 0xFFFFFFFFLL;
  }
  return (unsigned int)v48;
}
