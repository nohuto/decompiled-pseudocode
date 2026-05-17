/*
 * XREFs of _input_s @ 0x18009D60C
 * Callers:
 *     _sinput_s @ 0x18009DF0C (_sinput_s.c)
 * Callees:
 *     _invalid_parameter @ 0x180090BC0 (_invalid_parameter.c)
 *     _ungetc_nolock @ 0x18009AA54 (_ungetc_nolock.c)
 *     ReadString_0 @ 0x18009D2EC (ReadString_0.c)
 *     ReadStringDelimited_0 @ 0x18009D494 (ReadStringDelimited_0.c)
 *     _inc_0 @ 0x18009D5E4 (_inc_0.c)
 */

__int64 __fastcall input_s(FILE *Stream, unsigned __int8 *a2, _DWORD *a3)
{
  int v3; // r13d
  unsigned __int8 *v4; // r15
  int v5; // ebx
  FILE *v6; // rdi
  __int64 result; // rax
  unsigned int v8; // esi
  unsigned __int8 v9; // cl
  int v10; // r12d
  int v11; // r8d
  char v12; // r10
  int v13; // edi
  int v14; // r11d
  char v15; // r12
  char v16; // r8
  char v17; // r14
  __int64 v18; // rdx
  unsigned __int8 *v19; // rax
  unsigned __int8 v20; // al
  unsigned __int8 *v21; // rcx
  unsigned __int8 *v22; // rcx
  unsigned __int8 v23; // al
  __int64 v24; // rcx
  char v25; // r8
  __int64 v26; // r10
  __int64 v27; // rax
  char v28; // r13
  int v29; // edi
  int v30; // edx
  _DWORD *v31; // r9
  _BYTE *v32; // rax
  int v33; // ecx
  char v34; // cl
  FILE *v35; // r14
  int v36; // r8d
  int v37; // r14d
  int v38; // eax
  __int64 v39; // r9
  unsigned __int16 v40; // dx
  int v41; // eax
  __int64 v42; // r9
  int v43; // eax
  __int64 v44; // rax
  int v45; // ecx
  unsigned __int16 v46; // dx
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  char v50; // al
  char v51; // cl
  char v52; // al
  int v53; // eax
  int v54; // eax
  bool v55; // cc
  int v56; // r14d
  char v57; // [rsp+50h] [rbp-49h]
  char v58; // [rsp+51h] [rbp-48h]
  char v59; // [rsp+52h] [rbp-47h]
  int v60; // [rsp+54h] [rbp-45h] BYREF
  int v61; // [rsp+58h] [rbp-41h] BYREF
  int v62; // [rsp+5Ch] [rbp-3Dh]
  int v63; // [rsp+60h] [rbp-39h]
  int v64; // [rsp+64h] [rbp-35h]
  int v65; // [rsp+68h] [rbp-31h]
  int v66; // [rsp+6Ch] [rbp-2Dh]
  int v67; // [rsp+70h] [rbp-29h]
  unsigned int v68; // [rsp+74h] [rbp-25h] BYREF
  int v69; // [rsp+78h] [rbp-21h]
  __int64 v70; // [rsp+80h] [rbp-19h]
  _DWORD *v71; // [rsp+88h] [rbp-11h]
  _QWORD *v72; // [rsp+90h] [rbp-9h]
  __int64 v73; // [rsp+98h] [rbp-1h] BYREF
  int v74; // [rsp+A0h] [rbp+7h]
  __int64 v75; // [rsp+A8h] [rbp+Fh]
  unsigned __int8 *v77; // [rsp+108h] [rbp+6Fh] BYREF
  _DWORD *v78; // [rsp+110h] [rbp+77h]
  char v79; // [rsp+118h] [rbp+7Fh]

  v78 = a3;
  v3 = 0;
  v4 = a2;
  v67 = 0;
  v5 = 0;
  v61 = 0;
  v6 = Stream;
  v71 = 0LL;
  if ( !a2 )
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
  if ( !Stream )
  {
    v8 = -1;
    goto LABEL_205;
  }
  v9 = *a2;
  result = 0LL;
  v57 = 0;
  v10 = 0;
  v62 = 0;
  v60 = 0;
  v68 = 0;
  if ( !v9 )
    return result;
  v8 = -1;
  while ( (pctype[v9] & 8) != 0 )
  {
    --v10;
    while ( 1 )
    {
      v62 = ++v10;
      v60 = v10;
      v11 = inc_0((__int64)v6);
      if ( v11 == -1 )
        break;
      if ( (pctype[(unsigned __int8)v11] & 8) == 0 )
      {
        ungetc_nolock(v11, v6);
        goto LABEL_12;
      }
    }
    do
LABEL_12:
      ++v4;
    while ( (pctype[*v4] & 8) != 0 );
LABEL_189:
    v9 = *v4;
    if ( !*v4 )
      goto LABEL_201;
  }
  if ( v9 != 37 )
    goto LABEL_185;
  if ( v4[1] == 37 )
  {
    ++v4;
LABEL_185:
    v62 = ++v10;
    v60 = v10;
    v5 = inc_0((__int64)v6);
    v61 = v5;
    v54 = *v4++;
    if ( v54 == v5 )
      goto LABEL_186;
    if ( v5 == -1 )
      goto LABEL_207;
    ungetc_nolock(v5, v6);
    goto LABEL_201;
  }
  v12 = 1;
  v65 = 0;
  v69 = 0;
  v13 = 0;
  v75 = 0LL;
  v14 = 0;
  v58 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  do
  {
    v77 = ++v4;
    v18 = *v4;
    if ( (pctype[v18] & 4) != 0 )
    {
      ++v13;
      v14 = v18 + 2 * (5 * v14 - 24);
      continue;
    }
    switch ( (_DWORD)v18 )
    {
      case '*':
        ++v15;
        break;
      case 'F':
        break;
      case 'I':
        v20 = v4[1];
        if ( v20 == 54 )
        {
          v21 = v4 + 2;
          if ( v4[2] == 52 )
          {
            v4 += 2;
            v77 = v21;
LABEL_37:
            ++v3;
            v70 = 0LL;
            break;
          }
        }
        if ( v20 == 51 )
        {
          v22 = v4 + 2;
          if ( v4[2] == 50 )
          {
            v4 += 2;
            v77 = v22;
            break;
          }
        }
        v23 = v20 - 88;
        if ( v23 <= 0x20u )
        {
          v24 = 0x100821001LL;
          if ( _bittest64(&v24, v23) )
            goto LABEL_37;
        }
        ++v3;
        v70 = 0LL;
        break;
      case 'L':
        ++v12;
        break;
      case 'N':
        break;
      case 'h':
        --v12;
        --v17;
        break;
      case 'l':
        v19 = v4 + 1;
        if ( v4[1] != 108 )
        {
          ++v12;
LABEL_31:
          ++v17;
          break;
        }
        ++v4;
        v77 = v19;
        goto LABEL_37;
      case 'w':
        goto LABEL_31;
      default:
        ++v16;
        break;
    }
  }
  while ( !v16 );
  v59 = v15;
  v25 = v15;
  v10 = v62;
  v79 = v12;
  v26 = v75;
  v66 = v3;
  v64 = v13;
  v63 = v14;
  if ( v25 )
  {
    v27 = 0LL;
  }
  else
  {
    v71 = v78;
    v78 += 2;
    v27 = *((_QWORD *)v78 - 1);
  }
  v73 = v27;
  v28 = 0;
  v72 = (_QWORD *)v27;
  if ( !v17 )
    v17 = ((*v4 - 67) & 0xEF) != 0 ? -1 : 1;
  v29 = *v4 | 0x20;
  v74 = v29;
  if ( v29 == 110 )
  {
LABEL_61:
    v30 = v64;
    if ( !v64 || v14 )
    {
      if ( v25 )
      {
        v31 = v71;
      }
      else if ( ((v29 - 99) & 0xFFFFFFE7) != 0 || v29 == 107 )
      {
        v31 = v71;
      }
      else
      {
        v31 = v71 + 2;
        v71 = v31;
        v32 = (_BYTE *)*((_QWORD *)v31 - 1);
        v72 = v32;
        v73 = (__int64)v32;
        v78 = v31 + 2;
        v26 = (unsigned int)*v31;
        if ( !*v31 )
        {
          v55 = v17 <= 0;
          v56 = 0;
          if ( v55 )
            *v32 = 0;
          else
            *(_WORD *)v32 = 0;
          goto LABEL_202;
        }
      }
      if ( v29 > 112 )
      {
        switch ( v29 )
        {
          case 's':
            v34 = 32;
            break;
          case 'u':
            goto LABEL_74;
          case 'x':
            goto LABEL_81;
          case '{':
            v34 = 64;
            break;
          default:
LABEL_90:
            if ( *v4 == v5 )
            {
              v3 = 0;
              --v57;
              if ( !v25 )
                v78 = v31;
              goto LABEL_183;
            }
            if ( v5 != -1 )
              ungetc_nolock(v5, Stream);
            v56 = 1;
LABEL_202:
            if ( v5 == -1 )
              goto LABEL_207;
            if ( v56 != 1 )
              return v68;
            v8 = v68;
LABEL_205:
            invalid_parameter();
            return v8;
        }
        v3 = 0;
      }
      else
      {
        if ( v29 == 112 )
        {
          ++v66;
          v79 = 1;
          v70 = 0LL;
          goto LABEL_74;
        }
        if ( v29 != 99 )
        {
          if ( v29 != 100 )
          {
            if ( v29 != 105 )
            {
              if ( v29 == 110 )
              {
                v3 = 0;
                v33 = v10;
                if ( v25 )
                {
LABEL_183:
                  ++v57;
                  v6 = Stream;
                  ++v4;
LABEL_186:
                  if ( v5 == -1 && (*v4 != 37 || v4[1] != 110) )
                    goto LABEL_207;
                  goto LABEL_189;
                }
LABEL_165:
                if ( v66 )
                {
                  *v72 = v70;
                }
                else if ( v79 )
                {
                  *(_DWORD *)v72 = v33;
                }
                else
                {
                  *(_WORD *)v72 = v33;
                }
                goto LABEL_183;
              }
              if ( v29 == 111 )
                goto LABEL_74;
              goto LABEL_90;
            }
            v29 = 100;
LABEL_81:
            if ( v5 == 45 )
            {
              v58 = 1;
            }
            else if ( v5 != 43 )
            {
              goto LABEL_98;
            }
            v63 = v14 - 1;
            if ( v14 != 1 || !v64 )
            {
              v35 = Stream;
              v62 = ++v10;
              v60 = v10;
              v5 = inc_0((__int64)Stream);
              v61 = v5;
LABEL_99:
              if ( v5 == 48 )
              {
                v62 = ++v10;
                v60 = v10;
                v5 = inc_0((__int64)v35);
                v61 = v5;
                if ( (((_BYTE)v5 - 88) & 0xDF) == 0 )
                {
                  v62 = ++v10;
                  v60 = v10;
                  v38 = inc_0((__int64)v35);
                  v36 = v64;
                  v5 = v38;
                  v37 = v63;
                  v61 = v38;
                  if ( v64 )
                  {
                    v37 = v63 - 2;
                    if ( v63 - 2 < 1 )
                      ++v28;
                  }
                  v29 = 120;
                  goto LABEL_122;
                }
                v69 = 1;
                if ( v29 != 120 )
                {
                  v36 = v64;
                  v37 = v63;
                  if ( v64 )
                  {
                    v37 = v63 - 1;
                    if ( v63 == 1 )
                      ++v28;
                  }
                  v29 = 111;
                  goto LABEL_122;
                }
                v62 = --v10;
                v60 = v10;
                if ( v5 != -1 )
                  ungetc_nolock(v5, v35);
                v5 = 48;
                v61 = 48;
              }
              goto LABEL_110;
            }
            v28 = 1;
LABEL_98:
            v35 = Stream;
            goto LABEL_99;
          }
LABEL_74:
          if ( v5 == 45 )
          {
            v58 = 1;
          }
          else if ( v5 != 43 )
          {
            v36 = v64;
            goto LABEL_121;
          }
          v63 = v14 - 1;
          if ( v14 == 1 && v64 )
          {
            v28 = 1;
            v37 = 0;
            v36 = v64;
LABEL_122:
            if ( v66 )
            {
              if ( !v28 )
              {
                while ( 1 )
                {
                  if ( ((v29 - 112) & 0xFFFFFFF7) != 0 )
                  {
                    if ( (pctype[(unsigned __int8)v5] & 4) == 0 )
                      goto LABEL_137;
                    if ( v29 == 111 )
                    {
                      if ( v5 >= 56 )
                        goto LABEL_137;
                      v39 = 8 * v70;
                    }
                    else
                    {
                      v39 = 10 * v70;
                    }
                  }
                  else
                  {
                    v40 = pctype[(unsigned __int8)v5];
                    if ( (v40 & 0x80u) == 0 )
                    {
LABEL_137:
                      v62 = --v10;
                      v60 = v10;
                      if ( v5 != -1 )
                        ungetc_nolock(v5, Stream);
                      break;
                    }
                    v41 = (char)v5;
                    v39 = 16 * v70;
                    v5 = ((char)v5 & 0xFFFFFFDF) - 7;
                    if ( (v40 & 4) != 0 )
                      v5 = v41;
                    v61 = v5;
                  }
                  ++v69;
                  v42 = v5 - 48 + v39;
                  v70 = v42;
                  if ( v36 )
                  {
                    if ( !--v37 )
                      goto LABEL_140;
                  }
                  v62 = ++v10;
                  v60 = v10;
                  v43 = inc_0((__int64)Stream);
                  v36 = v64;
                  v5 = v43;
                  v61 = v43;
                }
              }
              v42 = v70;
LABEL_140:
              v3 = 0;
              v44 = -v42;
              if ( !v58 )
                v44 = v42;
              v70 = v44;
            }
            else
            {
              if ( !v28 )
              {
                while ( 1 )
                {
                  if ( ((v29 - 112) & 0xFFFFFFF7) != 0 )
                  {
                    if ( (pctype[(unsigned __int8)v5] & 4) == 0 )
                      goto LABEL_157;
                    if ( v29 == 111 )
                    {
                      if ( v5 >= 56 )
                        goto LABEL_157;
                      v45 = 8 * v65;
                    }
                    else
                    {
                      v45 = 10 * v65;
                    }
                  }
                  else
                  {
                    v46 = pctype[(unsigned __int8)v5];
                    if ( (v46 & 0x80u) == 0 )
                    {
LABEL_157:
                      v62 = --v10;
                      v60 = v10;
                      if ( v5 != -1 )
                        ungetc_nolock(v5, Stream);
                      break;
                    }
                    v47 = (char)v5;
                    v45 = 16 * v65;
                    v5 = ((char)v5 & 0xFFFFFFDF) - 7;
                    if ( (v46 & 4) != 0 )
                      v5 = v47;
                    v61 = v5;
                  }
                  ++v69;
                  v48 = v5 + v45 - 48;
                  v65 = v48;
                  if ( v36 )
                  {
                    if ( !--v37 )
                      goto LABEL_160;
                  }
                  v62 = ++v10;
                  v60 = v10;
                  v49 = inc_0((__int64)Stream);
                  v36 = v64;
                  v5 = v49;
                  v61 = v49;
                }
              }
              v48 = v65;
LABEL_160:
              v3 = 0;
              if ( v58 )
                v65 = -v48;
            }
            if ( !v69 )
              goto LABEL_201;
            if ( v59 )
              goto LABEL_183;
            ++v68;
            v33 = v65;
            goto LABEL_165;
          }
          v62 = ++v10;
          v60 = v10;
          v5 = inc_0((__int64)Stream);
          v61 = v5;
LABEL_110:
          v36 = v64;
LABEL_121:
          v37 = v63;
          goto LABEL_122;
        }
        v3 = 0;
        v34 = 16;
        if ( !v64 )
        {
          v30 = 1;
          ++v14;
        }
      }
      v50 = v34 | 1;
      if ( !v30 )
        v50 = v34;
      v51 = v50 | 2;
      if ( v17 <= 0 )
        v51 = v50;
      v52 = v51 | 4;
      if ( !v25 )
        v52 = v51;
      if ( v29 == 123 )
      {
        v53 = ReadStringDelimited_0(v52, &v77, &v61, &v60, (_WORD **)&v73, v14, Stream, v26, &v68);
        v4 = v77;
      }
      else
      {
        v53 = ReadString_0(v52, 0LL, &v61, &v60, (_WORD **)&v73, v14, Stream, v26, &v68);
      }
      v5 = v61;
      if ( v53 )
        goto LABEL_201;
      v10 = v60;
      v62 = v60;
      goto LABEL_183;
    }
    if ( v5 == -1 )
      goto LABEL_207;
    ungetc_nolock(v5, Stream);
LABEL_201:
    v56 = v67;
    goto LABEL_202;
  }
  if ( v29 == 99 || v29 == 123 )
  {
    v10 = v62 + 1;
    v62 = v10;
    v60 = v10;
    v5 = inc_0((__int64)Stream);
    v61 = v5;
  }
  else
  {
    do
    {
      v60 = ++v10;
      v5 = inc_0((__int64)Stream);
    }
    while ( v5 != -1 && (pctype[(unsigned __int8)v5] & 8) != 0 );
    v29 = v74;
    v62 = v10;
    v61 = v5;
  }
  if ( v5 != -1 )
  {
    v26 = v75;
    v14 = v63;
    v25 = v59;
    goto LABEL_61;
  }
LABEL_207:
  if ( v68 || v57 )
    return v68;
  return v8;
}
