/*
 * XREFs of _input_s @ 0x14019093C
 * Callers:
 *     _sinput_s @ 0x1401912A0 (_sinput_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14016CD90 (xHalTimerWatchdogStop.c)
 *     ReadString @ 0x1401905C4 (ReadString.c)
 *     ReadStringDelimited @ 0x140190780 (ReadStringDelimited.c)
 *     _inc @ 0x140190910 (_inc.c)
 *     _ungetc_nolock @ 0x1401921EC (_ungetc_nolock.c)
 */

__int64 __fastcall input_s(FILE *File, unsigned __int8 *a2, _BYTE **a3)
{
  __int64 result; // rax
  int v4; // r12d
  unsigned int *v5; // rsi
  unsigned __int8 *v6; // r14
  FILE *v7; // rdi
  int v8; // ebx
  unsigned int v9; // r15d
  unsigned __int8 v10; // dl
  int v11; // r13d
  int v12; // r8d
  int v13; // esi
  unsigned int v14; // r11d
  char v15; // r10
  char v16; // r8
  char v17; // di
  char v18; // r13
  __int64 v19; // rdx
  unsigned __int8 *v20; // rax
  unsigned __int8 v21; // al
  unsigned __int8 *v22; // rcx
  unsigned __int8 *v23; // rcx
  unsigned __int8 v24; // al
  __int64 v25; // rcx
  char v26; // cl
  unsigned int *v27; // r10
  _BYTE *v28; // r8
  _BYTE **v29; // rdx
  char v30; // r12
  int v31; // esi
  int v32; // r9d
  __int64 v33; // rdx
  int v34; // eax
  unsigned int v35; // eax
  char v36; // cl
  int v37; // eax
  FILE *v38; // rdi
  unsigned int v39; // r8d
  int v40; // eax
  unsigned int v41; // edi
  __int64 v42; // r10
  unsigned __int16 v43; // dx
  int v44; // eax
  __int64 v45; // r10
  int v46; // eax
  __int64 v47; // rax
  unsigned int v48; // edi
  int v49; // ecx
  unsigned __int16 v50; // dx
  int v51; // eax
  int v52; // ecx
  int v53; // eax
  char v54; // al
  char v55; // cl
  char v56; // al
  int v57; // eax
  int v58; // eax
  FILE *v59; // rdx
  int v60; // r12d
  char v61; // [rsp+50h] [rbp-49h]
  char v62; // [rsp+51h] [rbp-48h]
  char v63; // [rsp+52h] [rbp-47h]
  int v64; // [rsp+54h] [rbp-45h] BYREF
  int v65; // [rsp+58h] [rbp-41h] BYREF
  int v66; // [rsp+5Ch] [rbp-3Dh]
  unsigned int v67; // [rsp+60h] [rbp-39h]
  int v68; // [rsp+64h] [rbp-35h]
  int v69; // [rsp+68h] [rbp-31h]
  int v70; // [rsp+6Ch] [rbp-2Dh]
  int v71; // [rsp+70h] [rbp-29h]
  unsigned int v72; // [rsp+74h] [rbp-25h] BYREF
  int v73; // [rsp+78h] [rbp-21h]
  __int64 v74; // [rsp+80h] [rbp-19h]
  unsigned int *v75; // [rsp+88h] [rbp-11h]
  _BYTE *v76; // [rsp+90h] [rbp-9h]
  unsigned int *v77; // [rsp+98h] [rbp-1h]
  __int64 v78; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v79; // [rsp+A8h] [rbp+Fh]
  unsigned __int8 *v81; // [rsp+108h] [rbp+6Fh] BYREF
  _BYTE **v82; // [rsp+110h] [rbp+77h]
  char v83; // [rsp+118h] [rbp+7Fh]

  v82 = a3;
  result = 0LL;
  v4 = 0;
  v65 = 0;
  v5 = (unsigned int *)a3;
  v71 = 0;
  v6 = a2;
  v75 = 0LL;
  v7 = File;
  v8 = 0;
  if ( !a2 )
  {
    xHalTimerWatchdogStop();
    return 0xFFFFFFFFLL;
  }
  if ( !File )
  {
    v9 = -1;
    goto LABEL_216;
  }
  v10 = *a2;
  v11 = 0;
  v62 = 0;
  v66 = 0;
  v64 = 0;
  v72 = 0;
  if ( v10 )
  {
    v9 = -1;
    while ( 1 )
    {
      v77 = v5;
      if ( (pctype[v10] & 8) != 0 )
      {
        --v11;
        while ( 1 )
        {
          v66 = ++v11;
          v64 = v11;
          v12 = inc(v7);
          if ( v12 == -1 )
            break;
          if ( (pctype[(unsigned __int8)v12] & 8) == 0 )
          {
            ungetc_nolock(v12, v7);
            goto LABEL_12;
          }
        }
        do
LABEL_12:
          ++v6;
        while ( (pctype[*v6] & 8) != 0 );
        goto LABEL_199;
      }
      if ( v10 != 37 )
        goto LABEL_195;
      if ( v6[1] == 37 )
      {
        ++v6;
LABEL_195:
        v66 = ++v11;
        v64 = v11;
        v8 = inc(v7);
        v65 = v8;
        v58 = *v6++;
        if ( v58 == v8 )
          goto LABEL_196;
        if ( v8 == -1 )
          goto LABEL_218;
        v59 = v7;
        goto LABEL_211;
      }
      v69 = 0;
      v13 = 0;
      v73 = 0;
      v14 = 0;
      v79 = 0LL;
      v15 = 0;
      v63 = 0;
      v16 = 0;
      v17 = 0;
      v18 = 1;
      do
      {
        v81 = ++v6;
        v19 = *v6;
        if ( (pctype[v19] & 4) != 0 )
        {
          ++v13;
          v14 = v19 + 2 * (5 * v14 - 24);
          continue;
        }
        switch ( (_DWORD)v19 )
        {
          case '*':
            ++v15;
            break;
          case 'F':
            break;
          case 'I':
            v21 = v6[1];
            if ( v21 == 54 )
            {
              v22 = v6 + 2;
              if ( v6[2] == 52 )
              {
                v6 += 2;
                v81 = v22;
LABEL_37:
                ++v4;
                v74 = 0LL;
                break;
              }
            }
            if ( v21 == 51 )
            {
              v23 = v6 + 2;
              if ( v6[2] == 50 )
              {
                v6 += 2;
                v81 = v23;
                break;
              }
            }
            v24 = v21 - 88;
            if ( v24 <= 0x20u )
            {
              v25 = 0x100821001LL;
              if ( _bittest64(&v25, v24) )
                goto LABEL_37;
            }
            ++v4;
            v74 = 0LL;
            break;
          case 'L':
            ++v18;
            break;
          case 'N':
            break;
          case 'h':
            --v18;
            --v17;
            break;
          case 'l':
            v20 = v6 + 1;
            if ( v6[1] != 108 )
            {
              ++v18;
LABEL_31:
              ++v17;
              break;
            }
            ++v6;
            v81 = v20;
            goto LABEL_37;
          case 'w':
            goto LABEL_31;
          default:
            ++v16;
            break;
        }
      }
      while ( !v16 );
      v83 = v15;
      v26 = v15;
      v27 = v77;
      v61 = v18;
      v11 = v66;
      v70 = v4;
      v68 = v13;
      v67 = v14;
      if ( v26 )
      {
        v28 = 0LL;
        v76 = 0LL;
      }
      else
      {
        v28 = *v82;
        v76 = *v82;
      }
      v78 = (__int64)v28;
      v29 = (_BYTE **)(v77 + 2);
      v30 = 0;
      if ( v26 )
      {
        v29 = (_BYTE **)v77;
        v27 = v75;
      }
      v77 = v27;
      v82 = v29;
      if ( !v17 )
        v17 = ((*v6 - 67) & 0xEF) != 0 ? -1 : 1;
      v31 = *v6 | 0x20;
      LODWORD(v75) = v31;
      if ( v31 != 110 )
      {
        if ( v31 == 99 || v31 == 123 )
        {
          v11 = v66 + 1;
          v66 = v11;
          v64 = v11;
          v8 = inc(File);
          v65 = v8;
        }
        else
        {
          do
          {
            v64 = ++v11;
            v8 = inc(File);
          }
          while ( v8 != -1 && (pctype[(unsigned __int8)v8] & 8) != 0 );
          v31 = (int)v75;
          v66 = v11;
          v65 = v8;
        }
        v29 = v82;
        v26 = v83;
        v28 = v76;
        v14 = v67;
        v27 = v77;
        if ( v31 != 110 && v8 == -1 )
          goto LABEL_218;
      }
      v32 = v68;
      if ( v68 && !v14 )
      {
        if ( v8 == -1 )
          goto LABEL_218;
        v59 = File;
LABEL_211:
        ungetc_nolock(v8, v59);
        goto LABEL_212;
      }
      v75 = v27;
      if ( v26 )
      {
        v33 = v79;
      }
      else
      {
        if ( ((v31 - 99) & 0xFFFFFFEF) == 0 || (v75 = v27, v82 = v29, v31 == 123) )
        {
          v28 = *(_BYTE **)v27;
          v27 += 2;
          v75 = v27;
          v76 = v28;
          v78 = (__int64)v28;
          v82 = (_BYTE **)(v27 + 2);
          v33 = *v27;
          if ( *v27 )
            goto LABEL_69;
          v60 = 0;
          if ( v17 <= 0 )
            *v28 = 0;
          else
            *(_WORD *)v28 = 0;
LABEL_213:
          if ( v8 != -1 )
          {
            if ( v60 != 1 )
              return v72;
            v9 = v72;
LABEL_216:
            xHalTimerWatchdogStop();
            return v9;
          }
LABEL_218:
          if ( v72 || v62 )
            return v72;
          return v9;
        }
        v33 = v79;
      }
LABEL_69:
      if ( v31 > 112 )
      {
        switch ( v31 )
        {
          case 's':
            v36 = 32;
LABEL_180:
            v4 = 0;
LABEL_181:
            v54 = v36 | 1;
            if ( !v32 )
              v54 = v36;
            v55 = v54 | 2;
            if ( v17 <= 0 )
              v55 = v54;
            v56 = v55 | 4;
            if ( !v83 )
              v56 = v55;
            if ( v31 == 123 )
            {
              v57 = ReadStringDelimited(v56, &v81, &v65, &v64, (__int64)&v78, v14, File, v33, &v72);
              v6 = v81;
            }
            else
            {
              v57 = ReadString(v56, 0LL, &v65, &v64, (__int64)&v78, v14, File, v33, &v72);
            }
            v8 = v65;
            if ( !v57 )
            {
              v11 = v64;
              v66 = v64;
              goto LABEL_192;
            }
            break;
          case 'u':
            goto LABEL_90;
          case 'x':
LABEL_82:
            if ( v8 == 45 )
            {
              v63 = 1;
LABEL_101:
              v67 = v14 - 1;
              if ( v14 == 1 && v68 )
              {
                v30 = 1;
                goto LABEL_104;
              }
              v38 = File;
              v66 = ++v11;
              v64 = v11;
              v8 = inc(File);
              v65 = v8;
            }
            else
            {
              if ( v8 == 43 )
                goto LABEL_101;
LABEL_104:
              v38 = File;
            }
            if ( v8 != 48 )
              goto LABEL_116;
            v66 = ++v11;
            v64 = v11;
            v8 = inc(v38);
            v65 = v8;
            if ( (((_BYTE)v8 - 88) & 0xDF) != 0 )
            {
              v73 = 1;
              if ( v31 == 120 )
              {
                v66 = --v11;
                v64 = v11;
                if ( v8 != -1 )
                  ungetc_nolock(v8, v38);
                v8 = 48;
                v65 = 48;
                goto LABEL_116;
              }
              v32 = v68;
              v39 = v67;
              if ( v68 )
              {
                v39 = v67 - 1;
                if ( v67 == 1 )
                  ++v30;
              }
              v31 = 111;
            }
            else
            {
              v66 = ++v11;
              v64 = v11;
              v40 = inc(v38);
              v32 = v68;
              v8 = v40;
              v39 = v67;
              v65 = v40;
              if ( v68 )
              {
                v39 = v67 - 2;
                if ( (int)(v67 - 2) < 1 )
                  ++v30;
              }
              v31 = 120;
            }
LABEL_127:
            if ( v70 )
            {
              if ( !v30 )
              {
                while ( 1 )
                {
                  v41 = v39;
                  if ( ((v31 - 112) & 0xFFFFFFF7) != 0 )
                  {
                    if ( (pctype[(unsigned __int8)v8] & 4) == 0 )
                      goto LABEL_144;
                    if ( v31 == 111 )
                    {
                      if ( v8 >= 56 )
                        goto LABEL_144;
                      v42 = 8 * v74;
                    }
                    else
                    {
                      v42 = 10 * v74;
                    }
                  }
                  else
                  {
                    v43 = pctype[(unsigned __int8)v8];
                    if ( (v43 & 0x80u) == 0 )
                    {
LABEL_144:
                      v66 = --v11;
                      v64 = v11;
                      if ( v8 != -1 )
                        ungetc_nolock(v8, File);
                      break;
                    }
                    v44 = (char)v8;
                    v42 = 16 * v74;
                    v8 = ((char)v8 & 0xFFFFFFDF) - 7;
                    if ( (v43 & 4) != 0 )
                      v8 = v44;
                    v65 = v8;
                  }
                  ++v73;
                  v45 = v8 - 48 + v42;
                  v74 = v45;
                  if ( v32 && v39 == 1 )
                    goto LABEL_147;
                  v66 = ++v11;
                  v64 = v11;
                  v46 = inc(File);
                  v32 = v68;
                  v39 = v41 - 1;
                  v65 = v46;
                  v8 = v46;
                  if ( !v68 )
                    v39 = v41;
                }
              }
              v45 = v74;
LABEL_147:
              v4 = 0;
              v47 = -v45;
              if ( !v63 )
                v47 = v45;
              v74 = v47;
            }
            else
            {
              if ( !v30 )
              {
                while ( 1 )
                {
                  v48 = v39;
                  if ( ((v31 - 112) & 0xFFFFFFF7) != 0 )
                  {
                    if ( (pctype[(unsigned __int8)v8] & 4) == 0 )
                      goto LABEL_166;
                    if ( v31 == 111 )
                    {
                      if ( v8 >= 56 )
                        goto LABEL_166;
                      v49 = 8 * v69;
                    }
                    else
                    {
                      v49 = 10 * v69;
                    }
                  }
                  else
                  {
                    v50 = pctype[(unsigned __int8)v8];
                    if ( (v50 & 0x80u) == 0 )
                    {
LABEL_166:
                      v66 = --v11;
                      v64 = v11;
                      if ( v8 != -1 )
                        ungetc_nolock(v8, File);
                      break;
                    }
                    v51 = (char)v8;
                    v49 = 16 * v69;
                    v8 = ((char)v8 & 0xFFFFFFDF) - 7;
                    if ( (v50 & 4) != 0 )
                      v8 = v51;
                    v65 = v8;
                  }
                  ++v73;
                  v52 = v8 + v49 - 48;
                  v69 = v52;
                  if ( v32 && v39 == 1 )
                    goto LABEL_169;
                  v66 = ++v11;
                  v64 = v11;
                  v53 = inc(File);
                  v32 = v68;
                  v39 = v48 - 1;
                  v65 = v53;
                  v8 = v53;
                  if ( !v68 )
                    v39 = v48;
                }
              }
              v52 = v69;
LABEL_169:
              v4 = 0;
              if ( v63 )
                v69 = -v52;
            }
            if ( v73 )
            {
              if ( v83 )
                goto LABEL_192;
              ++v72;
              v28 = v76;
              v34 = v69;
              goto LABEL_174;
            }
            break;
          case '{':
            v36 = 64;
            goto LABEL_180;
          default:
LABEL_96:
            if ( *v6 != v8 )
            {
              if ( v8 != -1 )
                ungetc_nolock(v8, File);
              v60 = 1;
              goto LABEL_213;
            }
            v4 = 0;
            --v62;
            if ( v26 )
              goto LABEL_192;
            v5 = v27;
            v82 = (_BYTE **)v27;
            goto LABEL_193;
        }
LABEL_212:
        v60 = v71;
        goto LABEL_213;
      }
      switch ( v31 )
      {
        case 'p':
          ++v70;
          v61 = 1;
          v74 = 0LL;
          goto LABEL_90;
        case 'c':
          v35 = v14 + 1;
          v4 = 0;
          v36 = 16;
          if ( v68 )
            v35 = v14;
          v14 = v35;
          v37 = 1;
          if ( v68 )
            v37 = v68;
          v32 = v37;
          goto LABEL_181;
        case 'd':
          goto LABEL_90;
        case 'i':
          v31 = 100;
          goto LABEL_82;
      }
      if ( v31 != 110 )
      {
        if ( v31 != 111 )
        {
          v26 = v83;
          goto LABEL_96;
        }
LABEL_90:
        if ( v8 == 45 )
        {
          v63 = 1;
LABEL_122:
          v67 = v14 - 1;
          if ( v14 == 1 && v68 )
          {
            v30 = 1;
            v39 = 0;
            goto LABEL_127;
          }
          v66 = ++v11;
          v64 = v11;
          v8 = inc(File);
          v65 = v8;
LABEL_116:
          v32 = v68;
        }
        else if ( v8 == 43 )
        {
          goto LABEL_122;
        }
        v39 = v67;
        goto LABEL_127;
      }
      v4 = 0;
      v34 = v11;
      if ( v83 )
      {
LABEL_192:
        v5 = (unsigned int *)v82;
        goto LABEL_193;
      }
LABEL_174:
      if ( v70 )
      {
        *(_QWORD *)v28 = v74;
        goto LABEL_192;
      }
      v5 = (unsigned int *)v82;
      if ( v61 )
        *(_DWORD *)v28 = v34;
      else
        *(_WORD *)v28 = v34;
LABEL_193:
      ++v62;
      v7 = File;
      ++v6;
LABEL_196:
      if ( v8 == -1 && (*v6 != 37 || v6[1] != 110) )
        goto LABEL_218;
LABEL_199:
      v10 = *v6;
      if ( !*v6 )
        goto LABEL_212;
    }
  }
  return result;
}
