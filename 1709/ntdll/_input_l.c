/*
 * XREFs of _input_l @ 0x18009A000
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180090BC0 (_invalid_parameter.c)
 *     isleadbyte @ 0x180094430 (isleadbyte.c)
 *     __pctype_func @ 0x180096F2C (__pctype_func.c)
 *     ReadString @ 0x180099CD0 (ReadString.c)
 *     ReadStringDelimited @ 0x180099E8C (ReadStringDelimited.c)
 *     _inc @ 0x180099FD8 (_inc.c)
 *     _ungetc_nolock @ 0x18009AA54 (_ungetc_nolock.c)
 */

__int64 __fastcall input_l(FILE *Stream, unsigned __int8 *a2, __int64 a3, __int64 a4)
{
  int v4; // r13d
  unsigned __int8 *v5; // r14
  FILE *v6; // r12
  int v7; // edi
  __int64 result; // rax
  unsigned __int8 v9; // bl
  int v10; // esi
  unsigned int v11; // r15d
  int v12; // ebx
  __int64 v13; // rbx
  char v14; // r12
  char v15; // si
  int v16; // edi
  __int64 v17; // rbx
  bool v18; // zf
  unsigned __int64 v19; // rax
  char v20; // r9
  _QWORD *v21; // rax
  unsigned __int8 *v22; // rax
  unsigned __int8 v23; // al
  unsigned __int8 *v24; // rcx
  unsigned __int8 *v25; // rcx
  __int64 v26; // rcx
  char v27; // r12
  char v28; // bl
  int v29; // r13d
  int v30; // edx
  int v31; // r8d
  int v32; // ecx
  char v33; // cl
  FILE *v34; // r12
  FILE *v35; // r12
  __int64 v36; // rbx
  __int64 v37; // rbx
  int v38; // ebx
  const unsigned __int16 *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  int v42; // ecx
  int v43; // ebx
  const unsigned __int16 *v44; // rax
  __int64 v45; // rcx
  char v46; // dl
  int v47; // ecx
  int v48; // eax
  char v49; // al
  char v50; // dl
  char v51; // cl
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // ecx
  FILE *v56; // rdx
  char v57; // [rsp+48h] [rbp-29h]
  char v58; // [rsp+49h] [rbp-28h]
  char v59; // [rsp+4Ah] [rbp-27h]
  char v60; // [rsp+4Bh] [rbp-26h]
  char v61; // [rsp+4Ch] [rbp-25h]
  int v62; // [rsp+50h] [rbp-21h] BYREF
  int v63; // [rsp+54h] [rbp-1Dh]
  int v64; // [rsp+58h] [rbp-19h] BYREF
  int Character; // [rsp+5Ch] [rbp-15h]
  int v66; // [rsp+60h] [rbp-11h]
  int v67; // [rsp+64h] [rbp-Dh]
  int v68; // [rsp+68h] [rbp-9h]
  int v69; // [rsp+6Ch] [rbp-5h]
  int v70; // [rsp+70h] [rbp-1h]
  _DWORD v71[3]; // [rsp+74h] [rbp+3h] BYREF
  _QWORD *v72; // [rsp+80h] [rbp+Fh]
  char SrcCh[8]; // [rsp+88h] [rbp+17h] BYREF
  __int64 v74; // [rsp+90h] [rbp+1Fh]
  unsigned __int8 *v76; // [rsp+E0h] [rbp+6Fh] BYREF
  __int64 v77; // [rsp+F0h] [rbp+7Fh]

  v77 = a4;
  v4 = 0;
  v5 = a2;
  Character = 0;
  v6 = Stream;
  v64 = 0;
  v7 = 0;
  v74 = 0LL;
  if ( !a2 || !Stream )
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
  v9 = *a2;
  result = 0LL;
  v60 = 0;
  v10 = 0;
  v63 = 0;
  v62 = 0;
  v71[0] = 0;
  if ( v9 )
  {
    v11 = -1;
    while ( 1 )
    {
      if ( (_pctype_func()[v9] & 8) != 0 )
      {
        --v10;
        while ( 1 )
        {
          v63 = ++v10;
          v62 = v10;
          v12 = inc((__int64)v6);
          if ( v12 == -1 )
            break;
          if ( (_pctype_func()[(unsigned __int8)v12] & 8) == 0 )
          {
            ungetc_nolock(v12, v6);
            goto LABEL_11;
          }
        }
        do
LABEL_11:
          v13 = *++v5;
        while ( (_pctype_func()[v13] & 8) != 0 );
        goto LABEL_187;
      }
      if ( *v5 != 37 )
        goto LABEL_180;
      if ( v5[1] == 37 )
      {
        if ( *v5 == 37 && v5[1] == 37 )
          ++v5;
LABEL_180:
        v63 = ++v10;
        v62 = v10;
        v7 = inc((__int64)v6);
        Character = v7;
        v64 = v7;
        v53 = *v5++;
        if ( v53 == v7 )
        {
          if ( !isleadbyte((unsigned __int8)v7) )
            goto LABEL_184;
          v54 = inc((__int64)v6);
          v55 = *v5++;
          if ( v55 == v54 )
          {
            v63 = v10;
            v62 = v10;
            goto LABEL_184;
          }
          if ( v54 != -1 )
            ungetc_nolock(v54, v6);
        }
        if ( v7 == -1 )
          goto LABEL_197;
        v56 = v6;
        goto LABEL_195;
      }
      v68 = 0;
      v61 = 0;
      v14 = 0;
      v57 = 0;
      v15 = 0;
      v67 = 0;
      v16 = 0;
      v70 = 0;
      v58 = 1;
      do
      {
        v76 = ++v5;
        v17 = *v5;
        v18 = (_pctype_func()[v17] & 4) == 0;
        v19 = (unsigned int)v17;
        if ( !v18 )
        {
          ++v16;
          v4 = v17 + 2 * (5 * v4 - 24);
          goto LABEL_18;
        }
        if ( (_DWORD)v17 != 42 )
        {
          switch ( (_DWORD)v17 )
          {
            case 'F':
              goto LABEL_18;
            case 'I':
              v23 = v5[1];
              if ( v23 == 54 && (v24 = v5 + 2, v5[2] == 52) )
              {
                v5 += 2;
                v76 = v24;
              }
              else
              {
                if ( v23 == 51 )
                {
                  v25 = v5 + 2;
                  if ( v5[2] == 50 )
                  {
                    v5 += 2;
                    v76 = v25;
                    goto LABEL_18;
                  }
                }
                LOBYTE(v19) = v23 - 88;
                if ( (unsigned __int8)v19 > 0x20u || (v26 = 0x100821001LL, !_bittest64(&v26, v19)) )
                {
                  ++v67;
                  *(_QWORD *)&v71[1] = 0LL;
                  goto LABEL_47;
                }
              }
              break;
            case 'L':
              ++v58;
              goto LABEL_18;
            case 'N':
LABEL_18:
              v20 = v57;
              continue;
            case 'h':
              --v58;
              --v15;
              goto LABEL_18;
            case 'l':
              v22 = v5 + 1;
              if ( v5[1] != 108 )
              {
                ++v58;
                goto LABEL_35;
              }
              ++v5;
              v76 = v22;
              break;
            case 'w':
LABEL_35:
              ++v15;
              goto LABEL_18;
            default:
LABEL_47:
              ++v14;
              goto LABEL_18;
          }
          ++v67;
          *(_QWORD *)&v71[1] = 0LL;
          goto LABEL_18;
        }
        v20 = ++v57;
      }
      while ( !v14 );
      v66 = v4;
      v69 = v16;
      v7 = Character;
      v59 = v15;
      v10 = v63;
      if ( v20 )
      {
        v21 = 0LL;
      }
      else
      {
        v74 = v77;
        v77 += 8LL;
        v21 = *(_QWORD **)(v77 - 8);
      }
      v27 = v59;
      v28 = 0;
      *(_QWORD *)SrcCh = v21;
      v72 = v21;
      if ( !v59 )
      {
        v27 = ((*v5 - 67) & 0xEF) != 0 ? -1 : 1;
        v59 = v27;
      }
      v29 = *v5 | 0x20;
      if ( v29 != 110 )
      {
        if ( v29 == 99 || v29 == 123 )
        {
          v10 = v63 + 1;
          v63 = v10;
          v62 = v10;
          v7 = inc((__int64)Stream);
          Character = v7;
          v64 = v7;
        }
        else
        {
          do
          {
            v62 = ++v10;
            v7 = inc((__int64)Stream);
            Character = v7;
          }
          while ( v7 != -1 && (_pctype_func()[(unsigned __int8)v7] & 8) != 0 );
          v27 = v59;
          v63 = v10;
          v64 = v7;
        }
        if ( v7 == -1 )
          goto LABEL_197;
        v20 = v57;
      }
      v30 = v69;
      v31 = v66;
      if ( v69 && !v66 )
        goto LABEL_189;
      if ( v29 > 112 )
      {
        if ( v29 == 115 )
        {
          v33 = 32;
          goto LABEL_165;
        }
        if ( v29 != 117 )
        {
          if ( v29 != 120 )
          {
            if ( v29 != 123 )
              goto LABEL_84;
            v33 = 64;
LABEL_165:
            v49 = v33 | 1;
            if ( !v30 )
              v49 = v33;
            v50 = v49 | 2;
            if ( v27 <= 0 )
              v50 = v49;
            v51 = v50 | 4;
            if ( !v20 )
              v51 = v50;
            if ( v29 == 123 )
            {
              v52 = ReadStringDelimited(v51, &v76, &v64, &v62, SrcCh, v31, Stream, v71);
              v5 = v76;
            }
            else
            {
              v52 = ReadString(v51, 0LL, &v64, &v62, SrcCh, v31, Stream, v71);
            }
            v7 = v64;
            v4 = 0;
            if ( !v52 )
            {
              v10 = v62;
              v63 = v62;
              Character = v64;
              goto LABEL_176;
            }
            goto LABEL_196;
          }
LABEL_75:
          switch ( v7 )
          {
            case '-':
              v61 = 1;
LABEL_89:
              --v66;
              if ( v31 == 1 && v69 )
              {
                v28 = 1;
                goto LABEL_92;
              }
              v34 = Stream;
              v63 = ++v10;
              v62 = v10;
              v7 = inc((__int64)Stream);
              Character = v7;
              v64 = v7;
              break;
            case '+':
              goto LABEL_89;
            case '0':
              v63 = ++v10;
              v62 = v10;
              v7 = inc((__int64)v34);
              Character = v7;
              v64 = v7;
              if ( (((_BYTE)v7 - 88) & 0xDF) != 0 )
              {
                v70 = 1;
                if ( v29 == 120 )
                {
                  v63 = --v10;
                  v62 = v10;
                  if ( v7 != -1 )
                    ungetc_nolock(v7, v34);
                  v7 = 48;
                  Character = 48;
                  v64 = 48;
                }
                else
                {
                  if ( v69 )
                  {
                    if ( !--v66 )
                      ++v28;
                  }
                  v29 = 111;
                }
              }
              else
              {
                v63 = ++v10;
                v62 = v10;
                v7 = inc((__int64)v34);
                Character = v7;
                v64 = v7;
                if ( v69 )
                {
                  v66 -= 2;
                  if ( v66 < 1 )
                    ++v28;
                }
                v29 = 120;
              }
              break;
            default:
LABEL_92:
              v34 = Stream;
              break;
          }
LABEL_100:
          v35 = Stream;
          goto LABEL_101;
        }
LABEL_70:
        if ( v7 == 45 )
        {
          v61 = 1;
        }
        else if ( v7 != 43 )
        {
          goto LABEL_100;
        }
        --v66;
        if ( v31 == 1 && v69 )
        {
          v28 = 1;
          goto LABEL_100;
        }
        v35 = Stream;
        v63 = ++v10;
        v62 = v10;
        v7 = inc((__int64)Stream);
        Character = v7;
        v64 = v7;
LABEL_101:
        if ( v67 )
        {
          if ( v28 )
            goto LABEL_132;
          v36 = *(_QWORD *)&v71[1];
          while ( 1 )
          {
            if ( ((v29 - 112) & 0xFFFFFFF7) != 0 )
            {
              if ( (_pctype_func()[(unsigned __int8)v7] & 4) == 0 )
                goto LABEL_130;
              if ( v29 == 111 )
              {
                if ( v7 >= 56 )
                  goto LABEL_130;
                v37 = 8 * v36;
              }
              else
              {
                v37 = 10 * v36;
              }
            }
            else
            {
              if ( SLOBYTE(_pctype_func()[(unsigned __int8)v7]) >= 0 )
              {
LABEL_130:
                v63 = --v10;
                v62 = v10;
                if ( v7 != -1 )
                  ungetc_nolock(v7, v35);
LABEL_132:
                v41 = -*(_QWORD *)&v71[1];
                if ( !v61 )
                  v41 = *(_QWORD *)&v71[1];
                *(_QWORD *)&v71[1] = v41;
LABEL_154:
                v48 = v70;
                v18 = v29 == 70;
                v4 = 0;
                if ( v18 )
                  v48 = 0;
                if ( v48 )
                {
                  if ( !v57 )
                  {
                    ++v71[0];
                    v32 = v68;
                    goto LABEL_159;
                  }
                  goto LABEL_176;
                }
LABEL_196:
                if ( v7 != -1 )
                  return v71[0];
LABEL_197:
                if ( v71[0] || v60 )
                  return v71[0];
                return v11;
              }
              *(_QWORD *)&v71[1] = 16 * v36;
              v38 = (char)v7;
              v39 = _pctype_func();
              v40 = (unsigned __int8)v7;
              v7 = ((char)v7 & 0xFFFFFFDF) - 7;
              if ( (v39[v40] & 4) != 0 )
                v7 = v38;
              v37 = *(_QWORD *)&v71[1];
              Character = v7;
              v64 = v7;
            }
            ++v70;
            v36 = v7 - 48 + v37;
            *(_QWORD *)&v71[1] = v36;
            if ( v69 )
            {
              if ( !--v66 )
                goto LABEL_132;
            }
            v63 = ++v10;
            v62 = v10;
            v7 = inc((__int64)v35);
            Character = v7;
            v64 = v7;
          }
        }
        if ( v28 )
          goto LABEL_151;
        while ( 1 )
        {
          if ( ((v29 - 112) & 0xFFFFFFF7) != 0 )
          {
            if ( (_pctype_func()[(unsigned __int8)v7] & 4) == 0 )
              goto LABEL_149;
            if ( v29 == 111 )
            {
              if ( v7 >= 56 )
                goto LABEL_149;
              v42 = 8 * v68;
            }
            else
            {
              v42 = 10 * v68;
            }
          }
          else
          {
            if ( SLOBYTE(_pctype_func()[(unsigned __int8)v7]) >= 0 )
            {
LABEL_149:
              v63 = --v10;
              v62 = v10;
              if ( v7 != -1 )
                ungetc_nolock(v7, v35);
LABEL_151:
              v47 = v68;
LABEL_152:
              if ( v61 )
                v68 = -v47;
              goto LABEL_154;
            }
            v68 *= 16;
            v43 = (char)v7;
            v44 = _pctype_func();
            v45 = (unsigned __int8)v7;
            v7 = ((char)v7 & 0xFFFFFFDF) - 7;
            v46 = v44[v45];
            v42 = v68;
            if ( (v46 & 4) != 0 )
              v7 = v43;
            Character = v7;
            v64 = v7;
          }
          ++v70;
          v47 = v7 + v42 - 48;
          v68 = v47;
          if ( v69 )
          {
            if ( !--v66 )
              goto LABEL_152;
          }
          v63 = ++v10;
          v62 = v10;
          v7 = inc((__int64)v35);
          Character = v7;
          v64 = v7;
        }
      }
      switch ( v29 )
      {
        case 'p':
          ++v67;
          v58 = 1;
          *(_QWORD *)&v71[1] = 0LL;
          goto LABEL_70;
        case 'c':
          v33 = 16;
          if ( !v69 )
          {
            v30 = 1;
            v31 = v66 + 1;
          }
          goto LABEL_165;
        case 'd':
          goto LABEL_70;
        case 'i':
          v29 = 100;
          goto LABEL_75;
      }
      if ( v29 != 110 )
      {
        if ( v29 == 111 )
          goto LABEL_70;
LABEL_84:
        if ( *v5 == v7 )
        {
          --v60;
          v4 = 0;
          if ( !v20 )
            v77 = v74;
          goto LABEL_176;
        }
LABEL_189:
        if ( v7 == -1 )
          goto LABEL_197;
        v56 = Stream;
LABEL_195:
        ungetc_nolock(v7, v56);
        goto LABEL_196;
      }
      v4 = 0;
      v32 = v10;
      if ( !v20 )
      {
LABEL_159:
        if ( v67 )
        {
          *v72 = *(_QWORD *)&v71[1];
        }
        else if ( v58 )
        {
          *(_DWORD *)v72 = v32;
        }
        else
        {
          *(_WORD *)v72 = v32;
        }
      }
LABEL_176:
      ++v60;
      v6 = Stream;
      ++v5;
LABEL_184:
      if ( v7 == -1 && (*v5 != 37 || v5[1] != 110) )
        goto LABEL_197;
LABEL_187:
      v9 = *v5;
      if ( !*v5 )
        goto LABEL_196;
    }
  }
  return result;
}
