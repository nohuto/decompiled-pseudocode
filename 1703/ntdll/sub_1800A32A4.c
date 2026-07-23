/*
 * XREFs of sub_1800A32A4 @ 0x1800A32A4
 * Callers:
 *     sub_1800A3190 @ 0x1800A3190 (sub_1800A3190.c)
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800A2284 @ 0x1800A2284 (sub_1800A2284.c)
 *     sub_1800A3B8C @ 0x1800A3B8C (sub_1800A3B8C.c)
 *     sub_1800A3BE4 @ 0x1800A3BE4 (sub_1800A3BE4.c)
 *     sub_1800A3C30 @ 0x1800A3C30 (sub_1800A3C30.c)
 */

__int64 __fastcall sub_1800A32A4(__int64 a1, WCHAR *a2, int *a3)
{
  int v4; // edx
  int v5; // edi
  int v6; // r15d
  int v7; // r11d
  int v8; // esi
  WCHAR v10; // r9
  __int64 v11; // r12
  unsigned int v12; // r10d
  WCHAR *v13; // rbx
  unsigned int v14; // r10d
  unsigned __int64 v15; // r10
  __int64 v16; // rax
  int *v17; // r8
  unsigned __int16 *v18; // rcx
  int v19; // ecx
  WCHAR *v20; // rax
  _BYTE *v21; // rax
  WCHAR v22; // ax
  int v23; // eax
  int v24; // eax
  _WORD *i; // r12
  unsigned __int64 v26; // r8
  char *v27; // rbx
  int v28; // ecx
  char v29; // si
  int v30; // r9d
  int v31; // ecx
  unsigned __int64 v32; // rdx
  char v33; // al
  __int16 v34; // ax
  unsigned int v35; // eax
  unsigned int v36; // r15d
  __int64 v37; // rsi
  UCHAR *v38; // r14
  int v39; // esi
  int v40; // eax
  __int64 v41; // r11
  int v42; // eax
  unsigned __int64 v43; // rax
  __int64 v44; // rcx
  int v45; // [rsp+30h] [rbp-D0h]
  int v46; // [rsp+34h] [rbp-CCh]
  int v47; // [rsp+38h] [rbp-C8h] BYREF
  int *v48; // [rsp+40h] [rbp-C0h]
  int v49; // [rsp+48h] [rbp-B8h]
  int v50; // [rsp+4Ch] [rbp-B4h]
  unsigned int v51; // [rsp+50h] [rbp-B0h]
  UCHAR v52[4]; // [rsp+54h] [rbp-ACh] BYREF
  WCHAR v53[2]; // [rsp+58h] [rbp-A8h] BYREF
  _WORD v54[2]; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v55; // [rsp+60h] [rbp-A0h]
  int v56; // [rsp+68h] [rbp-98h]
  int v57; // [rsp+6Ch] [rbp-94h]
  WCHAR *v58; // [rsp+70h] [rbp-90h]
  WCHAR v59[64]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v60; // [rsp+100h] [rbp+0h] BYREF
  char v61; // [rsp+27Fh] [rbp+17Fh] BYREF

  v48 = a3;
  v4 = 0;
  v55 = a1;
  v56 = 0;
  v5 = 0;
  v50 = 0;
  v6 = 0;
  v46 = 0;
  v7 = 0;
  v45 = 0;
  v8 = 0;
  v57 = 0;
  v49 = 0;
  if ( !a1 || !a2 )
  {
    sub_180095DE0();
    return 0xFFFFFFFFLL;
  }
  v10 = *a2;
  LODWORD(v11) = 0;
  v47 = 0;
  v12 = 0;
  if ( !v10 )
    return (unsigned int)v47;
  v13 = v58;
  do
  {
    v58 = ++a2;
    if ( v47 < 0 )
      break;
    if ( (unsigned __int16)(v10 - 32) <= 0x58u )
      v4 = byte_180119100[v10 - 32] & 0xF;
    v14 = byte_180119100[8 * v4 + v12 + v4];
    v4 = 0;
    v12 = v14 >> 4;
    v51 = v12;
    switch ( v12 )
    {
      case 8u:
        goto LABEL_180;
      case 0u:
        goto LABEL_157;
      case 1u:
        v57 = 0;
        v6 = 0;
        v50 = 0;
        v8 = 0;
        v45 = 0;
        v5 = 0;
        v7 = -1;
        v46 = -1;
        v49 = 0;
        break;
      case 2u:
        switch ( v10 )
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
      case 3u:
        if ( v10 == 42 )
        {
          v6 = *a3;
          a3 += 2;
          v48 = a3;
          v50 = v6;
          if ( v6 < 0 )
          {
            v5 |= 4u;
            v6 = -v6;
            v50 = v6;
          }
        }
        else
        {
          v6 = v10 + 2 * (v6 + 4 * (v6 - 6));
          v50 = v6;
        }
        break;
      case 4u:
        v7 = 0;
        v46 = 0;
        break;
      case 5u:
        if ( v10 == 42 )
        {
          v7 = *a3;
          a3 += 2;
          v48 = a3;
          v46 = v7;
          if ( v7 < 0 )
          {
            v7 = -1;
            v46 = -1;
          }
        }
        else
        {
          v7 = v10 + 2 * (v7 + 4 * (v7 - 6));
          v46 = v7;
        }
        break;
      case 6u:
        if ( v10 != 73 )
        {
          switch ( v10 )
          {
            case 'h':
              v5 |= 0x20u;
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
              v5 |= v42;
              break;
            case 'w':
              v5 |= 0x800u;
              break;
          }
          break;
        }
        v43 = *a2;
        v5 |= 0x8000u;
        if ( *(_DWORD *)a2 == 3407926 )
        {
          a2 += 2;
          v5 |= 0x8000u;
          break;
        }
        if ( (_WORD)v43 == 51 && a2[1] == 50 )
        {
          a2 += 2;
          v5 &= ~0x8000u;
          break;
        }
        LOWORD(v43) = v43 - 88;
        if ( (unsigned __int16)v43 <= 0x20u )
        {
          v44 = 0x120821001LL;
          if ( _bittest64(&v44, v43) )
            break;
        }
        v51 = 0;
LABEL_157:
        v49 = 1;
        sub_1800A3B8C(v10, v55, &v47);
LABEL_134:
        v12 = v51;
        v4 = 0;
        a3 = v48;
        break;
      case 7u:
        if ( v10 <= 0x69u )
        {
          if ( v10 == 105 )
            goto LABEL_26;
          if ( v10 == 67 )
          {
            if ( (v5 & 0x830) == 0 )
              v5 |= 0x20u;
            goto LABEL_52;
          }
          if ( v10 != 83 )
          {
            if ( v10 != 88 )
            {
              if ( v10 == 90 )
              {
                v18 = *(unsigned __int16 **)a3;
                v48 = a3 + 2;
                if ( v18 && (v13 = (WCHAR *)*((_QWORD *)v18 + 1)) != 0LL )
                {
                  if ( v18[1] < *v18 )
                    goto LABEL_180;
                  LODWORD(v11) = *v18;
                  if ( (v5 & 0x800) != 0 )
                  {
                    if ( (v11 & 1) != 0 || ((unsigned __int8)v13 & 1) != 0 )
                      goto LABEL_180;
                    LODWORD(v11) = *v18 >> 1;
                    v49 = 1;
                  }
                  else
                  {
                    v49 = 0;
                  }
                }
                else
                {
                  v13 = (WCHAR *)"(null)";
                  LODWORD(v11) = 6;
                }
                goto LABEL_106;
              }
              if ( v10 != 99 )
              {
                if ( v10 == 100 )
                {
LABEL_26:
                  v5 |= 0x40u;
                  goto LABEL_27;
                }
LABEL_106:
                if ( v57 )
                {
                  a3 = v48;
                  v12 = v51;
                  break;
                }
                if ( (v5 & 0x40) != 0 )
                {
                  if ( (v5 & 0x100) != 0 )
                  {
                    v34 = 45;
                    goto LABEL_110;
                  }
                  if ( (v5 & 1) != 0 )
                  {
                    v34 = 43;
LABEL_110:
                    v54[0] = v34;
LABEL_115:
                    v45 = 1;
                  }
                  else if ( (v5 & 2) != 0 )
                  {
                    v54[0] = 32;
                    goto LABEL_115;
                  }
                }
                v35 = v45;
                v36 = v6 - v11 - v45;
                if ( (v5 & 0xC) == 0 )
                {
                  sub_1800A3BE4(32LL, v36, v55, &v47);
                  v35 = v45;
                }
                sub_1800A3C30(v54, v35, v55, &v47);
                v37 = v55;
                if ( (v5 & 0xC) == 8 )
                  sub_1800A3BE4(48LL, v36, v55, &v47);
                if ( v49 || (int)v11 <= 0 )
                {
                  sub_1800A3C30(v13, (unsigned int)v11, v37, &v47);
                  v4 = 0;
                }
                else
                {
                  v38 = (UCHAR *)v13;
                  v39 = v11;
                  while ( 1 )
                  {
                    --v39;
                    v40 = (unsigned int)sub_1800A2284(v53, v38, dword_180155E94);
                    if ( v40 == 2 )
                      --v39;
                    v4 = 0;
                    if ( v40 <= 0 )
                      break;
                    sub_1800A3B8C(v53[0], v55, &v47);
                    v38 += v41;
                    v4 = 0;
                    if ( v39 <= 0 )
                      goto LABEL_129;
                  }
                  v47 = -1;
LABEL_129:
                  a2 = v58;
                  v37 = v55;
                }
                if ( v47 < 0 || (v5 & 4) == 0 )
                {
                  a3 = v48;
                  v7 = v46;
                  v8 = v45;
                  v12 = v51;
                  v6 = v50;
                  break;
                }
                sub_1800A3BE4(32LL, v36, v37, &v47);
                v7 = v46;
                v8 = v45;
                v6 = v50;
                goto LABEL_134;
              }
LABEL_52:
              v22 = *(_WORD *)a3;
              v53[0] = *(_WORD *)a3;
              v49 = 1;
              v48 = a3 + 2;
              if ( (v5 & 0x20) != 0 )
              {
                v52[1] = 0;
                v52[0] = v22;
                v23 = (unsigned int)sub_1800A2284(v59, v52, dword_180155E94);
                v7 = v46;
                v4 = 0;
                if ( v23 < 0 )
                  v57 = 1;
              }
              else
              {
                v59[0] = v22;
              }
              v13 = v59;
              LODWORD(v11) = 1;
              goto LABEL_106;
            }
LABEL_72:
            v24 = 7;
LABEL_73:
            v56 = v24;
            if ( (v5 & 0x80u) != 0 )
            {
              v54[0] = 48;
              v54[1] = v24 + 81;
              v8 = 2;
            }
            v15 = 16LL;
            goto LABEL_28;
          }
          if ( (v5 & 0x830) == 0 )
            v5 |= 0x20u;
LABEL_41:
          v19 = v7;
          if ( v7 == -1 )
            v19 = 0x7FFFFFFF;
          v20 = *(WCHAR **)a3;
          v48 = a3 + 2;
          if ( (v5 & 0x20) != 0 )
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
            v49 = 1;
            v13 = L"(null)";
            if ( v20 )
              v13 = v20;
            for ( i = v13; v19; ++i )
            {
              --v19;
              if ( !*i )
                break;
            }
            v11 = i - v13;
          }
          goto LABEL_106;
        }
        switch ( v10 )
        {
          case 'n':
            goto LABEL_180;
          case 'o':
            v15 = 8LL;
            if ( (v5 & 0x80u) != 0 )
              v5 |= 0x200u;
            goto LABEL_28;
          case 'p':
            v7 = 16;
            v5 |= 0x8000u;
            goto LABEL_72;
          case 's':
            goto LABEL_41;
        }
        if ( v10 != 117 )
        {
          if ( v10 != 120 )
            goto LABEL_106;
          v24 = 39;
          goto LABEL_73;
        }
LABEL_27:
        v15 = 10LL;
LABEL_28:
        if ( (v5 & 0x8000) != 0 || (v5 & 0x1000) != 0 )
        {
          v16 = *(_QWORD *)a3;
          v17 = a3 + 2;
        }
        else
        {
          v17 = a3 + 2;
          if ( (v5 & 0x20) != 0 )
          {
            v48 = v17;
            if ( (v5 & 0x40) != 0 )
              v16 = *((__int16 *)v17 - 4);
            else
              v16 = *((unsigned __int16 *)v17 - 4);
            goto LABEL_87;
          }
          if ( (v5 & 0x40) != 0 )
            v16 = *(v17 - 2);
          else
            v16 = (unsigned int)*(v17 - 2);
        }
        v48 = v17;
LABEL_87:
        if ( (v5 & 0x40) != 0 && v16 < 0 )
        {
          v16 = -v16;
          v5 |= 0x100u;
        }
        v26 = (unsigned int)v16;
        if ( (v5 & 0x9000) != 0 )
          v26 = v16;
        if ( v7 >= 0 )
        {
          v5 &= ~8u;
          if ( v7 > 512 )
            v7 = 512;
        }
        else
        {
          v7 = 1;
        }
        v27 = &v61;
        v28 = v26 != 0 ? v8 : 0;
        v29 = v56;
        v45 = v28;
        v30 = v28;
        while ( 1 )
        {
          v31 = v7--;
          if ( v31 <= 0 && !v26 )
            break;
          v32 = v26 % v15;
          v26 /= v15;
          v33 = v32 + 48;
          if ( (int)v32 + 48 > 57 )
            v33 += v29;
          *v27-- = v33;
          v4 = 0;
        }
        v46 = v7;
        LODWORD(v11) = (unsigned int)&v60 + 383 - (_DWORD)v27;
        v13 = (WCHAR *)(v27 + 1);
        v8 = v30;
        if ( (v5 & 0x200) != 0 )
        {
          if ( !(_DWORD)v11 || (v45 = v30, *(_BYTE *)v13 != 48) )
          {
            v13 = (WCHAR *)((char *)v13 - 1);
            v45 = v30;
            LODWORD(v11) = v11 + 1;
            *(_BYTE *)v13 = 48;
          }
        }
        goto LABEL_106;
    }
    v10 = *a2;
  }
  while ( *a2 );
  if ( v12 && v12 != 7 )
  {
LABEL_180:
    sub_180095DE0();
    return 0xFFFFFFFFLL;
  }
  return (unsigned int)v47;
}
