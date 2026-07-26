/*
 * XREFs of Duplicate802_11AttachAttributesCommon @ 0x1C007CBD8
 * Callers:
 *     Duplicate802_11AttachAttributes @ 0x1C007CBB4 (Duplicate802_11AttachAttributes.c)
 * Callees:
 *     NdisAllocateMemoryWithTag @ 0x1C001DCF0 (NdisAllocateMemoryWithTag.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 */

__int64 __fastcall Duplicate802_11AttachAttributesCommon(
        unsigned __int16 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        size_t a6,
        int a7,
        size_t a8,
        _QWORD *a9)
{
  unsigned int v10; // r14d
  __int64 v11; // r13
  char v12; // al
  unsigned int v13; // r15d
  __int64 v14; // rax
  UINT v15; // ebx
  int v16; // edx
  unsigned __int64 v17; // rcx
  unsigned int v18; // r9d
  unsigned int v19; // edi
  __int64 v20; // rsi
  UINT v21; // r10d
  UINT v22; // r11d
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  int v25; // eax
  unsigned int v26; // eax
  __int64 v27; // rax
  unsigned int v28; // r9d
  unsigned __int64 v29; // rax
  int v30; // ecx
  unsigned int v31; // ecx
  int v32; // eax
  __int64 v33; // rax
  unsigned int v34; // r9d
  unsigned __int64 v35; // rax
  int v36; // ecx
  unsigned int v37; // ecx
  int v38; // eax
  __int64 v39; // rax
  unsigned int v40; // r9d
  unsigned __int64 v41; // rax
  int v42; // ecx
  unsigned int v43; // ecx
  int v44; // eax
  __int64 v45; // rax
  unsigned int v46; // r9d
  unsigned __int64 v47; // rax
  int v48; // ecx
  unsigned int v49; // ecx
  int v50; // eax
  unsigned int v51; // r9d
  __int64 v52; // rax
  unsigned __int64 v53; // rax
  int v54; // ecx
  unsigned int v55; // ecx
  int v56; // eax
  unsigned int v57; // ecx
  int v58; // eax
  UINT v59; // r8d
  UINT v60; // r9d
  int v61; // eax
  __int64 v62; // rcx
  int v63; // eax
  __int64 v64; // rax
  __int64 v65; // rcx
  int v66; // eax
  unsigned __int64 v67; // rcx
  unsigned int v68; // eax
  int v69; // ecx
  UINT v70; // ecx
  int v71; // eax
  UINT v72; // r10d
  UINT v73; // r11d
  __int64 v74; // rax
  unsigned int v75; // r15d
  unsigned __int64 v76; // rcx
  int v77; // eax
  unsigned int v78; // eax
  __int64 v79; // rax
  unsigned int v80; // r9d
  unsigned __int64 v81; // rax
  int v82; // ecx
  unsigned int v83; // ecx
  int v84; // eax
  __int64 v85; // rax
  unsigned int v86; // r9d
  unsigned __int64 v87; // rax
  int v88; // ecx
  unsigned int v89; // ecx
  int v90; // eax
  unsigned int v91; // ecx
  int v92; // eax
  UINT v93; // r11d
  UINT v94; // r15d
  int v95; // eax
  __int64 v96; // r8
  int v97; // eax
  __int64 v98; // rax
  int v99; // ecx
  unsigned __int64 v100; // rcx
  int v101; // eax
  unsigned int v102; // eax
  __int64 v103; // rax
  unsigned int v104; // r10d
  __int64 v105; // rcx
  int v106; // eax
  unsigned __int64 v107; // rcx
  unsigned int v108; // ecx
  int v109; // eax
  UINT v110; // eax
  _DWORD *v111; // r15
  __int128 v112; // xmm0
  char *v113; // rcx
  _QWORD *v114; // r14
  char *v115; // rax
  char *v116; // rax
  char *v117; // rax
  unsigned int v118; // ecx
  __int64 v119; // rbx
  char *v120; // rax
  unsigned int v121; // ecx
  __int64 v122; // rbx
  char *v123; // rax
  unsigned int v124; // ecx
  __int64 v125; // rbx
  unsigned int v126; // ecx
  __int64 v127; // rbx
  __int64 v128; // r8
  int v129; // ecx
  unsigned int v130; // eax
  _BYTE *v131; // rsi
  _BYTE *v132; // rbx
  unsigned int v133; // r14d
  __int64 v134; // r15
  size_t v135; // r12
  _QWORD *v136; // rsi
  unsigned int v137; // ecx
  char *v138; // rax
  __int64 v139; // rbx
  char *v140; // rax
  unsigned int v141; // ecx
  __int64 v142; // rbx
  char *v143; // rax
  unsigned int v144; // ecx
  __int64 v145; // rbx
  __int64 v146; // rdx
  _QWORD *v147; // rsi
  unsigned int v148; // ecx
  char *v149; // rax
  __int64 v150; // rbx
  char *v151; // rax
  unsigned int v152; // ecx
  PVOID VirtualAddress; // [rsp+20h] [rbp-58h] BYREF
  size_t v155; // [rsp+28h] [rbp-50h]
  size_t v156; // [rsp+30h] [rbp-48h]
  size_t v157; // [rsp+38h] [rbp-40h]
  size_t v158; // [rsp+40h] [rbp-38h]
  int v159; // [rsp+48h] [rbp-30h]
  NDIS_STATUS v160; // [rsp+4Ch] [rbp-2Ch]
  __int64 v161; // [rsp+50h] [rbp-28h]
  __int64 v162; // [rsp+58h] [rbp-20h]
  __int64 v163; // [rsp+60h] [rbp-18h]
  _DWORD *v164; // [rsp+68h] [rbp-10h]
  unsigned int Size; // [rsp+C8h] [rbp+50h]
  unsigned int v167; // [rsp+D0h] [rbp+58h]
  unsigned int v168; // [rsp+D8h] [rbp+60h]
  unsigned int v169; // [rsp+E0h] [rbp+68h]
  unsigned int v170; // [rsp+E8h] [rbp+70h]
  int v171; // [rsp+F0h] [rbp+78h]
  unsigned int v172; // [rsp+F8h] [rbp+80h]

  Size = 0;
  v10 = 0;
  v170 = 0;
  v11 = 0LL;
  v172 = 0;
  v155 = 0LL;
  v156 = 0LL;
  v171 = 0;
  v157 = 0LL;
  v158 = 0LL;
  v167 = 0;
  v169 = 0;
  v159 = 0;
  v161 = 0LL;
  v163 = 0LL;
  v162 = 0LL;
  VirtualAddress = 0LL;
  if ( !a2 || !a9 || *(_BYTE *)a2 != 0xA1 )
    return (unsigned int)-1073741811;
  *a9 = 0LL;
  v12 = *((_BYTE *)a2 + 1);
  if ( v12 == 1 )
  {
    if ( *((_WORD *)a2 + 1) < 0x28u )
      return (unsigned int)-1073741811;
    v13 = 1;
  }
  else if ( v12 == 2 )
  {
    if ( *((_WORD *)a2 + 1) < 0x38u )
      return (unsigned int)-1073741811;
    v13 = 2;
  }
  else
  {
    if ( v12 != 3 || *((_WORD *)a2 + 1) < 0x40u )
      return (unsigned int)-1073741811;
    v13 = 3;
  }
  v14 = *((unsigned int *)a2 + 5);
  v15 = 64;
  v168 = v13;
  v16 = -1;
  if ( (_DWORD)v14 && *((_QWORD *)a2 + 3) )
  {
    v17 = 1092 * v14;
    v18 = -1;
    if ( (unsigned __int64)(1092 * v14) <= 0xFFFFFFFF )
      v18 = 1092 * v14;
    Size = v18;
    v19 = v17 > 0xFFFFFFFF ? 0xC0010015 : 0;
    if ( v17 > 0xFFFFFFFF )
      return v19;
    v15 = -1;
    if ( v18 + 64 >= 0x40 )
      v15 = v18 + 64;
    v19 = v18 >= 0xFFFFFFC0 ? 0xC0010015 : 0;
    if ( v18 + 64 < 0x40 )
      return v19;
  }
  v20 = *((_QWORD *)a2 + 4);
  v21 = v15;
  v22 = v15;
  if ( v20 )
  {
    v23 = *(unsigned int *)(v20 + 48);
    v10 = 160;
    if ( (_DWORD)v23 )
    {
      if ( *(_QWORD *)(v20 + 56) )
      {
        v24 = 3 * v23;
        v25 = -1;
        if ( v24 <= 0xFFFFFFFF )
          v25 = v24;
        v170 = v25;
        v19 = v24 > 0xFFFFFFFF ? 0xC0010015 : 0;
        if ( v24 > 0xFFFFFFFF )
          return v19;
        v26 = v25 + 160;
        v10 = -1;
        if ( v26 >= 0xA0 )
          v10 = v26;
        v19 = v26 < 0xA0 ? 0xC0010015 : 0;
        if ( v26 < 0xA0 )
          return v19;
      }
    }
    v27 = *(unsigned int *)(v20 + 64);
    v28 = v10;
    if ( (_DWORD)v27 )
    {
      if ( *(_QWORD *)(v20 + 72) )
      {
        v29 = 8 * v27;
        v30 = -1;
        if ( v29 <= 0xFFFFFFFF )
          v30 = v29;
        v172 = v30;
        v19 = v29 > 0xFFFFFFFF ? 0xC0010015 : 0;
        if ( v29 > 0xFFFFFFFF )
          return v19;
        v31 = v10 + v30;
        v32 = -1;
        if ( v31 >= v10 )
          v32 = v31;
        v10 = v32;
        v19 = v31 < v28 ? 0xC0010015 : 0;
        if ( v31 < v28 )
          return v19;
      }
    }
    v33 = *(unsigned int *)(v20 + 80);
    v34 = v10;
    if ( (_DWORD)v33 )
    {
      if ( *(_QWORD *)(v20 + 88) )
      {
        v35 = 8 * v33;
        v36 = -1;
        if ( v35 <= 0xFFFFFFFF )
          v36 = v35;
        LODWORD(v155) = v36;
        v19 = v35 > 0xFFFFFFFF ? 0xC0010015 : 0;
        if ( v35 > 0xFFFFFFFF )
          return v19;
        v37 = v10 + v36;
        v38 = -1;
        if ( v37 >= v10 )
          v38 = v37;
        v10 = v38;
        v19 = v37 < v34 ? 0xC0010015 : 0;
        if ( v37 < v34 )
          return v19;
      }
    }
    v39 = *(unsigned int *)(v20 + 96);
    v40 = v10;
    if ( (_DWORD)v39 )
    {
      if ( *(_QWORD *)(v20 + 104) )
      {
        v41 = 8 * v39;
        v42 = -1;
        if ( v41 <= 0xFFFFFFFF )
          v42 = v41;
        HIDWORD(v155) = v42;
        v19 = v41 > 0xFFFFFFFF ? 0xC0010015 : 0;
        if ( v41 > 0xFFFFFFFF )
          return v19;
        v43 = v10 + v42;
        v44 = -1;
        if ( v43 >= v10 )
          v44 = v43;
        v10 = v44;
        v19 = v43 < v40 ? 0xC0010015 : 0;
        if ( v43 < v40 )
          return v19;
      }
    }
    v45 = *(unsigned int *)(v20 + 112);
    v46 = v10;
    if ( (_DWORD)v45 )
    {
      if ( *(_QWORD *)(v20 + 120) )
      {
        v47 = 8 * v45;
        v48 = -1;
        if ( v47 <= 0xFFFFFFFF )
          v48 = v47;
        LODWORD(v156) = v48;
        v19 = v47 > 0xFFFFFFFF ? 0xC0010015 : 0;
        if ( v47 > 0xFFFFFFFF )
          return v19;
        v49 = v10 + v48;
        v50 = -1;
        if ( v49 >= v10 )
          v50 = v49;
        v10 = v50;
        v19 = v49 < v46 ? 0xC0010015 : 0;
        if ( v49 < v46 )
          return v19;
      }
    }
    v51 = v10;
    if ( v13 >= 3 )
    {
      v52 = *(unsigned int *)(v20 + 140);
      if ( (_DWORD)v52 )
      {
        if ( *(_QWORD *)(v20 + 144) && *(_BYTE *)(v20 + 1) >= 3u )
        {
          v53 = 8 * v52;
          v54 = -1;
          if ( v53 <= 0xFFFFFFFF )
            v54 = v53;
          HIDWORD(v156) = v54;
          v19 = v53 > 0xFFFFFFFF ? 0xC0010015 : 0;
          if ( v53 > 0xFFFFFFFF )
            return v19;
          v55 = v10 + v54;
          v56 = -1;
          if ( v55 >= v10 )
            v56 = v55;
          v10 = v56;
          v19 = v55 < v51 ? 0xC0010015 : 0;
          if ( v55 < v51 )
            return v19;
        }
      }
    }
    v57 = v10 + v15;
    v58 = -1;
    if ( v10 + v15 >= v15 )
      v58 = v10 + v15;
    v15 = v58;
    v19 = v57 < v22 ? 0xC0010015 : 0;
    if ( v57 < v21 )
      return v19;
  }
  v59 = v15;
  v60 = v15;
  if ( v13 >= 2 )
  {
    v61 = *((_DWORD *)a2 + 1);
    v62 = *((_QWORD *)a2 + 5);
    v11 = *((_QWORD *)a2 + 6);
    v161 = v62;
    v163 = v11;
    v63 = v61 & 0x28;
    if ( v63 && !v11 || v11 && !v63 )
      return (unsigned int)-1073741811;
    if ( v62 )
    {
      v64 = *(unsigned int *)(v62 + 4);
      if ( (_DWORD)v64 )
      {
        v65 = 3 * v64;
        v66 = -1;
        v67 = 8 * v65;
        if ( v67 <= 0xFFFFFFFF )
          v66 = v67;
        v19 = v67 > 0xFFFFFFFF ? 0xC0010015 : 0;
        if ( v67 > 0xFFFFFFFF )
          return v19;
      }
      else
      {
        v66 = 16;
      }
      v68 = v66 + 8;
      v69 = -1;
      if ( v68 >= 8 )
        v69 = v68;
      v19 = v68 < 8 ? 0xC0010015 : 0;
      v167 = v69;
      if ( v68 < 8 )
        return v19;
      v70 = v15 + v69;
      v71 = -1;
      if ( v70 >= v15 )
        v71 = v70;
      v15 = v71;
      v19 = v70 < v60 ? 0xC0010015 : 0;
      if ( v70 < v59 )
        return v19;
    }
  }
  v72 = v15;
  v73 = v15;
  if ( v11 )
  {
    v74 = *(unsigned int *)(v11 + 32);
    v75 = 80;
    v171 = 80;
    if ( (_DWORD)v74 )
    {
      if ( *(_QWORD *)(v11 + 40) )
      {
        v76 = 3 * v74;
        v77 = -1;
        if ( v76 <= 0xFFFFFFFF )
          v77 = v76;
        LODWORD(v157) = v77;
        v19 = v76 > 0xFFFFFFFF ? 0xC0010015 : 0;
        if ( v76 > 0xFFFFFFFF )
          return v19;
        v78 = v77 + 80;
        v75 = -1;
        if ( v78 >= 0x50 )
          v75 = v78;
        v19 = v78 < 0x50 ? 0xC0010015 : 0;
        v171 = v75;
        if ( v78 < 0x50 )
          return v19;
      }
    }
    v79 = *(unsigned int *)(v11 + 48);
    v80 = v75;
    if ( (_DWORD)v79 )
    {
      if ( *(_QWORD *)(v11 + 56) )
      {
        v81 = 8 * v79;
        v82 = -1;
        if ( v81 <= 0xFFFFFFFF )
          v82 = v81;
        HIDWORD(v157) = v82;
        v19 = v81 > 0xFFFFFFFF ? 0xC0010015 : 0;
        if ( v81 > 0xFFFFFFFF )
          return v19;
        v83 = v75 + v82;
        v84 = -1;
        if ( v83 >= v75 )
          v84 = v83;
        v75 = v84;
        v171 = v84;
        v19 = v83 < v80 ? 0xC0010015 : 0;
        if ( v83 < v80 )
          return v19;
      }
    }
    v85 = *(unsigned int *)(v11 + 64);
    v86 = v75;
    if ( (_DWORD)v85 )
    {
      if ( *(_QWORD *)(v11 + 72) )
      {
        v87 = 8 * v85;
        v88 = -1;
        if ( v87 <= 0xFFFFFFFF )
          v88 = v87;
        LODWORD(v158) = v88;
        v19 = v87 > 0xFFFFFFFF ? 0xC0010015 : 0;
        if ( v87 > 0xFFFFFFFF )
          return v19;
        v89 = v75 + v88;
        v90 = -1;
        if ( v89 >= v75 )
          v90 = v89;
        v75 = v90;
        v171 = v90;
        v19 = v89 < v86 ? 0xC0010015 : 0;
        if ( v89 < v86 )
          return v19;
      }
    }
    v91 = v75 + v15;
    v92 = -1;
    if ( v75 + v15 >= v15 )
      v92 = v75 + v15;
    v15 = v92;
    v19 = v91 < v73 ? 0xC0010015 : 0;
    if ( v91 < v72 )
      return v19;
  }
  v93 = v15;
  v94 = v15;
  if ( v168 < 3 )
    goto LABEL_146;
  v95 = *((_DWORD *)a2 + 1);
  v96 = *((_QWORD *)a2 + 7);
  v162 = v96;
  v97 = v95 & 0x70;
  if ( v97 && !v96 )
    return (unsigned int)-1073741811;
  if ( !v96 )
    goto LABEL_146;
  if ( !v97 )
    return (unsigned int)-1073741811;
  v98 = *(unsigned int *)(v96 + 48);
  v99 = 72;
  v169 = 72;
  if ( !(_DWORD)v98 || !*(_QWORD *)(v96 + 56) )
    goto LABEL_134;
  v100 = 3 * v98;
  v101 = -1;
  if ( v100 <= 0xFFFFFFFF )
    v101 = v100;
  HIDWORD(v158) = v101;
  v19 = v100 > 0xFFFFFFFF ? 0xC0010015 : 0;
  if ( v100 <= 0xFFFFFFFF )
  {
    v102 = v101 + 72;
    v99 = -1;
    if ( v102 >= 0x48 )
      v99 = v102;
    v19 = v102 < 0x48 ? 0xC0010015 : 0;
    v169 = v99;
    if ( v102 >= 0x48 )
    {
LABEL_134:
      v103 = *(unsigned int *)(v96 + 32);
      v104 = v99;
      if ( (_DWORD)v103 && *(_QWORD *)(v96 + 40) )
      {
        v105 = 3 * v103;
        v106 = -1;
        v107 = 2 * v105;
        if ( v107 <= 0xFFFFFFFF )
          v106 = v107;
        v159 = v106;
        v19 = v107 > 0xFFFFFFFF ? 0xC0010015 : 0;
        if ( v107 > 0xFFFFFFFF )
          return v19;
        v108 = v106 + v169;
        v109 = -1;
        if ( v108 >= v169 )
          v109 = v108;
        v169 = v109;
        v19 = v108 < v104 ? 0xC0010015 : 0;
        if ( v108 < v104 )
          return v19;
        v99 = v109;
      }
      v110 = v99 + v15;
      if ( v99 + v15 >= v15 )
        v16 = v99 + v15;
      v15 = v16;
      v19 = v110 < v94 ? 0xC0010015 : 0;
      if ( v110 >= v93 )
      {
LABEL_146:
        v160 = NdisAllocateMemoryWithTag(&VirtualAddress, v15, 0x6D61444Eu);
        v19 = v160;
        if ( v160 )
          return v19;
        memset(VirtualAddress, 0, v15);
        v111 = VirtualAddress;
        v112 = *a2;
        v164 = VirtualAddress;
        *(_OWORD *)VirtualAddress = v112;
        *a9 = v111;
        v111[4] = *((_DWORD *)a2 + 4);
        VirtualAddress = (char *)VirtualAddress + 64;
        *v111 = 4195233;
        if ( Size && *((_DWORD *)a2 + 5) )
        {
          *((_QWORD *)v111 + 3) = VirtualAddress;
          v111[5] = *((_DWORD *)a2 + 5);
          memmove(VirtualAddress, *((const void **)a2 + 3), Size);
          v113 = (char *)VirtualAddress + Size;
          VirtualAddress = v113;
        }
        else
        {
          *((_QWORD *)v111 + 3) = 0LL;
          v111[5] = 0;
          v113 = (char *)VirtualAddress;
        }
        if ( !v10 || !v20 )
          goto LABEL_183;
        *((_QWORD *)v111 + 4) = v113;
        v114 = VirtualAddress;
        *(_OWORD *)v113 = *(_OWORD *)v20;
        *((_OWORD *)v113 + 1) = *(_OWORD *)(v20 + 16);
        *((_OWORD *)v113 + 2) = *(_OWORD *)(v20 + 32);
        v115 = (char *)VirtualAddress + 160;
        VirtualAddress = (char *)VirtualAddress + 160;
        if ( v170 && *(_DWORD *)(v20 + 48) )
        {
          v114[7] = v115;
          *((_DWORD *)v114 + 12) = *(_DWORD *)(v20 + 48);
          memmove(VirtualAddress, *(const void **)(v20 + 56), v170);
          v116 = (char *)VirtualAddress + v170;
          VirtualAddress = v116;
        }
        else
        {
          v114[7] = 0LL;
          *((_DWORD *)v114 + 12) = 0;
          v116 = (char *)VirtualAddress;
        }
        if ( v172 && *(_DWORD *)(v20 + 64) )
        {
          v114[9] = v116;
          *((_DWORD *)v114 + 16) = *(_DWORD *)(v20 + 64);
          memmove(VirtualAddress, *(const void **)(v20 + 72), v172);
          v117 = (char *)VirtualAddress + v172;
          VirtualAddress = v117;
        }
        else
        {
          v114[9] = 0LL;
          *((_DWORD *)v114 + 16) = 0;
          v117 = (char *)VirtualAddress;
        }
        v118 = v155;
        if ( (_DWORD)v155 && *(_DWORD *)(v20 + 80) )
        {
          v114[11] = v117;
          v119 = v118;
          *((_DWORD *)v114 + 20) = *(_DWORD *)(v20 + 80);
          memmove(VirtualAddress, *(const void **)(v20 + 88), v118);
          v120 = (char *)VirtualAddress + v119;
          VirtualAddress = (char *)VirtualAddress + v119;
        }
        else
        {
          v114[11] = 0LL;
          *((_DWORD *)v114 + 20) = 0;
          v120 = (char *)VirtualAddress;
        }
        v121 = HIDWORD(v155);
        if ( HIDWORD(v155) && *(_DWORD *)(v20 + 96) )
        {
          v114[13] = v120;
          v122 = v121;
          *((_DWORD *)v114 + 24) = *(_DWORD *)(v20 + 96);
          memmove(VirtualAddress, *(const void **)(v20 + 104), v121);
          v123 = (char *)VirtualAddress + v122;
          VirtualAddress = (char *)VirtualAddress + v122;
        }
        else
        {
          v114[13] = 0LL;
          *((_DWORD *)v114 + 24) = 0;
          v123 = (char *)VirtualAddress;
        }
        v124 = v156;
        if ( (_DWORD)v156 && *(_DWORD *)(v20 + 112) )
        {
          v114[15] = v123;
          v125 = v124;
          *((_DWORD *)v114 + 28) = *(_DWORD *)(v20 + 112);
          memmove(VirtualAddress, *(const void **)(v20 + 120), v124);
          v113 = (char *)VirtualAddress + v125;
          VirtualAddress = (char *)VirtualAddress + v125;
        }
        else
        {
          v114[15] = 0LL;
          *((_DWORD *)v114 + 28) = 0;
          v113 = (char *)VirtualAddress;
        }
        if ( v168 < 3 )
          goto LABEL_183;
        *(_BYTE *)(*((_QWORD *)v111 + 4) + 128LL) = *(_BYTE *)(v20 + 128);
        *(_DWORD *)(*((_QWORD *)v111 + 4) + 132LL) = *(_DWORD *)(v20 + 132);
        *(_BYTE *)(*((_QWORD *)v111 + 4) + 136LL) = *(_BYTE *)(v20 + 136);
        if ( *(_DWORD *)(v20 + 140) && *(_QWORD *)(v20 + 144) && *(_BYTE *)(v20 + 1) >= 3u )
        {
          v126 = HIDWORD(v156);
          if ( HIDWORD(v156) )
          {
            v127 = HIDWORD(v156);
            v114[18] = VirtualAddress;
            *((_DWORD *)v114 + 35) = *(_DWORD *)(v20 + 140);
            memmove(VirtualAddress, *(const void **)(v20 + 144), v126);
            v113 = (char *)VirtualAddress + v127;
            VirtualAddress = (char *)VirtualAddress + v127;
            goto LABEL_181;
          }
          v114[18] = 0LL;
          *((_DWORD *)v114 + 35) = 0;
        }
        v113 = (char *)VirtualAddress;
LABEL_181:
        if ( *(_BYTE *)(v20 + 1) >= 4u )
        {
          *(_BYTE *)(*((_QWORD *)v111 + 4) + 152LL) = *(_BYTE *)(v20 + 152);
          *(_BYTE *)(*((_QWORD *)v111 + 4) + 153LL) = *(_BYTE *)(v20 + 153);
          *(_BYTE *)(*((_QWORD *)v111 + 4) + 154LL) = *(_BYTE *)(v20 + 154);
          *(_BYTE *)(*((_QWORD *)v111 + 4) + 155LL) = *(_BYTE *)(v20 + 155);
          *(_BYTE *)(*((_QWORD *)v111 + 4) + 156LL) = *(_BYTE *)(v20 + 156);
          v113 = (char *)VirtualAddress;
        }
LABEL_183:
        if ( v167 )
        {
          v128 = v161;
          if ( v161 )
          {
            *((_QWORD *)v111 + 5) = v113;
            *(_QWORD *)v113 = *(_QWORD *)v128;
            if ( *(_DWORD *)(v128 + 4) )
            {
              v129 = *(unsigned __int8 *)(v128 + 9);
              v130 = 24;
              if ( v129 != 3 )
              {
                if ( v129 == 2 )
                {
                  v130 = 20;
                }
                else
                {
                  v130 = 0;
                  if ( v129 == 1 )
                    v130 = 16;
                }
              }
              v131 = (_BYTE *)(v128 + 8);
              v132 = (_BYTE *)(*((_QWORD *)v111 + 5) + 8LL);
              v133 = 0;
              v134 = v128;
              v135 = v130;
              do
              {
                memmove(v132, v131, v135);
                if ( a1 >= 0x61Eu )
                  *((_DWORD *)v132 + 4) = 0;
                ++v133;
                *v132 = *v131;
                v131 += v135;
                v132[1] = 3;
                *((_WORD *)v132 + 1) = 24;
                v132 += 24;
              }
              while ( v133 < *(_DWORD *)(v134 + 4) );
              v19 = v160;
              v111 = v164;
              v11 = v163;
            }
            v113 = (char *)VirtualAddress + v167;
            VirtualAddress = v113;
          }
        }
        if ( v171 && v11 )
        {
          *((_QWORD *)v111 + 6) = v113;
          v136 = VirtualAddress;
          *(_OWORD *)v113 = *(_OWORD *)v11;
          *((_OWORD *)v113 + 1) = *(_OWORD *)(v11 + 16);
          v137 = v157;
          v138 = (char *)VirtualAddress + 80;
          VirtualAddress = (char *)VirtualAddress + 80;
          if ( (_DWORD)v157 && *(_DWORD *)(v11 + 32) )
          {
            v136[5] = v138;
            v139 = v137;
            *((_DWORD *)v136 + 8) = *(_DWORD *)(v11 + 32);
            memmove(VirtualAddress, *(const void **)(v11 + 40), v137);
            v140 = (char *)VirtualAddress + v139;
            VirtualAddress = (char *)VirtualAddress + v139;
          }
          else
          {
            v136[5] = 0LL;
            *((_DWORD *)v136 + 8) = 0;
            v140 = (char *)VirtualAddress;
          }
          v141 = HIDWORD(v157);
          if ( HIDWORD(v157) && *(_DWORD *)(v11 + 48) )
          {
            v136[7] = v140;
            v142 = v141;
            *((_DWORD *)v136 + 12) = *(_DWORD *)(v11 + 48);
            memmove(VirtualAddress, *(const void **)(v11 + 56), v141);
            v143 = (char *)VirtualAddress + v142;
            VirtualAddress = (char *)VirtualAddress + v142;
          }
          else
          {
            v136[7] = 0LL;
            *((_DWORD *)v136 + 12) = 0;
            v143 = (char *)VirtualAddress;
          }
          v144 = v158;
          if ( (_DWORD)v158 && *(_DWORD *)(v11 + 64) )
          {
            v136[9] = v143;
            v145 = v144;
            *((_DWORD *)v136 + 16) = *(_DWORD *)(v11 + 64);
            memmove(VirtualAddress, *(const void **)(v11 + 72), v144);
            v113 = (char *)VirtualAddress + v145;
            VirtualAddress = (char *)VirtualAddress + v145;
          }
          else
          {
            v136[9] = 0LL;
            *((_DWORD *)v136 + 16) = 0;
            v113 = (char *)VirtualAddress;
          }
        }
        if ( v169 )
        {
          v146 = v162;
          if ( v162 )
          {
            *((_QWORD *)v111 + 7) = v113;
            v147 = VirtualAddress;
            *(_OWORD *)v113 = *(_OWORD *)v146;
            *((_OWORD *)v113 + 1) = *(_OWORD *)(v146 + 16);
            *((_OWORD *)v113 + 2) = *(_OWORD *)(v146 + 32);
            *((_OWORD *)v113 + 3) = *(_OWORD *)(v146 + 48);
            *((_QWORD *)v113 + 8) = *(_QWORD *)(v146 + 64);
            v148 = HIDWORD(v158);
            v149 = (char *)VirtualAddress + 72;
            VirtualAddress = (char *)VirtualAddress + 72;
            if ( HIDWORD(v158) && *(_DWORD *)(v146 + 48) )
            {
              v147[7] = v149;
              v150 = v148;
              *((_DWORD *)v147 + 12) = *(_DWORD *)(v146 + 48);
              memmove(VirtualAddress, *(const void **)(v146 + 56), v148);
              v146 = v162;
              v151 = (char *)VirtualAddress + v150;
              VirtualAddress = (char *)VirtualAddress + v150;
            }
            else
            {
              v147[7] = 0LL;
              *((_DWORD *)v147 + 12) = 0;
              v151 = (char *)VirtualAddress;
            }
            v152 = v159;
            if ( v159 && *(_DWORD *)(v146 + 32) )
            {
              v147[5] = v151;
              *((_DWORD *)v147 + 8) = *(_DWORD *)(v146 + 32);
              memmove(VirtualAddress, *(const void **)(v146 + 40), v152);
            }
            else
            {
              v147[5] = 0LL;
              *((_DWORD *)v147 + 8) = 0;
            }
          }
        }
      }
    }
  }
  return v19;
}
