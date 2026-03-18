/*
 * XREFs of LdrpResSearchResourceInsideDirectory @ 0x1405341D4
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1400ADB40 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     RtlULongLongAdd @ 0x1400E3380 (RtlULongLongAdd.c)
 *     RtlULongLongSub @ 0x1400FE030 (RtlULongLongSub.c)
 *     LdrpResCompareResourceNames @ 0x140534094 (LdrpResCompareResourceNames.c)
 *     LdrpSectionTableFromVirtualAddress @ 0x14058F8B8 (LdrpSectionTableFromVirtualAddress.c)
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
  int v34; // r12d
  __int64 result; // rax
  ULONGLONG v36; // rdx
  char v37; // si
  unsigned int *v38; // r13
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
  __int16 v52; // ax
  unsigned int v53; // r9d
  __int64 v54; // rax
  int v55; // r9d
  ULONGLONG v56; // r12
  __int64 v57; // rax
  int v58; // r9d
  __int64 v59; // r14
  __int64 v60; // rax
  __int64 v61; // r9
  __int64 v62; // r9
  ULONGLONG v63; // r10
  __int64 v64; // r10
  ULONGLONG v65; // rcx
  int v66; // edx
  unsigned __int64 v67; // r11
  ULONGLONG pullResult; // [rsp+48h] [rbp-E0h] BYREF
  unsigned int v69; // [rsp+50h] [rbp-D8h]
  int v70; // [rsp+54h] [rbp-D4h]
  ULONGLONG v71; // [rsp+58h] [rbp-D0h]
  int v72; // [rsp+60h] [rbp-C8h] BYREF
  int v73; // [rsp+64h] [rbp-C4h]
  ULONGLONG v74; // [rsp+68h] [rbp-C0h]
  __int16 v75; // [rsp+70h] [rbp-B8h]
  int v76; // [rsp+74h] [rbp-B4h]
  int v77; // [rsp+78h] [rbp-B0h]
  int v78; // [rsp+7Ch] [rbp-ACh]
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
  if ( !a4 )
    return 3221225485LL;
  if ( !a5 )
    return 3221225485LL;
  v18 = a7;
  if ( !a7 )
    return 3221225485LL;
  if ( (unsigned int)(a8 - 1) > 3 )
    return 3221225485LL;
  LOBYTE(v19) = a12;
  if ( a12 < 0 )
    return 3221225485LL;
  v20 = a12 & 0x1000;
  v76 = v20;
  v93 = v20 != 0;
  v21 = a12 & 0x8800;
  v73 = v21;
  if ( (a12 & 0x1000) != 0 && !v14 )
    return 3221225485LL;
  if ( v21 == 34816 || !v15 )
    return 3221225485LL;
  v22 = a8;
  v78 = a8;
  v23 = v13;
  v24 = 0LL;
  v79 = 0LL;
  if ( a13 )
    *a13 = 0;
LABEL_12:
  if ( !v23 )
    goto LABEL_62;
  v25 = v22;
  v26 = v22 - 1;
  v78 = v26;
  v87 = v26;
  if ( !v25 )
    goto LABEL_62;
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
    v75 = 0;
    if ( (~(_BYTE)v19 & 4) != 0 )
    {
      v80 = (unsigned __int16)a9[2];
      v84 = v80;
    }
  }
  if ( v21 == 34816 )
    goto LABEL_150;
  if ( v20 && (RtlULongLongAdd(v23, 0x18uLL, &pullResult) < 0 || v23 + 24 > v14 + (v15 & 0xFFFFFFFFFFFFFFFCuLL)) )
    return (unsigned int)-1073741701;
  if ( v21 == 34816 )
LABEL_150:
    v27 = (unsigned __int16)v88;
  else
    v27 = *(unsigned __int16 *)(v23 + 12);
  v69 = v27;
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
    v27 = v69;
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
    if ( v73 != 34816 )
      v27 = *(unsigned __int16 *)(v23 + 14);
    v69 = v27;
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
    v74 = 0LL;
LABEL_106:
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
LABEL_32:
  if ( !v79 || (v19 & 0x20) == 0 )
  {
LABEL_33:
    v23 = 0LL;
    v74 = 0LL;
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
      if ( !(v33 >> 1) )
      {
        v13 = a4;
        if ( !v33 )
          goto LABEL_46;
        result = LdrpResCompareResourceNames(v15, (__int64)v31, v14, (const wchar_t *)v80, a4, v31, v19, &v72);
        if ( (int)result < 0 )
          return result;
        if ( !v72 )
        {
          v36 = v81[1];
          if ( (v36 & 0x80000000) != 0LL )
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
            goto LABEL_133;
          }
          goto LABEL_161;
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
          goto LABEL_61;
        }
        HIWORD(v66) = HIWORD(v77);
        LOWORD(v66) = v77 + 1;
        v77 = v66;
        v75 = v66;
        if ( (unsigned __int16)v66 < v96 )
        {
          v80 = (unsigned __int16)a9[4 * (unsigned __int16)v66 + 2];
          v84 = v80;
          v27 = v69;
          v28 = v82;
          goto LABEL_33;
        }
        if ( *((_BYTE *)a9 + 516) )
        {
LABEL_47:
          v18 = a7 + 1;
          a7 = v18;
          v91 = v18;
          LOWORD(v17) = v80;
          v21 = v73;
          v22 = v78;
          goto LABEL_12;
        }
        v19 = a12 | 0x20;
        a12 |= 0x20u;
        v27 = v69;
        v28 = v82;
        goto LABEL_32;
      }
      v85 = v31;
      v37 = v33 & 1;
      if ( v37 )
        v38 = &v31[2 * v34];
      else
        v38 = &v31[2 * v34 - 2];
      v85 = v38;
      result = LdrpResCompareResourceNames(v15, (__int64)v31, v14, (const wchar_t *)v80, a4, v38, v19, &v72);
      if ( (int)result < 0 )
        return result;
      if ( v72 >= 0 )
        break;
      v32 = v38 - 2;
      v86 = v38 - 2;
      if ( v37 )
      {
        v70 = v34;
        v31 = v81;
LABEL_54:
        v33 = v34;
        goto LABEL_55;
      }
      v33 = v34 - 1;
      v70 = v34 - 1;
      v31 = v81;
LABEL_55:
      v20 = v76;
      v13 = a4;
      v14 = a3;
      v15 = a1;
      v19 = a12;
    }
    if ( !v72 )
    {
      v36 = v38[1];
      v20 = v76;
      if ( (v36 & 0x80000000) != 0LL )
      {
        if ( v76 )
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
        v74 = v23;
        goto LABEL_45;
      }
      v23 = 0LL;
      v74 = 0LL;
      if ( v76 )
      {
        if ( !v79 )
          return (unsigned int)-1073741701;
        v13 = a4;
LABEL_133:
        if ( RtlULongLongAdd(v13, v36, &pullResult) < 0 )
          return (unsigned int)-1073741701;
        v24 = (unsigned int *)pullResult;
LABEL_135:
        v71 = (ULONGLONG)v24;
        goto LABEL_45;
      }
      v13 = a4;
LABEL_161:
      v24 = (unsigned int *)(v13 + v36);
      goto LABEL_135;
    }
    v31 = v38 + 2;
    v81 = v38 + 2;
    v70 = v34;
    v32 = v86;
    goto LABEL_54;
  }
  v23 = 0LL;
  v74 = 0LL;
  if ( v20 )
  {
    if ( RtlULongLongAdd(v13, v28[1], &pullResult) < 0 )
      return (unsigned int)-1073741701;
    v24 = (unsigned int *)pullResult;
    v71 = pullResult;
    LOBYTE(v19) = a12;
  }
  else
  {
    v24 = (unsigned int *)(v13 + v28[1]);
    v71 = (ULONGLONG)v24;
  }
  v17 = *v28;
  v84 = *v28;
LABEL_61:
  v21 = v73;
LABEL_62:
  if ( !v24 || (v19 & 2) != 0 )
  {
    if ( v23 && (v19 & 2) != 0 )
    {
      if ( v20 && (RtlULongLongAdd(v23, 0x18uLL, &pullResult) < 0 || v23 + 24 > v14 + (v15 & 0xFFFFFFFFFFFFFFFCuLL)) )
      {
        v74 = 0LL;
        return (unsigned int)-1073741701;
      }
      if ( a10 )
      {
        if ( v20 )
        {
          v67 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v23 < v67 || v23 > v67 + v14 )
            return (unsigned int)-1073741701;
        }
        *a10 = v23;
      }
      return v16;
    }
    goto LABEL_106;
  }
  if ( v20 && ((unsigned __int64)v24 <= v13 || (unsigned __int64)(v24 + 4) > v14 + (v15 & 0xFFFFFFFFFFFFFFFCuLL)) )
    goto LABEL_166;
  if ( a13 )
    *a13 = v17;
  v39 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (v15 & 1) == 0 && v21 != 34816 )
  {
    v40 = 0LL;
    goto LABEL_72;
  }
  v52 = *(_WORD *)(a5 + 24);
  if ( v52 == 267 )
  {
    v53 = *(_DWORD *)(a5 + 136);
  }
  else if ( v52 == 523 )
  {
    v53 = *(_DWORD *)(a5 + 152);
  }
  else
  {
    v53 = 0;
  }
  if ( !v53 )
  {
    v71 = 0LL;
    return (unsigned int)-1073741687;
  }
  if ( v20
    && (RtlULongLongAdd(v15 & 0xFFFFFFFFFFFFFFFCuLL, v53, &pullResult) < 0
     || RtlULongLongSub(pullResult, v13, &pullResult) < 0) )
  {
    return (unsigned int)-1073741701;
  }
  v40 = v39 + v53 - v13;
  v54 = LdrpSectionTableFromVirtualAddress(v39, v14, a5, v53, v53, v93);
  if ( !v54 )
    goto LABEL_166;
  if ( *v24 <= *(_DWORD *)(v54 + 8) )
    goto LABEL_72;
  v56 = *(unsigned int *)(v54 + 12);
  v57 = LdrpSectionTableFromVirtualAddress(v39, a3, a5, v55, *v24, v93);
  if ( !v57 )
    goto LABEL_166;
  v59 = *(unsigned int *)(v57 + 12);
  v60 = LdrpSectionTableFromVirtualAddress(v39, a3, a5, v58, v59, v93);
  v61 = v60;
  if ( v60 )
  {
    if ( v20
      && (RtlULongLongAdd(v39, (unsigned int)v59 - (unsigned __int64)*(unsigned int *)(v60 + 12), &pullResult) < 0
       || RtlULongLongAdd(pullResult, *(unsigned int *)(v62 + 20), &pullResult) < 0) )
    {
      return (unsigned int)-1073741701;
    }
    v63 = v59 + v39 + *(unsigned int *)(v61 + 20) - (unsigned __int64)*(unsigned int *)(v61 + 12);
  }
  else
  {
    v63 = 0LL;
  }
  if ( v20
    && (RtlULongLongSub(*(unsigned int *)(v61 + 12), v56, &pullResult) < 0
     || RtlULongLongSub(pullResult, v64 - a4, &pullResult) < 0) )
  {
    return (unsigned int)-1073741701;
  }
  v65 = *(unsigned int *)(v61 + 12) - v56 - v63;
  v13 = a4;
  v40 += a4 + v65;
LABEL_72:
  v41 = v24[1];
  if ( !v20 )
  {
    v43 = 0LL;
    v44 = a3;
    goto LABEL_79;
  }
  if ( RtlULongLongSub(*v24, v40, &pullResult) < 0 )
    return (unsigned int)-1073741701;
  v43 = pullResult;
  if ( pullResult < v13 - v42
    || (v44 = a3, pullResult > a3)
    || !(_DWORD)v41
    || v41 > a3
    || pullResult + (unsigned int)v41 > a3 )
  {
LABEL_166:
    v71 = 0LL;
    return (unsigned int)-1073741701;
  }
LABEL_79:
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
