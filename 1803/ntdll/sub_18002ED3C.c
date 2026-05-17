/*
 * XREFs of sub_18002ED3C @ 0x18002ED3C
 * Callers:
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 *     RtlNewSecurityObjectEx @ 0x18007BD00 (RtlNewSecurityObjectEx.c)
 *     RtlNewSecurityObject @ 0x180088630 (RtlNewSecurityObject.c)
 *     RtlCreateUserSecurityObject @ 0x1800D1F40 (RtlCreateUserSecurityObject.c)
 *     RtlNewInstanceSecurityObject @ 0x1800D1FE0 (RtlNewInstanceSecurityObject.c)
 *     RtlNewSecurityObjectWithMultipleInheritance @ 0x1800D2240 (RtlNewSecurityObjectWithMultipleInheritance.c)
 * Callees:
 *     sub_180002C80 @ 0x180002C80 (sub_180002C80.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_18002E238 @ 0x18002E238 (sub_18002E238.c)
 *     sub_18002E668 @ 0x18002E668 (sub_18002E668.c)
 *     sub_18002EC40 @ 0x18002EC40 (sub_18002EC40.c)
 *     RtlCreateSecurityDescriptor @ 0x18002ED10 (RtlCreateSecurityDescriptor.c)
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 *     sub_1800300BC @ 0x1800300BC (sub_1800300BC.c)
 *     RtlCreateAcl @ 0x180030680 (RtlCreateAcl.c)
 *     RtlFindAceByType @ 0x1800306C0 (RtlFindAceByType.c)
 *     RtlSidDominates @ 0x180043C60 (RtlSidDominates.c)
 *     sub_180043FA0 @ 0x180043FA0 (sub_180043FA0.c)
 *     sub_180044394 @ 0x180044394 (sub_180044394.c)
 *     RtlAddProcessTrustLabelAce @ 0x18006BD70 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddMandatoryAce @ 0x18006C310 (RtlAddMandatoryAce.c)
 *     sub_180078B08 @ 0x180078B08 (sub_180078B08.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x18009AAC0 (ZwAccessCheck.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x18009AEE0 (ZwQueryInformationToken.c)
 *     ZwDuplicateToken @ 0x18009B300 (ZwDuplicateToken.c)
 *     ZwPrivilegeCheck @ 0x18009D0B0 (ZwPrivilegeCheck.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800E0618 @ 0x1800E0618 (sub_1800E0618.c)
 *     sub_1800E1800 @ 0x1800E1800 (sub_1800E1800.c)
 */

__int64 __fastcall sub_18002ED3C(
        __int64 a1,
        _BYTE *a2,
        __int64 *a3,
        __int64 a4,
        int a5,
        char a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  _BYTE *v10; // rsi
  void *v11; // rbx
  void *v12; // rdi
  __int64 result; // rax
  int v14; // eax
  __int16 v15; // r10
  __int64 v16; // r8
  unsigned int v17; // edx
  _BYTE *v18; // rcx
  void *v19; // rcx
  __int64 v20; // rbx
  _BYTE *v21; // rax
  void *v22; // rax
  int v23; // eax
  int v24; // edi
  int v25; // eax
  int v26; // r9d
  int v27; // r8d
  int v28; // r10d
  __int64 v29; // rcx
  __int64 v30; // rdx
  int v31; // r8d
  int v32; // r9d
  int v33; // eax
  int v34; // ebx
  __int16 v35; // cx
  int v36; // r10d
  _BYTE *v37; // rdi
  unsigned int v38; // edx
  __int16 v39; // cx
  int v40; // eax
  int v41; // r8d
  int v42; // r9d
  __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // r8d
  int v46; // eax
  __int16 v47; // cx
  _BYTE *v48; // rcx
  __int64 AceByType; // rbx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  int v53; // r9d
  int v54; // edx
  int v55; // edi
  _BYTE *v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rdx
  unsigned __int8 v59; // cl
  unsigned __int8 *v60; // rdi
  unsigned int v61; // r8d
  __int64 v62; // rcx
  int v63; // eax
  __int16 v64; // si
  int v65; // r9d
  __int64 v66; // rdi
  void *v67; // rbx
  size_t v68; // rdi
  __int16 v69; // ax
  __int64 v70; // rdx
  __int64 v71; // rcx
  int v72; // eax
  int v73; // edx
  __int64 v74; // r8
  __int64 v75; // rdi
  __int64 v76; // rdx
  bool v77; // al
  int v78; // edi
  __int64 v79; // rsi
  unsigned __int8 *v80; // rsi
  int v81; // r9d
  int v82; // r8d
  __int16 v83; // bx
  unsigned int v84; // esi
  unsigned int v85; // ecx
  __int64 Heap; // rax
  __int64 v87; // rdx
  char *v88; // rbx
  unsigned __int16 *v89; // rdi
  __int64 v90; // rsi
  __int64 v91; // rcx
  __int64 v92; // rdi
  __int64 v93; // rdi
  int v94; // eax
  char *v95; // rbx
  __int64 v96; // rdi
  __int64 v97; // rax
  __int64 v98; // rax
  int v99; // eax
  unsigned __int16 *v100; // rdi
  __int64 v101; // rcx
  unsigned __int64 v102; // r8
  unsigned __int64 v103; // r8
  __int16 v104; // cx
  void *v105; // rax
  void *v106; // rcx
  unsigned __int8 *v107; // rax
  _BYTE *v108; // rcx
  __int64 v109; // rax
  int v110; // edi
  int v111; // esi
  __int64 v112; // rdx
  void *v113; // rdi
  int v114; // eax
  int Acl; // [rsp+90h] [rbp-80h] BYREF
  char v116; // [rsp+94h] [rbp-7Ch] BYREF
  unsigned __int8 v117; // [rsp+95h] [rbp-7Bh]
  char v118; // [rsp+96h] [rbp-7Ah]
  char v119; // [rsp+97h] [rbp-79h]
  void *v120; // [rsp+98h] [rbp-78h]
  char v121; // [rsp+A0h] [rbp-70h] BYREF
  char v122; // [rsp+A1h] [rbp-6Fh]
  char v123[2]; // [rsp+A2h] [rbp-6Eh] BYREF
  int v124; // [rsp+A4h] [rbp-6Ch]
  __int64 v125; // [rsp+A8h] [rbp-68h]
  char v126; // [rsp+B0h] [rbp-60h] BYREF
  char v127; // [rsp+B1h] [rbp-5Fh] BYREF
  char v128; // [rsp+B2h] [rbp-5Eh]
  char v129; // [rsp+B3h] [rbp-5Dh]
  char v130; // [rsp+B4h] [rbp-5Ch]
  int v131; // [rsp+B8h] [rbp-58h] BYREF
  _DWORD v132[3]; // [rsp+BCh] [rbp-54h] BYREF
  char v133; // [rsp+C8h] [rbp-48h] BYREF
  char v134; // [rsp+C9h] [rbp-47h]
  char v135[2]; // [rsp+CAh] [rbp-46h] BYREF
  int v136; // [rsp+CCh] [rbp-44h] BYREF
  __int16 v137; // [rsp+D0h] [rbp-40h]
  bool v138; // [rsp+D2h] [rbp-3Eh]
  int v139; // [rsp+D4h] [rbp-3Ch] BYREF
  void *v140; // [rsp+D8h] [rbp-38h]
  _BYTE *v141; // [rsp+E0h] [rbp-30h] BYREF
  unsigned int v142; // [rsp+E8h] [rbp-28h]
  void *v143; // [rsp+F0h] [rbp-20h]
  __int64 v144; // [rsp+F8h] [rbp-18h]
  __int64 v145; // [rsp+100h] [rbp-10h]
  int v146; // [rsp+108h] [rbp-8h] BYREF
  void *Src; // [rsp+110h] [rbp+0h] BYREF
  void *v148; // [rsp+118h] [rbp+8h]
  unsigned __int8 *v149; // [rsp+120h] [rbp+10h] BYREF
  __int64 v150; // [rsp+128h] [rbp+18h]
  int v151; // [rsp+130h] [rbp+20h]
  int v152; // [rsp+134h] [rbp+24h] BYREF
  int v153; // [rsp+138h] [rbp+28h] BYREF
  __int64 v154; // [rsp+140h] [rbp+30h]
  __int64 v155; // [rsp+148h] [rbp+38h]
  __int64 v156; // [rsp+150h] [rbp+40h]
  size_t Size; // [rsp+158h] [rbp+48h] BYREF
  __int64 v158; // [rsp+160h] [rbp+50h]
  unsigned __int64 v159; // [rsp+168h] [rbp+58h] BYREF
  void *v160; // [rsp+170h] [rbp+60h] BYREF
  __int64 v161; // [rsp+178h] [rbp+68h]
  __int64 v162; // [rsp+180h] [rbp+70h]
  __int64 v163; // [rsp+188h] [rbp+78h]
  unsigned __int8 *v164; // [rsp+190h] [rbp+80h] BYREF
  __int64 v165; // [rsp+198h] [rbp+88h]
  __int64 v166; // [rsp+1A0h] [rbp+90h] BYREF
  void **v167; // [rsp+1A8h] [rbp+98h] BYREF
  int v168; // [rsp+1B0h] [rbp+A0h] BYREF
  __int64 *v169; // [rsp+1B8h] [rbp+A8h] BYREF
  void **v170; // [rsp+1C0h] [rbp+B0h] BYREF
  __int64 *v171; // [rsp+1C8h] [rbp+B8h] BYREF
  __int64 *v172; // [rsp+1D0h] [rbp+C0h] BYREF
  __int64 *v173; // [rsp+1D8h] [rbp+C8h] BYREF
  __int64 *v174; // [rsp+1E0h] [rbp+D0h] BYREF
  unsigned __int8 *v175; // [rsp+1E8h] [rbp+D8h] BYREF
  unsigned __int8 *v176; // [rsp+1F0h] [rbp+E0h]
  void *v177; // [rsp+1F8h] [rbp+E8h] BYREF
  _BYTE *v178; // [rsp+200h] [rbp+F0h]
  __int64 *v179; // [rsp+208h] [rbp+F8h]
  int v180; // [rsp+210h] [rbp+100h] BYREF
  __int64 v181; // [rsp+218h] [rbp+108h]
  __int64 v182; // [rsp+220h] [rbp+110h]
  int v183; // [rsp+228h] [rbp+118h]
  __int64 v184; // [rsp+230h] [rbp+120h]
  _DWORD *v185; // [rsp+238h] [rbp+128h]
  _BYTE v186[40]; // [rsp+240h] [rbp+130h] BYREF
  int v187; // [rsp+268h] [rbp+158h] BYREF
  int v188; // [rsp+26Ch] [rbp+15Ch]
  __int64 v189; // [rsp+270h] [rbp+160h]
  int v190; // [rsp+278h] [rbp+168h]
  _DWORD v191[2]; // [rsp+280h] [rbp+170h] BYREF
  __int16 v192; // [rsp+288h] [rbp+178h]
  char v193[24]; // [rsp+290h] [rbp+180h] BYREF
  unsigned int v194; // [rsp+2A8h] [rbp+198h]
  int v195; // [rsp+2ACh] [rbp+19Ch]
  _BYTE v196[96]; // [rsp+2D0h] [rbp+1C0h] BYREF
  _BYTE v197[128]; // [rsp+330h] [rbp+220h] BYREF

  v144 = a9;
  v10 = a2;
  v165 = a10;
  v11 = 0LL;
  v159 = 0LL;
  v176 = v197;
  v12 = 0LL;
  v156 = a1;
  v178 = a2;
  *(_QWORD *)&v132[1] = NtCurrentPeb()->ProcessHeap;
  v158 = a4;
  v179 = a3;
  v145 = a8;
  v120 = 0LL;
  v141 = 0LL;
  v149 = 0LL;
  v118 = 0;
  v128 = 0;
  v130 = 0;
  v132[0] = 0;
  Src = 0LL;
  v160 = 0LL;
  v119 = 0;
  v122 = 0;
  v116 = 0;
  v133 = 0;
  v135[0] = 0;
  v123[0] = 0;
  LOBYTE(v151) = 0;
  v127 = 0;
  v163 = 0LL;
  v161 = 0LL;
  v148 = 0LL;
  v155 = 0LL;
  v150 = 0LL;
  v125 = 0LL;
  v152 = 0;
  v162 = 0LL;
  v154 = 0LL;
  v175 = 0LL;
  v177 = 0LL;
  v117 = 0;
  v126 = 1;
  v164 = 0LL;
  v129 = 0;
  LOBYTE(v142) = 1;
  v167 = 0LL;
  v170 = 0LL;
  v171 = 0LL;
  v174 = 0LL;
  v169 = 0LL;
  v172 = 0LL;
  v173 = 0LL;
  if ( a8 )
  {
    result = ZwQueryInformationToken(a8, 10LL, v193, 56LL, &v146);
    if ( (int)result < 0 )
      return result;
    v142 = v194;
    if ( v194 == 2 && v195 < 1 )
      return 3221225637LL;
  }
  if ( !v10 )
  {
    RtlCreateSecurityDescriptor(v186, 1);
    v10 = v186;
  }
  v14 = *((unsigned __int16 *)v10 + 1);
  Size = (size_t)v10;
  v15 = v14 & 0x80;
  v137 = v15;
  LOBYTE(v14) = (v14 & 0x40) != 0;
  v138 = v15 != 0;
  v146 = v14;
  if ( v145 || v15 )
  {
    result = sub_18002E238(
               v145,
               v15 != 0,
               (unsigned __int64 *)&v167,
               (unsigned __int64 *)&v170,
               (unsigned __int64 *)&v171,
               (unsigned __int64 *)&v172,
               (unsigned __int64 *)&v174,
               (unsigned __int64 *)&v169,
               (unsigned __int64 *)&v173);
    if ( (int)result < 0 )
      return result;
    v11 = *v167;
    v12 = *v170;
    v150 = *v171;
    v163 = *v174;
    v161 = *v169;
    if ( v172 )
      v148 = (void *)*v172;
    else
      v148 = 0LL;
    v15 = v137;
    if ( v173 )
    {
      v16 = *v173;
      v155 = *v173;
    }
    else
    {
      v16 = 0LL;
      v155 = 0LL;
    }
  }
  else
  {
    v16 = 0LL;
  }
  v17 = *((unsigned __int16 *)v10 + 1);
  if ( (v17 & 0x8000u) != 0 )
  {
    if ( !*((_DWORD *)v10 + 1) )
      goto LABEL_15;
    v18 = &v10[*((unsigned int *)v10 + 1)];
  }
  else
  {
    v18 = (_BYTE *)*((_QWORD *)v10 + 1);
  }
  v140 = v18;
  if ( v18 )
  {
    v20 = v156;
    v122 = 1;
    goto LABEL_20;
  }
LABEL_15:
  if ( (a7 & 0x20) != 0 )
  {
    v20 = v156;
    if ( v156 )
    {
      if ( *(__int16 *)(v156 + 2) >= 0 )
      {
        v106 = *(void **)(v156 + 8);
      }
      else
      {
        if ( !*(_DWORD *)(v156 + 4) )
          goto LABEL_283;
        v106 = (void *)(v156 + *(unsigned int *)(v156 + 4));
      }
      v140 = v106;
      v122 = 1;
      if ( v106 )
        goto LABEL_20;
    }
LABEL_283:
    v34 = -1073741734;
LABEL_285:
    Acl = v34;
    goto LABEL_286;
  }
  v19 = v148;
  if ( !v15 )
    v19 = v11;
  v140 = v19;
  if ( !v19 )
  {
    v34 = -1073741700;
    goto LABEL_285;
  }
  v20 = v156;
LABEL_20:
  if ( (v17 & 0x8000) != 0 )
  {
    if ( !*((_DWORD *)v10 + 2) )
      goto LABEL_23;
    v21 = &v10[*((unsigned int *)v10 + 2)];
  }
  else
  {
    v21 = (_BYTE *)*((_QWORD *)v10 + 2);
  }
  v143 = v21;
  if ( v21 )
    goto LABEL_27;
LABEL_23:
  if ( (a7 & 0x40) != 0 )
  {
    if ( !v20 )
      goto LABEL_284;
    if ( *(__int16 *)(v20 + 2) >= 0 )
    {
      v22 = *(void **)(v20 + 16);
    }
    else
    {
      if ( !*(_DWORD *)(v20 + 8) )
        goto LABEL_284;
      v22 = (void *)(v20 + *(unsigned int *)(v20 + 8));
    }
  }
  else
  {
    v22 = v12;
    if ( v15 )
      v22 = (void *)v16;
  }
  v143 = v22;
  if ( !v22 )
  {
LABEL_284:
    v34 = -1073741733;
    goto LABEL_285;
  }
LABEL_27:
  v23 = a7 >> 2;
  LOBYTE(v23) = (a7 & 4) != 0;
  v139 = v23;
  v24 = a7 & 2;
  v134 = v24 != 0;
  v25 = (v17 >> 2) & 8;
  v26 = (v17 >> 1) & 0x400;
  v27 = (v17 >> 1) & 0x1000;
  v28 = (v17 & 0x10) != 0 ? 4 : 0;
  if ( (v17 & 0x10) == (_WORD)v120 )
  {
    LODWORD(v29) = 0;
  }
  else
  {
    LODWORD(v29) = 0;
    if ( (v17 & 0x8000u) == 0 )
    {
      v30 = *((_QWORD *)v10 + 3);
      goto LABEL_30;
    }
    if ( *((_DWORD *)v10 + 3) )
    {
      LODWORD(v30) = (_DWORD)v10 + *((_DWORD *)v10 + 3);
      goto LABEL_30;
    }
  }
  LODWORD(v30) = 0;
LABEL_30:
  if ( v20 && (*(_BYTE *)(v20 + 2) & 0x10) != 0 )
  {
    if ( *(__int16 *)(v20 + 2) >= 0 )
    {
      v29 = *(_QWORD *)(v20 + 24);
    }
    else if ( *(_DWORD *)(v20 + 12) )
    {
      LODWORD(v29) = v20 + *(_DWORD *)(v20 + 12);
    }
  }
  v31 = v26 | v27;
  v32 = v144;
  LOBYTE(v32) = a6;
  v33 = sub_1800300BC(
          v29,
          v30,
          v28 | v25 | (unsigned int)v31,
          v32,
          v24 != 0,
          v139,
          (__int64)v140,
          (__int64)v143,
          (__int64)v148,
          v155,
          v144,
          2,
          v158,
          a5,
          (__int64)&v141,
          (__int64)&v116,
          (__int64)&v136);
  Acl = v33;
  v34 = v33;
  if ( v33 >= 0 )
  {
    v35 = *((_WORD *)v10 + 1);
    v118 = 1;
    v124 = 2 * (v136 & 0x1400 | (2 * (v136 & 8 | 0x2004)));
LABEL_40:
    v37 = v141;
    v120 = v141;
    goto LABEL_41;
  }
  if ( v33 != -2147483637 )
  {
LABEL_286:
    v37 = v141;
    goto LABEL_287;
  }
  v35 = *((_WORD *)v10 + 1);
  v36 = 0x8000;
  if ( (a7 & 2) != 0 )
    v36 = 34816;
  v124 = v36;
  if ( (v35 & 0x30) != 0x30 )
    goto LABEL_40;
  if ( (v35 & 0x10) != 0 )
  {
    if ( v35 >= 0 )
    {
      v37 = (_BYTE *)*((_QWORD *)v10 + 3);
      goto LABEL_298;
    }
    if ( *((_DWORD *)v10 + 3) )
    {
      v37 = &v10[*((unsigned int *)v10 + 3)];
LABEL_298:
      v120 = v37;
      goto LABEL_299;
    }
  }
  v37 = 0LL;
  v120 = 0LL;
LABEL_299:
  v141 = v37;
  v116 = 1;
  v124 = v35 & 0x2000 | 0x10 | v36;
LABEL_41:
  v38 = (unsigned __int16)v35;
  v39 = v35 & 0x10;
  v40 = (v38 >> 2) & 8;
  v41 = (v38 >> 1) & 0x400;
  v42 = v39 != 0 ? 4 : 0;
  if ( !v39 )
  {
LABEL_42:
    LODWORD(v43) = 0;
    goto LABEL_43;
  }
  if ( (v38 & 0x8000u) == 0 )
  {
    v43 = *((_QWORD *)v10 + 3);
  }
  else
  {
    if ( !*((_DWORD *)v10 + 3) )
      goto LABEL_42;
    LODWORD(v43) = (_DWORD)v10 + *((_DWORD *)v10 + 3);
  }
LABEL_43:
  if ( !v156 || (*(_BYTE *)(v156 + 2) & 0x10) == 0 )
    goto LABEL_208;
  if ( *(__int16 *)(v156 + 2) >= 0 )
  {
    v44 = *(_QWORD *)(v156 + 24);
    goto LABEL_48;
  }
  if ( *(_DWORD *)(v156 + 12) )
    LODWORD(v44) = v156 + *(_DWORD *)(v156 + 12);
  else
LABEL_208:
    LODWORD(v44) = 0;
LABEL_48:
  v45 = v42 | v40 | v41;
  LOBYTE(v42) = a6;
  v46 = sub_1800300BC(
          v44,
          v43,
          v45,
          v42,
          v134,
          v139,
          (__int64)v140,
          (__int64)v143,
          (__int64)v148,
          v155,
          v144,
          2,
          v158,
          a5,
          (__int64)&v149,
          (__int64)&v133,
          (__int64)&v152);
  Acl = v46;
  v34 = v46;
  if ( v46 >= 0 )
  {
    v128 = 1;
  }
  else
  {
    if ( v46 != -2147483637 )
      goto LABEL_287;
    v47 = *((_WORD *)v10 + 1);
    if ( (v47 & 0x30) == 0x30 )
    {
      if ( (v47 & 0x10) != 0 )
      {
        if ( v47 >= 0 )
        {
          v107 = (unsigned __int8 *)*((_QWORD *)v10 + 3);
        }
        else if ( *((_DWORD *)v10 + 3) )
        {
          v107 = &v10[*((unsigned int *)v10 + 3)];
        }
        else
        {
          v107 = 0LL;
        }
        v149 = v107;
      }
      else
      {
        v149 = 0LL;
      }
    }
  }
  v131 = 0;
  do
  {
    if ( (v10[2] & 0x10) == 0 )
    {
LABEL_53:
      v48 = 0LL;
      goto LABEL_54;
    }
    if ( *((__int16 *)v10 + 1) >= 0 )
    {
      v48 = (_BYTE *)*((_QWORD *)v10 + 3);
    }
    else
    {
      if ( !*((_DWORD *)v10 + 3) )
        goto LABEL_53;
      v48 = &v10[*((unsigned int *)v10 + 3)];
    }
LABEL_54:
    AceByType = RtlFindAceByType(v48, 20LL, &v131);
    v51 = AceByType + 8;
    if ( !AceByType )
      v51 = 0LL;
    if ( v51 && !sub_180002C80(v161, v51, v50, &Acl) )
    {
      v34 = -1073741790;
LABEL_310:
      Acl = v34;
      goto LABEL_287;
    }
    ++v131;
  }
  while ( AceByType );
  if ( (a7 & 0x800) == 0 )
  {
LABEL_59:
    v164 = v149;
    goto LABEL_60;
  }
  v131 = 0;
  while ( 2 )
  {
    if ( (v10[2] & 0x10) == 0 )
      goto LABEL_316;
    if ( *((__int16 *)v10 + 1) >= 0 )
    {
      v108 = (_BYTE *)*((_QWORD *)v10 + 3);
    }
    else
    {
      if ( *((_DWORD *)v10 + 3) )
      {
        v108 = &v10[*((unsigned int *)v10 + 3)];
        goto LABEL_318;
      }
LABEL_316:
      v108 = 0LL;
    }
LABEL_318:
    v109 = RtlFindAceByType(v108, 20LL, &v131);
    ++v131;
    if ( v109 )
    {
      if ( (*(_BYTE *)(v109 + 1) & 8) == 0 )
      {
        v110 = *(_DWORD *)(v109 + 4);
        v111 = v109 + 8;
        v131 = *(unsigned __int8 *)(v109 + 1);
        if ( !v165 || (v110 & *(_DWORD *)(v165 + 4)) != v110 || v109 == -8 )
        {
          v34 = -1073741811;
          goto LABEL_325;
        }
        goto LABEL_330;
      }
      continue;
    }
    break;
  }
  if ( !v161 )
    goto LABEL_59;
  if ( !v165 )
  {
    v34 = -1073741811;
    goto LABEL_310;
  }
  v110 = *(_DWORD *)(v165 + 4);
  v111 = v161;
  v131 = 0;
LABEL_330:
  Acl = RtlCreateAcl(v196, 88LL, 2LL);
  v34 = Acl;
  if ( Acl < 0 )
    goto LABEL_279;
  Acl = RtlAddProcessTrustLabelAce((unsigned int)v196, 2, v131, v111, 20, v110);
  v34 = Acl;
  if ( Acl < 0 )
    goto LABEL_279;
  v10 = (_BYTE *)Size;
  Acl = sub_1800E0618(
          (_DWORD)v149,
          (*(_WORD *)(Size + 2) & 0x800 | (*(unsigned __int16 *)(Size + 2) >> 1) & 0x18u) >> 1,
          (unsigned int)v196,
          4,
          (__int64)v140,
          (__int64)v143,
          v144,
          2,
          (__int64)&v164,
          (__int64)&v136);
  v34 = Acl;
  if ( Acl < 0 )
    goto LABEL_279;
  v129 = 1;
LABEL_60:
  if ( (v10[2] & 0x10) != 0 )
  {
    if ( *((__int16 *)v10 + 1) >= 0 )
    {
      v52 = *((_QWORD *)v10 + 3);
    }
    else
    {
      if ( !*((_DWORD *)v10 + 3) )
        goto LABEL_61;
      v52 = (__int64)&v10[*((unsigned int *)v10 + 3)];
    }
  }
  else
  {
LABEL_61:
    v52 = 0LL;
  }
  Acl = sub_18002EC40(v52, v161);
  v34 = Acl;
  if ( Acl < 0 )
    goto LABEL_279;
  v54 = (a7 >> 8) & 1 | 2;
  if ( (a7 & 0x200) == 0 )
    v54 = (a7 >> 8) & 1;
  v55 = v54 | 4;
  if ( (a7 & 0x400) == 0 )
    v55 = v54;
  if ( v55 )
  {
    v57 = 0LL;
    goto LABEL_71;
  }
  if ( (v10[2] & 0x10) == 0 )
    goto LABEL_69;
  if ( *((__int16 *)v10 + 1) >= 0 )
  {
    v56 = (_BYTE *)*((_QWORD *)v10 + 3);
  }
  else if ( *((_DWORD *)v10 + 3) )
  {
    v56 = &v10[*((unsigned int *)v10 + 3)];
  }
  else
  {
LABEL_69:
    v56 = 0LL;
  }
  v57 = RtlFindAceByType(v56, 17LL, 0LL);
  v162 = v57;
  if ( v57 )
  {
    v59 = *(_BYTE *)(v57 + 1);
    v58 = v57 + 8;
    v55 = *(_DWORD *)(v57 + 4);
    v154 = v57 + 8;
    v117 = v59;
    if ( v59 == 8 || (v59 & 0x10) != 0 )
    {
      v57 = 0LL;
      v58 = 0LL;
      v59 = 0;
      v162 = 0LL;
      v154 = 0LL;
      v55 = 0;
      v117 = 0;
    }
  }
  else
  {
LABEL_71:
    v58 = 0LL;
    v59 = 0;
  }
  if ( (v59 & 8) != 0 && *(_DWORD *)(v163 + 8) < 0x2000u )
  {
    v34 = -1073740730;
    goto LABEL_325;
  }
  if ( v55 )
  {
LABEL_197:
    if ( v57 )
      goto LABEL_76;
    if ( v145 )
    {
      v58 = v163;
      v154 = v163;
      v117 = 0;
      goto LABEL_76;
    }
    goto LABEL_337;
  }
  if ( v163 && *(_DWORD *)(v163 + 8) < 0x2000u )
  {
    v55 = 1;
    goto LABEL_197;
  }
LABEL_76:
  if ( !v58 )
  {
    v60 = 0LL;
    v176 = 0LL;
    goto LABEL_78;
  }
  Acl = RtlCreateAcl(v197, 128LL, 2LL);
  v34 = Acl;
  if ( Acl < 0 )
    goto LABEL_279;
  Acl = RtlAddMandatoryAce((unsigned int)v197, 2, v117, v154, 17, v55);
  v34 = Acl;
  if ( Acl < 0 )
    goto LABEL_279;
  v60 = v197;
LABEL_78:
  if ( (a7 & 0x700) != 0 )
  {
    v61 = 4;
  }
  else if ( !v162 && v60 )
  {
    v61 = 0;
  }
  else
  {
    v61 = (*((_WORD *)v10 + 1) & 0x2800 | (*((unsigned __int16 *)v10 + 1) >> 1) & 0x18u) >> 1;
  }
  if ( !v156 || (*(_BYTE *)(v156 + 2) & 0x10) == 0 )
    goto LABEL_209;
  if ( *(__int16 *)(v156 + 2) >= 0 )
  {
    v62 = *(_QWORD *)(v156 + 24);
  }
  else
  {
    if ( *(_DWORD *)(v156 + 12) )
    {
      LODWORD(v62) = v156 + *(_DWORD *)(v156 + 12);
      goto LABEL_87;
    }
LABEL_209:
    LODWORD(v62) = 0;
  }
LABEL_87:
  LOBYTE(v53) = a6;
  v63 = sub_1800300BC(
          v62,
          (_DWORD)v60,
          v61,
          v53,
          1,
          0,
          (__int64)v140,
          (__int64)v143,
          (__int64)v148,
          v155,
          v144,
          3,
          v158,
          a5,
          (__int64)&v175,
          (__int64)v135,
          (__int64)&v136);
  Acl = v63;
  v34 = v63;
  if ( v63 != -2147483637 )
  {
    if ( v63 >= 0 )
    {
      v60 = v175;
      v64 = v136;
      goto LABEL_89;
    }
    goto LABEL_279;
  }
  v64 = 0;
  v136 = 0;
LABEL_89:
  v34 = sub_18002E668((unsigned __int8 *)v120, v60, v149, v149, v164, v149, (unsigned __int64 *)&v177, v132);
  Acl = v34;
  v152 = ((v124 & 0x2000) << 17) | v132[0];
  if ( !v60 || v60 == v176 )
  {
    v66 = *(_QWORD *)&v132[1];
  }
  else
  {
    v103 = (unsigned __int64)v60;
    v66 = *(_QWORD *)&v132[1];
    RtlFreeHeap(*(__int64 *)&v132[1], 0, v103);
  }
  if ( v34 < 0 )
    goto LABEL_279;
  v67 = v177;
  if ( v177 )
  {
    if ( v118 && v120 )
      RtlFreeHeap(v66, 0, (unsigned __int64)v120);
    v120 = v67;
    v141 = v67;
    v37 = v67;
    v130 = 1;
    v124 |= 2 * (v64 & 0x1400 | (2 * (v64 & 8 | 4)));
  }
  else
  {
    v37 = v120;
  }
  v132[0] = a7 & 8;
  if ( (a7 & 8) != 0 || ((v97 = RtlFindAceByType(v37, 17LL, 0LL)) != 0 ? (v98 = v97 + 8) : (v98 = v154), !v98) )
  {
LABEL_95:
    v68 = Size;
    v69 = *(_WORD *)(Size + 2);
    if ( (v69 & 4) == 0 )
      goto LABEL_99;
    if ( v69 >= 0 )
    {
      v70 = *(_QWORD *)(Size + 32);
      goto LABEL_100;
    }
    if ( *(_DWORD *)(Size + 16) )
      LODWORD(v70) = Size + *(_DWORD *)(Size + 16);
    else
LABEL_99:
      LODWORD(v70) = 0;
LABEL_100:
    if ( v156 && (*(_BYTE *)(v156 + 2) & 4) != 0 )
    {
      if ( *(__int16 *)(v156 + 2) >= 0 )
      {
        v71 = *(_QWORD *)(v156 + 32);
LABEL_105:
        LOBYTE(v65) = a6;
        v72 = sub_1800300BC(
                v71,
                v70,
                v69 & 0x140C,
                v65,
                a7 & 1,
                v139,
                (__int64)v140,
                (__int64)v143,
                (__int64)v148,
                v155,
                v144,
                1,
                v158,
                a5,
                (__int64)&Src,
                (__int64)v123,
                (__int64)&v136);
        Acl = v72;
        v34 = v72;
        if ( v72 >= 0 )
        {
          v119 = 1;
          v124 |= v136 & 0x1408 | 4;
LABEL_107:
          if ( (a7 & 0x1000) != 0 || !v178 || (v75 = v145) == 0 || !v156 )
          {
LABEL_117:
            if ( (a7 & 1) != 0 && !Src )
              v124 |= 0x1000u;
            v77 = !v152 || (v152 & 0x1B0) != v152;
            v78 = v132[0];
            v79 = v145;
            if ( !v116 || v132[0] || !v77 )
            {
LABEL_123:
              if ( (_BYTE)v151 && !v78 )
              {
                if ( !v79 )
                  goto LABEL_337;
                v150 = 32LL;
                v187 = 1;
                v188 = 1;
                v189 = 32LL;
                v190 = 0;
                Acl = ZwPrivilegeCheck(v79, &v187, &v121);
                v34 = Acl;
                if ( Acl < 0 )
                  goto LABEL_279;
                if ( !v121 )
                  goto LABEL_354;
              }
              if ( !v122 || (a7 & 0x10) != 0 )
              {
                v80 = (unsigned __int8 *)v140;
                goto LABEL_126;
              }
              if ( v79 )
              {
                v80 = (unsigned __int8 *)v140;
                LOBYTE(v74) = v138;
                if ( !(unsigned __int8)sub_180044394(v145, v140, v74, &v153) )
                {
                  v34 = v153;
                  goto LABEL_325;
                }
LABEL_126:
                if ( v137 && v123[0] )
                {
                  v113 = Src;
                  LOBYTE(v73) = v146;
                  v114 = sub_1800E1800((_DWORD)Src, v73, (_DWORD)v148, (unsigned int)&v160, (__int64)&v127);
                  Acl = v114;
                  v34 = v114;
                  if ( v114 < 0 )
                    goto LABEL_279;
                  if ( v119 && v113 )
                    RtlFreeHeap(*(__int64 *)&v132[1], 0, (unsigned __int64)v113);
                  Src = v160;
                  v160 = 0LL;
                }
                v81 = 4 * v80[1] + 8;
                LODWORD(Size) = v81;
                if ( v143 )
                  v82 = 4 * *((unsigned __int8 *)v143 + 1) + 8;
                else
                  v82 = 0;
                v83 = v124;
                v132[0] = v82;
                v146 = v124 & 0x10;
                if ( (v124 & 0x10) != 0 && v120 )
                  v84 = (*((unsigned __int16 *)v120 + 1) + 3) & 0xFFFFFFFC;
                else
                  v84 = 0;
                v153 = v124 & 4;
                if ( (v124 & 4) != 0 && Src )
                  v85 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
                else
                  v85 = 0;
                v142 = v85;
                Heap = RtlAllocateHeap(*(__int64 *)&v132[1], dword_18015C294 + 1310720, v81 + 20 + v85 + v84 + v82);
                v125 = Heap;
                v87 = Heap;
                if ( !Heap )
                {
                  v34 = -1073741801;
                  goto LABEL_325;
                }
                *(_QWORD *)Heap = 0LL;
                *(_QWORD *)(Heap + 8) = 0LL;
                *(_DWORD *)(Heap + 16) = 0;
                *(_WORD *)(Heap + 2) |= v83;
                v88 = (char *)(Heap + 20);
                *(_BYTE *)Heap = 1;
                if ( v146 )
                {
                  v100 = (unsigned __int16 *)v120;
                  if ( v120 )
                  {
                    memmove(v88, v120, *((unsigned __int16 *)v120 + 1));
                    if ( !v118 )
                      sub_180078B08(v88, v144);
                    v87 = v125;
                    *(_DWORD *)(v125 + 12) = (_DWORD)v88 - v125;
                    v101 = v100[1];
                    if ( v84 > (unsigned int)v101 )
                    {
                      memset(&v88[v101], 0, v84 - (unsigned int)v101);
                      v87 = v125;
                    }
                    v88 += v84;
                  }
                  else
                  {
                    *(_DWORD *)(Heap + 12) = 0;
                  }
                }
                if ( v153 )
                {
                  v89 = (unsigned __int16 *)Src;
                  if ( Src )
                  {
                    memmove(v88, Src, *((unsigned __int16 *)Src + 1));
                    if ( !v119 )
                      sub_180078B08(v88, v144);
                    v90 = v125;
                    *(_DWORD *)(v125 + 16) = (_DWORD)v88 - v125;
                    v91 = v89[1];
                    v92 = v142;
                    if ( v142 > (unsigned int)v91 )
                      memset(&v88[v91], 0, v142 - (unsigned int)v91);
                    v88 += v92;
                    goto LABEL_143;
                  }
                  *(_DWORD *)(v87 + 16) = 0;
                }
                v90 = v125;
LABEL_143:
                v93 = (unsigned int)Size;
                memmove(v88, v140, (unsigned int)Size);
                v94 = (_DWORD)v88 - v90;
                v95 = &v88[v93];
                *(_DWORD *)(v90 + 4) = v94;
                if ( v143 )
                {
                  memmove(v95, v143, v132[0]);
                  *(_DWORD *)(v90 + 8) = (_DWORD)v95 - v90;
                }
                v37 = v120;
                v34 = 0;
                Acl = 0;
                goto LABEL_146;
              }
LABEL_337:
              v34 = -1073741700;
LABEL_325:
              Acl = v34;
              goto LABEL_279;
            }
            if ( !v145 )
              goto LABEL_337;
            v187 = 1;
            v188 = 1;
            v150 = 8LL;
            v189 = 8LL;
            v190 = 0;
            Acl = ZwPrivilegeCheck(v145, &v187, &v121);
            v34 = Acl;
            if ( Acl >= 0 )
            {
              if ( !v121 )
              {
LABEL_354:
                v34 = -1073741727;
                goto LABEL_325;
              }
              goto LABEL_123;
            }
LABEL_279:
            v37 = v120;
            goto LABEL_287;
          }
          v168 = 0;
          v139 = 0;
          Acl = sub_18002ED3C(v156, 0, (unsigned int)&v159, v158, a5, a6, a7 | 1, v145, v144, v165);
          v34 = Acl;
          if ( Acl < 0 )
            goto LABEL_279;
          if ( (*(_BYTE *)(v159 + 2) & 4) != 0 )
          {
            if ( *(__int16 *)(v159 + 2) >= 0 )
            {
              v76 = *(_QWORD *)(v159 + 32);
LABEL_116:
              if ( (unsigned __int8)sub_180043FA0(16LL, v76) )
              {
                v166 = 0LL;
                LODWORD(Size) = 20;
                if ( (_BYTE)v142 != 1 )
                  goto LABEL_348;
                v192 = 1;
                v191[1] = 2;
                v185 = v191;
                v191[0] = 12;
                v180 = 48;
                v181 = 0LL;
                v183 = 0;
                v182 = 0LL;
                v184 = 0LL;
                Acl = ZwDuplicateToken(v75, 8LL, &v180, 0LL, 2, &v166);
                v34 = Acl;
                if ( Acl < 0 )
                  goto LABEL_279;
                v112 = v166;
                if ( !v166 )
LABEL_348:
                  v112 = v75;
                Acl = ZwAccessCheck(v159, v112, 0x40000LL, v144, &v187, &Size, &v168, &v139);
                v34 = Acl;
                if ( v166 )
                  ZwClose(v166);
                if ( v34 < 0 )
                  goto LABEL_279;
                v34 = v139;
                Acl = v139;
                if ( v139 < 0 )
                  goto LABEL_279;
              }
              goto LABEL_117;
            }
            if ( *(_DWORD *)(v159 + 16) )
            {
              v76 = v159 + *(unsigned int *)(v159 + 16);
              goto LABEL_116;
            }
          }
          v76 = 0LL;
          goto LABEL_116;
        }
        if ( v72 != -2147483637 )
          goto LABEL_279;
        v73 = v124;
        if ( (a7 & 1) != 0 )
        {
          v73 = v124 | 0x400;
          v124 |= 0x400u;
        }
        v104 = *(_WORD *)(v68 + 2);
        if ( (v104 & 0xC) != 0xC )
        {
          v105 = (void *)v150;
          if ( !v150 )
            goto LABEL_107;
          v73 |= 4u;
LABEL_246:
          v124 = v73;
          Src = v105;
          goto LABEL_107;
        }
        if ( (v104 & 4) != 0 )
        {
          if ( v104 >= 0 )
          {
            v105 = *(void **)(v68 + 32);
LABEL_277:
            v73 |= v104 & 0x1000 | 4;
            v123[0] = 1;
            goto LABEL_246;
          }
          if ( *(_DWORD *)(v68 + 16) )
          {
            v105 = (void *)(v68 + *(unsigned int *)(v68 + 16));
            goto LABEL_277;
          }
        }
        v105 = 0LL;
        goto LABEL_277;
      }
      if ( *(_DWORD *)(v156 + 16) )
      {
        LODWORD(v71) = v156 + *(_DWORD *)(v156 + 16);
        goto LABEL_105;
      }
    }
    LODWORD(v71) = 0;
    goto LABEL_105;
  }
  if ( !v145 )
  {
    v34 = -1073741700;
    goto LABEL_310;
  }
  Acl = RtlSidDominates(v163, v98, &v126);
  v34 = Acl;
  if ( Acl >= 0 )
  {
    v99 = (unsigned __int8)v151;
    if ( !v126 )
      v99 = 1;
    v151 = v99;
    goto LABEL_95;
  }
LABEL_287:
  v90 = v125;
LABEL_146:
  if ( v159 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v159);
    v37 = v141;
    v34 = Acl;
  }
  if ( v127 && v160 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v160);
    v37 = v141;
    v34 = Acl;
  }
  RtlFreeHeap(*(__int64 *)&v132[1], 0, (unsigned __int64)v167);
  RtlFreeHeap(*(__int64 *)&v132[1], 0, (unsigned __int64)v174);
  RtlFreeHeap(*(__int64 *)&v132[1], 0, (unsigned __int64)v169);
  RtlFreeHeap(*(__int64 *)&v132[1], 0, (unsigned __int64)v170);
  RtlFreeHeap(*(__int64 *)&v132[1], 0, (unsigned __int64)v171);
  if ( v172 )
    RtlFreeHeap(*(__int64 *)&v132[1], 0, (unsigned __int64)v172);
  if ( v173 )
    RtlFreeHeap(*(__int64 *)&v132[1], 0, (unsigned __int64)v173);
  if ( (v130 || v118) && v37 )
  {
    v102 = (unsigned __int64)v37;
    v96 = *(_QWORD *)&v132[1];
    RtlFreeHeap(*(__int64 *)&v132[1], 0, v102);
  }
  else
  {
    v96 = *(_QWORD *)&v132[1];
  }
  if ( v128 && v149 )
    RtlFreeHeap(v96, 0, (unsigned __int64)v149);
  if ( v164 && v129 )
    RtlFreeHeap(v96, 0, (unsigned __int64)v164);
  if ( v119 )
  {
    if ( Src )
      RtlFreeHeap(*(__int64 *)&v132[1], 0, (unsigned __int64)Src);
  }
  *v179 = v90;
  return (unsigned int)v34;
}
