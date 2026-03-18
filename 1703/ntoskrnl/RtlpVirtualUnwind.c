/*
 * XREFs of RtlpVirtualUnwind @ 0x1400E6E50
 * Callers:
 *     PspGetSetContextInternal @ 0x140521E20 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     RtlpUnwindEpilogue @ 0x140039938 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x140039B28 (RtlpUnwindOpSlots.c)
 *     RtlpSameFunction @ 0x14015DB14 (RtlpSameFunction.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpVirtualUnwind(
        int a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int *a4,
        __int64 a5,
        char *a6,
        _QWORD *a7,
        __int64 *a8,
        __int64 a9,
        unsigned __int64 *a10,
        _QWORD *a11)
{
  unsigned int *v11; // r10
  __int64 v14; // r11
  int v15; // ebp
  __int64 v16; // rbx
  unsigned int v17; // esi
  unsigned int v18; // r14d
  unsigned int v19; // edi
  __int64 v20; // r15
  __int64 *v21; // rdi
  unsigned int v22; // ecx
  char v23; // dl
  __int64 (__fastcall *v24)(int, int, int, int, int, int, int, __int64); // rdi
  unsigned int v25; // ebp
  __int64 v26; // rbx
  __int64 v27; // rdx
  unsigned int v28; // eax
  unsigned __int16 *v29; // rdx
  __int64 v30; // r8
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // edx
  unsigned int v39; // edx
  char v40; // al
  __int64 v41; // rcx
  __int64 v42; // rcx
  unsigned int v43; // ecx
  __int64 (__fastcall **v44)(int, int, int, int, int, int, int, __int64); // rax
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  __int16 v47; // ax
  unsigned int v48; // r9d
  int v49; // r8d
  int v50; // ecx
  __int16 v51; // ax
  int v52; // edx
  _BYTE *v53; // r8
  int v54; // ecx
  unsigned int v55; // eax
  char v56; // r8
  _BYTE *v57; // rcx
  unsigned int v58; // ebp
  char v59; // dl
  __int64 v60; // rax
  unsigned __int8 *v61; // rdx
  _BYTE *v62; // rcx
  int v63; // r8d
  char v64; // al
  __int64 v65; // rax
  unsigned int v66; // r15d
  unsigned __int16 v67; // cx
  __int64 v68; // rax
  bool v69; // cf
  char v70; // dl
  bool v71; // zf
  _BYTE *v72; // rcx
  char v73; // al
  _BYTE *v74; // rsi
  int v75; // eax
  unsigned __int64 v76; // rcx
  unsigned __int64 v77; // rsi
  _DWORD *v78; // rax
  char v79; // al
  __int64 v80; // rcx
  __int64 v81; // rax
  unsigned __int64 v82; // rdx
  __int64 v83; // r9
  char v84; // r11
  unsigned __int64 v85; // rdx
  __int64 v86; // r9
  __int64 v87; // rax
  unsigned __int64 v88; // rcx
  __int64 v89; // rcx
  _QWORD *v90; // rcx
  _QWORD *v91; // r9
  __int64 v92; // rcx
  __int64 v93; // [rsp+40h] [rbp-58h]
  int v94; // [rsp+A0h] [rbp+8h]
  char v96; // [rsp+B0h] [rbp+18h]
  unsigned int *v97; // [rsp+B8h] [rbp+20h]
  unsigned int v99; // [rsp+F8h] [rbp+60h]

  v97 = a4;
  v11 = a4;
  v14 = a2;
  v15 = 0;
  v16 = a2 + a4[2];
  if ( a3 <= 0x7FFFFFFEFFFFLL && (v16 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v17 = *(_BYTE *)v16 & 7;
  v18 = 1;
  if ( !*a6 )
  {
LABEL_3:
    v15 = 1;
    goto LABEL_4;
  }
  if ( v17 < 2 )
  {
    v61 = (unsigned __int8 *)(v16 + 2);
    v62 = (_BYTE *)v16;
    v63 = 0;
    if ( !*(_BYTE *)(v16 + 2) )
    {
      while ( (*v62 & 0x20) != 0 )
      {
        v65 = *v61;
        if ( (v65 & 1) != 0 )
          v65 = (unsigned int)(v65 + 1);
        if ( (unsigned int)++v63 > 0x20 )
          RtlRaiseStatus(-1073741569);
        v62 = (_BYTE *)(v14 + *(unsigned int *)&v62[2 * v65 + 12]);
        if ( a3 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v62 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v61 = v62 + 2;
        if ( v62[2] )
          goto LABEL_118;
      }
      goto LABEL_3;
    }
LABEL_118:
    if ( a1 < 0 )
      return 3221225512LL;
  }
LABEL_4:
  v94 = a1 & 0x7FFFFFFF;
  v19 = a3 - *a4 - v14;
  if ( (*(_BYTE *)(v16 + 3) & 0xF) == 0 )
  {
    v20 = a5;
    v21 = a8;
    *a8 = *(_QWORD *)(a5 + 152);
    goto LABEL_6;
  }
  if ( v19 >= *(unsigned __int8 *)(v16 + 1) || (*(_BYTE *)v16 & 0x20) != 0 )
  {
    v20 = a5;
    v21 = a8;
    v40 = *(_BYTE *)(v16 + 3);
LABEL_52:
    v41 = *(_QWORD *)(v20 + 8LL * (v40 & 0xF) + 120);
    *v21 = v41;
    *v21 = v41 - (*(_BYTE *)(v16 + 3) & 0xF0);
    goto LABEL_6;
  }
  v66 = 0;
  if ( *(_BYTE *)(v16 + 2) )
  {
    do
    {
      v67 = *(_WORD *)(v16 + 2LL * v66 + 4);
      if ( (HIBYTE(v67) & 0xF) == 3 )
        break;
      v66 += RtlpUnwindOpSlots(v67);
    }
    while ( v66 < *(unsigned __int8 *)(v16 + 2) );
    v11 = v97;
    v14 = a2;
  }
  v68 = v66;
  v20 = a5;
  v69 = v19 < *(unsigned __int8 *)(v16 + 2 * v68 + 4);
  v21 = a8;
  if ( !v69 )
  {
    v40 = *(_BYTE *)(v16 + 3);
    goto LABEL_52;
  }
  *a8 = *(_QWORD *)(a5 + 152);
LABEL_6:
  if ( v15 )
    goto LABEL_7;
  if ( v17 < 2 )
  {
    v56 = *(_BYTE *)a3;
    v57 = (_BYTE *)a3;
    v58 = 0;
    if ( *(_BYTE *)a3 == 72 )
    {
      v64 = *(_BYTE *)(a3 + 1);
      if ( v64 == -125 && *(_BYTE *)(a3 + 2) == 0xC4 )
      {
        v57 = (_BYTE *)(a3 + 4);
        goto LABEL_95;
      }
      if ( v64 == -127 && *(_BYTE *)(a3 + 2) == 0xC4 )
        goto LABEL_171;
    }
    if ( (v56 & 0xFE) != 0x48 )
      goto LABEL_95;
    if ( *(_BYTE *)(a3 + 1) != 0x8D )
      goto LABEL_95;
    v58 = *(_BYTE *)(a3 + 2) & 7 | (8 * (v56 & 1));
    if ( !v58 || v58 != (*(_BYTE *)(v16 + 3) & 0xF) )
      goto LABEL_95;
    v70 = *(_BYTE *)(a3 + 2) & 0xF8;
    if ( v70 == 96 )
    {
      v57 = (_BYTE *)(a3 + 4);
      goto LABEL_95;
    }
    if ( v70 == -96 )
LABEL_171:
      v57 = (_BYTE *)(a3 + 7);
    while ( 1 )
    {
LABEL_95:
      while ( (*v57 & 0xF8) == 0x58 )
        ++v57;
      if ( (*v57 & 0xF0) != 0x40 || (v57[1] & 0xF8) != 0x58 )
        break;
      v57 += 2;
    }
    if ( *v57 == 0xF2 )
      ++v57;
    v59 = *v57;
    if ( (unsigned __int8)(*v57 + 62) <= 1u || v59 == -13 && v57[1] == 0xC3 )
      goto LABEL_178;
    if ( ((v59 + 23) & 0xFD) != 0 )
    {
      if ( v59 == -1 && v57[1] == 37 )
        goto LABEL_178;
      if ( (v59 & 0xF8) != 0x48 || v57[1] != 0xFF )
        goto LABEL_7;
      v71 = (v57[2] & 0x38) == 32;
    }
    else
    {
      v74 = &v57[-v14];
      if ( v59 == -21 )
        v75 = (char)v57[1] + 2;
      else
        v75 = *(_DWORD *)(v57 + 1) + 5;
      v76 = *v11;
      v77 = (unsigned __int64)&v74[v75];
      if ( v77 < v76 || v77 >= v11[1] )
      {
        v78 = (_DWORD *)RtlpSameFunction(v11, v14, v77 + v14);
        if ( v78 && v77 != *v78 )
        {
          v11 = v97;
          v14 = a2;
          goto LABEL_7;
        }
LABEL_178:
        v72 = (_BYTE *)a3;
        if ( (*(_BYTE *)a3 & 0xF8) != 0x48 )
          goto LABEL_199;
        v73 = *(_BYTE *)(a3 + 1);
        switch ( v73 )
        {
          case -125:
            v72 = (_BYTE *)(a3 + 4);
            *(_QWORD *)(v20 + 152) += *(char *)(a3 + 3);
            goto LABEL_199;
          case -127:
            *(_QWORD *)(v20 + 152) += ((*(unsigned __int8 *)(a3 + 4) | (*(unsigned __int16 *)(a3 + 5) << 8)) << 8) | *(unsigned __int8 *)(a3 + 3);
            break;
          case -115:
            v79 = *(_BYTE *)(a3 + 2) & 0xF8;
            if ( v79 == 96 )
            {
              v80 = *(_QWORD *)(v20 + 8LL * v58 + 120);
              *(_QWORD *)(v20 + 152) = v80;
              v81 = v80 + *(char *)(a3 + 3);
              v72 = (_BYTE *)(a3 + 4);
              *(_QWORD *)(v20 + 152) = v81;
              goto LABEL_199;
            }
            if ( v79 != -96 )
            {
              while ( 1 )
              {
LABEL_199:
                while ( (*v72 & 0xF8) == 0x58 )
                {
                  v82 = *(_QWORD *)(v20 + 152);
                  v83 = *v72 & 7;
                  if ( a3 <= 0x7FFFFFFEFFFFLL && (v82 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( a10 && (v82 < *a10 || v82 > *a11 - 8LL) )
                    return 3221225512LL;
                  *(_QWORD *)(v20 + 8 * v83 + 120) = *(_QWORD *)v82;
                  if ( a9 )
                    *(_QWORD *)(a9 + 8 * v83 + 128) = v82;
                  *(_QWORD *)(v20 + 152) += 8LL;
                  ++v72;
                }
                if ( (*v72 & 0xF0) != 0x40 )
                  break;
                v84 = v72[1];
                if ( (v84 & 0xF8) != 0x58 )
                  break;
                v85 = *(_QWORD *)(v20 + 152);
                v86 = v84 & 7 | (8 * (*v72 & 1u));
                if ( a3 <= 0x7FFFFFFEFFFFLL && (v85 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( a10 && (v85 < *a10 || v85 > *a11 - 8LL) )
                  return 3221225512LL;
                *(_QWORD *)(v20 + 8 * v86 + 120) = *(_QWORD *)v85;
                if ( a9 )
                  *(_QWORD *)(a9 + 8 * v86 + 128) = v85;
                *(_QWORD *)(v20 + 152) += 8LL;
                v72 += 2;
              }
              if ( a3 <= 0x7FFFFFFEFFFFLL )
              {
                v87 = *(_QWORD *)(v20 + 152);
                if ( (v87 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
              }
              if ( a10 )
              {
                v88 = *(_QWORD *)(v20 + 152);
                if ( v88 < *a10 || v88 > *a11 - 8LL )
                  return 3221225512LL;
              }
              v89 = **(_QWORD **)(v20 + 152);
              *(_QWORD *)(v20 + 152) += 8LL;
              *(_QWORD *)(v20 + 248) = v89;
              *a6 = 0;
              return 0LL;
            }
            *(_QWORD *)(v20 + 152) = *(_QWORD *)(v20 + 8LL * v58 + 120)
                                   + (*(unsigned __int8 *)(a3 + 3) | ((*(unsigned __int8 *)(a3 + 4) | (*(unsigned __int16 *)(a3 + 5) << 8)) << 8));
            break;
          default:
            goto LABEL_199;
        }
        v72 = (_BYTE *)(a3 + 7);
        goto LABEL_199;
      }
      if ( v77 != v76 )
        goto LABEL_7;
      v71 = (*(_BYTE *)v16 & 0x20) == 0;
    }
    if ( !v71 )
      goto LABEL_7;
    goto LABEL_178;
  }
  if ( *(_BYTE *)(v16 + 2) )
  {
    v47 = *(_WORD *)(v16 + 4);
    if ( (HIBYTE(v47) & 0xF) == 6 )
    {
      v48 = (unsigned __int8)v47;
      v49 = a3 - v14;
      if ( (v47 & 0x1000) == 0 || (v50 = v11[1] - (unsigned __int8)v47, v49 - v50 >= (unsigned int)(unsigned __int8)v47) )
      {
        if ( *(_BYTE *)(v16 + 2) > 1u )
        {
          do
          {
            v51 = *(_WORD *)(v16 + 2LL * v18 + 4);
            if ( (HIBYTE(v51) & 0xF) != 6 )
              break;
            v52 = (unsigned __int8)v51 + (HIBYTE(v51) >> 4 << 8);
            if ( !v52 )
              break;
            v50 = v11[1] - v52;
            if ( v49 - v50 < v48 )
              goto LABEL_120;
            ++v18;
          }
          while ( v18 < *(unsigned __int8 *)(v16 + 2) );
        }
        goto LABEL_7;
      }
LABEL_120:
      RtlpUnwindEpilogue(v14, a3, (unsigned int)(v49 - v50), v11, v20, a9, a10, a11);
      *a6 = 0;
      return 0LL;
    }
  }
LABEL_7:
  v22 = 0;
  v93 = *v21;
  v99 = 0;
  while ( 1 )
  {
    v23 = 0;
    v96 = 0;
    v24 = (__int64 (__fastcall *)(int, int, int, int, int, int, int, __int64))(v14 + v11[2]);
    v25 = a3 - *v11 - v14;
    LODWORD(v26) = 0;
    if ( a3 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v24 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( *((_BYTE *)v24 + 2) )
    {
      do
      {
        v27 = (unsigned int)v26 + 2LL;
        v28 = *((unsigned __int8 *)v24 + 2 * v27);
        v29 = (unsigned __int16 *)((char *)v24 + 2 * v27);
        v30 = *((unsigned __int8 *)v24 + 2 * (unsigned int)v26 + 5) >> 4;
        if ( v25 < v28 )
        {
          LODWORD(v26) = RtlpUnwindOpSlots(*v29) + v26;
        }
        else
        {
          if ( (*((_BYTE *)v24 + 2 * (unsigned int)v26 + 5) & 0xF) != 0 )
          {
            if ( (*((_BYTE *)v24 + 2 * (unsigned int)v26 + 5) & 0xF) == 4 )
            {
              v26 = (unsigned int)(v26 + 1);
              v35 = v93 + 8 * (unsigned int)*((unsigned __int16 *)v24 + v26 + 2);
              if ( a3 <= 0x7FFFFFFEFFFFLL && (v35 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( a10 && (v35 < *a10 || v35 > *a11 - 8LL) )
                return 3221225512LL;
              *(_QWORD *)(v20 + 8 * v30 + 120) = *(_QWORD *)v35;
              if ( a9 )
                *(_QWORD *)(a9 + 8 * v30 + 128) = v35;
            }
            else
            {
              switch ( *((_BYTE *)v24 + 2 * (unsigned int)v26 + 5) & 0xF )
              {
                case 1:
                  v26 = (unsigned int)(v26 + 1);
                  v38 = *((unsigned __int16 *)v24 + v26 + 2);
                  if ( (_DWORD)v30 )
                  {
                    v26 = (unsigned int)(v26 + 1);
                    v39 = (*((unsigned __int16 *)v24 + v26 + 2) << 16) + v38;
                  }
                  else
                  {
                    v39 = 8 * v38;
                  }
                  *(_QWORD *)(v20 + 152) += v39;
                  break;
                case 2:
                  *(_QWORD *)(v20 + 152) += (unsigned int)(8 * v30 + 8);
                  break;
                case 3:
                  v42 = *(_QWORD *)(v20 + 8LL * (*((_BYTE *)v24 + 3) & 0xF) + 120);
                  *(_QWORD *)(v20 + 152) = v42;
                  *(_QWORD *)(v20 + 152) = v42 - (*((_BYTE *)v24 + 3) & 0xF0);
                  break;
                case 5:
                  v26 = (unsigned int)(v26 + 2);
                  v90 = (_QWORD *)(v93
                                 + (*((unsigned __int16 *)v24 + v26 + 2) << 16)
                                 + (unsigned int)*((unsigned __int16 *)v24 + (unsigned int)(v26 - 1) + 2));
                  if ( a3 <= 0x7FFFFFFEFFFFLL
                    && (((_BYTE)v93 + (unsigned __int8)*((_WORD *)v24 + (unsigned int)(v26 - 1) + 2)) & 3) != 0 )
                  {
                    ExRaiseDatatypeMisalignment();
                  }
                  if ( a10 && ((unsigned __int64)v90 < *a10 || (unsigned __int64)v90 > *a11 - 8LL) )
                    return 3221225512LL;
                  *(_QWORD *)(v20 + 8 * v30 + 120) = *v90;
                  if ( a9 )
                    *(_QWORD *)(a9 + 8 * v30 + 128) = v90;
                  break;
                case 6:
                  LODWORD(v26) = v26 + 1;
                  break;
                case 7:
                  LODWORD(v26) = v26 + 2;
                  break;
                case 8:
                  v26 = (unsigned int)(v26 + 1);
                  v36 = v93 + 16 * (unsigned int)*((unsigned __int16 *)v24 + v26 + 2);
                  if ( a3 <= 0x7FFFFFFEFFFFLL && (v36 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( a10 && (v36 < *a10 || v36 > *a11 - 16LL) )
                    return 3221225512LL;
                  v37 = 2LL * (unsigned int)v30;
                  *(_QWORD *)(v20 + 8 * v37 + 416) = *(_QWORD *)v36;
                  *(_QWORD *)(v20 + 8 * v37 + 424) = *(_QWORD *)(v36 + 8);
                  if ( a9 )
                    *(_QWORD *)(a9 + 8 * v30) = v36;
                  break;
                case 9:
                  v26 = (unsigned int)(v26 + 2);
                  v91 = (_QWORD *)(v93
                                 + *((unsigned __int16 *)v24 + (unsigned int)(v26 - 1) + 2)
                                 + (*((unsigned __int16 *)v24 + v26 + 2) << 16));
                  if ( a3 <= 0x7FFFFFFEFFFFLL
                    && (((_BYTE)v93 + (unsigned __int8)*((_WORD *)v24 + (unsigned int)(v26 - 1) + 2)) & 3) != 0 )
                  {
                    ExRaiseDatatypeMisalignment();
                  }
                  if ( a10 && ((unsigned __int64)v91 < *a10 || (unsigned __int64)v91 > *a11 - 16LL) )
                    return 3221225512LL;
                  v92 = 2LL * (unsigned int)v30;
                  *(_QWORD *)(v20 + 8 * v92 + 416) = *v91;
                  *(_QWORD *)(v20 + 8 * v92 + 424) = v91[1];
                  if ( a9 )
                    *(_QWORD *)(a9 + 8 * v30) = v91;
                  break;
                case 0xA:
                  v45 = *(_QWORD *)(v20 + 152);
                  v96 = 1;
                  v46 = v45 + 24;
                  if ( (_DWORD)v30 )
                  {
                    v45 += 8LL;
                    v46 += 8LL;
                  }
                  if ( a3 <= 0x7FFFFFFEFFFFLL && (v45 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( a10 && (v45 < *a10 || v45 > *a11 - 8LL) )
                    return 3221225512LL;
                  if ( a3 <= 0x7FFFFFFEFFFFLL && (v46 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( a10 && (v46 < *a10 || v46 > *a11 - 8LL) )
                    return 3221225512LL;
                  *(_QWORD *)(v20 + 248) = *(_QWORD *)v45;
                  *(_QWORD *)(v20 + 152) = *(_QWORD *)v46;
                  break;
                default:
                  RtlRaiseStatus(-1073741569);
              }
            }
          }
          else
          {
            v31 = *(_QWORD *)(v20 + 152);
            if ( a3 <= 0x7FFFFFFEFFFFLL && (v31 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( a10 && (v31 < *a10 || v31 > *a11 - 8LL) )
              return 3221225512LL;
            *(_QWORD *)(v20 + 8 * v30 + 120) = *(_QWORD *)v31;
            if ( a9 )
              *(_QWORD *)(a9 + 8 * v30 + 128) = v31;
            *(_QWORD *)(v20 + 152) += 8LL;
          }
          LODWORD(v26) = v26 + 1;
        }
      }
      while ( (unsigned int)v26 < *((unsigned __int8 *)v24 + 2) );
      v11 = v97;
      v14 = a2;
      v23 = v96;
      v22 = v99;
    }
    if ( (*(_BYTE *)v24 & 0x20) == 0 )
      break;
    v55 = *((unsigned __int8 *)v24 + 2);
    if ( (v55 & 1) != 0 )
      ++v55;
    v11 = (unsigned int *)((char *)v24 + 2 * v55 + 4);
    v97 = v11;
    if ( a3 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v11 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v99 = ++v22;
    if ( v22 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  if ( v23 )
  {
    v43 = 0;
    v44 = &RtlpSafeMachineFrameEntries;
    while ( v24 != *v44 )
    {
      ++v43;
      ++v44;
      if ( v43 >= 3 )
        goto LABEL_32;
    }
    v23 = 0;
    goto LABEL_32;
  }
  if ( a3 <= 0x7FFFFFFEFFFFLL )
  {
    v60 = *(_QWORD *)(v20 + 152);
    if ( (v60 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  if ( !a10 || (v32 = *(_QWORD *)(v20 + 152), v32 >= *a10) && v32 <= *a11 - 8LL )
  {
    v33 = **(_QWORD **)(v20 + 152);
    *(_QWORD *)(v20 + 152) += 8LL;
    *(_QWORD *)(v20 + 248) = v33;
LABEL_32:
    *a6 = v23;
    if ( v94 )
    {
      v53 = (_BYTE *)(v14 + v11[2]);
      if ( a3 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v53 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned int)a3 - *v11 - (unsigned int)v14 >= (unsigned __int8)v53[1]
        && ((*v53 >> 3) & (unsigned __int8)v94) != 0 )
      {
        v54 = (unsigned __int8)v53[2];
        if ( (v54 & 1) != 0 )
          ++v54;
        *a7 = &v53[2 * (v54 + 2) + 4];
      }
    }
    return 0LL;
  }
  return 3221225512LL;
}
