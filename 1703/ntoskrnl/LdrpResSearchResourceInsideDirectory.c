/*
 * XREFs of LdrpResSearchResourceInsideDirectory @ 0x1404A8974
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1400120D4 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     RtlULongLongSub @ 0x14006B10C (RtlULongLongSub.c)
 *     RtlULongLongAdd @ 0x14006B3A0 (RtlULongLongAdd.c)
 *     LdrpSectionTableFromVirtualAddress @ 0x140429EEC (LdrpSectionTableFromVirtualAddress.c)
 *     LdrpResCompareResourceNames @ 0x1404A8828 (LdrpResCompareResourceNames.c)
 */

__int64 __fastcall LdrpResSearchResourceInsideDirectory(
        __int64 a1,
        __int64 a2,
        ULONGLONG a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int64 *a7,
        int a8,
        signed __int16 *a9,
        ULONGLONG *a10,
        ULONGLONG *a11,
        __int16 a12,
        _WORD *a13)
{
  ULONGLONG v13; // r12
  __int64 v14; // r10
  __int64 v15; // r11
  unsigned int v16; // ebx
  unsigned int v17; // edx
  unsigned __int64 *v18; // rcx
  __int16 v19; // r8
  int v20; // r13d
  int v21; // r9d
  int v22; // esi
  ULONGLONG v23; // rdi
  unsigned int *v24; // r15
  int v25; // eax
  int v26; // esi
  unsigned int v27; // r9d
  unsigned int *v28; // rsi
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  unsigned int *v31; // rdx
  unsigned int *v32; // rax
  int v33; // esi
  int v34; // eax
  __int64 result; // rax
  ULONGLONG v36; // rdx
  char v37; // si
  unsigned int *v38; // r12
  ULONGLONG v39; // rdi
  ULONGLONG v40; // rsi
  ULONGLONG v41; // r10
  __int64 v42; // r11
  ULONGLONG v43; // rdx
  ULONGLONG v44; // r14
  ULONGLONG *v45; // r9
  __int64 v46; // rdx
  ULONGLONG v47; // rax
  ULONGLONG *v48; // r11
  __int64 v49; // r9
  unsigned __int64 v50; // rax
  __int64 v51; // r9
  bool v52; // zf
  __int16 v53; // ax
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 v56; // r9
  ULONGLONG v57; // r12
  __int64 v58; // rax
  __int64 v59; // r9
  __int64 v60; // r14
  __int64 v61; // rax
  __int64 v62; // r9
  __int64 v63; // r9
  ULONGLONG v64; // r10
  __int64 v65; // r10
  ULONGLONG v66; // rcx
  int v67; // edx
  unsigned __int64 v68; // r11
  ULONGLONG pullResult; // [rsp+48h] [rbp-E0h] BYREF
  int v70; // [rsp+50h] [rbp-D8h]
  unsigned int v71; // [rsp+54h] [rbp-D4h]
  ULONGLONG v72; // [rsp+58h] [rbp-D0h]
  int v73; // [rsp+60h] [rbp-C8h] BYREF
  int v74; // [rsp+64h] [rbp-C4h]
  ULONGLONG v75; // [rsp+68h] [rbp-C0h]
  __int16 v76; // [rsp+70h] [rbp-B8h]
  int v77; // [rsp+74h] [rbp-B4h]
  int v78; // [rsp+78h] [rbp-B0h]
  ULONGLONG v79; // [rsp+80h] [rbp-A8h]
  unsigned __int64 v80; // [rsp+88h] [rbp-A0h]
  unsigned int *v81; // [rsp+90h] [rbp-98h]
  unsigned int *v82; // [rsp+98h] [rbp-90h]
  __int16 v83; // [rsp+A0h] [rbp-88h]
  unsigned __int64 v84; // [rsp+A8h] [rbp-80h]
  unsigned int *v85; // [rsp+B0h] [rbp-78h]
  unsigned int *v86; // [rsp+B8h] [rbp-70h]
  int v87; // [rsp+C0h] [rbp-68h]
  int v88; // [rsp+D4h] [rbp-54h]
  ULONGLONG v89; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v90; // [rsp+E0h] [rbp-48h]
  unsigned __int64 *v91; // [rsp+E8h] [rbp-40h]
  char v93; // [rsp+138h] [rbp+10h]
  signed __int16 v96; // [rsp+158h] [rbp+30h]

  v13 = a4;
  v14 = a3;
  v15 = a1;
  v88 = 0;
  v16 = 0;
  v96 = 0;
  LOWORD(v17) = 0;
  v77 = 0;
  if ( a4 )
  {
    if ( a5 )
    {
      v18 = a7;
      if ( a7 )
      {
        if ( (unsigned int)(a8 - 1) <= 3 )
        {
          LOBYTE(v19) = a12;
          if ( (a12 & 0x8000) == 0 )
          {
            v20 = a12 & 0x1000;
            v93 = v20 != 0;
            v21 = a12 & 0x8800;
            v74 = v21;
            if ( ((a12 & 0x1000) == 0 || v14) && v21 != 34816 && v15 )
            {
              v22 = a8;
              v78 = a8;
              v23 = v13;
              v24 = 0LL;
              v79 = 0LL;
              if ( a13 )
                *a13 = 0;
LABEL_12:
              if ( v23 )
              {
                v25 = v22;
                v26 = v22 - 1;
                v78 = v26;
                v87 = v26;
                if ( v25 )
                {
                  v80 = *v18;
                  v84 = v80;
                  if ( !v26 && a8 == 3 )
                  {
                    v79 = v23;
                    v89 = v23;
                    if ( !a9 )
                      return (unsigned int)-1073741811;
                    v96 = *a9;
                    v83 = *a9;
                    v77 = 0;
                    v76 = 0;
                    if ( (~(_BYTE)v19 & 4) != 0 )
                    {
                      v80 = (unsigned __int16)a9[2];
                      v84 = v80;
                    }
                  }
                  if ( v21 == 34816 )
                    goto LABEL_150;
                  if ( v20
                    && (RtlULongLongAdd(v23, 0x18uLL, &pullResult) < 0 || v23 + 24 > v14 + (v15 & 0xFFFFFFFFFFFFFFFCuLL)) )
                  {
                    return (unsigned int)-1073741701;
                  }
                  if ( v21 == 34816 )
LABEL_150:
                    v27 = (unsigned __int16)v88;
                  else
                    v27 = *(unsigned __int16 *)(v23 + 12);
                  v71 = v27;
                  v70 = v27;
                  if ( v27 && v20 )
                  {
                    v50 = 8LL * v27;
                    v82 = (unsigned int *)v50;
                    if ( v50 > 0xFFFFFFFF
                      || RtlULongLongAdd(v23, (unsigned int)v50 + 16LL, &pullResult) < 0
                      || v51 + v23 + 16 > v14 + (v15 & 0xFFFFFFFFFFFFFFFCuLL) )
                    {
                      return (unsigned int)-1073741701;
                    }
                    v27 = v71;
                  }
                  v28 = (unsigned int *)(v23 + 16);
                  v82 = (unsigned int *)(v23 + 16);
                  v81 = (unsigned int *)(v23 + 16);
                  if ( (v80 & 0xFFFFFFFFFFFF0000uLL) == 0 )
                  {
                    if ( v27 )
                    {
                      if ( v20 && RtlULongLongAdd(v23 + 16, (int)v27, &pullResult) < 0 )
                        return (unsigned int)-1073741701;
                      v28 += 2 * (int)v27;
                      v82 = v28;
                      v81 = v28;
                    }
                    v27 = HIWORD(v88);
                    if ( v74 != 34816 )
                      v27 = *(unsigned __int16 *)(v23 + 14);
                    v71 = v27;
                    v70 = v27;
                    if ( v20 )
                    {
                      v29 = 8LL * v27;
                      v90 = v29;
                      if ( v29 > 0xFFFFFFFF
                        || RtlULongLongAdd((ULONGLONG)v28, (unsigned int)v29, &pullResult) < 0
                        || (unsigned __int64)v28 + v30 > v14 + (v15 & 0xFFFFFFFFFFFFFFFCuLL) )
                      {
                        return (unsigned int)-1073741701;
                      }
                    }
                  }
                  if ( !v27 )
                  {
                    v75 = 0LL;
LABEL_105:
                    switch ( a8 - v78 )
                    {
                      case 1:
                        return (unsigned int)-1073741686;
                      case 2:
                        return (unsigned int)-1073741685;
                      case 3:
                        return (unsigned int)-1073741308;
                    }
                    return (unsigned int)-1073741811;
                  }
                  v19 = a12;
                  while ( !v79 || (v19 & 0x20) == 0 )
                  {
                    while ( 1 )
                    {
                      v23 = 0LL;
                      v75 = 0LL;
                      v31 = v28;
                      v81 = v28;
                      v32 = &v28[2 * v27 - 2];
                      v86 = v32;
                      v33 = v27;
                      v70 = v27;
                      while ( 1 )
                      {
                        if ( v31 > v32 )
                          goto LABEL_46;
                        v34 = v33 >> 1;
                        v70 = v33 >> 1;
                        if ( !(v33 >> 1) )
                          break;
                        v85 = v31;
                        v37 = v33 & 1;
                        if ( !v37 )
                          --v34;
                        v38 = &v31[2 * v34];
                        v85 = v38;
                        result = LdrpResCompareResourceNames(
                                   v15,
                                   (__int64)v31,
                                   v14,
                                   (const wchar_t *)v80,
                                   a4,
                                   v38,
                                   v19,
                                   &v73);
                        if ( (int)result < 0 )
                          return result;
                        if ( v73 < 0 )
                        {
                          v32 = v38 - 2;
                          v86 = v38 - 2;
                          v52 = v37 == 0;
                          v33 = v70;
                          if ( v52 )
                            v33 = v70 - 1;
                          v70 = v33;
                          v31 = v81;
                        }
                        else
                        {
                          if ( !v73 )
                          {
                            v36 = v38[1];
                            if ( (unsigned int)v36 >= 0x80000000 )
                            {
                              if ( v20 )
                              {
                                if ( !v79 )
                                {
                                  v13 = a4;
                                  goto LABEL_42;
                                }
                                return (unsigned int)-1073741701;
                              }
                              v13 = a4;
LABEL_154:
                              v23 = v13 + (v36 & 0xFFFFFFFF7FFFFFFFuLL);
LABEL_44:
                              v75 = v23;
                              goto LABEL_45;
                            }
                            v23 = 0LL;
                            v75 = 0LL;
                            if ( v20 )
                            {
                              if ( !v79 )
                                return (unsigned int)-1073741701;
                              v13 = a4;
LABEL_132:
                              if ( RtlULongLongAdd(v13, v36, &pullResult) < 0 )
                                return (unsigned int)-1073741701;
                              v24 = (unsigned int *)pullResult;
LABEL_134:
                              v72 = (ULONGLONG)v24;
                              goto LABEL_45;
                            }
                            v13 = a4;
LABEL_160:
                            v24 = (unsigned int *)(v13 + v36);
                            goto LABEL_134;
                          }
                          v31 = v38 + 2;
                          v81 = v38 + 2;
                          v33 = v70;
                          v32 = v86;
                        }
                        v13 = a4;
                        v14 = a3;
                        v15 = a1;
                        v19 = a12;
                      }
                      if ( !v33 )
                        goto LABEL_46;
                      result = LdrpResCompareResourceNames(
                                 v15,
                                 (__int64)v31,
                                 v14,
                                 (const wchar_t *)v80,
                                 v13,
                                 v31,
                                 v19,
                                 &v73);
                      if ( (int)result < 0 )
                        return result;
                      if ( !v73 )
                      {
                        v36 = v81[1];
                        if ( (unsigned int)v36 >= 0x80000000 )
                        {
                          if ( !v20 )
                            goto LABEL_154;
                          if ( v79 )
                            return (unsigned int)-1073741701;
LABEL_42:
                          LODWORD(v36) = v36 & 0x7FFFFFFF;
                          if ( RtlULongLongAdd(v13, v36, &pullResult) < 0 )
                            return (unsigned int)-1073741701;
                          v23 = pullResult;
                          goto LABEL_44;
                        }
                        if ( v20 )
                        {
                          if ( !v79 )
                            return (unsigned int)-1073741701;
                          goto LABEL_132;
                        }
                        goto LABEL_160;
                      }
LABEL_45:
                      v14 = a3;
                      v15 = a1;
LABEL_46:
                      v19 = a12;
                      if ( !v79 || v24 )
                        goto LABEL_47;
                      if ( (a12 & 4) != 0 )
                      {
                        LOWORD(v17) = v80;
                        goto LABEL_60;
                      }
                      HIWORD(v67) = HIWORD(v77);
                      LOWORD(v67) = v77 + 1;
                      v77 = v67;
                      v76 = v67;
                      if ( (unsigned __int16)v67 >= v96 )
                        break;
                      v80 = (unsigned __int16)a9[4 * (unsigned __int16)v67 + 2];
                      v84 = v80;
                      v27 = v71;
                      v28 = v82;
                    }
                    if ( *((_BYTE *)a9 + 516) )
                    {
LABEL_47:
                      v18 = a7 + 1;
                      a7 = v18;
                      v91 = v18;
                      LOWORD(v17) = v80;
                      v21 = v74;
                      v22 = v78;
                      goto LABEL_12;
                    }
                    v19 = a12 | 0x20;
                    a12 |= 0x20u;
                    v27 = v71;
                    v28 = v82;
                  }
                  v23 = 0LL;
                  v75 = 0LL;
                  if ( v20 )
                  {
                    if ( RtlULongLongAdd(v13, v28[1], &pullResult) < 0 )
                      return (unsigned int)-1073741701;
                    v24 = (unsigned int *)pullResult;
                    v72 = pullResult;
                    LOBYTE(v19) = a12;
                  }
                  else
                  {
                    v24 = (unsigned int *)(v13 + v28[1]);
                    v72 = (ULONGLONG)v24;
                  }
                  v17 = *v28;
                  v84 = *v28;
LABEL_60:
                  v21 = v74;
                }
              }
              if ( v24 && (v19 & 2) == 0 )
              {
                if ( v20
                  && ((unsigned __int64)v24 <= v13 || (unsigned __int64)(v24 + 4) > v14 + (v15 & 0xFFFFFFFFFFFFFFFCuLL)) )
                {
                  goto LABEL_165;
                }
                if ( a13 )
                  *a13 = v17;
                v39 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
                if ( (v15 & 1) == 0 && v21 != 34816 )
                {
                  v40 = 0LL;
                  goto LABEL_71;
                }
                v53 = *(_WORD *)(a5 + 24);
                if ( v53 == 267 )
                {
                  v54 = *(unsigned int *)(a5 + 136);
                }
                else if ( v53 == 523 )
                {
                  v54 = *(unsigned int *)(a5 + 152);
                }
                else
                {
                  v54 = 0LL;
                }
                if ( (_DWORD)v54 )
                {
                  if ( v20
                    && (RtlULongLongAdd(v15 & 0xFFFFFFFFFFFFFFFCuLL, (unsigned int)v54, &pullResult) < 0
                     || RtlULongLongSub(pullResult, v13, &pullResult) < 0) )
                  {
                    return (unsigned int)-1073741701;
                  }
                  v40 = v39 + (unsigned int)v54 - v13;
                  v55 = LdrpSectionTableFromVirtualAddress(v39, v14, a5, v54, v54, v93);
                  if ( !v55 )
                    goto LABEL_165;
                  if ( *v24 > *(_DWORD *)(v55 + 8) )
                  {
                    v57 = *(unsigned int *)(v55 + 12);
                    v58 = LdrpSectionTableFromVirtualAddress(v39, a3, a5, v56, *v24, v93);
                    if ( !v58 )
                      goto LABEL_165;
                    v60 = *(unsigned int *)(v58 + 12);
                    v61 = LdrpSectionTableFromVirtualAddress(v39, a3, a5, v59, v60, v93);
                    v62 = v61;
                    if ( v61 )
                    {
                      if ( v20
                        && (RtlULongLongAdd(
                              v39,
                              (unsigned int)v60 - (unsigned __int64)*(unsigned int *)(v61 + 12),
                              &pullResult) < 0
                         || RtlULongLongAdd(pullResult, *(unsigned int *)(v63 + 20), &pullResult) < 0) )
                      {
                        return (unsigned int)-1073741701;
                      }
                      v64 = v60 + v39 + *(unsigned int *)(v62 + 20) - (unsigned __int64)*(unsigned int *)(v62 + 12);
                    }
                    else
                    {
                      v64 = 0LL;
                    }
                    if ( v20
                      && (RtlULongLongSub(*(unsigned int *)(v62 + 12), v57, &pullResult) < 0
                       || RtlULongLongSub(pullResult, v65 - a4, &pullResult) < 0) )
                    {
                      return (unsigned int)-1073741701;
                    }
                    v66 = *(unsigned int *)(v62 + 12) - v57 - v64;
                    v13 = a4;
                    v40 += a4 + v66;
                  }
LABEL_71:
                  v41 = v24[1];
                  if ( !v20 )
                  {
                    v43 = 0LL;
                    v44 = a3;
LABEL_78:
                    v45 = a10;
                    if ( a10 )
                    {
                      if ( v20 )
                      {
                        if ( RtlULongLongAdd(v39, v43, &pullResult) < 0
                          || pullResult < v39
                          || pullResult > v44 + (v39 & 0xFFFFFFFFFFFFFFFCuLL) )
                        {
                          return (unsigned int)-1073741701;
                        }
                        v47 = v46 + v39;
                      }
                      else
                      {
                        v47 = v39 + *v24 - v40;
                      }
                      *v45 = v47;
                    }
                    v48 = a11;
                    if ( a11 )
                    {
                      if ( v20 && v45 && (RtlULongLongAdd(*v45, v41, &pullResult) < 0 || v49 + v41 > v39 + v44) )
                        return (unsigned int)-1073741701;
                      *v48 = v41;
                    }
                    return v16;
                  }
                  if ( RtlULongLongSub(*v24, v40, &pullResult) < 0 )
                    return (unsigned int)-1073741701;
                  v43 = pullResult;
                  if ( pullResult >= v13 - v42 )
                  {
                    v44 = a3;
                    if ( pullResult <= a3 && (_DWORD)v41 && v41 <= a3 && pullResult + (unsigned int)v41 <= a3 )
                      goto LABEL_78;
                  }
LABEL_165:
                  v72 = 0LL;
                  return (unsigned int)-1073741701;
                }
                v72 = 0LL;
                return (unsigned int)-1073741687;
              }
              if ( v23 && (v19 & 2) != 0 )
              {
                if ( v20
                  && (RtlULongLongAdd(v23, 0x18uLL, &pullResult) < 0 || v23 + 24 > v14 + (v15 & 0xFFFFFFFFFFFFFFFCuLL)) )
                {
                  v75 = 0LL;
                  return (unsigned int)-1073741701;
                }
                if ( a10 )
                {
                  if ( v20 )
                  {
                    v68 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
                    if ( v23 < v68 || v23 > v68 + v14 )
                      return (unsigned int)-1073741701;
                  }
                  *a10 = v23;
                }
                return v16;
              }
              goto LABEL_105;
            }
          }
        }
      }
    }
  }
  return 3221225485LL;
}
