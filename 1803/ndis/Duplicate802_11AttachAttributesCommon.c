/*
 * XREFs of Duplicate802_11AttachAttributesCommon @ 0x1C007DD08
 * Callers:
 *     Duplicate802_11AttachAttributes @ 0x1C007DCE4 (Duplicate802_11AttachAttributes.c)
 * Callees:
 *     NdisAllocateMemoryWithTag @ 0x1C0023E30 (NdisAllocateMemoryWithTag.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     PrivateULongMult @ 0x1C007E970 (PrivateULongMult.c)
 */

__int64 __fastcall Duplicate802_11AttachAttributesCommon(
        unsigned __int16 a1,
        __int128 *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        size_t a6,
        unsigned int a7,
        size_t a8,
        _QWORD *a9)
{
  unsigned int v10; // r12d
  __int64 v11; // r13
  char v12; // al
  __int64 v13; // rcx
  int v14; // r15d
  UINT v15; // ebx
  unsigned int v16; // edi
  int v17; // r10d
  unsigned int v18; // r11d
  unsigned int v19; // eax
  __int64 v20; // r14
  UINT v21; // r11d
  __int64 v22; // rcx
  int v23; // r10d
  __int64 v24; // rcx
  unsigned int v25; // r10d
  int v26; // eax
  unsigned int v27; // ecx
  __int64 v28; // rcx
  unsigned int v29; // r10d
  int v30; // eax
  unsigned int v31; // ecx
  __int64 v32; // rcx
  unsigned int v33; // r10d
  int v34; // eax
  unsigned int v35; // ecx
  __int64 v36; // rcx
  unsigned int v37; // r10d
  int v38; // eax
  unsigned int v39; // ecx
  __int64 v40; // rcx
  unsigned int v41; // r10d
  int v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  unsigned int v45; // eax
  UINT v46; // r10d
  int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  int v51; // eax
  unsigned int v52; // eax
  int v53; // ecx
  UINT v54; // ecx
  unsigned int v55; // eax
  UINT v56; // r11d
  __int64 v57; // rcx
  unsigned int v58; // edx
  __int64 v59; // rcx
  unsigned int v60; // r10d
  unsigned int v61; // eax
  unsigned int v62; // ecx
  __int64 v63; // rcx
  unsigned int v64; // r10d
  unsigned int v65; // eax
  unsigned int v66; // ecx
  unsigned int v67; // ecx
  unsigned int v68; // eax
  UINT v69; // r11d
  int v70; // eax
  __int64 v71; // rbx
  int v72; // eax
  __int64 v73; // rcx
  int v74; // edx
  __int64 v75; // rcx
  unsigned int v76; // r10d
  int v77; // eax
  unsigned int v78; // ecx
  unsigned int v79; // eax
  _DWORD *v80; // r15
  _QWORD *v81; // rax
  __int128 v82; // xmm0
  unsigned int v83; // ecx
  __int64 v84; // rbx
  char *v85; // rcx
  _QWORD *v86; // rsi
  unsigned int v87; // ecx
  char *v88; // rax
  __int64 v89; // rbx
  char *v90; // rax
  unsigned int v91; // ecx
  __int64 v92; // rbx
  char *v93; // rax
  unsigned int v94; // ecx
  __int64 v95; // rbx
  char *v96; // rax
  unsigned int v97; // ecx
  __int64 v98; // rbx
  char *v99; // rax
  unsigned int v100; // ecx
  __int64 v101; // rbx
  unsigned int v102; // ecx
  __int64 v103; // rbx
  __int64 v104; // r8
  int v105; // ecx
  unsigned int v106; // eax
  _BYTE *v107; // rsi
  _BYTE *v108; // rbx
  unsigned int v109; // r14d
  __int64 v110; // r15
  size_t v111; // r12
  _QWORD *v112; // rsi
  unsigned int v113; // ecx
  char *v114; // rax
  __int64 v115; // rbx
  char *v116; // rax
  unsigned int v117; // ecx
  __int64 v118; // rbx
  char *v119; // rax
  unsigned int v120; // ecx
  __int64 v121; // rbx
  __int64 v122; // rdx
  _QWORD *v123; // rsi
  unsigned int v124; // ecx
  char *v125; // rax
  __int64 v126; // rbx
  char *v127; // rax
  unsigned int v128; // ecx
  PVOID VirtualAddress; // [rsp+20h] [rbp-58h] BYREF
  size_t v131; // [rsp+28h] [rbp-50h] BYREF
  size_t v132; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v133; // [rsp+38h] [rbp-40h]
  size_t v134; // [rsp+3Ch] [rbp-3Ch] BYREF
  size_t v135; // [rsp+44h] [rbp-34h] BYREF
  _BYTE v136[12]; // [rsp+4Ch] [rbp-2Ch] BYREF
  __int64 v137; // [rsp+58h] [rbp-20h]
  __int64 v138; // [rsp+60h] [rbp-18h]
  __int64 v139; // [rsp+68h] [rbp-10h]
  size_t Size; // [rsp+C8h] [rbp+50h] BYREF
  unsigned int v142; // [rsp+D0h] [rbp+58h]
  int v143; // [rsp+D4h] [rbp+5Ch]
  unsigned int v144; // [rsp+D8h] [rbp+60h]

  v144 = a4;
  v143 = HIDWORD(a3);
  LODWORD(Size) = 0;
  v10 = 0;
  LODWORD(a6) = 0;
  v11 = 0LL;
  LODWORD(a8) = 0;
  v131 = 0LL;
  v132 = 0LL;
  a5 = 0;
  v134 = 0LL;
  v135 = 0LL;
  v133 = 0;
  v142 = 0;
  *(_QWORD *)v136 = 0LL;
  v137 = 0LL;
  v139 = 0LL;
  v138 = 0LL;
  VirtualAddress = 0LL;
  if ( !a2 || !a9 || *(_BYTE *)a2 != 0xA1 )
    return (unsigned int)-1073741811;
  *a9 = 0LL;
  v12 = *((_BYTE *)a2 + 1);
  if ( v12 == 1 )
  {
    if ( *((_WORD *)a2 + 1) < 0x28u )
      return (unsigned int)-1073741811;
    v144 = 1;
  }
  else if ( v12 == 2 )
  {
    if ( *((_WORD *)a2 + 1) < 0x38u )
      return (unsigned int)-1073741811;
    v144 = 2;
  }
  else
  {
    if ( v12 != 3 || *((_WORD *)a2 + 1) < 0x40u )
      return (unsigned int)-1073741811;
    v144 = 3;
  }
  v13 = *((unsigned int *)a2 + 5);
  v14 = -1;
  v15 = 64;
  a7 = 64;
  if ( (_DWORD)v13 && *((_QWORD *)a2 + 3) )
  {
    v16 = PrivateULongMult(v13, 1092LL, &Size);
    if ( v16 )
      return v16;
    v19 = Size + 64;
    v15 = -1;
    if ( (int)Size + 64 >= v18 )
      v15 = Size + 64;
    v16 = v19 < v18 ? v17 : 0;
    a7 = v15;
    if ( v19 < v18 )
      return v16;
  }
  v20 = *((_QWORD *)a2 + 4);
  v21 = v15;
  if ( v20 )
  {
    v22 = *(unsigned int *)(v20 + 48);
    v10 = 160;
    if ( (_DWORD)v22 )
    {
      if ( *(_QWORD *)(v20 + 56) )
      {
        v16 = PrivateULongMult(v22, 3LL, &a6);
        if ( v16 )
          return v16;
        v10 = -1;
        if ( (unsigned int)(a6 + 160) >= 0xA0 )
          v10 = a6 + 160;
        v16 = (unsigned int)a6 >= 0xFFFFFF60 ? v23 : 0;
        if ( (unsigned int)(a6 + 160) < 0xA0 )
          return v16;
      }
    }
    v24 = *(unsigned int *)(v20 + 64);
    if ( (_DWORD)v24 && *(_QWORD *)(v20 + 72) )
    {
      v16 = PrivateULongMult(v24, 8LL, &a8);
      if ( v16 )
        return v16;
      v26 = -1;
      v27 = v10 + a8;
      if ( v10 + (unsigned int)a8 >= v10 )
        v26 = v10 + a8;
      v10 = v26;
      v16 = v27 < v25 ? 0xC0010015 : 0;
      if ( v27 < v25 )
        return v16;
    }
    v28 = *(unsigned int *)(v20 + 80);
    if ( (_DWORD)v28 && *(_QWORD *)(v20 + 88) )
    {
      v16 = PrivateULongMult(v28, 8LL, &v131);
      if ( v16 )
        return v16;
      v30 = -1;
      v31 = v10 + v131;
      if ( v10 + (unsigned int)v131 >= v10 )
        v30 = v10 + v131;
      v10 = v30;
      v16 = v31 < v29 ? 0xC0010015 : 0;
      if ( v31 < v29 )
        return v16;
    }
    v32 = *(unsigned int *)(v20 + 96);
    if ( (_DWORD)v32 && *(_QWORD *)(v20 + 104) )
    {
      v16 = PrivateULongMult(v32, 8LL, (char *)&v131 + 4);
      if ( v16 )
        return v16;
      v34 = -1;
      v35 = v10 + HIDWORD(v131);
      if ( v10 + HIDWORD(v131) >= v10 )
        v34 = v10 + HIDWORD(v131);
      v10 = v34;
      v16 = v35 < v33 ? 0xC0010015 : 0;
      if ( v35 < v33 )
        return v16;
    }
    v36 = *(unsigned int *)(v20 + 112);
    if ( (_DWORD)v36 && *(_QWORD *)(v20 + 120) )
    {
      v16 = PrivateULongMult(v36, 8LL, &v132);
      if ( v16 )
        return v16;
      v38 = -1;
      v39 = v10 + v132;
      if ( v10 + (unsigned int)v132 >= v10 )
        v38 = v10 + v132;
      v10 = v38;
      v16 = v39 < v37 ? 0xC0010015 : 0;
      if ( v39 < v37 )
        return v16;
    }
    if ( v144 >= 3 )
    {
      v40 = *(unsigned int *)(v20 + 140);
      if ( (_DWORD)v40 )
      {
        if ( *(_QWORD *)(v20 + 144) && *(_BYTE *)(v20 + 1) >= 3u )
        {
          v16 = PrivateULongMult(v40, 8LL, (char *)&v132 + 4);
          if ( v16 )
            return v16;
          v42 = -1;
          v43 = v10 + HIDWORD(v132);
          if ( v10 + HIDWORD(v132) >= v10 )
            v42 = v10 + HIDWORD(v132);
          v10 = v42;
          v16 = v43 < v41 ? 0xC0010015 : 0;
          if ( v43 < v41 )
            return v16;
        }
      }
    }
    v44 = v10 + v15;
    v45 = -1;
    if ( v10 + v15 >= v15 )
      v45 = v10 + v15;
    v15 = v45;
    a7 = v45;
    v16 = v44 < v21 ? 0xC0010015 : 0;
    if ( v44 < v21 )
      return v16;
  }
  v46 = v15;
  if ( v144 >= 2 )
  {
    v47 = *((_DWORD *)a2 + 1);
    v48 = *((_QWORD *)a2 + 5);
    v11 = *((_QWORD *)a2 + 6);
    v137 = v48;
    v139 = v11;
    v49 = v47 & 0x28;
    if ( v49 && !v11 || v11 && !v49 )
      return (unsigned int)-1073741811;
    if ( v48 )
    {
      v50 = *(unsigned int *)(v48 + 4);
      if ( (_DWORD)v50 )
      {
        v16 = PrivateULongMult(v50, 24LL, &v136[4]);
        if ( v16 )
          return v16;
        v51 = *(_DWORD *)&v136[4];
      }
      else
      {
        v51 = 16;
      }
      v52 = v51 + 8;
      v53 = -1;
      if ( v52 >= 8 )
        v53 = v52;
      v16 = v52 < 8 ? 0xC0010015 : 0;
      v133 = v53;
      if ( v52 < 8 )
        return v16;
      v54 = v15 + v53;
      v55 = -1;
      if ( v54 >= v15 )
        v55 = v54;
      v15 = v55;
      a7 = v55;
      v16 = v54 < v46 ? 0xC0010015 : 0;
      if ( v54 < v46 )
        return v16;
    }
  }
  v56 = v15;
  if ( v11 )
  {
    v57 = *(unsigned int *)(v11 + 32);
    v58 = 80;
    a5 = 80;
    if ( (_DWORD)v57 )
    {
      if ( *(_QWORD *)(v11 + 40) )
      {
        v16 = PrivateULongMult(v57, 3LL, &v134);
        if ( v16 )
          return v16;
        v58 = -1;
        if ( (unsigned int)v134 < 0xFFFFFFB0 )
          v58 = v134 + 80;
        v16 = (unsigned int)v134 >= 0xFFFFFFB0 ? 0xC0010015 : 0;
        a5 = v58;
        if ( (unsigned int)(v134 + 80) < 0x50 )
          return v16;
      }
    }
    v59 = *(unsigned int *)(v11 + 48);
    if ( (_DWORD)v59 && *(_QWORD *)(v11 + 56) )
    {
      v16 = PrivateULongMult(v59, 8LL, (char *)&v134 + 4);
      if ( v16 )
        return v16;
      v61 = -1;
      v62 = a5 + HIDWORD(v134);
      if ( a5 + HIDWORD(v134) >= a5 )
        v61 = a5 + HIDWORD(v134);
      v58 = v61;
      a5 = v61;
      v16 = v62 < v60 ? 0xC0010015 : 0;
      if ( v62 < v60 )
        return v16;
    }
    v63 = *(unsigned int *)(v11 + 64);
    if ( (_DWORD)v63 && *(_QWORD *)(v11 + 72) )
    {
      v16 = PrivateULongMult(v63, 8LL, &v135);
      if ( v16 )
        return v16;
      v65 = -1;
      v66 = a5 + v135;
      if ( a5 + (unsigned int)v135 >= a5 )
        v65 = a5 + v135;
      v58 = v65;
      a5 = v65;
      v16 = v66 < v64 ? 0xC0010015 : 0;
      if ( v66 < v64 )
        return v16;
    }
    v67 = v58 + v15;
    v68 = -1;
    if ( v58 + v15 >= v15 )
      v68 = v58 + v15;
    v15 = v68;
    a7 = v68;
    v16 = v67 < v56 ? 0xC0010015 : 0;
    if ( v67 < v56 )
      return v16;
  }
  v69 = v15;
  if ( v144 < 3 )
    goto LABEL_121;
  v70 = *((_DWORD *)a2 + 1);
  v71 = *((_QWORD *)a2 + 7);
  v138 = v71;
  v72 = v70 & 0x70;
  if ( v72 && !v71 )
    return (unsigned int)-1073741811;
  if ( !v71 )
  {
    v15 = a7;
    goto LABEL_121;
  }
  if ( !v72 )
    return (unsigned int)-1073741811;
  v73 = *(unsigned int *)(v71 + 48);
  v74 = 72;
  v142 = 72;
  if ( !(_DWORD)v73 || !*(_QWORD *)(v71 + 56) )
    goto LABEL_202;
  v16 = PrivateULongMult(v73, 3LL, (char *)&v135 + 4);
  if ( !v16 )
  {
    v74 = -1;
    if ( HIDWORD(v135) < 0xFFFFFFB8 )
      v74 = HIDWORD(v135) + 72;
    v16 = HIDWORD(v135) >= 0xFFFFFFB8 ? 0xC0010015 : 0;
    v142 = v74;
    if ( (unsigned int)(HIDWORD(v135) + 72) >= 0x48 )
    {
LABEL_202:
      v75 = *(unsigned int *)(v71 + 32);
      if ( !(_DWORD)v75 || !*(_QWORD *)(v71 + 40) )
        goto LABEL_203;
      v16 = PrivateULongMult(v75, 6LL, v136);
      if ( !v16 )
      {
        v77 = -1;
        v78 = v142 + *(_DWORD *)v136;
        if ( v142 + *(_DWORD *)v136 >= v142 )
          v77 = v142 + *(_DWORD *)v136;
        v74 = v77;
        v142 = v77;
        v16 = v78 < v76 ? 0xC0010015 : 0;
        if ( v78 >= v76 )
        {
LABEL_203:
          v79 = v74 + a7;
          if ( v74 + a7 >= a7 )
            v14 = v74 + a7;
          v15 = v14;
          v16 = v79 < v69 ? 0xC0010015 : 0;
          if ( v79 >= v69 )
          {
LABEL_121:
            a7 = NdisAllocateMemoryWithTag(&VirtualAddress, v15, 0x6D61444Eu);
            v16 = a7;
            if ( a7 )
              return v16;
            memset(VirtualAddress, 0, v15);
            v80 = VirtualAddress;
            v81 = a9;
            v82 = *a2;
            v83 = Size;
            *(_QWORD *)&v136[4] = VirtualAddress;
            *(_OWORD *)VirtualAddress = v82;
            *v81 = v80;
            v80[4] = *((_DWORD *)a2 + 4);
            VirtualAddress = (char *)VirtualAddress + 64;
            *v80 = 4195233;
            if ( v83 && *((_DWORD *)a2 + 5) )
            {
              v84 = v83;
              *((_QWORD *)v80 + 3) = VirtualAddress;
              v80[5] = *((_DWORD *)a2 + 5);
              memmove(VirtualAddress, *((const void **)a2 + 3), v83);
              v85 = (char *)VirtualAddress + v84;
              VirtualAddress = (char *)VirtualAddress + v84;
            }
            else
            {
              *((_QWORD *)v80 + 3) = 0LL;
              v80[5] = 0;
              v85 = (char *)VirtualAddress;
            }
            if ( !v10 || !v20 )
              goto LABEL_158;
            *((_QWORD *)v80 + 4) = v85;
            v86 = VirtualAddress;
            *(_OWORD *)v85 = *(_OWORD *)v20;
            *((_OWORD *)v85 + 1) = *(_OWORD *)(v20 + 16);
            *((_OWORD *)v85 + 2) = *(_OWORD *)(v20 + 32);
            v87 = a6;
            v88 = (char *)VirtualAddress + 160;
            VirtualAddress = (char *)VirtualAddress + 160;
            if ( !(_DWORD)a6 )
              goto LABEL_131;
            if ( *(_DWORD *)(v20 + 48) )
            {
              v86[7] = v88;
              v89 = v87;
              *((_DWORD *)v86 + 12) = *(_DWORD *)(v20 + 48);
              memmove(VirtualAddress, *(const void **)(v20 + 56), v87);
              v90 = (char *)VirtualAddress + v89;
              VirtualAddress = (char *)VirtualAddress + v89;
            }
            else
            {
LABEL_131:
              v86[7] = 0LL;
              *((_DWORD *)v86 + 12) = 0;
              v90 = (char *)VirtualAddress;
            }
            v91 = a8;
            if ( (_DWORD)a8 && *(_DWORD *)(v20 + 64) )
            {
              v86[9] = v90;
              v92 = v91;
              *((_DWORD *)v86 + 16) = *(_DWORD *)(v20 + 64);
              memmove(VirtualAddress, *(const void **)(v20 + 72), v91);
              v93 = (char *)VirtualAddress + v92;
              VirtualAddress = (char *)VirtualAddress + v92;
            }
            else
            {
              v86[9] = 0LL;
              *((_DWORD *)v86 + 16) = 0;
              v93 = (char *)VirtualAddress;
            }
            v94 = v131;
            if ( (_DWORD)v131 && *(_DWORD *)(v20 + 80) )
            {
              v86[11] = v93;
              v95 = v94;
              *((_DWORD *)v86 + 20) = *(_DWORD *)(v20 + 80);
              memmove(VirtualAddress, *(const void **)(v20 + 88), v94);
              v96 = (char *)VirtualAddress + v95;
              VirtualAddress = (char *)VirtualAddress + v95;
            }
            else
            {
              v86[11] = 0LL;
              *((_DWORD *)v86 + 20) = 0;
              v96 = (char *)VirtualAddress;
            }
            v97 = HIDWORD(v131);
            if ( HIDWORD(v131) && *(_DWORD *)(v20 + 96) )
            {
              v86[13] = v96;
              v98 = v97;
              *((_DWORD *)v86 + 24) = *(_DWORD *)(v20 + 96);
              memmove(VirtualAddress, *(const void **)(v20 + 104), v97);
              v99 = (char *)VirtualAddress + v98;
              VirtualAddress = (char *)VirtualAddress + v98;
            }
            else
            {
              v86[13] = 0LL;
              *((_DWORD *)v86 + 24) = 0;
              v99 = (char *)VirtualAddress;
            }
            v100 = v132;
            if ( (_DWORD)v132 && *(_DWORD *)(v20 + 112) )
            {
              v86[15] = v99;
              v101 = v100;
              *((_DWORD *)v86 + 28) = *(_DWORD *)(v20 + 112);
              memmove(VirtualAddress, *(const void **)(v20 + 120), v100);
              v85 = (char *)VirtualAddress + v101;
              VirtualAddress = (char *)VirtualAddress + v101;
            }
            else
            {
              v86[15] = 0LL;
              *((_DWORD *)v86 + 28) = 0;
              v85 = (char *)VirtualAddress;
            }
            if ( v144 < 3 )
              goto LABEL_158;
            *(_BYTE *)(*((_QWORD *)v80 + 4) + 128LL) = *(_BYTE *)(v20 + 128);
            *(_DWORD *)(*((_QWORD *)v80 + 4) + 132LL) = *(_DWORD *)(v20 + 132);
            *(_BYTE *)(*((_QWORD *)v80 + 4) + 136LL) = *(_BYTE *)(v20 + 136);
            if ( *(_DWORD *)(v20 + 140) && *(_QWORD *)(v20 + 144) && *(_BYTE *)(v20 + 1) >= 3u )
            {
              v102 = HIDWORD(v132);
              if ( HIDWORD(v132) )
              {
                v103 = HIDWORD(v132);
                v86[18] = VirtualAddress;
                *((_DWORD *)v86 + 35) = *(_DWORD *)(v20 + 140);
                memmove(VirtualAddress, *(const void **)(v20 + 144), v102);
                v85 = (char *)VirtualAddress + v103;
                VirtualAddress = (char *)VirtualAddress + v103;
                goto LABEL_156;
              }
              v86[18] = 0LL;
              *((_DWORD *)v86 + 35) = 0;
            }
            v85 = (char *)VirtualAddress;
LABEL_156:
            if ( *(_BYTE *)(v20 + 1) >= 4u )
            {
              *(_BYTE *)(*((_QWORD *)v80 + 4) + 152LL) = *(_BYTE *)(v20 + 152);
              *(_BYTE *)(*((_QWORD *)v80 + 4) + 153LL) = *(_BYTE *)(v20 + 153);
              *(_BYTE *)(*((_QWORD *)v80 + 4) + 154LL) = *(_BYTE *)(v20 + 154);
              *(_BYTE *)(*((_QWORD *)v80 + 4) + 155LL) = *(_BYTE *)(v20 + 155);
              *(_BYTE *)(*((_QWORD *)v80 + 4) + 156LL) = *(_BYTE *)(v20 + 156);
              v85 = (char *)VirtualAddress;
            }
LABEL_158:
            if ( v133 )
            {
              v104 = v137;
              if ( v137 )
              {
                *((_QWORD *)v80 + 5) = v85;
                *(_QWORD *)v85 = *(_QWORD *)v104;
                if ( *(_DWORD *)(v104 + 4) )
                {
                  v105 = *(unsigned __int8 *)(v104 + 9);
                  if ( v105 == 3 )
                  {
                    v106 = 24;
                  }
                  else if ( v105 == 2 )
                  {
                    v106 = 20;
                  }
                  else
                  {
                    v106 = 0;
                    if ( v105 == 1 )
                      v106 = 16;
                  }
                  v107 = (_BYTE *)(v104 + 8);
                  v108 = (_BYTE *)(*((_QWORD *)v80 + 5) + 8LL);
                  v109 = 0;
                  v110 = v104;
                  v111 = v106;
                  do
                  {
                    memmove(v108, v107, v111);
                    if ( a1 >= 0x61Eu )
                      *((_DWORD *)v108 + 4) = 0;
                    ++v109;
                    *v108 = *v107;
                    v107 += v111;
                    v108[1] = 3;
                    *((_WORD *)v108 + 1) = 24;
                    v108 += 24;
                  }
                  while ( v109 < *(_DWORD *)(v110 + 4) );
                  v16 = a7;
                  v80 = *(_DWORD **)&v136[4];
                  v11 = v139;
                }
                v85 = (char *)VirtualAddress + v133;
                VirtualAddress = v85;
              }
            }
            if ( a5 && v11 )
            {
              *((_QWORD *)v80 + 6) = v85;
              v112 = VirtualAddress;
              *(_OWORD *)v85 = *(_OWORD *)v11;
              *((_OWORD *)v85 + 1) = *(_OWORD *)(v11 + 16);
              v113 = v134;
              v114 = (char *)VirtualAddress + 80;
              VirtualAddress = (char *)VirtualAddress + 80;
              if ( (_DWORD)v134 && *(_DWORD *)(v11 + 32) )
              {
                v112[5] = v114;
                v115 = v113;
                *((_DWORD *)v112 + 8) = *(_DWORD *)(v11 + 32);
                memmove(VirtualAddress, *(const void **)(v11 + 40), v113);
                v116 = (char *)VirtualAddress + v115;
                VirtualAddress = (char *)VirtualAddress + v115;
              }
              else
              {
                v112[5] = 0LL;
                *((_DWORD *)v112 + 8) = 0;
                v116 = (char *)VirtualAddress;
              }
              v117 = HIDWORD(v134);
              if ( HIDWORD(v134) && *(_DWORD *)(v11 + 48) )
              {
                v112[7] = v116;
                v118 = v117;
                *((_DWORD *)v112 + 12) = *(_DWORD *)(v11 + 48);
                memmove(VirtualAddress, *(const void **)(v11 + 56), v117);
                v119 = (char *)VirtualAddress + v118;
                VirtualAddress = (char *)VirtualAddress + v118;
              }
              else
              {
                v112[7] = 0LL;
                *((_DWORD *)v112 + 12) = 0;
                v119 = (char *)VirtualAddress;
              }
              v120 = v135;
              if ( (_DWORD)v135 && *(_DWORD *)(v11 + 64) )
              {
                v112[9] = v119;
                v121 = v120;
                *((_DWORD *)v112 + 16) = *(_DWORD *)(v11 + 64);
                memmove(VirtualAddress, *(const void **)(v11 + 72), v120);
                v85 = (char *)VirtualAddress + v121;
                VirtualAddress = (char *)VirtualAddress + v121;
              }
              else
              {
                v112[9] = 0LL;
                *((_DWORD *)v112 + 16) = 0;
                v85 = (char *)VirtualAddress;
              }
            }
            if ( v142 )
            {
              v122 = v138;
              if ( v138 )
              {
                *((_QWORD *)v80 + 7) = v85;
                v123 = VirtualAddress;
                *(_OWORD *)v85 = *(_OWORD *)v122;
                *((_OWORD *)v85 + 1) = *(_OWORD *)(v122 + 16);
                *((_OWORD *)v85 + 2) = *(_OWORD *)(v122 + 32);
                *((_OWORD *)v85 + 3) = *(_OWORD *)(v122 + 48);
                *((_QWORD *)v85 + 8) = *(_QWORD *)(v122 + 64);
                v124 = HIDWORD(v135);
                v125 = (char *)VirtualAddress + 72;
                VirtualAddress = (char *)VirtualAddress + 72;
                if ( HIDWORD(v135) && *(_DWORD *)(v122 + 48) )
                {
                  v123[7] = v125;
                  v126 = v124;
                  *((_DWORD *)v123 + 12) = *(_DWORD *)(v122 + 48);
                  memmove(VirtualAddress, *(const void **)(v122 + 56), v124);
                  v122 = v138;
                  v127 = (char *)VirtualAddress + v126;
                  VirtualAddress = (char *)VirtualAddress + v126;
                }
                else
                {
                  v123[7] = 0LL;
                  *((_DWORD *)v123 + 12) = 0;
                  v127 = (char *)VirtualAddress;
                }
                v128 = *(_DWORD *)v136;
                if ( *(_DWORD *)v136 && *(_DWORD *)(v122 + 32) )
                {
                  v123[5] = v127;
                  *((_DWORD *)v123 + 8) = *(_DWORD *)(v122 + 32);
                  memmove(VirtualAddress, *(const void **)(v122 + 40), v128);
                }
                else
                {
                  v123[5] = 0LL;
                  *((_DWORD *)v123 + 8) = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return v16;
}
