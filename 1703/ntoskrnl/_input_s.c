/*
 * XREFs of _input_s @ 0x140172114
 * Callers:
 *     _sinput_s @ 0x1401729A4 (_sinput_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14014A440 (xHalTimerWatchdogStop.c)
 *     ReadString @ 0x140171DE8 (ReadString.c)
 *     ReadStringDelimited @ 0x140171F94 (ReadStringDelimited.c)
 *     _inc @ 0x1401720E8 (_inc.c)
 *     _ungetc_nolock @ 0x140173870 (_ungetc_nolock.c)
 */

__int64 __fastcall input_s(FILE *a1, unsigned __int8 *a2, _DWORD *a3)
{
  int v3; // r13d
  unsigned __int8 *v4; // r15
  int v5; // ebx
  FILE *v6; // r11
  __int64 result; // rax
  unsigned int v8; // esi
  unsigned __int8 v9; // dl
  int v10; // r12d
  int v11; // r8d
  int v12; // edi
  int v13; // r10d
  char v14; // r9
  char v15; // r8
  char v16; // r14
  char v17; // r11
  const unsigned __int16 *v18; // rax
  __int64 v19; // rdx
  unsigned __int8 *v20; // rax
  unsigned __int8 v21; // al
  unsigned __int8 *v22; // rcx
  unsigned __int8 *v23; // rcx
  __int64 v24; // rcx
  char v25; // r8
  __int64 v26; // r9
  FILE *v27; // r11
  __int64 v28; // rax
  char v29; // r13
  int v30; // edi
  int v31; // edx
  _BYTE *v32; // rax
  int v33; // ecx
  char v34; // cl
  int v35; // r8d
  int v36; // r14d
  int v37; // eax
  __int64 v38; // r9
  unsigned __int16 v39; // dx
  int v40; // eax
  __int64 v41; // r9
  int v42; // eax
  __int64 v43; // rax
  int v44; // ecx
  unsigned __int16 v45; // dx
  int v46; // eax
  int v47; // ecx
  int v48; // eax
  char v49; // al
  char v50; // cl
  char v51; // al
  int v52; // eax
  int v53; // eax
  int v54; // edi
  char v55; // [rsp+50h] [rbp-39h]
  char v56; // [rsp+51h] [rbp-38h]
  char v57; // [rsp+52h] [rbp-37h]
  int v58; // [rsp+54h] [rbp-35h] BYREF
  int v59; // [rsp+58h] [rbp-31h] BYREF
  int v60; // [rsp+5Ch] [rbp-2Dh]
  int v61; // [rsp+60h] [rbp-29h]
  int v62; // [rsp+64h] [rbp-25h]
  int v63; // [rsp+68h] [rbp-21h]
  int v64; // [rsp+6Ch] [rbp-1Dh]
  unsigned int v65; // [rsp+70h] [rbp-19h] BYREF
  int v66; // [rsp+74h] [rbp-15h]
  __int64 v67; // [rsp+78h] [rbp-11h]
  _QWORD *v68; // [rsp+80h] [rbp-9h]
  _DWORD *v69; // [rsp+88h] [rbp-1h]
  __int64 v70; // [rsp+90h] [rbp+7h] BYREF
  __int64 v71; // [rsp+98h] [rbp+Fh]
  unsigned __int8 *v73; // [rsp+F8h] [rbp+6Fh] BYREF
  _DWORD *v74; // [rsp+100h] [rbp+77h]
  char v75; // [rsp+108h] [rbp+7Fh]

  v74 = a3;
  v3 = 0;
  v4 = a2;
  v64 = 0;
  v5 = 0;
  v59 = 0;
  v6 = a1;
  v69 = 0LL;
  if ( !a2 )
  {
    xHalTimerWatchdogStop();
    return 0xFFFFFFFFLL;
  }
  if ( !a1 )
  {
    v8 = -1;
    goto LABEL_194;
  }
  v9 = *a2;
  result = 0LL;
  v55 = 0;
  v10 = 0;
  v58 = 0;
  v65 = 0;
  if ( !v9 )
    return result;
  v8 = -1;
  while ( 2 )
  {
    if ( (pctype[v9] & 8) != 0 )
    {
      --v10;
      while ( 1 )
      {
        v58 = ++v10;
        v11 = inc(v6);
        if ( v11 == -1 )
          break;
        v6 = a1;
        if ( (pctype[(unsigned __int8)v11] & 8) == 0 )
        {
          ungetc_nolock(v11, a1);
          v3 = 0;
          goto LABEL_12;
        }
      }
      do
LABEL_12:
        ++v4;
      while ( (pctype[*v4] & 8) != 0 );
      goto LABEL_186;
    }
    if ( v9 != 37 )
      goto LABEL_182;
    if ( v4[1] == 37 )
    {
      ++v4;
LABEL_182:
      v58 = ++v10;
      v5 = inc(v6);
      v59 = v5;
      v53 = *v4++;
      if ( v53 == v5 )
        goto LABEL_183;
      if ( v5 == -1 )
        goto LABEL_204;
      ungetc_nolock(v5, a1);
      v54 = v64;
      goto LABEL_191;
    }
    v62 = 0;
    v12 = 0;
    v66 = 0;
    v13 = 0;
    v14 = 0;
    v71 = 0LL;
    v56 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 1;
    do
    {
      v18 = pctype;
      v73 = ++v4;
      v19 = *v4;
      if ( (pctype[v19] & 4) != 0 )
      {
        ++v12;
        v13 = v19 + 2 * (5 * v13 - 24);
        continue;
      }
      switch ( (_DWORD)v19 )
      {
        case '*':
          ++v14;
          break;
        case 'F':
          break;
        case 'I':
          v21 = v4[1];
          if ( v21 == 54 )
          {
            v22 = v4 + 2;
            if ( v4[2] == 52 )
            {
              v4 += 2;
              v73 = v22;
LABEL_37:
              ++v3;
              v67 = 0LL;
              break;
            }
          }
          if ( v21 == 51 )
          {
            v23 = v4 + 2;
            if ( v4[2] == 50 )
            {
              v4 += 2;
              v73 = v23;
              break;
            }
          }
          LOBYTE(v18) = v21 - 88;
          if ( (unsigned __int8)v18 <= 0x20u )
          {
            v24 = 0x100821001LL;
            if ( _bittest64(&v24, (unsigned __int64)v18) )
              goto LABEL_37;
          }
          ++v3;
          v67 = 0LL;
          break;
        case 'L':
          ++v17;
          break;
        case 'N':
          break;
        case 'h':
          --v17;
          --v16;
          break;
        case 'l':
          v20 = v4 + 1;
          if ( v4[1] != 108 )
          {
            ++v17;
LABEL_31:
            ++v16;
            break;
          }
          ++v4;
          v73 = v20;
          goto LABEL_37;
        case 'w':
          goto LABEL_31;
        default:
          ++v15;
          break;
      }
    }
    while ( !v15 );
    v57 = v14;
    v25 = v14;
    v26 = v71;
    v61 = v12;
    v75 = v17;
    v27 = a1;
    v63 = v3;
    v60 = v13;
    if ( v25 )
    {
      v28 = 0LL;
    }
    else
    {
      v69 = v74;
      v74 += 2;
      v28 = *((_QWORD *)v74 - 1);
    }
    v70 = v28;
    v29 = 0;
    v68 = (_QWORD *)v28;
    if ( !v16 )
      v16 = ((*v4 - 67) & 0xEF) != 0 ? -1 : 1;
    v30 = *v4 | 0x20;
    if ( v30 == 110 )
    {
LABEL_61:
      v31 = v61;
      if ( v61 && !v13 )
      {
        if ( v5 == -1 )
          goto LABEL_204;
        ungetc_nolock(v5, v27);
LABEL_190:
        v54 = v64;
        goto LABEL_191;
      }
      if ( !v25 && ((v30 - 99) & 0xFFFFFFE7) == 0 && v30 != 107 )
      {
        v69 += 2;
        v32 = (_BYTE *)*((_QWORD *)v69 - 1);
        v68 = v32;
        v70 = (__int64)v32;
        v74 = v69 + 2;
        v26 = (unsigned int)*v69;
        if ( !*v69 )
        {
          v54 = 0;
          if ( v16 <= 0 )
            *v32 = 0;
          else
            *(_WORD *)v32 = 0;
          goto LABEL_191;
        }
      }
      if ( v30 <= 112 )
      {
        switch ( v30 )
        {
          case 'p':
            ++v63;
            v75 = 1;
            v67 = 0LL;
            goto LABEL_74;
          case 'c':
            v3 = 0;
            v34 = 16;
            if ( !v61 )
            {
              v31 = 1;
              ++v13;
            }
            goto LABEL_169;
          case 'd':
            goto LABEL_74;
          case 'i':
            v30 = 100;
            goto LABEL_79;
        }
        if ( v30 != 110 )
        {
          if ( v30 != 111 )
            goto LABEL_88;
LABEL_74:
          if ( v5 == 45 )
          {
            v56 = 1;
LABEL_113:
            v60 = v13 - 1;
            if ( v13 == 1 && v61 )
            {
              v29 = 1;
              v36 = 0;
              v35 = v61;
LABEL_119:
              if ( v63 )
              {
                if ( !v29 )
                {
                  while ( 1 )
                  {
                    if ( ((v30 - 112) & 0xFFFFFFF7) != 0 )
                    {
                      if ( (pctype[(unsigned __int8)v5] & 4) == 0 )
                        goto LABEL_134;
                      if ( v30 == 111 )
                      {
                        if ( v5 >= 56 )
                          goto LABEL_134;
                        v38 = 8 * v67;
                      }
                      else
                      {
                        v38 = 10 * v67;
                      }
                    }
                    else
                    {
                      v39 = pctype[(unsigned __int8)v5];
                      if ( (v39 & 0x80u) == 0 )
                      {
LABEL_134:
                        v58 = --v10;
                        if ( v5 != -1 )
                          ungetc_nolock(v5, a1);
                        break;
                      }
                      v40 = (char)v5;
                      v38 = 16 * v67;
                      v5 = ((char)v5 & 0xFFFFFFDF) - 7;
                      if ( (v39 & 4) != 0 )
                        v5 = v40;
                      v59 = v5;
                    }
                    ++v66;
                    v41 = v5 - 48 + v38;
                    v67 = v41;
                    if ( v35 )
                    {
                      if ( !--v36 )
                        goto LABEL_137;
                    }
                    v58 = ++v10;
                    v42 = inc(a1);
                    v35 = v61;
                    v5 = v42;
                    v59 = v42;
                  }
                }
                v41 = v67;
LABEL_137:
                v3 = 0;
                v43 = -v41;
                if ( !v56 )
                  v43 = v41;
                v67 = v43;
              }
              else
              {
                if ( !v29 )
                {
                  while ( 1 )
                  {
                    if ( ((v30 - 112) & 0xFFFFFFF7) != 0 )
                    {
                      if ( (pctype[(unsigned __int8)v5] & 4) == 0 )
                        goto LABEL_154;
                      if ( v30 == 111 )
                      {
                        if ( v5 >= 56 )
                          goto LABEL_154;
                        v44 = 8 * v62;
                      }
                      else
                      {
                        v44 = 10 * v62;
                      }
                    }
                    else
                    {
                      v45 = pctype[(unsigned __int8)v5];
                      if ( (v45 & 0x80u) == 0 )
                      {
LABEL_154:
                        v58 = --v10;
                        if ( v5 != -1 )
                          ungetc_nolock(v5, a1);
                        break;
                      }
                      v46 = (char)v5;
                      v44 = 16 * v62;
                      v5 = ((char)v5 & 0xFFFFFFDF) - 7;
                      if ( (v45 & 4) != 0 )
                        v5 = v46;
                      v59 = v5;
                    }
                    ++v66;
                    v47 = v5 + v44 - 48;
                    v62 = v47;
                    if ( v35 )
                    {
                      if ( !--v36 )
                        goto LABEL_157;
                    }
                    v58 = ++v10;
                    v48 = inc(a1);
                    v35 = v61;
                    v5 = v48;
                    v59 = v48;
                  }
                }
                v47 = v62;
LABEL_157:
                v3 = 0;
                if ( v56 )
                  v62 = -v47;
              }
              if ( !v66 )
                goto LABEL_190;
              if ( v57 )
                goto LABEL_180;
              ++v65;
              v33 = v62;
LABEL_162:
              if ( v63 )
              {
                *v68 = v67;
              }
              else if ( v75 )
              {
                *(_DWORD *)v68 = v33;
              }
              else
              {
                *(_WORD *)v68 = v33;
              }
              goto LABEL_180;
            }
            v58 = ++v10;
            v5 = inc(v27);
            v59 = v5;
LABEL_107:
            v35 = v61;
          }
          else
          {
            if ( v5 == 43 )
              goto LABEL_113;
            v35 = v61;
          }
          v36 = v60;
          goto LABEL_119;
        }
        v3 = 0;
        v33 = v10;
        if ( !v25 )
          goto LABEL_162;
LABEL_180:
        ++v55;
        ++v4;
LABEL_183:
        if ( v5 == -1 && (*v4 != 37 || v4[1] != 110) )
          goto LABEL_204;
LABEL_186:
        v9 = *v4;
        if ( !*v4 )
          goto LABEL_190;
        v6 = a1;
        continue;
      }
      if ( v30 == 115 )
      {
        v34 = 32;
        goto LABEL_168;
      }
      if ( v30 == 117 )
        goto LABEL_74;
      if ( v30 != 120 )
      {
        if ( v30 != 123 )
        {
LABEL_88:
          if ( *v4 == v5 )
          {
            --v55;
            v3 = 0;
            if ( !v25 )
              v74 = v69;
            goto LABEL_180;
          }
          if ( v5 != -1 )
            ungetc_nolock(v5, v27);
          v54 = 1;
LABEL_191:
          if ( v5 == -1 )
            goto LABEL_204;
          if ( v54 != 1 )
            return v65;
          v8 = v65;
LABEL_194:
          xHalTimerWatchdogStop();
          return v8;
        }
        v34 = 64;
LABEL_168:
        v3 = 0;
LABEL_169:
        v49 = v34 | 1;
        if ( !v31 )
          v49 = v34;
        v50 = v49 | 2;
        if ( v16 <= 0 )
          v50 = v49;
        v51 = v50 | 4;
        if ( !v25 )
          v51 = v50;
        if ( v30 == 123 )
        {
          v52 = ReadStringDelimited(v51, &v73, &v59, &v58, (_WORD **)&v70, v13, v27, v26, &v65);
          v4 = v73;
        }
        else
        {
          v52 = ReadString(v51, 0LL, &v59, &v58, (_WORD **)&v70, v13, v27, v26, &v65);
        }
        v5 = v59;
        if ( v52 )
          goto LABEL_190;
        v10 = v58;
        goto LABEL_180;
      }
LABEL_79:
      if ( v5 == 45 )
      {
        v56 = 1;
      }
      else if ( v5 != 43 )
      {
        goto LABEL_97;
      }
      v60 = v13 - 1;
      if ( v13 == 1 && v61 )
      {
        v29 = 1;
      }
      else
      {
        v58 = ++v10;
        v5 = inc(v27);
        v59 = v5;
      }
LABEL_97:
      if ( v5 == 48 )
      {
        v58 = ++v10;
        v5 = inc(a1);
        v59 = v5;
        if ( (((_BYTE)v5 - 88) & 0xDF) == 0 )
        {
          v58 = ++v10;
          v37 = inc(a1);
          v35 = v61;
          v5 = v37;
          v36 = v60;
          v59 = v37;
          if ( v61 )
          {
            v36 = v60 - 2;
            if ( v60 - 2 < 1 )
              ++v29;
          }
          v30 = 120;
          goto LABEL_119;
        }
        v66 = 1;
        if ( v30 != 120 )
        {
          v35 = v61;
          v36 = v60;
          if ( v61 )
          {
            v36 = v60 - 1;
            if ( v60 == 1 )
              ++v29;
          }
          v30 = 111;
          goto LABEL_119;
        }
        v58 = --v10;
        if ( v5 != -1 )
          ungetc_nolock(v5, a1);
        v5 = 48;
        v59 = 48;
      }
      goto LABEL_107;
    }
    break;
  }
  if ( v30 == 99 || v30 == 123 )
  {
    v58 = ++v10;
    v5 = inc(a1);
    v59 = v5;
  }
  else
  {
    do
    {
      ++v10;
      v5 = inc(v27);
      if ( v5 == -1 )
        break;
      v27 = a1;
    }
    while ( (pctype[(unsigned __int8)v5] & 8) != 0 );
    v58 = v10;
    v59 = v5;
  }
  if ( v5 != -1 )
  {
    v26 = v71;
    v13 = v60;
    v27 = a1;
    v25 = v57;
    goto LABEL_61;
  }
LABEL_204:
  if ( v65 || v55 )
    return v65;
  return v8;
}
