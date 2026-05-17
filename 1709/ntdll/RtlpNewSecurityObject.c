/*
 * XREFs of RtlpNewSecurityObject @ 0x180053F0C
 * Callers:
 *     RtlNewSecurityObjectEx @ 0x180053E30 (RtlNewSecurityObjectEx.c)
 *     RtlpNewSecurityObject @ 0x180053F0C (RtlpNewSecurityObject.c)
 *     RtlNewSecurityObject @ 0x180085F70 (RtlNewSecurityObject.c)
 *     RtlNewSecurityObjectWithMultipleInheritance @ 0x18008E7C0 (RtlNewSecurityObjectWithMultipleInheritance.c)
 *     RtlCreateUserSecurityObject @ 0x1800D7EB0 (RtlCreateUserSecurityObject.c)
 *     RtlNewInstanceSecurityObject @ 0x1800D7F50 (RtlNewInstanceSecurityObject.c)
 * Callees:
 *     RtlpValidTrustSubjectContext @ 0x1800021CC (RtlpValidTrustSubjectContext.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlpValidFilterAclSubjectContext @ 0x180053E94 (RtlpValidFilterAclSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x180053F0C (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl @ 0x180055308 (RtlpInheritAcl.c)
 *     RtlCreateAcl @ 0x1800558B0 (RtlCreateAcl.c)
 *     RtlFindAceByType @ 0x180056510 (RtlFindAceByType.c)
 *     RtlpCombineAcls @ 0x1800569A0 (RtlpCombineAcls.c)
 *     RtlpGetDefaultsSubjectContext @ 0x180056F7C (RtlpGetDefaultsSubjectContext.c)
 *     RtlCreateSecurityDescriptor @ 0x1800574E0 (RtlCreateSecurityDescriptor.c)
 *     RtlpOwnerAcesPresent @ 0x1800575C4 (RtlpOwnerAcesPresent.c)
 *     RtlAddMandatoryAce @ 0x180057730 (RtlAddMandatoryAce.c)
 *     RtlpApplyAclToObject @ 0x1800578D8 (RtlpApplyAclToObject.c)
 *     RtlSidDominates @ 0x18005BFB0 (RtlSidDominates.c)
 *     RtlpValidOwnerSubjectContext @ 0x18005C080 (RtlpValidOwnerSubjectContext.c)
 *     RtlAddProcessTrustLabelAce @ 0x180087B20 (RtlAddProcessTrustLabelAce.c)
 *     RtlpComputeMergedAcl @ 0x18008EE24 (RtlpComputeMergedAcl.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x1800A00C0 (ZwAccessCheck.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A04E0 (NtQueryInformationToken.c)
 *     NtDuplicateToken @ 0x1800A0900 (NtDuplicateToken.c)
 *     ZwPrivilegeCheck @ 0x1800A2670 (ZwPrivilegeCheck.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlpCreateServerAcl @ 0x1800E6148 (RtlpCreateServerAcl.c)
 */

__int64 __fastcall RtlpNewSecurityObject(
        __int64 a1,
        _BYTE *a2,
        _QWORD *a3,
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
  __int16 v15; // r9
  __int64 **v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // edx
  _BYTE *v19; // rax
  void *v20; // rax
  __int64 v21; // rbx
  _BYTE *v22; // rax
  void *v23; // rax
  int v24; // eax
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
  __int16 v38; // dx
  int v39; // r9d
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // r8d
  int v43; // eax
  __int16 v44; // cx
  _BYTE *v45; // rcx
  __int64 AceByType; // rbx
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // r9d
  int v51; // edx
  int v52; // edi
  _BYTE *v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rdx
  unsigned __int8 v56; // cl
  _BYTE *v57; // rdi
  unsigned int v58; // r8d
  __int64 v59; // rcx
  int v60; // eax
  __int16 v61; // si
  int v62; // r9d
  __int64 v63; // rdi
  void *v64; // rbx
  _BYTE *v65; // rdi
  __int16 v66; // r8
  __int64 v67; // rdx
  __int64 v68; // rcx
  int v69; // eax
  int v70; // edx
  __int64 v71; // r8
  __int64 v72; // rdi
  __int64 v73; // rdx
  bool v74; // al
  int v75; // edi
  __int64 v76; // rsi
  unsigned __int8 *v77; // rsi
  int v78; // r8d
  int v79; // r9d
  __int16 v80; // bx
  unsigned int v81; // esi
  unsigned int v82; // ecx
  __int64 Heap; // rax
  _DWORD *v84; // rdx
  char *v85; // rbx
  unsigned __int16 *v86; // rdi
  __int64 v87; // rcx
  __int64 v88; // rdi
  __int64 v89; // rdi
  _DWORD *v90; // rsi
  int v91; // eax
  char *v92; // rbx
  __int64 v93; // rdi
  __int64 v94; // rax
  __int64 v95; // rax
  int v96; // eax
  unsigned __int16 *v97; // rdi
  __int64 v98; // rcx
  unsigned __int64 v99; // r8
  unsigned __int64 v100; // r8
  __int16 v101; // cx
  void *v102; // rax
  __int64 v103; // rdx
  _BYTE *v104; // rax
  __int64 v105; // rax
  _BYTE *v106; // rcx
  __int64 v107; // rax
  int v108; // edi
  int v109; // esi
  void *v110; // rdi
  int ServerAcl; // eax
  int Acl; // [rsp+90h] [rbp-80h] BYREF
  char v113; // [rsp+94h] [rbp-7Ch] BYREF
  unsigned __int8 v114; // [rsp+95h] [rbp-7Bh]
  char v115; // [rsp+96h] [rbp-7Ah]
  char v116; // [rsp+97h] [rbp-79h]
  void *v117; // [rsp+98h] [rbp-78h]
  char v118; // [rsp+A0h] [rbp-70h] BYREF
  char v119; // [rsp+A1h] [rbp-6Fh]
  char v120[2]; // [rsp+A2h] [rbp-6Eh] BYREF
  int v121; // [rsp+A4h] [rbp-6Ch]
  _DWORD *v122; // [rsp+A8h] [rbp-68h]
  char v123; // [rsp+B0h] [rbp-60h] BYREF
  char v124; // [rsp+B1h] [rbp-5Fh]
  char v125; // [rsp+B2h] [rbp-5Eh]
  char v126; // [rsp+B3h] [rbp-5Dh]
  char v127; // [rsp+B4h] [rbp-5Ch]
  char v128[3]; // [rsp+B5h] [rbp-5Bh] BYREF
  int v129; // [rsp+B8h] [rbp-58h] BYREF
  _DWORD v130[3]; // [rsp+BCh] [rbp-54h] BYREF
  _BYTE *v131; // [rsp+C8h] [rbp-48h] BYREF
  char v132; // [rsp+D0h] [rbp-40h] BYREF
  char v133; // [rsp+D1h] [rbp-3Fh]
  char v134; // [rsp+D2h] [rbp-3Eh] BYREF
  bool v135; // [rsp+D3h] [rbp-3Dh]
  __int16 v136; // [rsp+D4h] [rbp-3Ch]
  int v137; // [rsp+D8h] [rbp-38h] BYREF
  int v138; // [rsp+DCh] [rbp-34h] BYREF
  void *v139; // [rsp+E0h] [rbp-30h]
  void *Src; // [rsp+E8h] [rbp-28h] BYREF
  unsigned int v141; // [rsp+F0h] [rbp-20h]
  void *v142; // [rsp+F8h] [rbp-18h]
  __int64 v143; // [rsp+100h] [rbp-10h]
  int v144; // [rsp+108h] [rbp-8h] BYREF
  __int64 v145; // [rsp+110h] [rbp+0h]
  __int64 v146; // [rsp+118h] [rbp+8h] BYREF
  void *v147; // [rsp+120h] [rbp+10h]
  __int64 v148; // [rsp+128h] [rbp+18h]
  int v149; // [rsp+130h] [rbp+20h]
  int v150; // [rsp+134h] [rbp+24h] BYREF
  int v151; // [rsp+138h] [rbp+28h] BYREF
  __int64 v152; // [rsp+140h] [rbp+30h]
  __int64 v153; // [rsp+148h] [rbp+38h]
  __int64 v154; // [rsp+150h] [rbp+40h]
  size_t Size; // [rsp+158h] [rbp+48h] BYREF
  __int64 v156; // [rsp+160h] [rbp+50h]
  unsigned __int64 v157; // [rsp+168h] [rbp+58h] BYREF
  void *v158; // [rsp+170h] [rbp+60h] BYREF
  __int64 v159; // [rsp+178h] [rbp+68h]
  __int64 v160; // [rsp+180h] [rbp+70h]
  __int64 v161; // [rsp+188h] [rbp+78h]
  __int64 v162; // [rsp+190h] [rbp+80h] BYREF
  _BYTE *v163; // [rsp+198h] [rbp+88h]
  __int64 v164; // [rsp+1A0h] [rbp+90h]
  HANDLE Handle; // [rsp+1A8h] [rbp+98h] BYREF
  void **v166; // [rsp+1B0h] [rbp+A0h] BYREF
  __int64 *v167; // [rsp+1B8h] [rbp+A8h] BYREF
  __int64 *v168; // [rsp+1C0h] [rbp+B0h] BYREF
  void **v169; // [rsp+1C8h] [rbp+B8h] BYREF
  __int64 *v170; // [rsp+1D0h] [rbp+C0h] BYREF
  __int64 *v171; // [rsp+1D8h] [rbp+C8h] BYREF
  __int64 *v172; // [rsp+1E0h] [rbp+D0h] BYREF
  int v173; // [rsp+1E8h] [rbp+D8h] BYREF
  _BYTE *v174; // [rsp+1F0h] [rbp+E0h] BYREF
  _BYTE *v175; // [rsp+1F8h] [rbp+E8h]
  void *v176; // [rsp+200h] [rbp+F0h] BYREF
  _QWORD *v177; // [rsp+208h] [rbp+F8h]
  int v178; // [rsp+210h] [rbp+100h] BYREF
  __int64 v179; // [rsp+218h] [rbp+108h]
  __int64 v180; // [rsp+220h] [rbp+110h]
  int v181; // [rsp+228h] [rbp+118h]
  __int64 v182; // [rsp+230h] [rbp+120h]
  _DWORD *v183; // [rsp+238h] [rbp+128h]
  _BYTE v184[40]; // [rsp+240h] [rbp+130h] BYREF
  int v185; // [rsp+268h] [rbp+158h] BYREF
  int v186; // [rsp+26Ch] [rbp+15Ch]
  __int64 v187; // [rsp+270h] [rbp+160h]
  int v188; // [rsp+278h] [rbp+168h]
  _DWORD v189[2]; // [rsp+280h] [rbp+170h] BYREF
  __int16 v190; // [rsp+288h] [rbp+178h]
  char v191[24]; // [rsp+290h] [rbp+180h] BYREF
  unsigned int v192; // [rsp+2A8h] [rbp+198h]
  int v193; // [rsp+2ACh] [rbp+19Ch]
  _BYTE v194[96]; // [rsp+2D0h] [rbp+1C0h] BYREF
  _BYTE v195[128]; // [rsp+330h] [rbp+220h] BYREF

  v10 = a2;
  v145 = a9;
  v11 = 0LL;
  v12 = 0LL;
  v164 = a10;
  v175 = v195;
  v157 = 0LL;
  v154 = a1;
  v156 = a4;
  v177 = a3;
  *(_QWORD *)&v130[1] = NtCurrentPeb()->ProcessHeap;
  v163 = a2;
  v143 = a8;
  v117 = 0LL;
  v131 = 0LL;
  v146 = 0LL;
  v115 = 0;
  v126 = 0;
  v125 = 0;
  v130[0] = 0;
  Src = 0LL;
  v158 = 0LL;
  v116 = 0;
  v119 = 0;
  v113 = 0;
  v132 = 0;
  v134 = 0;
  v120[0] = 0;
  LOBYTE(v149) = 0;
  v128[0] = 0;
  v161 = 0LL;
  v159 = 0LL;
  v147 = 0LL;
  v153 = 0LL;
  v148 = 0LL;
  v122 = 0LL;
  v150 = 0;
  v160 = 0LL;
  v152 = 0LL;
  v174 = 0LL;
  v176 = 0LL;
  v114 = 0;
  v123 = 1;
  v162 = 0LL;
  v127 = 0;
  LOBYTE(v141) = 1;
  v166 = 0LL;
  v169 = 0LL;
  v170 = 0LL;
  v167 = 0LL;
  v168 = 0LL;
  v171 = 0LL;
  v172 = 0LL;
  if ( a8 )
  {
    result = NtQueryInformationToken(a8, 10LL, v191, 56LL, &v144);
    if ( (int)result < 0 )
      return result;
    v141 = v192;
    if ( v192 == 2 && v193 < 1 )
      return 3221225637LL;
  }
  if ( v10 )
  {
    v124 = 1;
  }
  else
  {
    v124 = 0;
    RtlCreateSecurityDescriptor(v184, 1LL);
    v10 = v184;
    v163 = v184;
  }
  v14 = *((unsigned __int16 *)v10 + 1);
  v136 = *((_WORD *)v10 + 1) & 0x80;
  v15 = v136;
  LOBYTE(v14) = (v14 & 0x40) != 0;
  v135 = v136 != 0;
  v144 = v14;
  if ( v143 || v136 )
  {
    v16 = &v170;
    LOBYTE(v16) = v136 != 0;
    result = RtlpGetDefaultsSubjectContext(
               v143,
               (_DWORD)v16,
               (unsigned int)&v166,
               (unsigned int)&v169,
               (__int64)&v170,
               (__int64)&v171,
               (__int64)&v167,
               (__int64)&v168,
               (__int64)&v172);
    if ( (int)result < 0 )
      return result;
    v11 = *v166;
    v12 = *v169;
    v148 = *v170;
    v161 = *v167;
    v159 = *v168;
    if ( v171 )
      v147 = (void *)*v171;
    else
      v147 = 0LL;
    v15 = v136;
    if ( v172 )
      v17 = *v172;
    else
      v17 = 0LL;
    v153 = v17;
  }
  else
  {
    v17 = 0LL;
  }
  v18 = *((unsigned __int16 *)v10 + 1);
  if ( (v18 & 0x8000u) == 0 )
  {
    v19 = (_BYTE *)*((_QWORD *)v10 + 1);
  }
  else
  {
    if ( !*((_DWORD *)v10 + 1) )
      goto LABEL_18;
    v19 = &v10[*((unsigned int *)v10 + 1)];
  }
  v139 = v19;
  if ( v19 )
  {
    v119 = 1;
LABEL_22:
    v21 = v154;
    goto LABEL_23;
  }
LABEL_18:
  if ( (a7 & 0x20) == 0 )
  {
    v20 = v11;
    if ( v15 )
      v20 = v147;
    v139 = v20;
    if ( !v20 )
    {
      v34 = -1073741700;
      goto LABEL_292;
    }
    goto LABEL_22;
  }
  v21 = v154;
  if ( !v154 )
    goto LABEL_290;
  if ( *(__int16 *)(v154 + 2) < 0 )
  {
    if ( *(_DWORD *)(v154 + 4) )
    {
      v102 = (void *)(v154 + *(unsigned int *)(v154 + 4));
      goto LABEL_271;
    }
LABEL_290:
    v34 = -1073741734;
LABEL_292:
    Acl = v34;
    goto LABEL_293;
  }
  v102 = *(void **)(v154 + 8);
LABEL_271:
  v139 = v102;
  v119 = 1;
  if ( !v102 )
    goto LABEL_290;
LABEL_23:
  if ( (v18 & 0x8000u) == 0 )
  {
    v22 = (_BYTE *)*((_QWORD *)v10 + 2);
  }
  else
  {
    if ( !*((_DWORD *)v10 + 2) )
      goto LABEL_28;
    v22 = &v10[*((unsigned int *)v10 + 2)];
  }
  v142 = v22;
  if ( v22 )
    goto LABEL_32;
LABEL_28:
  if ( (a7 & 0x40) != 0 )
  {
    if ( !v21 )
      goto LABEL_291;
    if ( *(__int16 *)(v21 + 2) >= 0 )
    {
      v23 = *(void **)(v21 + 16);
    }
    else
    {
      if ( !*(_DWORD *)(v21 + 8) )
        goto LABEL_291;
      v23 = (void *)(v21 + *(unsigned int *)(v21 + 8));
    }
  }
  else
  {
    v23 = v12;
    if ( v15 )
      v23 = (void *)v17;
  }
  v142 = v23;
  if ( !v23 )
  {
LABEL_291:
    v34 = -1073741733;
    goto LABEL_292;
  }
LABEL_32:
  v24 = a7 >> 2;
  LOBYTE(v24) = (a7 & 4) != 0;
  v138 = v24;
  v133 = (a7 & 2) != 0;
  v25 = (v18 >> 2) & 8;
  v26 = (v18 >> 1) & 0x400;
  v27 = (v18 >> 1) & 0x1000;
  v28 = (v18 & 0x10) != 0 ? 4 : 0;
  if ( (v18 & 0x10) == (_WORD)v117 )
  {
    LODWORD(v29) = 0;
  }
  else
  {
    LODWORD(v29) = 0;
    if ( (v18 & 0x8000u) == 0 )
    {
      v30 = *((_QWORD *)v10 + 3);
      goto LABEL_35;
    }
    if ( *((_DWORD *)v10 + 3) )
    {
      LODWORD(v30) = (_DWORD)v10 + *((_DWORD *)v10 + 3);
      goto LABEL_35;
    }
  }
  LODWORD(v30) = 0;
LABEL_35:
  if ( v21 && (*(_BYTE *)(v21 + 2) & 0x10) != 0 )
  {
    if ( *(__int16 *)(v21 + 2) >= 0 )
    {
      v29 = *(_QWORD *)(v21 + 24);
    }
    else if ( *(_DWORD *)(v21 + 12) )
    {
      LODWORD(v29) = v21 + *(_DWORD *)(v21 + 12);
    }
  }
  v31 = v26 | v27;
  v32 = v145;
  LOBYTE(v32) = a6;
  v33 = RtlpInheritAcl(
          v29,
          v30,
          v28 | v25 | (unsigned int)v31,
          v32,
          (a7 & 2) != 0,
          v138,
          (__int64)v139,
          (__int64)v142,
          (__int64)v147,
          v153,
          v145,
          2,
          v156,
          a5,
          (__int64)&v131,
          (__int64)&v113,
          (__int64)&v137);
  Acl = v33;
  v34 = v33;
  if ( v33 < 0 )
  {
    if ( v33 == -2147483637 )
    {
      v35 = *((_WORD *)v10 + 1);
      v36 = 0x8000;
      if ( (a7 & 2) != 0 )
        v36 = 34816;
      v121 = v36;
      if ( (v35 & 0x30) != 0x30 )
        goto LABEL_45;
      if ( (v35 & 0x10) != 0 )
      {
        if ( v35 >= 0 )
        {
          v37 = (_BYTE *)*((_QWORD *)v10 + 3);
          goto LABEL_305;
        }
        if ( *((_DWORD *)v10 + 3) )
        {
          v37 = &v10[*((unsigned int *)v10 + 3)];
LABEL_305:
          v131 = v37;
          v117 = v37;
          goto LABEL_306;
        }
      }
      v37 = 0LL;
      v117 = 0LL;
      v131 = 0LL;
LABEL_306:
      v113 = 1;
      v121 = v35 & 0x2000 | 0x10 | v36;
      goto LABEL_46;
    }
LABEL_293:
    v37 = v131;
    goto LABEL_294;
  }
  v115 = 1;
  v121 = 2 * (v137 & 0x1400 | (2 * (v137 & 8 | 0x2004)));
LABEL_45:
  v37 = v131;
  v117 = v131;
LABEL_46:
  v38 = *((_WORD *)v10 + 1);
  v39 = (v38 & 0x10) != 0 ? 4 : 0;
  if ( (v38 & 0x10) == 0 )
    goto LABEL_47;
  if ( v38 >= 0 )
  {
    v40 = *((_QWORD *)v10 + 3);
    goto LABEL_48;
  }
  if ( *((_DWORD *)v10 + 3) )
    LODWORD(v40) = (_DWORD)v10 + *((_DWORD *)v10 + 3);
  else
LABEL_47:
    LODWORD(v40) = 0;
LABEL_48:
  if ( !v154 || (*(_BYTE *)(v154 + 2) & 0x10) == 0 )
  {
LABEL_172:
    LODWORD(v41) = 0;
    goto LABEL_53;
  }
  if ( *(__int16 *)(v154 + 2) < 0 )
  {
    if ( *(_DWORD *)(v154 + 12) )
    {
      LODWORD(v41) = v154 + *(_DWORD *)(v154 + 12);
      goto LABEL_53;
    }
    goto LABEL_172;
  }
  v41 = *(_QWORD *)(v154 + 24);
LABEL_53:
  v42 = v39 | (*((unsigned __int16 *)v10 + 1) >> 2) & 8 | (*((unsigned __int16 *)v10 + 1) >> 1) & 0x400;
  LOBYTE(v39) = a6;
  v43 = RtlpInheritAcl(
          v41,
          v40,
          v42,
          v39,
          v133,
          v138,
          (__int64)v139,
          (__int64)v142,
          (__int64)v147,
          v153,
          v145,
          2,
          v156,
          a5,
          (__int64)&v146,
          (__int64)&v132,
          (__int64)&v150);
  Acl = v43;
  v34 = v43;
  if ( v43 >= 0 )
  {
    v126 = 1;
  }
  else
  {
    if ( v43 != -2147483637 )
      goto LABEL_294;
    v44 = *((_WORD *)v10 + 1);
    if ( (v44 & 0x30) != 0x30 )
      goto LABEL_56;
    if ( (v44 & 0x10) != 0 )
    {
      if ( v44 >= 0 )
      {
        v105 = *((_QWORD *)v10 + 3);
        goto LABEL_314;
      }
      if ( *((_DWORD *)v10 + 3) )
      {
        v105 = (__int64)&v10[*((unsigned int *)v10 + 3)];
LABEL_314:
        v146 = v105;
        goto LABEL_56;
      }
    }
    v146 = 0LL;
  }
LABEL_56:
  v129 = 0;
  do
  {
    if ( (v10[2] & 0x10) == 0 )
    {
LABEL_58:
      v45 = 0LL;
      goto LABEL_59;
    }
    if ( *((__int16 *)v10 + 1) >= 0 )
    {
      v45 = (_BYTE *)*((_QWORD *)v10 + 3);
    }
    else
    {
      if ( !*((_DWORD *)v10 + 3) )
        goto LABEL_58;
      v45 = &v10[*((unsigned int *)v10 + 3)];
    }
LABEL_59:
    AceByType = RtlFindAceByType(v45, 20LL, &v129);
    v48 = AceByType + 8;
    if ( !AceByType )
      v48 = 0LL;
    if ( v48 && !RtlpValidTrustSubjectContext(v159, v48, v47, &Acl) )
    {
      v34 = -1073741790;
LABEL_316:
      Acl = v34;
      goto LABEL_294;
    }
    ++v129;
  }
  while ( AceByType );
  if ( (a7 & 0x800) == 0 )
  {
LABEL_64:
    v162 = v146;
    goto LABEL_65;
  }
  v129 = 0;
  while ( 2 )
  {
    if ( (v10[2] & 0x10) == 0 )
      goto LABEL_322;
    if ( *((__int16 *)v10 + 1) >= 0 )
    {
      v106 = (_BYTE *)*((_QWORD *)v10 + 3);
    }
    else
    {
      if ( *((_DWORD *)v10 + 3) )
      {
        v106 = &v10[*((unsigned int *)v10 + 3)];
        goto LABEL_324;
      }
LABEL_322:
      v106 = 0LL;
    }
LABEL_324:
    v107 = RtlFindAceByType(v106, 20LL, &v129);
    ++v129;
    if ( v107 )
    {
      if ( (*(_BYTE *)(v107 + 1) & 8) == 0 )
      {
        v108 = *(_DWORD *)(v107 + 4);
        v109 = v107 + 8;
        v129 = *(unsigned __int8 *)(v107 + 1);
        if ( !v164 || (v108 & *(_DWORD *)(v164 + 4)) != v108 || v107 == -8 )
        {
          v34 = -1073741811;
          goto LABEL_331;
        }
        goto LABEL_336;
      }
      continue;
    }
    break;
  }
  if ( !v159 )
    goto LABEL_64;
  if ( !v164 )
  {
    v34 = -1073741811;
    goto LABEL_316;
  }
  v108 = *(_DWORD *)(v164 + 4);
  v109 = v159;
  v129 = 0;
LABEL_336:
  Acl = RtlCreateAcl(v194, 88LL, 2LL);
  v34 = Acl;
  if ( Acl < 0 )
    goto LABEL_282;
  Acl = RtlAddProcessTrustLabelAce((unsigned int)v194, 2, v129, v109, 20, v108);
  v34 = Acl;
  if ( Acl < 0 )
    goto LABEL_282;
  v10 = v163;
  Acl = RtlpComputeMergedAcl(
          v146,
          (*((_WORD *)v163 + 1) & 0x800 | (*((unsigned __int16 *)v163 + 1) >> 1) & 0x18u) >> 1,
          (unsigned int)v194,
          4,
          (__int64)v139,
          (__int64)v142,
          v145,
          2,
          (__int64)&v162,
          (__int64)&v137);
  v34 = Acl;
  if ( Acl < 0 )
    goto LABEL_282;
  v127 = 1;
LABEL_65:
  if ( (v10[2] & 0x10) != 0 )
  {
    if ( *((__int16 *)v10 + 1) >= 0 )
    {
      v49 = *((_QWORD *)v10 + 3);
    }
    else
    {
      if ( !*((_DWORD *)v10 + 3) )
        goto LABEL_66;
      v49 = (__int64)&v10[*((unsigned int *)v10 + 3)];
    }
  }
  else
  {
LABEL_66:
    v49 = 0LL;
  }
  Acl = RtlpValidFilterAclSubjectContext(v49, v159);
  v34 = Acl;
  if ( Acl < 0 )
    goto LABEL_282;
  v51 = (a7 >> 8) & 1 | 2;
  if ( (a7 & 0x200) == 0 )
    v51 = (a7 >> 8) & 1;
  v52 = v51 | 4;
  if ( (a7 & 0x400) == 0 )
    v52 = v51;
  if ( v52 )
  {
    v54 = 0LL;
    goto LABEL_76;
  }
  if ( (v10[2] & 0x10) == 0 )
    goto LABEL_74;
  if ( *((__int16 *)v10 + 1) >= 0 )
  {
    v53 = (_BYTE *)*((_QWORD *)v10 + 3);
  }
  else if ( *((_DWORD *)v10 + 3) )
  {
    v53 = &v10[*((unsigned int *)v10 + 3)];
  }
  else
  {
LABEL_74:
    v53 = 0LL;
  }
  v54 = RtlFindAceByType(v53, 17LL, 0LL);
  v160 = v54;
  if ( v54 )
  {
    v56 = *(_BYTE *)(v54 + 1);
    v55 = v54 + 8;
    v52 = *(_DWORD *)(v54 + 4);
    v152 = v54 + 8;
    v114 = v56;
    if ( v56 == 8 || (v56 & 0x10) != 0 )
    {
      v54 = 0LL;
      v55 = 0LL;
      v56 = 0;
      v160 = 0LL;
      v152 = 0LL;
      v52 = 0;
      v114 = 0;
    }
  }
  else
  {
LABEL_76:
    v55 = 0LL;
    v56 = 0;
  }
  if ( (v56 & 8) != 0 && *(_DWORD *)(v161 + 8) < 0x2000u )
  {
    v34 = -1073740730;
    goto LABEL_331;
  }
  if ( v52 )
  {
LABEL_209:
    if ( v54 )
      goto LABEL_81;
    if ( v143 )
    {
      v55 = v161;
      v152 = v161;
      v114 = 0;
      goto LABEL_81;
    }
    goto LABEL_343;
  }
  if ( v161 && *(_DWORD *)(v161 + 8) < 0x2000u )
  {
    v52 = 1;
    goto LABEL_209;
  }
LABEL_81:
  if ( !v55 )
  {
    v57 = 0LL;
    v175 = 0LL;
    goto LABEL_83;
  }
  Acl = RtlCreateAcl(v195, 128LL, 2LL);
  v34 = Acl;
  if ( Acl < 0 )
    goto LABEL_282;
  Acl = RtlAddMandatoryAce((unsigned int)v195, 2, v114, v152, 17, v52);
  v34 = Acl;
  if ( Acl < 0 )
    goto LABEL_282;
  v57 = v195;
LABEL_83:
  if ( (a7 & 0x700) != 0 )
  {
    v58 = 4;
  }
  else if ( !v160 && v57 )
  {
    v58 = 0;
  }
  else
  {
    v58 = (*((_WORD *)v10 + 1) & 0x2800 | (*((unsigned __int16 *)v10 + 1) >> 1) & 0x18u) >> 1;
  }
  if ( !v154 || (*(_BYTE *)(v154 + 2) & 0x10) == 0 )
    goto LABEL_173;
  if ( *(__int16 *)(v154 + 2) >= 0 )
  {
    v59 = *(_QWORD *)(v154 + 24);
  }
  else
  {
    if ( *(_DWORD *)(v154 + 12) )
    {
      LODWORD(v59) = v154 + *(_DWORD *)(v154 + 12);
      goto LABEL_92;
    }
LABEL_173:
    LODWORD(v59) = 0;
  }
LABEL_92:
  LOBYTE(v50) = a6;
  v60 = RtlpInheritAcl(
          v59,
          (_DWORD)v57,
          v58,
          v50,
          1,
          0,
          (__int64)v139,
          (__int64)v142,
          (__int64)v147,
          v153,
          v145,
          3,
          v156,
          a5,
          (__int64)&v174,
          (__int64)&v134,
          (__int64)&v137);
  Acl = v60;
  v34 = v60;
  if ( v60 != -2147483637 )
  {
    if ( v60 >= 0 )
    {
      v57 = v174;
      v61 = v137;
      goto LABEL_94;
    }
    goto LABEL_282;
  }
  v61 = 0;
  v137 = 0;
LABEL_94:
  v34 = RtlpCombineAcls((_DWORD)v117, (_DWORD)v57, v146, v146, v162, v146, (__int64)&v176, (__int64)v130);
  Acl = v34;
  v150 = ((v121 & 0x2000) << 17) | v130[0];
  if ( !v57 || v57 == v175 )
  {
    v63 = *(_QWORD *)&v130[1];
  }
  else
  {
    v100 = (unsigned __int64)v57;
    v63 = *(_QWORD *)&v130[1];
    RtlFreeHeap(*(__int64 *)&v130[1], 0, v100);
  }
  if ( v34 < 0 )
    goto LABEL_282;
  v64 = v176;
  if ( v176 )
  {
    if ( v115 && v117 )
      RtlFreeHeap(v63, 0, (unsigned __int64)v117);
    v117 = v64;
    v131 = v64;
    v37 = v64;
    v125 = 1;
    v121 |= 2 * (v61 & 0x1400 | (2 * (v61 & 8 | 4)));
  }
  else
  {
    v37 = v117;
  }
  v130[0] = a7 & 8;
  if ( (a7 & 8) != 0 || ((v94 = RtlFindAceByType(v37, 17LL, 0LL)) != 0 ? (v95 = v94 + 8) : (v95 = v152), !v95) )
  {
LABEL_100:
    v65 = v163;
    v66 = *((_WORD *)v163 + 1);
    if ( (v66 & 4) == 0 )
      goto LABEL_184;
    if ( v66 >= 0 )
    {
      v67 = *((_QWORD *)v163 + 4);
      goto LABEL_104;
    }
    if ( *((_DWORD *)v163 + 4) )
      LODWORD(v67) = (_DWORD)v163 + *((_DWORD *)v163 + 4);
    else
LABEL_184:
      LODWORD(v67) = 0;
LABEL_104:
    if ( v154 && (*(_BYTE *)(v154 + 2) & 4) != 0 )
    {
      if ( *(__int16 *)(v154 + 2) >= 0 )
      {
        v68 = *(_QWORD *)(v154 + 32);
LABEL_109:
        LOBYTE(v62) = a6;
        v69 = RtlpInheritAcl(
                v68,
                v67,
                v66 & 0x140C,
                v62,
                a7 & 1,
                v138,
                (__int64)v139,
                (__int64)v142,
                (__int64)v147,
                v153,
                v145,
                1,
                v156,
                a5,
                (__int64)&Src,
                (__int64)v120,
                (__int64)&v137);
        Acl = v69;
        v34 = v69;
        if ( v69 >= 0 )
        {
          v116 = 1;
          v121 |= v137 & 0x1408 | 4;
LABEL_111:
          if ( (a7 & 0x1000) != 0 || !v124 || (v72 = v143) == 0 || !v154 )
          {
LABEL_121:
            if ( (a7 & 1) != 0 && !Src )
              v121 |= 0x1000u;
            v74 = !v150 || (v150 & 0x1B0) != v150;
            v75 = v130[0];
            v76 = v143;
            if ( !v113 || v130[0] || !v74 )
            {
LABEL_127:
              if ( (_BYTE)v149 && !v75 )
              {
                if ( !v76 )
                  goto LABEL_343;
                v148 = 32LL;
                v185 = 1;
                v186 = 1;
                v187 = 32LL;
                v188 = 0;
                Acl = ZwPrivilegeCheck(v76, &v185, &v118);
                v34 = Acl;
                if ( Acl < 0 )
                  goto LABEL_282;
                if ( !v118 )
                  goto LABEL_355;
              }
              if ( !v119 || (a7 & 0x10) != 0 )
              {
                v77 = (unsigned __int8 *)v139;
                goto LABEL_130;
              }
              if ( v76 )
              {
                v77 = (unsigned __int8 *)v139;
                LOBYTE(v71) = v135;
                if ( !(unsigned __int8)RtlpValidOwnerSubjectContext(v143, v139, v71, &v151) )
                {
                  v34 = v151;
                  goto LABEL_331;
                }
LABEL_130:
                if ( v136 && v120[0] )
                {
                  v110 = Src;
                  LOBYTE(v70) = v144;
                  ServerAcl = RtlpCreateServerAcl((_DWORD)Src, v70, (_DWORD)v147, (unsigned int)&v158, (__int64)v128);
                  Acl = ServerAcl;
                  v34 = ServerAcl;
                  if ( ServerAcl < 0 )
                    goto LABEL_282;
                  if ( v116 && v110 )
                    RtlFreeHeap(*(__int64 *)&v130[1], 0, (unsigned __int64)v110);
                  Src = v158;
                  v158 = 0LL;
                }
                v78 = 4 * v77[1] + 8;
                LODWORD(Size) = v78;
                if ( v142 )
                  v79 = 4 * *((unsigned __int8 *)v142 + 1) + 8;
                else
                  v79 = 0;
                v80 = v121;
                v130[0] = v79;
                v144 = v121 & 0x10;
                if ( (v121 & 0x10) != 0 && v117 )
                  v81 = (*((unsigned __int16 *)v117 + 1) + 3) & 0xFFFFFFFC;
                else
                  v81 = 0;
                v151 = v121 & 4;
                if ( (v121 & 4) != 0 && Src )
                  v82 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
                else
                  v82 = 0;
                v141 = v82;
                Heap = RtlAllocateHeap(*(__int64 *)&v130[1], NtdllBaseTag + 1310720, v81 + v79 + v82 + 20 + v78);
                v122 = (_DWORD *)Heap;
                v84 = (_DWORD *)Heap;
                if ( !Heap )
                {
                  v34 = -1073741801;
                  goto LABEL_331;
                }
                *(_QWORD *)Heap = 0LL;
                *(_QWORD *)(Heap + 8) = 0LL;
                *(_DWORD *)(Heap + 16) = 0;
                *(_WORD *)(Heap + 2) |= v80;
                v85 = (char *)(Heap + 20);
                *(_BYTE *)Heap = 1;
                if ( v144 )
                {
                  v97 = (unsigned __int16 *)v117;
                  if ( v117 )
                  {
                    memmove(v85, v117, *((unsigned __int16 *)v117 + 1));
                    if ( !v115 )
                      RtlpApplyAclToObject(v85, v145);
                    v84 = v122;
                    v122[3] = (_DWORD)v85 - (_DWORD)v122;
                    v98 = v97[1];
                    if ( v81 > (unsigned int)v98 )
                    {
                      memset(&v85[v98], 0, v81 - (unsigned int)v98);
                      v84 = v122;
                    }
                    v85 += v81;
                  }
                  else
                  {
                    *(_DWORD *)(Heap + 12) = 0;
                  }
                }
                if ( v151 )
                {
                  v86 = (unsigned __int16 *)Src;
                  if ( Src )
                  {
                    memmove(v85, Src, *((unsigned __int16 *)Src + 1));
                    if ( !v116 )
                      RtlpApplyAclToObject(v85, v145);
                    v122[4] = (_DWORD)v85 - (_DWORD)v122;
                    v87 = v86[1];
                    v88 = v141;
                    if ( v141 > (unsigned int)v87 )
                      memset(&v85[v87], 0, v141 - (unsigned int)v87);
                    v85 += v88;
                  }
                  else
                  {
                    v84[4] = 0;
                  }
                }
                v89 = (unsigned int)Size;
                memmove(v85, v139, (unsigned int)Size);
                v90 = v122;
                v91 = (_DWORD)v85 - (_DWORD)v122;
                v92 = &v85[v89];
                v122[1] = v91;
                if ( v142 )
                {
                  memmove(v92, v142, v130[0]);
                  v90[2] = (_DWORD)v92 - (_DWORD)v90;
                }
                v37 = v117;
                v34 = 0;
                Acl = 0;
                goto LABEL_150;
              }
LABEL_343:
              v34 = -1073741700;
LABEL_331:
              Acl = v34;
              goto LABEL_282;
            }
            if ( !v143 )
              goto LABEL_343;
            v185 = 1;
            v186 = 1;
            v148 = 8LL;
            v187 = 8LL;
            v188 = 0;
            Acl = ZwPrivilegeCheck(v143, &v185, &v118);
            v34 = Acl;
            if ( Acl >= 0 )
            {
              if ( !v118 )
              {
LABEL_355:
                v34 = -1073741727;
                goto LABEL_331;
              }
              goto LABEL_127;
            }
LABEL_282:
            v37 = v117;
            goto LABEL_294;
          }
          v173 = 0;
          v138 = 0;
          Acl = RtlpNewSecurityObject(v154, 0, (unsigned int)&v157, v156, a5, a6, a7 | 1, v143, v145, v164);
          v34 = Acl;
          if ( Acl < 0 )
            goto LABEL_282;
          if ( (*(_BYTE *)(v157 + 2) & 4) != 0 )
          {
            if ( *(__int16 *)(v157 + 2) >= 0 )
            {
              v73 = *(_QWORD *)(v157 + 32);
LABEL_120:
              if ( (unsigned __int8)RtlpOwnerAcesPresent(16LL, v73) )
              {
                Handle = 0LL;
                LODWORD(Size) = 20;
                if ( (_BYTE)v141 != 1 )
                  goto LABEL_277;
                v190 = 1;
                v189[1] = 2;
                v183 = v189;
                v189[0] = 12;
                v178 = 48;
                v179 = 0LL;
                v181 = 0;
                v180 = 0LL;
                v182 = 0LL;
                Acl = NtDuplicateToken(v72, 8LL, &v178, 0LL, 2, &Handle);
                v34 = Acl;
                if ( Acl < 0 )
                  goto LABEL_282;
                v103 = (__int64)Handle;
                if ( !Handle )
LABEL_277:
                  v103 = v72;
                Acl = ZwAccessCheck(v157, v103, 0x40000LL, v145, &v185, &Size, &v173, &v138);
                v34 = Acl;
                if ( Handle )
                  NtClose(Handle);
                if ( v34 < 0 )
                  goto LABEL_282;
                v34 = v138;
                Acl = v138;
                if ( v138 < 0 )
                  goto LABEL_282;
              }
              goto LABEL_121;
            }
            if ( *(_DWORD *)(v157 + 16) )
            {
              v73 = v157 + *(unsigned int *)(v157 + 16);
              goto LABEL_120;
            }
          }
          v73 = 0LL;
          goto LABEL_120;
        }
        if ( v69 != -2147483637 )
          goto LABEL_282;
        v70 = v121;
        if ( (a7 & 1) != 0 )
        {
          v70 = v121 | 0x400;
          v121 |= 0x400u;
        }
        v101 = *((_WORD *)v65 + 1);
        if ( (v101 & 0xC) != 0xC )
        {
          if ( !v148 )
            goto LABEL_111;
          Src = (void *)v148;
          v70 |= 4u;
LABEL_249:
          v121 = v70;
          goto LABEL_111;
        }
        if ( (v101 & 4) != 0 )
        {
          if ( v101 >= 0 )
          {
            v104 = (_BYTE *)*((_QWORD *)v65 + 4);
LABEL_286:
            Src = v104;
LABEL_287:
            v70 |= v101 & 0x1000 | 4;
            v120[0] = 1;
            goto LABEL_249;
          }
          if ( *((_DWORD *)v65 + 4) )
          {
            v104 = &v65[*((unsigned int *)v65 + 4)];
            goto LABEL_286;
          }
        }
        Src = 0LL;
        goto LABEL_287;
      }
      if ( *(_DWORD *)(v154 + 16) )
      {
        LODWORD(v68) = v154 + *(_DWORD *)(v154 + 16);
        goto LABEL_109;
      }
    }
    LODWORD(v68) = 0;
    goto LABEL_109;
  }
  if ( !v143 )
  {
    v34 = -1073741700;
    goto LABEL_316;
  }
  Acl = RtlSidDominates(v161, v95, &v123);
  v34 = Acl;
  if ( Acl >= 0 )
  {
    v96 = (unsigned __int8)v149;
    if ( !v123 )
      v96 = 1;
    v149 = v96;
    goto LABEL_100;
  }
LABEL_294:
  v90 = v122;
LABEL_150:
  if ( v157 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v157);
    v37 = v131;
    v34 = Acl;
  }
  if ( v128[0] && v158 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v158);
    v37 = v131;
    v34 = Acl;
  }
  RtlFreeHeap(*(__int64 *)&v130[1], 0, (unsigned __int64)v166);
  RtlFreeHeap(*(__int64 *)&v130[1], 0, (unsigned __int64)v167);
  RtlFreeHeap(*(__int64 *)&v130[1], 0, (unsigned __int64)v168);
  RtlFreeHeap(*(__int64 *)&v130[1], 0, (unsigned __int64)v169);
  RtlFreeHeap(*(__int64 *)&v130[1], 0, (unsigned __int64)v170);
  if ( v171 )
    RtlFreeHeap(*(__int64 *)&v130[1], 0, (unsigned __int64)v171);
  if ( v172 )
    RtlFreeHeap(*(__int64 *)&v130[1], 0, (unsigned __int64)v172);
  if ( (v125 || v115) && v37 )
  {
    v99 = (unsigned __int64)v37;
    v93 = *(_QWORD *)&v130[1];
    RtlFreeHeap(*(__int64 *)&v130[1], 0, v99);
  }
  else
  {
    v93 = *(_QWORD *)&v130[1];
  }
  if ( v126 && v146 )
    RtlFreeHeap(v93, 0, v146);
  if ( v162 && v127 )
    RtlFreeHeap(v93, 0, v162);
  if ( v116 )
  {
    if ( Src )
      RtlFreeHeap(*(__int64 *)&v130[1], 0, (unsigned __int64)Src);
  }
  *v177 = v90;
  return (unsigned int)v34;
}
