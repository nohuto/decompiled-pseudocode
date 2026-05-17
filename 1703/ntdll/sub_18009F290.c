/*
 * XREFs of sub_18009F290 @ 0x18009F290
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     sub_180099530 @ 0x180099530 (sub_180099530.c)
 *     sub_18009C1BC @ 0x18009C1BC (sub_18009C1BC.c)
 *     sub_18009EF60 @ 0x18009EF60 (sub_18009EF60.c)
 *     sub_18009F11C @ 0x18009F11C (sub_18009F11C.c)
 *     sub_18009F268 @ 0x18009F268 (sub_18009F268.c)
 *     sub_18009FCF4 @ 0x18009FCF4 (sub_18009FCF4.c)
 */

__int64 __fastcall sub_18009F290(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4)
{
  int v4; // r13d
  unsigned __int8 *v5; // r14
  __int64 v6; // r12
  unsigned int v7; // edi
  unsigned __int8 v9; // al
  unsigned int v10; // ecx
  int v11; // esi
  unsigned int v12; // r15d
  unsigned int v13; // ebx
  __int64 v14; // rbx
  char v15; // r12
  char v16; // si
  int v17; // edi
  __int64 v18; // rbx
  bool v19; // zf
  unsigned __int64 v20; // rax
  char v21; // r9
  __int64 *v22; // rax
  unsigned __int8 *v23; // rax
  unsigned __int8 v24; // al
  unsigned __int8 *v25; // rcx
  unsigned __int8 *v26; // rcx
  __int64 v27; // rcx
  char v28; // r12
  char v29; // bl
  int v30; // r13d
  int v31; // edx
  int v32; // r8d
  int v33; // ecx
  char v34; // cl
  __int64 v35; // r12
  __int64 v36; // r12
  __int64 v37; // rbx
  __int64 v38; // rbx
  unsigned int v39; // ebx
  wchar_t *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  int v43; // ecx
  unsigned int v44; // ebx
  wchar_t *v45; // rax
  __int64 v46; // rcx
  char v47; // dl
  unsigned int v48; // ecx
  int v49; // eax
  char v50; // al
  char v51; // dl
  char v52; // cl
  int v53; // eax
  int v54; // eax
  unsigned int v55; // eax
  int v56; // ecx
  __int64 v57; // rdx
  char v58; // [rsp+48h] [rbp-29h]
  char v59; // [rsp+49h] [rbp-28h]
  char v60; // [rsp+4Ah] [rbp-27h]
  char v61; // [rsp+4Bh] [rbp-26h]
  char v62; // [rsp+4Ch] [rbp-25h]
  int v63; // [rsp+50h] [rbp-21h] BYREF
  int v64; // [rsp+54h] [rbp-1Dh]
  int v65; // [rsp+58h] [rbp-19h] BYREF
  int v66; // [rsp+5Ch] [rbp-15h]
  int v67; // [rsp+60h] [rbp-11h]
  int v68; // [rsp+64h] [rbp-Dh]
  int v69; // [rsp+68h] [rbp-9h]
  int v70; // [rsp+6Ch] [rbp-5h]
  int v71; // [rsp+70h] [rbp-1h]
  unsigned int v72; // [rsp+74h] [rbp+3h] BYREF
  __int64 v73; // [rsp+78h] [rbp+7h]
  __int64 *v74; // [rsp+80h] [rbp+Fh]
  __int64 *v75; // [rsp+88h] [rbp+17h] BYREF
  __int64 v76; // [rsp+90h] [rbp+1Fh]
  unsigned __int8 *v78; // [rsp+E0h] [rbp+6Fh] BYREF
  __int64 v79; // [rsp+F0h] [rbp+7Fh]

  v79 = a4;
  v4 = 0;
  v5 = a2;
  v66 = 0;
  v6 = a1;
  v65 = 0;
  v7 = 0;
  v76 = 0LL;
  if ( !a2 || !a1 )
  {
    sub_180095DE0();
    return 0xFFFFFFFFLL;
  }
  v9 = *a2;
  v10 = 0;
  v61 = 0;
  v11 = 0;
  v64 = 0;
  v63 = 0;
  v72 = 0;
  if ( !v9 )
    return v10;
  v12 = -1;
  while ( 2 )
  {
    if ( (sub_18009C1BC()[v9] & 8) != 0 )
    {
      --v11;
      while ( 1 )
      {
        v64 = ++v11;
        v63 = v11;
        v13 = sub_18009F268(v6);
        if ( v13 == -1 )
          break;
        if ( (sub_18009C1BC()[(unsigned __int8)v13] & 8) == 0 )
        {
          sub_18009FCF4(v13, v6);
          goto LABEL_11;
        }
      }
      do
LABEL_11:
        v14 = *++v5;
      while ( (sub_18009C1BC()[v14] & 8) != 0 );
      goto LABEL_187;
    }
    if ( *v5 != 37 )
      goto LABEL_180;
    if ( v5[1] == 37 )
    {
      if ( *v5 == 37 && v5[1] == 37 )
        ++v5;
LABEL_180:
      v64 = ++v11;
      v63 = v11;
      v7 = sub_18009F268(v6);
      v66 = v7;
      v65 = v7;
      v54 = *v5++;
      if ( v54 == v7 )
      {
        if ( !(unsigned int)sub_180099530(v7) )
          goto LABEL_184;
        v55 = sub_18009F268(v6);
        v56 = *v5++;
        if ( v56 == v55 )
        {
          v64 = v11;
          v63 = v11;
          goto LABEL_184;
        }
        if ( v55 != -1 )
          sub_18009FCF4(v55, v6);
      }
      if ( v7 == -1 )
        goto LABEL_197;
      v57 = v6;
      goto LABEL_195;
    }
    v69 = 0;
    v62 = 0;
    v15 = 0;
    v58 = 0;
    v16 = 0;
    v68 = 0;
    v17 = 0;
    v71 = 0;
    v59 = 1;
    do
    {
      v78 = ++v5;
      v18 = *v5;
      v19 = (sub_18009C1BC()[v18] & 4) == 0;
      v20 = (unsigned int)v18;
      if ( !v19 )
      {
        ++v17;
        v4 = v18 + 2 * (5 * v4 - 24);
        goto LABEL_18;
      }
      if ( (_DWORD)v18 != 42 )
      {
        switch ( (_DWORD)v18 )
        {
          case 'F':
            goto LABEL_18;
          case 'I':
            v24 = v5[1];
            if ( v24 == 54 && (v25 = v5 + 2, v5[2] == 52) )
            {
              v5 += 2;
              v78 = v25;
            }
            else
            {
              if ( v24 == 51 )
              {
                v26 = v5 + 2;
                if ( v5[2] == 50 )
                {
                  v5 += 2;
                  v78 = v26;
                  goto LABEL_18;
                }
              }
              LOBYTE(v20) = v24 - 88;
              if ( (unsigned __int8)v20 > 0x20u || (v27 = 0x100821001LL, !_bittest64(&v27, v20)) )
              {
                ++v68;
                v73 = 0LL;
LABEL_47:
                ++v15;
                goto LABEL_18;
              }
            }
            break;
          case 'L':
            ++v59;
            goto LABEL_18;
          case 'N':
LABEL_18:
            v21 = v58;
            continue;
          case 'h':
            --v59;
            --v16;
            goto LABEL_18;
          case 'l':
            v23 = v5 + 1;
            if ( v5[1] != 108 )
            {
              ++v59;
              goto LABEL_35;
            }
            ++v5;
            v78 = v23;
            break;
          case 'w':
LABEL_35:
            ++v16;
            goto LABEL_18;
          default:
            goto LABEL_47;
        }
        ++v68;
        v73 = 0LL;
        goto LABEL_18;
      }
      v21 = ++v58;
    }
    while ( !v15 );
    v67 = v4;
    v70 = v17;
    v7 = v66;
    v60 = v16;
    v11 = v64;
    if ( v21 )
    {
      v22 = 0LL;
    }
    else
    {
      v76 = v79;
      v79 += 8LL;
      v22 = *(__int64 **)(v79 - 8);
    }
    v28 = v60;
    v29 = 0;
    v75 = v22;
    v74 = v22;
    if ( !v60 )
    {
      v28 = ((*v5 - 67) & 0xEF) != 0 ? -1 : 1;
      v60 = v28;
    }
    v30 = *v5 | 0x20;
    if ( v30 != 110 )
    {
      if ( v30 == 99 || v30 == 123 )
      {
        v11 = v64 + 1;
        v64 = v11;
        v63 = v11;
        v7 = sub_18009F268(a1);
        v66 = v7;
        v65 = v7;
      }
      else
      {
        do
        {
          v63 = ++v11;
          v7 = sub_18009F268(a1);
          v66 = v7;
        }
        while ( v7 != -1 && (sub_18009C1BC()[(unsigned __int8)v7] & 8) != 0 );
        v28 = v60;
        v64 = v11;
        v65 = v7;
      }
      if ( v7 == -1 )
        goto LABEL_197;
      v21 = v58;
    }
    v31 = v70;
    v32 = v67;
    if ( v70 && !v67 )
      goto LABEL_189;
    if ( v30 > 112 )
    {
      if ( v30 == 115 )
      {
        v34 = 32;
        goto LABEL_165;
      }
      if ( v30 != 117 )
      {
        if ( v30 == 120 )
          goto LABEL_75;
        if ( v30 != 123 )
          goto LABEL_84;
        v34 = 64;
        goto LABEL_165;
      }
    }
    else
    {
      if ( v30 != 112 )
      {
        if ( v30 != 99 )
        {
          if ( v30 == 100 )
            break;
          if ( v30 != 105 )
          {
            if ( v30 != 110 )
            {
              if ( v30 == 111 )
                break;
LABEL_84:
              if ( *v5 == v7 )
              {
                v4 = 0;
                --v61;
                if ( !v21 )
                  v79 = v76;
                goto LABEL_176;
              }
LABEL_189:
              if ( v7 == -1 )
                goto LABEL_197;
              v57 = a1;
LABEL_195:
              sub_18009FCF4(v7, v57);
              goto LABEL_196;
            }
            v4 = 0;
            v33 = v11;
            if ( !v21 )
            {
LABEL_159:
              if ( v68 )
              {
                *v74 = v73;
              }
              else if ( v59 )
              {
                *(_DWORD *)v74 = v33;
              }
              else
              {
                *(_WORD *)v74 = v33;
              }
            }
LABEL_176:
            ++v61;
            v6 = a1;
            ++v5;
LABEL_184:
            if ( v7 == -1 && (*v5 != 37 || v5[1] != 110) )
              goto LABEL_197;
LABEL_187:
            v9 = *v5;
            if ( !*v5 )
              goto LABEL_196;
            continue;
          }
          v30 = 100;
LABEL_75:
          switch ( v7 )
          {
            case '-':
              v62 = 1;
LABEL_89:
              --v67;
              if ( v32 == 1 && v70 )
              {
                v29 = 1;
                goto LABEL_92;
              }
              v35 = a1;
              v64 = ++v11;
              v63 = v11;
              v7 = sub_18009F268(a1);
              v66 = v7;
              v65 = v7;
              break;
            case '+':
              goto LABEL_89;
            case '0':
              v64 = ++v11;
              v63 = v11;
              v7 = sub_18009F268(v35);
              v66 = v7;
              v65 = v7;
              if ( (((_BYTE)v7 - 88) & 0xDF) != 0 )
              {
                v71 = 1;
                if ( v30 == 120 )
                {
                  v64 = --v11;
                  v63 = v11;
                  if ( v7 != -1 )
                    sub_18009FCF4(v7, v35);
                  v7 = 48;
                  v66 = 48;
                  v65 = 48;
                }
                else
                {
                  if ( v70 )
                  {
                    if ( !--v67 )
                      ++v29;
                  }
                  v30 = 111;
                }
              }
              else
              {
                v64 = ++v11;
                v63 = v11;
                v7 = sub_18009F268(v35);
                v66 = v7;
                v65 = v7;
                if ( v70 )
                {
                  v67 -= 2;
                  if ( v67 < 1 )
                    ++v29;
                }
                v30 = 120;
              }
              break;
            default:
LABEL_92:
              v35 = a1;
              break;
          }
LABEL_100:
          v36 = a1;
          goto LABEL_101;
        }
        v34 = 16;
        if ( !v70 )
        {
          v31 = 1;
          v32 = v67 + 1;
        }
LABEL_165:
        v50 = v34 | 1;
        if ( !v31 )
          v50 = v34;
        v51 = v50 | 2;
        if ( v28 <= 0 )
          v51 = v50;
        v52 = v51 | 4;
        if ( !v21 )
          v52 = v51;
        if ( v30 == 123 )
        {
          v53 = sub_18009F11C(v52, &v78, &v65, &v63, &v75, v32, a1, &v72);
          v5 = v78;
        }
        else
        {
          v53 = sub_18009EF60(v52, 0LL, &v65, &v63, &v75, v32, a1, &v72);
        }
        v7 = v65;
        v4 = 0;
        if ( !v53 )
        {
          v11 = v63;
          v64 = v63;
          v66 = v65;
          goto LABEL_176;
        }
        goto LABEL_196;
      }
      ++v68;
      v59 = 1;
      v73 = 0LL;
    }
    break;
  }
  if ( v7 == 45 )
  {
    v62 = 1;
  }
  else if ( v7 != 43 )
  {
    goto LABEL_100;
  }
  --v67;
  if ( v32 == 1 && v70 )
  {
    v29 = 1;
    goto LABEL_100;
  }
  v36 = a1;
  v64 = ++v11;
  v63 = v11;
  v7 = sub_18009F268(a1);
  v66 = v7;
  v65 = v7;
LABEL_101:
  if ( !v68 )
  {
    if ( !v29 )
    {
      while ( 1 )
      {
        if ( ((v30 - 112) & 0xFFFFFFF7) != 0 )
        {
          if ( (sub_18009C1BC()[(unsigned __int8)v7] & 4) == 0 )
            goto LABEL_149;
          if ( v30 == 111 )
          {
            if ( (int)v7 >= 56 )
              goto LABEL_149;
            v43 = 8 * v69;
          }
          else
          {
            v43 = 10 * v69;
          }
        }
        else
        {
          if ( SLOBYTE(sub_18009C1BC()[(unsigned __int8)v7]) >= 0 )
          {
LABEL_149:
            v64 = --v11;
            v63 = v11;
            if ( v7 != -1 )
              sub_18009FCF4(v7, v36);
            break;
          }
          v69 *= 16;
          v44 = (char)v7;
          v45 = sub_18009C1BC();
          v46 = (unsigned __int8)v7;
          v7 = ((char)v7 & 0xFFFFFFDF) - 7;
          v47 = v45[v46];
          v43 = v69;
          if ( (v47 & 4) != 0 )
            v7 = v44;
          v66 = v7;
          v65 = v7;
        }
        ++v71;
        v48 = v7 + v43 - 48;
        v69 = v48;
        if ( v70 )
        {
          if ( !--v67 )
            goto LABEL_152;
        }
        v64 = ++v11;
        v63 = v11;
        v7 = sub_18009F268(v36);
        v66 = v7;
        v65 = v7;
      }
    }
    v48 = v69;
LABEL_152:
    if ( v62 )
      v69 = -v48;
    goto LABEL_154;
  }
  if ( v29 )
    goto LABEL_132;
  v37 = v73;
  while ( 2 )
  {
    if ( ((v30 - 112) & 0xFFFFFFF7) != 0 )
    {
      if ( (sub_18009C1BC()[(unsigned __int8)v7] & 4) == 0 )
        break;
      if ( v30 == 111 )
      {
        if ( (int)v7 >= 56 )
          break;
        v38 = 8 * v37;
      }
      else
      {
        v38 = 10 * v37;
      }
      goto LABEL_127;
    }
    if ( SLOBYTE(sub_18009C1BC()[(unsigned __int8)v7]) < 0 )
    {
      v73 = 16 * v37;
      v39 = (char)v7;
      v40 = sub_18009C1BC();
      v41 = (unsigned __int8)v7;
      v7 = ((char)v7 & 0xFFFFFFDF) - 7;
      if ( (v40[v41] & 4) != 0 )
        v7 = v39;
      v38 = v73;
      v66 = v7;
      v65 = v7;
LABEL_127:
      ++v71;
      v37 = (int)(v7 - 48) + v38;
      v73 = v37;
      if ( v70 )
      {
        if ( !--v67 )
          goto LABEL_132;
      }
      v64 = ++v11;
      v63 = v11;
      v7 = sub_18009F268(v36);
      v66 = v7;
      v65 = v7;
      continue;
    }
    break;
  }
  v64 = --v11;
  v63 = v11;
  if ( v7 != -1 )
    sub_18009FCF4(v7, v36);
LABEL_132:
  v42 = -v73;
  if ( !v62 )
    v42 = v73;
  v73 = v42;
LABEL_154:
  v49 = v71;
  v19 = v30 == 70;
  v4 = 0;
  if ( v19 )
    v49 = 0;
  if ( v49 )
  {
    if ( !v58 )
    {
      ++v72;
      v33 = v69;
      goto LABEL_159;
    }
    goto LABEL_176;
  }
LABEL_196:
  if ( v7 != -1 )
    return v72;
LABEL_197:
  if ( v72 || v61 )
    return v72;
  return v12;
}
