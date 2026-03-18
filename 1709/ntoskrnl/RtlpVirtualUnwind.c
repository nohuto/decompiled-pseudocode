/*
 * XREFs of RtlpVirtualUnwind @ 0x1400D86E0
 * Callers:
 *     PspGetSetContextInternal @ 0x140514300 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     RtlpUnwindEpilogue @ 0x14013011C (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x1401302CC (RtlpUnwindOpSlots.c)
 *     RtlpSameFunction @ 0x140149A60 (RtlpSameFunction.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
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
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  __int64 v34; // rcx
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // edx
  unsigned int v39; // edx
  char v40; // al
  __int64 v41; // rcx
  __int64 v42; // rcx
  _BYTE *v43; // r8
  int v44; // ecx
  __int16 v45; // ax
  unsigned int v46; // r9d
  int v47; // r8d
  int v48; // ecx
  __int16 v49; // ax
  int v50; // edx
  unsigned int v51; // ecx
  __int64 (__fastcall **v52)(int, int, int, int, int, int, int, __int64); // rax
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rdx
  unsigned int v55; // eax
  char v56; // r8
  _BYTE *v57; // rcx
  unsigned int v58; // ebp
  char v59; // dl
  char v60; // dl
  __int64 v61; // rax
  unsigned __int8 *v62; // rcx
  _BYTE *v63; // rdx
  int v64; // r8d
  char v65; // al
  unsigned int v66; // ecx
  __int64 v67; // rax
  unsigned int v68; // r15d
  __int64 v69; // rcx
  __int64 v70; // rax
  bool v71; // cf
  char v72; // dl
  __int64 v73; // rax
  _BYTE *v74; // rdx
  char v75; // al
  _BYTE *v76; // r8
  int v77; // eax
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rsi
  _DWORD *v80; // rax
  char v81; // al
  __int64 v82; // rcx
  unsigned __int64 v83; // rcx
  __int64 v84; // r9
  __int64 v85; // rax
  char v86; // r11
  unsigned __int64 v87; // rcx
  __int64 v88; // r9
  __int64 v89; // rax
  unsigned __int64 v90; // rcx
  __int64 v91; // rcx
  _QWORD *v92; // rcx
  _QWORD *v93; // r9
  __int64 v94; // rcx
  __int64 v95; // [rsp+40h] [rbp-58h]
  int v96; // [rsp+A0h] [rbp+8h]
  char v98; // [rsp+B0h] [rbp+18h]
  unsigned int *v99; // [rsp+B8h] [rbp+20h]
  unsigned int v101; // [rsp+F8h] [rbp+60h]

  v99 = a4;
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
    v62 = (unsigned __int8 *)(v16 + 2);
    v63 = (_BYTE *)(a2 + a4[2]);
    v64 = 0;
    if ( !*(_BYTE *)(v16 + 2) )
    {
      while ( (*v63 & 0x20) != 0 )
      {
        v66 = *v62;
        v67 = v66 + 1;
        if ( (v66 & 1) == 0 )
          v67 = v66;
        if ( (unsigned int)++v64 > 0x20 )
          RtlRaiseStatus(-1073741569);
        v63 = (_BYTE *)(v14 + *(unsigned int *)&v63[2 * v67 + 12]);
        if ( a3 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v63 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v62 = v63 + 2;
        if ( v63[2] )
          goto LABEL_119;
      }
      goto LABEL_3;
    }
LABEL_119:
    if ( a1 < 0 )
      return 3221225512LL;
  }
LABEL_4:
  v96 = a1 & 0x7FFFFFFF;
  v19 = a3 - v14 - *a4;
  if ( (*(_BYTE *)(v16 + 3) & 0xF) != 0 )
  {
    if ( v19 >= *(unsigned __int8 *)(v16 + 1) || (*(_BYTE *)v16 & 0x20) != 0 )
    {
      v20 = a5;
      v21 = a8;
      v40 = *(_BYTE *)(v16 + 3);
    }
    else
    {
      v68 = 0;
      if ( *(_BYTE *)(v16 + 2) )
      {
        do
        {
          v69 = *(unsigned __int16 *)(v16 + 2LL * v68 + 4);
          if ( (BYTE1(v69) & 0xF) == 3 )
            break;
          v68 += RtlpUnwindOpSlots(v69);
        }
        while ( v68 < *(unsigned __int8 *)(v16 + 2) );
        v11 = v99;
        v14 = a2;
      }
      v70 = v68;
      v20 = a5;
      v71 = v19 < *(unsigned __int8 *)(v16 + 2 * v70 + 4);
      v21 = a8;
      if ( v71 )
      {
        *a8 = *(_QWORD *)(a5 + 152);
        goto LABEL_6;
      }
      v40 = *(_BYTE *)(v16 + 3);
    }
    v41 = *(_QWORD *)(v20 + 8LL * (v40 & 0xF) + 120);
    *v21 = v41;
    *v21 = v41 - (*(_BYTE *)(v16 + 3) & 0xF0);
  }
  else
  {
    v20 = a5;
    v21 = a8;
    *a8 = *(_QWORD *)(a5 + 152);
  }
LABEL_6:
  if ( v15 )
    goto LABEL_7;
  if ( v17 >= 2 )
  {
    if ( *(_BYTE *)(v16 + 2) )
    {
      v45 = *(_WORD *)(v16 + 4);
      if ( (HIBYTE(v45) & 0xF) == 6 )
      {
        v46 = (unsigned __int8)v45;
        v47 = a3 - v14;
        if ( (v45 & 0x1000) != 0 )
        {
          v48 = v11[1] - (unsigned __int8)v45;
          if ( v47 - v48 < (unsigned int)(unsigned __int8)v45 )
          {
LABEL_122:
            RtlpUnwindEpilogue(v14, a3, v47 - v48, (_DWORD)v11, v20, a9, (__int64)a10, (__int64)a11);
            *a6 = 0;
            return 0LL;
          }
        }
        if ( *(_BYTE *)(v16 + 2) > 1u )
        {
          do
          {
            v49 = *(_WORD *)(v16 + 2LL * v18 + 4);
            if ( (HIBYTE(v49) & 0xF) != 6 )
              break;
            v50 = (unsigned __int8)v49 + (HIBYTE(v49) >> 4 << 8);
            if ( !v50 )
              break;
            v48 = v11[1] - v50;
            if ( v47 - v48 < v46 )
              goto LABEL_122;
            ++v18;
          }
          while ( v18 < *(unsigned __int8 *)(v16 + 2) );
        }
      }
    }
    goto LABEL_7;
  }
  v56 = *(_BYTE *)a3;
  v57 = (_BYTE *)a3;
  v58 = 0;
  if ( *(_BYTE *)a3 == 72 )
  {
    v65 = *(_BYTE *)(a3 + 1);
    if ( v65 == -125 && *(_BYTE *)(a3 + 2) == 0xC4 )
    {
      v57 = (_BYTE *)(a3 + 4);
      goto LABEL_94;
    }
    if ( v65 == -127 && *(_BYTE *)(a3 + 2) == 0xC4 )
      goto LABEL_171;
  }
  if ( (v56 & 0xFE) == 0x48 && *(_BYTE *)(a3 + 1) == 0x8D )
  {
    v58 = *(_BYTE *)(a3 + 2) & 7 | (8 * (v56 & 1));
    if ( v58 )
    {
      if ( v58 == (*(_BYTE *)(v16 + 3) & 0xF) )
      {
        v72 = *(_BYTE *)(a3 + 2) & 0xF8;
        if ( v72 == 96 )
        {
          v57 = (_BYTE *)(a3 + 4);
          goto LABEL_94;
        }
        if ( v72 == -96 )
LABEL_171:
          v57 = (_BYTE *)(a3 + 7);
      }
    }
  }
LABEL_94:
  while ( 1 )
  {
    v59 = *v57;
    if ( (*v57 & 0xF8) != 0x58 )
      break;
    v73 = 1LL;
LABEL_173:
    v57 += v73;
  }
  if ( (v59 & 0xF0) == 0x40 && (v57[1] & 0xF8) == 0x58 )
  {
    v73 = 2LL;
    goto LABEL_173;
  }
  if ( v59 == -14 )
    ++v57;
  v60 = *v57;
  if ( (unsigned __int8)(*v57 + 62) <= 1u || v60 == -13 && v57[1] == 0xC3 )
  {
LABEL_175:
    v74 = (_BYTE *)a3;
    if ( (*(_BYTE *)a3 & 0xF8) != 0x48 )
      goto LABEL_201;
    v75 = *(_BYTE *)(a3 + 1);
    switch ( v75 )
    {
      case -125:
        v74 = (_BYTE *)(a3 + 4);
        *(_QWORD *)(v20 + 152) += *(char *)(a3 + 3);
        goto LABEL_201;
      case -127:
        *(_QWORD *)(v20 + 152) += *(unsigned __int8 *)(a3 + 3) | ((*(unsigned __int8 *)(a3 + 4) | (*(unsigned __int16 *)(a3 + 5) << 8)) << 8);
        break;
      case -115:
        v81 = *(_BYTE *)(a3 + 2) & 0xF8;
        if ( v81 == 96 )
        {
          v74 = (_BYTE *)(a3 + 4);
          v82 = *(_QWORD *)(v20 + 8LL * v58 + 120);
          *(_QWORD *)(v20 + 152) = v82;
          *(_QWORD *)(v20 + 152) = v82 + *(char *)(a3 + 3);
          goto LABEL_201;
        }
        if ( v81 != -96 )
        {
          while ( 1 )
          {
LABEL_201:
            if ( (*v74 & 0xF8) == 0x58 )
            {
              v83 = *(_QWORD *)(v20 + 152);
              v84 = *v74 & 7;
              if ( a3 <= 0x7FFFFFFEFFFFLL && (v83 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( a10 && (v83 < *a10 || v83 > *a11 - 8LL) )
                return 3221225512LL;
              *(_QWORD *)(v20 + 8 * v84 + 120) = *(_QWORD *)v83;
              if ( a9 )
                *(_QWORD *)(a9 + 8 * v84 + 128) = v83;
              v85 = 1LL;
            }
            else
            {
              if ( (*v74 & 0xF0) != 0x40 || (v86 = v74[1], (v86 & 0xF8) != 0x58) )
              {
                if ( a3 <= 0x7FFFFFFEFFFFLL )
                {
                  v89 = *(_QWORD *)(v20 + 152);
                  if ( (v89 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                }
                if ( !a10 || (v90 = *(_QWORD *)(v20 + 152), v90 >= *a10) && v90 <= *a11 - 8LL )
                {
                  v91 = **(_QWORD **)(v20 + 152);
                  *(_QWORD *)(v20 + 152) += 8LL;
                  *(_QWORD *)(v20 + 248) = v91;
                  *a6 = 0;
                  return 0LL;
                }
                return 3221225512LL;
              }
              v87 = *(_QWORD *)(v20 + 152);
              v88 = v86 & 7 | (8 * (*v74 & 1u));
              if ( a3 <= 0x7FFFFFFEFFFFLL && (v87 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( a10 && (v87 < *a10 || v87 > *a11 - 8LL) )
                return 3221225512LL;
              *(_QWORD *)(v20 + 8 * v88 + 120) = *(_QWORD *)v87;
              if ( a9 )
                *(_QWORD *)(a9 + 8 * v88 + 128) = v87;
              v85 = 2LL;
            }
            *(_QWORD *)(v20 + 152) += 8LL;
            v74 += v85;
          }
        }
        *(_QWORD *)(v20 + 152) = *(_QWORD *)(v20 + 8LL * v58 + 120)
                               + (*(unsigned __int8 *)(a3 + 3) | ((*(unsigned __int8 *)(a3 + 4) | (*(unsigned __int16 *)(a3 + 5) << 8)) << 8));
        break;
      default:
        goto LABEL_201;
    }
    v74 = (_BYTE *)(a3 + 7);
    goto LABEL_201;
  }
  if ( ((v60 + 23) & 0xFD) != 0 )
  {
    if ( v60 == -1 && v57[1] == 37 || (v60 & 0xF8) == 0x48 && v57[1] == 0xFF && (v57[2] & 0x38) == 0x20 )
      goto LABEL_175;
  }
  else
  {
    v76 = &v57[-v14];
    if ( v60 == -21 )
      v77 = (char)v57[1] + 2;
    else
      v77 = *(_DWORD *)(v57 + 1) + 5;
    v78 = *v11;
    v79 = (unsigned __int64)&v76[v77];
    if ( v79 < v78 || v79 >= v11[1] )
    {
      v80 = (_DWORD *)RtlpSameFunction(v11, v14, v79 + v14);
      if ( !v80 || v79 == *v80 )
        goto LABEL_175;
      v11 = v99;
      v14 = a2;
    }
    else if ( v79 == v78 && (*(_BYTE *)v16 & 0x20) == 0 )
    {
      goto LABEL_175;
    }
  }
LABEL_7:
  v22 = 0;
  v95 = *v21;
  v101 = 0;
  while ( 1 )
  {
    v23 = 0;
    v98 = 0;
    v24 = (__int64 (__fastcall *)(int, int, int, int, int, int, int, __int64))(v14 + v11[2]);
    v25 = a3 - v14 - *v11;
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
              case 4:
                v26 = (unsigned int)(v26 + 1);
                v31 = v95 + 8 * (unsigned int)*((unsigned __int16 *)v24 + v26 + 2);
                if ( a3 <= 0x7FFFFFFEFFFFLL && (v31 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( a10 && (v31 < *a10 || v31 > *a11 - 8LL) )
                  return 3221225512LL;
                *(_QWORD *)(v20 + 8 * v30 + 120) = *(_QWORD *)v31;
                if ( a9 )
                  *(_QWORD *)(a9 + 8 * v30 + 128) = v31;
                break;
              case 5:
                v26 = (unsigned int)(v26 + 2);
                v92 = (_QWORD *)(v95
                               + (*((unsigned __int16 *)v24 + v26 + 2) << 16)
                               + (unsigned int)*((unsigned __int16 *)v24 + (unsigned int)(v26 - 1) + 2));
                if ( a3 <= 0x7FFFFFFEFFFFLL
                  && (((_BYTE)v95 + (unsigned __int8)*((_WORD *)v24 + (unsigned int)(v26 - 1) + 2)) & 3) != 0 )
                {
                  ExRaiseDatatypeMisalignment();
                }
                if ( a10 && ((unsigned __int64)v92 < *a10 || (unsigned __int64)v92 > *a11 - 8LL) )
                  return 3221225512LL;
                *(_QWORD *)(v20 + 8 * v30 + 120) = *v92;
                if ( a9 )
                  *(_QWORD *)(a9 + 8 * v30 + 128) = v92;
                break;
              case 6:
                LODWORD(v26) = v26 + 1;
                break;
              case 7:
                LODWORD(v26) = v26 + 2;
                break;
              case 8:
                v26 = (unsigned int)(v26 + 1);
                v36 = v95 + 16 * (unsigned int)*((unsigned __int16 *)v24 + v26 + 2);
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
                v93 = (_QWORD *)(v95
                               + *((unsigned __int16 *)v24 + (unsigned int)(v26 - 1) + 2)
                               + (*((unsigned __int16 *)v24 + v26 + 2) << 16));
                if ( a3 <= 0x7FFFFFFEFFFFLL
                  && (((_BYTE)v95 + (unsigned __int8)*((_WORD *)v24 + (unsigned int)(v26 - 1) + 2)) & 3) != 0 )
                {
                  ExRaiseDatatypeMisalignment();
                }
                if ( a10 && ((unsigned __int64)v93 < *a10 || (unsigned __int64)v93 > *a11 - 16LL) )
                  return 3221225512LL;
                v94 = 2LL * (unsigned int)v30;
                *(_QWORD *)(v20 + 8 * v94 + 416) = *v93;
                *(_QWORD *)(v20 + 8 * v94 + 424) = v93[1];
                if ( a9 )
                  *(_QWORD *)(a9 + 8 * v30) = v93;
                break;
              case 0xA:
                v53 = *(_QWORD *)(v20 + 152);
                v98 = 1;
                v54 = v53 + 24;
                if ( (_DWORD)v30 )
                {
                  v53 += 8LL;
                  v54 += 8LL;
                }
                if ( a3 <= 0x7FFFFFFEFFFFLL && (v53 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( a10 && (v53 < *a10 || v53 > *a11 - 8LL) )
                  return 3221225512LL;
                if ( a3 <= 0x7FFFFFFEFFFFLL && (v54 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( a10 && (v54 < *a10 || v54 > *a11 - 8LL) )
                  return 3221225512LL;
                *(_QWORD *)(v20 + 248) = *(_QWORD *)v53;
                *(_QWORD *)(v20 + 152) = *(_QWORD *)v54;
                break;
              default:
                RtlRaiseStatus(-1073741569);
            }
          }
          else
          {
            v32 = *(_QWORD *)(v20 + 152);
            if ( a3 <= 0x7FFFFFFEFFFFLL && (v32 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( a10 && (v32 < *a10 || v32 > *a11 - 8LL) )
              return 3221225512LL;
            *(_QWORD *)(v20 + 8 * v30 + 120) = *(_QWORD *)v32;
            if ( a9 )
              *(_QWORD *)(a9 + 8 * v30 + 128) = v32;
            *(_QWORD *)(v20 + 152) += 8LL;
          }
          LODWORD(v26) = v26 + 1;
        }
      }
      while ( (unsigned int)v26 < *((unsigned __int8 *)v24 + 2) );
      v11 = v99;
      v14 = a2;
      v23 = v98;
      v22 = v101;
    }
    if ( (*(_BYTE *)v24 & 0x20) == 0 )
      break;
    v55 = *((unsigned __int8 *)v24 + 2);
    if ( (v55 & 1) != 0 )
      ++v55;
    v11 = (unsigned int *)((char *)v24 + 2 * v55 + 4);
    v99 = v11;
    if ( a3 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v11 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v101 = ++v22;
    if ( v22 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  if ( v23 )
  {
    v51 = 0;
    v52 = &RtlpSafeMachineFrameEntries;
    while ( v24 != *v52 )
    {
      ++v51;
      ++v52;
      if ( v51 >= 3 )
        goto LABEL_36;
    }
    v23 = 0;
  }
  else
  {
    if ( a3 <= 0x7FFFFFFEFFFFLL )
    {
      v61 = *(_QWORD *)(v20 + 152);
      if ( (v61 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    if ( a10 )
    {
      v33 = *(_QWORD *)(v20 + 152);
      if ( v33 < *a10 || v33 > *a11 - 8LL )
        return 3221225512LL;
    }
    v34 = **(_QWORD **)(v20 + 152);
    *(_QWORD *)(v20 + 152) += 8LL;
    *(_QWORD *)(v20 + 248) = v34;
  }
LABEL_36:
  *a6 = v23;
  if ( v96 )
  {
    v43 = (_BYTE *)(v14 + v11[2]);
    if ( a3 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v43 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (_DWORD)a3 - (_DWORD)v14 - *v11 >= (unsigned __int8)v43[1] && ((*v43 >> 3) & (unsigned __int8)v96) != 0 )
    {
      v44 = (unsigned __int8)v43[2];
      if ( (v44 & 1) != 0 )
        ++v44;
      *a7 = &v43[2 * (v44 + 2) + 4];
    }
  }
  return 0LL;
}
