/*
 * XREFs of sub_180094560 @ 0x180094560
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     sub_18008E990 @ 0x18008E990 (sub_18008E990.c)
 *     sub_1800913FC @ 0x1800913FC (sub_1800913FC.c)
 *     sub_1800941E0 @ 0x1800941E0 (sub_1800941E0.c)
 *     sub_1800943B4 @ 0x1800943B4 (sub_1800943B4.c)
 *     sub_18009452C @ 0x18009452C (sub_18009452C.c)
 *     sub_180095014 @ 0x180095014 (sub_180095014.c)
 */

__int64 __fastcall sub_180094560(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 **a4)
{
  unsigned __int8 *v4; // r14
  __int64 v5; // rsi
  unsigned int v6; // edi
  __int64 *v7; // rcx
  __int64 result; // rax
  unsigned __int8 v9; // bl
  int v10; // r13d
  unsigned int v11; // r12d
  unsigned int v12; // ebx
  __int64 v13; // rbx
  int v14; // edi
  int v15; // r15d
  char v16; // si
  char v17; // r13
  __int64 v18; // rbx
  bool v19; // zf
  unsigned __int64 v20; // rax
  char v21; // r9
  __int64 *v22; // r15
  __int64 *v23; // rax
  unsigned __int8 *v24; // rax
  unsigned __int8 v25; // al
  unsigned __int8 *v26; // rcx
  unsigned __int8 *v27; // rcx
  __int64 v28; // rcx
  __int64 **v29; // r11
  __int64 *v30; // r10
  char v31; // bl
  char v32; // si
  int v33; // r15d
  int v34; // edx
  int v35; // r8d
  int v36; // ecx
  int v37; // eax
  char v38; // cl
  int v39; // eax
  __int64 v40; // rsi
  int v41; // eax
  __int64 v42; // rbx
  int v43; // esi
  __int64 v44; // rdx
  unsigned int v45; // ebx
  wchar_t *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rbx
  int v51; // esi
  int v52; // ecx
  unsigned int v53; // ebx
  wchar_t *v54; // rax
  __int64 v55; // rcx
  char v56; // dl
  unsigned int v57; // ecx
  char v58; // al
  char v59; // dl
  char v60; // cl
  int v61; // eax
  int v62; // eax
  unsigned int v63; // eax
  int v64; // ecx
  __int64 v65; // rdx
  char v66; // [rsp+48h] [rbp-39h]
  char v67; // [rsp+49h] [rbp-38h]
  char v68; // [rsp+4Ah] [rbp-37h]
  char v69; // [rsp+4Bh] [rbp-36h]
  int v70; // [rsp+4Ch] [rbp-35h]
  char v71; // [rsp+50h] [rbp-31h]
  int v72; // [rsp+54h] [rbp-2Dh] BYREF
  int v73; // [rsp+58h] [rbp-29h]
  int v74; // [rsp+5Ch] [rbp-25h] BYREF
  int v75; // [rsp+60h] [rbp-21h]
  int v76; // [rsp+64h] [rbp-1Dh]
  int v77; // [rsp+68h] [rbp-19h]
  int v78; // [rsp+6Ch] [rbp-15h]
  __int64 v79; // [rsp+70h] [rbp-11h]
  int v80; // [rsp+78h] [rbp-9h]
  unsigned int v81; // [rsp+7Ch] [rbp-5h] BYREF
  __int64 *v82; // [rsp+80h] [rbp-1h]
  __int64 *v83; // [rsp+88h] [rbp+7h]
  __int64 *v84; // [rsp+90h] [rbp+Fh] BYREF
  __int64 *v85; // [rsp+98h] [rbp+17h]
  unsigned __int8 *v87; // [rsp+F0h] [rbp+6Fh] BYREF
  __int64 **v88; // [rsp+100h] [rbp+7Fh]

  v88 = a4;
  v4 = a2;
  v5 = a1;
  v75 = 0;
  v6 = 0;
  v74 = 0;
  v7 = 0LL;
  v83 = 0LL;
  if ( !a2 || !v5 )
  {
    sub_18008B020();
    return 0xFFFFFFFFLL;
  }
  v9 = *a2;
  v10 = 0;
  v69 = 0;
  result = 0LL;
  v73 = 0;
  v72 = 0;
  v81 = 0;
  if ( v9 )
  {
    v11 = -1;
LABEL_6:
    v84 = (__int64 *)a4;
    v85 = v7;
    if ( (sub_1800913FC()[v9] & 8) != 0 )
    {
      --v10;
      while ( 1 )
      {
        v73 = ++v10;
        v72 = v10;
        v12 = sub_18009452C(v5);
        if ( v12 == -1 )
          break;
        if ( (sub_1800913FC()[(unsigned __int8)v12] & 8) == 0 )
        {
          sub_180095014(v12, v5);
          goto LABEL_11;
        }
      }
      do
LABEL_11:
        v13 = *++v4;
      while ( (sub_1800913FC()[v13] & 8) != 0 );
      goto LABEL_198;
    }
    if ( *v4 != 37 )
      goto LABEL_191;
    if ( v4[1] == 37 )
    {
      if ( *v4 == 37 && v4[1] == 37 )
        ++v4;
LABEL_191:
      v73 = ++v10;
      v72 = v10;
      v6 = sub_18009452C(v5);
      v75 = v6;
      v74 = v6;
      v62 = *v4++;
      if ( v62 == v6 )
      {
        if ( !(unsigned int)sub_18008E990(v6) )
          goto LABEL_195;
        v63 = sub_18009452C(v5);
        v64 = *v4++;
        if ( v64 == v63 )
        {
          v73 = v10;
          v72 = v10;
          goto LABEL_195;
        }
        if ( v63 != -1 )
          sub_180095014(v63, v5);
      }
      if ( v6 == -1 )
        goto LABEL_208;
      v65 = v5;
      goto LABEL_206;
    }
    v67 = 1;
    v77 = 0;
    v14 = 0;
    v80 = 0;
    v15 = 0;
    v71 = 0;
    v16 = 0;
    v66 = 0;
    v17 = 0;
    v76 = 0;
    while ( 1 )
    {
      v87 = ++v4;
      v18 = *v4;
      v19 = (sub_1800913FC()[v18] & 4) == 0;
      v20 = (unsigned int)v18;
      if ( v19 )
      {
        if ( (_DWORD)v18 == 42 )
        {
          v21 = ++v66;
          goto LABEL_19;
        }
        if ( (_DWORD)v18 != 70 )
        {
          if ( (_DWORD)v18 == 73 )
          {
            v25 = v4[1];
            if ( v25 == 54 && (v26 = v4 + 2, v4[2] == 52) )
            {
              v4 += 2;
              v87 = v26;
            }
            else
            {
              if ( v25 == 51 )
              {
                v27 = v4 + 2;
                if ( v4[2] == 50 )
                {
                  v4 += 2;
                  v87 = v27;
                  goto LABEL_18;
                }
              }
              LOBYTE(v20) = v25 - 88;
              if ( (unsigned __int8)v20 > 0x20u || (v28 = 0x100821001LL, !_bittest64(&v28, v20)) )
              {
                ++v76;
                v79 = 0LL;
LABEL_47:
                ++v16;
                goto LABEL_18;
              }
            }
LABEL_33:
            ++v76;
            v79 = 0LL;
            goto LABEL_18;
          }
          if ( (_DWORD)v18 == 76 )
          {
            ++v67;
            goto LABEL_18;
          }
          if ( (_DWORD)v18 != 78 )
          {
            if ( (_DWORD)v18 == 104 )
            {
              --v67;
              --v17;
              goto LABEL_18;
            }
            if ( (_DWORD)v18 != 108 )
            {
              if ( (_DWORD)v18 != 119 )
                goto LABEL_47;
              goto LABEL_35;
            }
            v24 = v4 + 1;
            if ( v4[1] != 108 )
            {
              ++v67;
LABEL_35:
              ++v17;
              goto LABEL_18;
            }
            ++v4;
            v87 = v24;
            goto LABEL_33;
          }
        }
      }
      else
      {
        ++v14;
        v15 = v18 + 2 * (5 * v15 - 24);
      }
LABEL_18:
      v21 = v66;
LABEL_19:
      if ( v16 )
      {
        v78 = v14;
        v6 = v75;
        v70 = v15;
        v22 = v84;
        v68 = v17;
        v10 = v73;
        if ( v21 )
          v23 = 0LL;
        else
          v23 = *v88;
        v82 = v23;
        v29 = (__int64 **)(v84 + 1);
        v84 = v23;
        if ( v21 )
          v29 = (__int64 **)v22;
        v30 = v22;
        if ( v21 )
          v30 = v85;
        v31 = 0;
        v32 = v68;
        v88 = v29;
        v83 = v30;
        if ( !v68 )
        {
          v32 = ((*v4 - 67) & 0xEF) != 0 ? -1 : 1;
          v68 = v32;
        }
        v33 = *v4 | 0x20;
        if ( v33 != 110 )
        {
          if ( v33 == 99 || v33 == 123 )
          {
            v10 = v73 + 1;
            v73 = v10;
            v72 = v10;
            v6 = sub_18009452C(a1);
            v75 = v6;
            v74 = v6;
          }
          else
          {
            do
            {
              v72 = ++v10;
              v6 = sub_18009452C(a1);
              v75 = v6;
            }
            while ( v6 != -1 && (sub_1800913FC()[(unsigned __int8)v6] & 8) != 0 );
            v32 = v68;
            v73 = v10;
            v74 = v6;
          }
          v29 = v88;
          v30 = v83;
          v21 = v66;
          if ( v6 == -1 )
            goto LABEL_208;
        }
        v34 = v78;
        v35 = v70;
        if ( v78 && !v70 )
          goto LABEL_200;
        if ( v33 <= 112 )
        {
          if ( v33 != 112 )
          {
            if ( v33 != 99 )
            {
              switch ( v33 )
              {
                case 'd':
                  goto LABEL_73;
                case 'i':
                  v33 = 100;
                  goto LABEL_78;
                case 'n':
                  v36 = v10;
                  if ( v21 )
                    goto LABEL_187;
LABEL_169:
                  if ( v76 )
                  {
                    *v82 = v79;
                  }
                  else if ( v67 )
                  {
                    *(_DWORD *)v82 = v36;
                  }
                  else
                  {
                    *(_WORD *)v82 = v36;
                  }
                  goto LABEL_187;
                case 'o':
                  goto LABEL_73;
              }
LABEL_90:
              if ( *v4 != v6 )
              {
LABEL_200:
                if ( v6 == -1 )
                  goto LABEL_208;
                v65 = a1;
LABEL_206:
                sub_180095014(v6, v65);
                goto LABEL_207;
              }
              --v69;
              v88 = v29;
              if ( !v21 )
                v88 = (__int64 **)v30;
LABEL_187:
              ++v69;
              v5 = a1;
              ++v4;
LABEL_195:
              if ( v6 == -1 && (*v4 != 37 || v4[1] != 110) )
                goto LABEL_208;
LABEL_198:
              v9 = *v4;
              if ( !*v4 )
                goto LABEL_207;
              v7 = v83;
              a4 = v88;
              goto LABEL_6;
            }
            v37 = v70 + 1;
            v38 = 16;
            if ( v78 )
              v37 = v70;
            v35 = v37;
            v39 = 1;
            if ( v78 )
              v39 = v78;
            v34 = v39;
LABEL_176:
            v58 = v38 | 1;
            if ( !v34 )
              v58 = v38;
            v59 = v58 | 2;
            if ( v32 <= 0 )
              v59 = v58;
            v60 = v59 | 4;
            if ( !v21 )
              v60 = v59;
            if ( v33 == 123 )
            {
              v61 = sub_1800943B4(v60, &v87, &v74, &v72, &v84, v35, a1, &v81);
              v4 = v87;
            }
            else
            {
              v61 = sub_1800941E0(v60, 0LL, &v74, &v72, &v84, v35, a1, &v81);
            }
            v6 = v74;
            if ( !v61 )
            {
              v10 = v72;
              v73 = v72;
              v75 = v74;
              goto LABEL_187;
            }
LABEL_207:
            if ( v6 != -1 )
              return v81;
LABEL_208:
            if ( v81 || v69 )
              return v81;
            return v11;
          }
          ++v76;
          v67 = 1;
          v79 = 0LL;
LABEL_73:
          if ( v6 == 45 )
          {
            v71 = 1;
LABEL_115:
            v19 = v70 == 1;
            v41 = --v70;
            if ( v19 && v78 )
            {
              v31 = 1;
              goto LABEL_120;
            }
            v73 = ++v10;
            v72 = v10;
            v6 = sub_18009452C(a1);
            v75 = v6;
            v74 = v6;
          }
          else if ( v6 == 43 )
          {
            goto LABEL_115;
          }
LABEL_119:
          v41 = v70;
LABEL_120:
          if ( v76 )
          {
            if ( !v31 )
            {
              v42 = a1;
              while ( 1 )
              {
                v43 = v41;
                if ( ((v33 - 112) & 0xFFFFFFF7) != 0 )
                {
                  if ( (sub_1800913FC()[(unsigned __int8)v6] & 4) == 0 )
                    goto LABEL_138;
                  if ( v33 == 111 )
                  {
                    if ( (int)v6 >= 56 )
                      goto LABEL_138;
                    v44 = 8 * v79;
                  }
                  else
                  {
                    v44 = 10 * v79;
                  }
                }
                else
                {
                  if ( SLOBYTE(sub_1800913FC()[(unsigned __int8)v6]) >= 0 )
                  {
LABEL_138:
                    v73 = --v10;
                    v72 = v10;
                    if ( v6 != -1 )
                      sub_180095014(v6, v42);
                    break;
                  }
                  v79 *= 16LL;
                  v45 = (char)v6;
                  v46 = sub_1800913FC();
                  v47 = (unsigned __int8)v6;
                  v6 = ((char)v6 & 0xFFFFFFDF) - 7;
                  v44 = v79;
                  if ( (v46[v47] & 4) != 0 )
                    v6 = v45;
                  v75 = v6;
                  v74 = v6;
                }
                ++v80;
                v48 = (int)(v6 - 48) + v44;
                v79 = v48;
                if ( v78 && v70 == 1 )
                  goto LABEL_141;
                v42 = a1;
                v73 = ++v10;
                v72 = v10;
                v6 = sub_18009452C(a1);
                v75 = v6;
                v74 = v6;
                v41 = v43 - 1;
                if ( !v78 )
                  v41 = v43;
                v70 = v41;
              }
            }
            v48 = v79;
LABEL_141:
            v49 = -v48;
            if ( !v71 )
              v49 = v48;
            v79 = v49;
          }
          else
          {
            if ( !v31 )
            {
              v50 = a1;
              while ( 1 )
              {
                v51 = v41;
                if ( ((v33 - 112) & 0xFFFFFFF7) != 0 )
                {
                  if ( (sub_1800913FC()[(unsigned __int8)v6] & 4) == 0 )
                    goto LABEL_161;
                  if ( v33 == 111 )
                  {
                    if ( (int)v6 >= 56 )
                      goto LABEL_161;
                    v52 = 8 * v77;
                  }
                  else
                  {
                    v52 = 10 * v77;
                  }
                }
                else
                {
                  if ( SLOBYTE(sub_1800913FC()[(unsigned __int8)v6]) >= 0 )
                  {
LABEL_161:
                    v73 = --v10;
                    v72 = v10;
                    if ( v6 != -1 )
                      sub_180095014(v6, v50);
                    break;
                  }
                  v77 *= 16;
                  v53 = (char)v6;
                  v54 = sub_1800913FC();
                  v55 = (unsigned __int8)v6;
                  v6 = ((char)v6 & 0xFFFFFFDF) - 7;
                  v56 = v54[v55];
                  v52 = v77;
                  if ( (v56 & 4) != 0 )
                    v6 = v53;
                  v75 = v6;
                  v74 = v6;
                }
                ++v80;
                v57 = v6 + v52 - 48;
                v77 = v57;
                if ( v78 && v70 == 1 )
                  goto LABEL_164;
                v50 = a1;
                v73 = ++v10;
                v72 = v10;
                v6 = sub_18009452C(a1);
                v75 = v6;
                v74 = v6;
                v41 = v51 - 1;
                if ( !v78 )
                  v41 = v51;
                v70 = v41;
              }
            }
            v57 = v77;
LABEL_164:
            if ( v71 )
              v77 = -v57;
          }
          if ( v80 )
          {
            if ( v66 )
              goto LABEL_187;
            ++v81;
            v36 = v77;
            goto LABEL_169;
          }
          goto LABEL_207;
        }
        if ( v33 == 115 )
        {
          v38 = 32;
          goto LABEL_176;
        }
        if ( v33 == 117 )
          goto LABEL_73;
        if ( v33 != 120 )
        {
          if ( v33 != 123 )
            goto LABEL_90;
          v38 = 64;
          goto LABEL_176;
        }
LABEL_78:
        switch ( v6 )
        {
          case '-':
            v71 = 1;
LABEL_95:
            --v70;
            if ( v35 == 1 && v78 )
            {
              v31 = 1;
              goto LABEL_98;
            }
            v40 = a1;
            v73 = ++v10;
            v72 = v10;
            v6 = sub_18009452C(a1);
            v75 = v6;
            v74 = v6;
            break;
          case '+':
            goto LABEL_95;
          case '0':
            v73 = ++v10;
            v72 = v10;
            v6 = sub_18009452C(v40);
            v75 = v6;
            v74 = v6;
            if ( (((_BYTE)v6 - 88) & 0xDF) != 0 )
            {
              v80 = 1;
              if ( v33 == 120 )
              {
                v73 = --v10;
                v72 = v10;
                if ( v6 != -1 )
                  sub_180095014(v6, v40);
                v6 = 48;
                v75 = 48;
                v74 = 48;
              }
              else
              {
                if ( v78 )
                {
                  if ( !--v70 )
                    ++v31;
                }
                v33 = 111;
              }
            }
            else
            {
              v73 = ++v10;
              v72 = v10;
              v6 = sub_18009452C(v40);
              v75 = v6;
              v74 = v6;
              if ( v78 )
              {
                v70 -= 2;
                if ( v70 < 1 )
                  ++v31;
              }
              v33 = 120;
            }
            break;
          default:
LABEL_98:
            v40 = a1;
            break;
        }
        goto LABEL_119;
      }
    }
  }
  return result;
}
