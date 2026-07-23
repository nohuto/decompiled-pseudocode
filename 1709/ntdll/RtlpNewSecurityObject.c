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

NTSTATUS __fastcall RtlpNewSecurityObject(
        __int64 a1,
        _BYTE *a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        char a6,
        unsigned int a7,
        HANDLE TokenHandle,
        GENERIC_MAPPING *a9,
        __int64 a10)
{
  _BYTE *v10; // rsi
  void *v11; // rbx
  void *v12; // rdi
  NTSTATUS result; // eax
  ULONG v14; // eax
  __int16 v15; // r9
  __int64 v16; // rcx
  unsigned int v17; // edx
  _BYTE *v18; // rax
  void *v19; // rax
  __int64 v20; // rbx
  _BYTE *v21; // rax
  void *v22; // rax
  unsigned int v23; // eax
  int v24; // eax
  int v25; // r9d
  int v26; // r8d
  int v27; // r10d
  __int64 v28; // rcx
  __int64 v29; // rdx
  int v30; // r8d
  int v31; // r9d
  int v32; // eax
  int v33; // ebx
  __int16 v34; // cx
  int v35; // r10d
  ACL *v36; // rdi
  __int16 v37; // dx
  int v38; // r9d
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // r8d
  int v42; // eax
  __int16 v43; // cx
  ACL *v44; // rcx
  char *AceByType; // rbx
  __int64 v46; // r8
  void *v47; // rdx
  ACL *v48; // rcx
  int v49; // r9d
  unsigned int v50; // edx
  ACCESS_MASK v51; // edi
  ACL *v52; // rcx
  char *v53; // rax
  PSID v54; // rdx
  char v55; // cl
  ACL *v56; // rdi
  unsigned int v57; // r8d
  __int64 v58; // rcx
  int v59; // eax
  __int16 v60; // si
  int v61; // r9d
  void *v62; // rdi
  __int64 v63; // rbx
  _BYTE *v64; // rdi
  __int16 v65; // r8
  __int64 v66; // rdx
  __int64 v67; // rcx
  int v68; // eax
  int v69; // edx
  __int64 v70; // r8
  HANDLE v71; // rdi
  char *v72; // rdx
  bool v73; // al
  int v74; // edi
  HANDLE v75; // rsi
  unsigned __int8 *v76; // rsi
  int v77; // r8d
  int v78; // r9d
  __int16 v79; // bx
  unsigned int v80; // esi
  unsigned int v81; // ecx
  _QWORD *Heap; // rax
  _QWORD *v83; // rdx
  char *v84; // rbx
  unsigned __int16 *v85; // rdi
  __int64 v86; // rcx
  __int64 v87; // rdi
  __int64 v88; // rdi
  __int64 v89; // rsi
  int v90; // eax
  char *v91; // rbx
  void *v92; // rdi
  char *v93; // rax
  PSID v94; // rax
  int v95; // eax
  __int64 v96; // rdi
  __int64 v97; // rcx
  ACL *v98; // r8
  ACL *v99; // r8
  __int16 v100; // cx
  void *v101; // rax
  HANDLE v102; // rdx
  _BYTE *v103; // rax
  _BYTE *v104; // rax
  ACL *v105; // rcx
  _DWORD *v106; // rax
  ACCESS_MASK v107; // edi
  void *v108; // rsi
  void *v109; // rdi
  int ServerAcl; // eax
  int ReturnLength; // [rsp+20h] [rbp-F0h]
  int ReturnLengtha; // [rsp+20h] [rbp-F0h]
  int ReturnLengthb; // [rsp+20h] [rbp-F0h]
  int ReturnLengthc; // [rsp+20h] [rbp-F0h]
  int AccessMask; // [rsp+28h] [rbp-E8h]
  NTSTATUS valid; // [rsp+90h] [rbp-80h] BYREF
  _DWORD v117[3]; // [rsp+94h] [rbp-7Ch] BYREF
  BOOLEAN Result; // [rsp+A0h] [rbp-70h] BYREF
  char v119; // [rsp+A1h] [rbp-6Fh]
  _WORD v120[7]; // [rsp+A2h] [rbp-6Eh] BYREF
  BOOLEAN Dominates; // [rsp+B0h] [rbp-60h] BYREF
  char v122; // [rsp+B1h] [rbp-5Fh]
  char v123; // [rsp+B2h] [rbp-5Eh]
  char v124; // [rsp+B3h] [rbp-5Dh]
  char v125; // [rsp+B4h] [rbp-5Ch]
  char v126[3]; // [rsp+B5h] [rbp-5Bh] BYREF
  ULONG Index; // [rsp+B8h] [rbp-58h] BYREF
  _DWORD v128[3]; // [rsp+BCh] [rbp-54h] BYREF
  __int64 v129; // [rsp+C8h] [rbp-48h] BYREF
  char v130; // [rsp+D0h] [rbp-40h] BYREF
  bool v131; // [rsp+D1h] [rbp-3Fh]
  char v132; // [rsp+D2h] [rbp-3Eh] BYREF
  bool v133; // [rsp+D3h] [rbp-3Dh]
  __int16 v134; // [rsp+D4h] [rbp-3Ch]
  int v135; // [rsp+D8h] [rbp-38h] BYREF
  NTSTATUS AccessStatus; // [rsp+DCh] [rbp-34h] BYREF
  void *v137; // [rsp+E0h] [rbp-30h]
  void *Src; // [rsp+E8h] [rbp-28h] BYREF
  unsigned int v139; // [rsp+F0h] [rbp-20h]
  void *v140; // [rsp+F8h] [rbp-18h]
  HANDLE ClientToken; // [rsp+100h] [rbp-10h]
  ULONG v142; // [rsp+108h] [rbp-8h] BYREF
  PGENERIC_MAPPING GenericMapping; // [rsp+110h] [rbp+0h]
  PVOID v144; // [rsp+118h] [rbp+8h] BYREF
  __int64 v145; // [rsp+120h] [rbp+10h]
  __int64 v146; // [rsp+128h] [rbp+18h]
  int v147; // [rsp+130h] [rbp+20h]
  int v148; // [rsp+134h] [rbp+24h] BYREF
  int v149; // [rsp+138h] [rbp+28h] BYREF
  PSID Sid2; // [rsp+140h] [rbp+30h]
  __int64 v151; // [rsp+148h] [rbp+38h]
  int v152[2]; // [rsp+150h] [rbp+40h]
  size_t Size; // [rsp+158h] [rbp+48h] BYREF
  __int64 v154; // [rsp+160h] [rbp+50h]
  PVOID v155; // [rsp+168h] [rbp+58h] BYREF
  PVOID v156; // [rsp+170h] [rbp+60h] BYREF
  void *v157; // [rsp+178h] [rbp+68h]
  char *v158; // [rsp+180h] [rbp+70h]
  PSID Sid1; // [rsp+188h] [rbp+78h]
  PVOID v160; // [rsp+190h] [rbp+80h] BYREF
  _BYTE *v161; // [rsp+198h] [rbp+88h]
  __int64 v162; // [rsp+1A0h] [rbp+90h]
  HANDLE NewTokenHandle; // [rsp+1A8h] [rbp+98h] BYREF
  PVOID BaseAddress; // [rsp+1B0h] [rbp+A0h]
  PVOID v165; // [rsp+1B8h] [rbp+A8h] BYREF
  PVOID v166; // [rsp+1C0h] [rbp+B0h] BYREF
  PVOID v167; // [rsp+1C8h] [rbp+B8h]
  PVOID v168; // [rsp+1D0h] [rbp+C0h] BYREF
  PVOID v169; // [rsp+1D8h] [rbp+C8h] BYREF
  PVOID v170; // [rsp+1E0h] [rbp+D0h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+1E8h] [rbp+D8h] BYREF
  __int64 v172; // [rsp+1F0h] [rbp+E0h] BYREF
  ACL *v173; // [rsp+1F8h] [rbp+E8h]
  __int64 v174; // [rsp+200h] [rbp+F0h] BYREF
  _QWORD *v175; // [rsp+208h] [rbp+F8h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+210h] [rbp+100h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+240h] [rbp+130h] BYREF
  _PRIVILEGE_SET RequiredPrivileges; // [rsp+268h] [rbp+158h] BYREF
  _DWORD v179[2]; // [rsp+280h] [rbp+170h] BYREF
  __int16 v180; // [rsp+288h] [rbp+178h]
  char TokenInformation[24]; // [rsp+290h] [rbp+180h] BYREF
  unsigned int v182; // [rsp+2A8h] [rbp+198h]
  int v183; // [rsp+2ACh] [rbp+19Ch]
  ACL v184; // [rsp+2D0h] [rbp+1C0h] BYREF
  ACL v185; // [rsp+330h] [rbp+220h] BYREF

  v10 = a2;
  GenericMapping = a9;
  v11 = 0LL;
  v12 = 0LL;
  v162 = a10;
  v173 = &v185;
  v155 = 0LL;
  *(_QWORD *)v152 = a1;
  v154 = a4;
  v175 = a3;
  *(_QWORD *)&v128[1] = NtCurrentPeb()->ProcessHeap;
  v161 = a2;
  ClientToken = TokenHandle;
  v129 = 0LL;
  v144 = 0LL;
  v124 = 0;
  v123 = 0;
  v128[0] = 0;
  Src = 0LL;
  v156 = 0LL;
  memset(v117, 0, sizeof(v117));
  v119 = 0;
  v130 = 0;
  v132 = 0;
  LOBYTE(v120[0]) = 0;
  LOBYTE(v147) = 0;
  v126[0] = 0;
  Sid1 = 0LL;
  v157 = 0LL;
  v145 = 0LL;
  v151 = 0LL;
  v146 = 0LL;
  *(_QWORD *)&v120[3] = 0LL;
  v148 = 0;
  v158 = 0LL;
  Sid2 = 0LL;
  v172 = 0LL;
  v174 = 0LL;
  Dominates = 1;
  v160 = 0LL;
  v125 = 0;
  LOBYTE(v139) = 1;
  BaseAddress = 0LL;
  v167 = 0LL;
  v168 = 0LL;
  v165 = 0LL;
  v166 = 0LL;
  v169 = 0LL;
  v170 = 0LL;
  if ( TokenHandle )
  {
    result = NtQueryInformationToken(TokenHandle, 0xAu, TokenInformation, 0x38u, &v142);
    if ( result < 0 )
      return result;
    v139 = v182;
    if ( v182 == 2 && v183 < 1 )
      return -1073741659;
  }
  if ( v10 )
  {
    v122 = 1;
  }
  else
  {
    v122 = 0;
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    v10 = SecurityDescriptor;
    v161 = SecurityDescriptor;
  }
  v14 = *((unsigned __int16 *)v10 + 1);
  v134 = *((_WORD *)v10 + 1) & 0x80;
  v15 = v134;
  LOBYTE(v14) = (v14 & 0x40) != 0;
  v133 = v134 != 0;
  v142 = v14;
  if ( ClientToken || v134 )
  {
    result = RtlpGetDefaultsSubjectContext(
               ClientToken,
               (ULONG)&v168,
               (__int64)&v169,
               (__int64)&v165,
               (__int64)&v166,
               (ULONG)&v170);
    if ( result < 0 )
      return result;
    v11 = *(void **)BaseAddress;
    v12 = *(void **)v167;
    v146 = *(_QWORD *)v168;
    Sid1 = *(PSID *)v165;
    v157 = *(void **)v166;
    if ( v169 )
      v145 = *(_QWORD *)v169;
    else
      v145 = 0LL;
    v15 = v134;
    if ( v170 )
      v16 = *(_QWORD *)v170;
    else
      v16 = 0LL;
    v151 = v16;
  }
  else
  {
    v16 = 0LL;
  }
  v17 = *((unsigned __int16 *)v10 + 1);
  if ( (v17 & 0x8000u) == 0 )
  {
    v18 = (_BYTE *)*((_QWORD *)v10 + 1);
  }
  else
  {
    if ( !*((_DWORD *)v10 + 1) )
      goto LABEL_18;
    v18 = &v10[*((unsigned int *)v10 + 1)];
  }
  v137 = v18;
  if ( v18 )
  {
    v119 = 1;
LABEL_22:
    v20 = *(_QWORD *)v152;
    goto LABEL_23;
  }
LABEL_18:
  if ( (a7 & 0x20) == 0 )
  {
    v19 = v11;
    if ( v15 )
      v19 = (void *)v145;
    v137 = v19;
    if ( !v19 )
    {
      v33 = -1073741700;
      goto LABEL_292;
    }
    goto LABEL_22;
  }
  v20 = *(_QWORD *)v152;
  if ( !*(_QWORD *)v152 )
    goto LABEL_290;
  if ( *(__int16 *)(*(_QWORD *)v152 + 2LL) < 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)v152 + 4LL) )
    {
      v101 = (void *)(*(_QWORD *)v152 + *(unsigned int *)(*(_QWORD *)v152 + 4LL));
      goto LABEL_271;
    }
LABEL_290:
    v33 = -1073741734;
LABEL_292:
    valid = v33;
    goto LABEL_293;
  }
  v101 = *(void **)(*(_QWORD *)v152 + 8LL);
LABEL_271:
  v137 = v101;
  v119 = 1;
  if ( !v101 )
    goto LABEL_290;
LABEL_23:
  if ( (v17 & 0x8000u) == 0 )
  {
    v21 = (_BYTE *)*((_QWORD *)v10 + 2);
  }
  else
  {
    if ( !*((_DWORD *)v10 + 2) )
      goto LABEL_28;
    v21 = &v10[*((unsigned int *)v10 + 2)];
  }
  v140 = v21;
  if ( v21 )
    goto LABEL_32;
LABEL_28:
  if ( (a7 & 0x40) != 0 )
  {
    if ( !v20 )
      goto LABEL_291;
    if ( *(__int16 *)(v20 + 2) >= 0 )
    {
      v22 = *(void **)(v20 + 16);
    }
    else
    {
      if ( !*(_DWORD *)(v20 + 8) )
        goto LABEL_291;
      v22 = (void *)(v20 + *(unsigned int *)(v20 + 8));
    }
  }
  else
  {
    v22 = v12;
    if ( v15 )
      v22 = (void *)v16;
  }
  v140 = v22;
  if ( !v22 )
  {
LABEL_291:
    v33 = -1073741733;
    goto LABEL_292;
  }
LABEL_32:
  v23 = a7 >> 2;
  LOBYTE(v23) = (a7 & 4) != 0;
  AccessStatus = v23;
  v131 = (a7 & 2) != 0;
  v24 = (v17 >> 2) & 8;
  v25 = (v17 >> 1) & 0x400;
  v26 = (v17 >> 1) & 0x1000;
  v27 = (v17 & 0x10) != 0 ? 4 : 0;
  if ( (v17 & 0x10) == LOWORD(v117[1]) )
  {
    LODWORD(v28) = 0;
  }
  else
  {
    LODWORD(v28) = 0;
    if ( (v17 & 0x8000u) == 0 )
    {
      v29 = *((_QWORD *)v10 + 3);
      goto LABEL_35;
    }
    if ( *((_DWORD *)v10 + 3) )
    {
      LODWORD(v29) = (_DWORD)v10 + *((_DWORD *)v10 + 3);
      goto LABEL_35;
    }
  }
  LODWORD(v29) = 0;
LABEL_35:
  if ( v20 && (*(_BYTE *)(v20 + 2) & 0x10) != 0 )
  {
    if ( *(__int16 *)(v20 + 2) >= 0 )
    {
      v28 = *(_QWORD *)(v20 + 24);
    }
    else if ( *(_DWORD *)(v20 + 12) )
    {
      LODWORD(v28) = v20 + *(_DWORD *)(v20 + 12);
    }
  }
  v30 = v25 | v26;
  v31 = (int)GenericMapping;
  LOBYTE(v31) = a6;
  LOBYTE(ReturnLength) = (a7 & 2) != 0;
  v32 = RtlpInheritAcl(
          v28,
          v29,
          v27 | v24 | (unsigned int)v30,
          v31,
          ReturnLength,
          AccessStatus,
          (int)v137,
          (__int64)v140,
          v145,
          v151,
          GenericMapping,
          2,
          v154,
          a5,
          (__int64)&v129,
          (__int64)v117,
          &v135);
  valid = v32;
  v33 = v32;
  if ( v32 < 0 )
  {
    if ( v32 == -2147483637 )
    {
      v34 = *((_WORD *)v10 + 1);
      v35 = 0x8000;
      if ( (a7 & 2) != 0 )
        v35 = 34816;
      *(_DWORD *)&v120[1] = v35;
      if ( (v34 & 0x30) != 0x30 )
        goto LABEL_45;
      if ( (v34 & 0x10) != 0 )
      {
        if ( v34 >= 0 )
        {
          v36 = (ACL *)*((_QWORD *)v10 + 3);
          goto LABEL_305;
        }
        if ( *((_DWORD *)v10 + 3) )
        {
          v36 = (ACL *)&v10[*((unsigned int *)v10 + 3)];
LABEL_305:
          v129 = (__int64)v36;
          *(_QWORD *)&v117[1] = v36;
          goto LABEL_306;
        }
      }
      v36 = 0LL;
      *(_QWORD *)&v117[1] = 0LL;
      v129 = 0LL;
LABEL_306:
      LOBYTE(v117[0]) = 1;
      *(_DWORD *)&v120[1] = v34 & 0x2000 | 0x10 | v35;
      goto LABEL_46;
    }
LABEL_293:
    v36 = (ACL *)v129;
    goto LABEL_294;
  }
  BYTE2(v117[0]) = 1;
  *(_DWORD *)&v120[1] = 2 * (v135 & 0x1400 | (2 * (v135 & 8 | 0x2004)));
LABEL_45:
  v36 = (ACL *)v129;
  *(_QWORD *)&v117[1] = v129;
LABEL_46:
  v37 = *((_WORD *)v10 + 1);
  v38 = (v37 & 0x10) != 0 ? 4 : 0;
  if ( (v37 & 0x10) == 0 )
    goto LABEL_47;
  if ( v37 >= 0 )
  {
    v39 = *((_QWORD *)v10 + 3);
    goto LABEL_48;
  }
  if ( *((_DWORD *)v10 + 3) )
    LODWORD(v39) = (_DWORD)v10 + *((_DWORD *)v10 + 3);
  else
LABEL_47:
    LODWORD(v39) = 0;
LABEL_48:
  if ( !*(_QWORD *)v152 || (*(_BYTE *)(*(_QWORD *)v152 + 2LL) & 0x10) == 0 )
  {
LABEL_172:
    LODWORD(v40) = 0;
    goto LABEL_53;
  }
  if ( *(__int16 *)(*(_QWORD *)v152 + 2LL) < 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)v152 + 12LL) )
    {
      LODWORD(v40) = v152[0] + *(_DWORD *)(*(_QWORD *)v152 + 12LL);
      goto LABEL_53;
    }
    goto LABEL_172;
  }
  v40 = *(_QWORD *)(*(_QWORD *)v152 + 24LL);
LABEL_53:
  v41 = v38 | (*((unsigned __int16 *)v10 + 1) >> 2) & 8 | (*((unsigned __int16 *)v10 + 1) >> 1) & 0x400;
  LOBYTE(v38) = a6;
  LOBYTE(ReturnLengtha) = v131;
  v42 = RtlpInheritAcl(
          v40,
          v39,
          v41,
          v38,
          ReturnLengtha,
          AccessStatus,
          (int)v137,
          (__int64)v140,
          v145,
          v151,
          GenericMapping,
          2,
          v154,
          a5,
          (__int64)&v144,
          (__int64)&v130,
          &v148);
  valid = v42;
  v33 = v42;
  if ( v42 >= 0 )
  {
    v124 = 1;
  }
  else
  {
    if ( v42 != -2147483637 )
      goto LABEL_294;
    v43 = *((_WORD *)v10 + 1);
    if ( (v43 & 0x30) != 0x30 )
      goto LABEL_56;
    if ( (v43 & 0x10) != 0 )
    {
      if ( v43 >= 0 )
      {
        v104 = (_BYTE *)*((_QWORD *)v10 + 3);
        goto LABEL_314;
      }
      if ( *((_DWORD *)v10 + 3) )
      {
        v104 = &v10[*((unsigned int *)v10 + 3)];
LABEL_314:
        v144 = v104;
        goto LABEL_56;
      }
    }
    v144 = 0LL;
  }
LABEL_56:
  Index = 0;
  do
  {
    if ( (v10[2] & 0x10) == 0 )
    {
LABEL_58:
      v44 = 0LL;
      goto LABEL_59;
    }
    if ( *((__int16 *)v10 + 1) >= 0 )
    {
      v44 = (ACL *)*((_QWORD *)v10 + 3);
    }
    else
    {
      if ( !*((_DWORD *)v10 + 3) )
        goto LABEL_58;
      v44 = (ACL *)&v10[*((unsigned int *)v10 + 3)];
    }
LABEL_59:
    AceByType = (char *)RtlFindAceByType(v44, 0x14u, &Index);
    v47 = AceByType + 8;
    if ( !AceByType )
      v47 = 0LL;
    if ( v47 && !RtlpValidTrustSubjectContext(v157, v47, v46, &valid) )
    {
      v33 = -1073741790;
LABEL_316:
      valid = v33;
      goto LABEL_294;
    }
    ++Index;
  }
  while ( AceByType );
  if ( (a7 & 0x800) == 0 )
  {
LABEL_64:
    v160 = v144;
    goto LABEL_65;
  }
  Index = 0;
  while ( 2 )
  {
    if ( (v10[2] & 0x10) == 0 )
      goto LABEL_322;
    if ( *((__int16 *)v10 + 1) >= 0 )
    {
      v105 = (ACL *)*((_QWORD *)v10 + 3);
    }
    else
    {
      if ( *((_DWORD *)v10 + 3) )
      {
        v105 = (ACL *)&v10[*((unsigned int *)v10 + 3)];
        goto LABEL_324;
      }
LABEL_322:
      v105 = 0LL;
    }
LABEL_324:
    v106 = RtlFindAceByType(v105, 0x14u, &Index);
    ++Index;
    if ( v106 )
    {
      if ( (*((_BYTE *)v106 + 1) & 8) == 0 )
      {
        v107 = v106[1];
        v108 = v106 + 2;
        Index = *((unsigned __int8 *)v106 + 1);
        if ( !v162 || (v107 & *(_DWORD *)(v162 + 4)) != v107 || v106 == (_DWORD *)-8LL )
        {
          v33 = -1073741811;
          goto LABEL_331;
        }
        goto LABEL_336;
      }
      continue;
    }
    break;
  }
  if ( !v157 )
    goto LABEL_64;
  if ( !v162 )
  {
    v33 = -1073741811;
    goto LABEL_316;
  }
  v107 = *(_DWORD *)(v162 + 4);
  v108 = v157;
  Index = 0;
LABEL_336:
  valid = RtlCreateAcl(&v184, 0x58u, 2u);
  v33 = valid;
  if ( valid < 0 )
    goto LABEL_282;
  valid = RtlAddProcessTrustLabelAce(&v184, 2u, Index, v108, 0x14u, v107);
  v33 = valid;
  if ( valid < 0 )
    goto LABEL_282;
  v10 = v161;
  valid = RtlpComputeMergedAcl(
            (int)v144,
            (*((_WORD *)v161 + 1) & 0x800 | (*((unsigned __int16 *)v161 + 1) >> 1) & 0x18u) >> 1,
            (int)&v184,
            4,
            (__int64)v137,
            (__int64)v140,
            (__int64)GenericMapping,
            2,
            (__int64)&v160,
            (__int64)&v135);
  v33 = valid;
  if ( valid < 0 )
    goto LABEL_282;
  v125 = 1;
LABEL_65:
  if ( (v10[2] & 0x10) != 0 )
  {
    if ( *((__int16 *)v10 + 1) >= 0 )
    {
      v48 = (ACL *)*((_QWORD *)v10 + 3);
    }
    else
    {
      if ( !*((_DWORD *)v10 + 3) )
        goto LABEL_66;
      v48 = (ACL *)&v10[*((unsigned int *)v10 + 3)];
    }
  }
  else
  {
LABEL_66:
    v48 = 0LL;
  }
  valid = RtlpValidFilterAclSubjectContext(v48, v157);
  v33 = valid;
  if ( valid < 0 )
    goto LABEL_282;
  v50 = (a7 >> 8) & 1 | 2;
  if ( (a7 & 0x200) == 0 )
    v50 = (a7 >> 8) & 1;
  v51 = v50 | 4;
  if ( (a7 & 0x400) == 0 )
    v51 = v50;
  if ( v51 )
  {
    v53 = 0LL;
    goto LABEL_76;
  }
  if ( (v10[2] & 0x10) == 0 )
    goto LABEL_74;
  if ( *((__int16 *)v10 + 1) >= 0 )
  {
    v52 = (ACL *)*((_QWORD *)v10 + 3);
  }
  else if ( *((_DWORD *)v10 + 3) )
  {
    v52 = (ACL *)&v10[*((unsigned int *)v10 + 3)];
  }
  else
  {
LABEL_74:
    v52 = 0LL;
  }
  v53 = (char *)RtlFindAceByType(v52, 0x11u, 0LL);
  v158 = v53;
  if ( v53 )
  {
    v55 = v53[1];
    v54 = v53 + 8;
    v51 = *((_DWORD *)v53 + 1);
    Sid2 = v53 + 8;
    BYTE1(v117[0]) = v55;
    if ( v55 == 8 || (v55 & 0x10) != 0 )
    {
      v53 = 0LL;
      v54 = 0LL;
      v55 = 0;
      v158 = 0LL;
      Sid2 = 0LL;
      v51 = 0;
      BYTE1(v117[0]) = 0;
    }
  }
  else
  {
LABEL_76:
    v54 = 0LL;
    v55 = 0;
  }
  if ( (v55 & 8) != 0 && *((_DWORD *)Sid1 + 2) < 0x2000u )
  {
    v33 = -1073740730;
    goto LABEL_331;
  }
  if ( v51 )
  {
LABEL_209:
    if ( v53 )
      goto LABEL_81;
    if ( ClientToken )
    {
      v54 = Sid1;
      Sid2 = Sid1;
      BYTE1(v117[0]) = 0;
      goto LABEL_81;
    }
    goto LABEL_343;
  }
  if ( Sid1 && *((_DWORD *)Sid1 + 2) < 0x2000u )
  {
    v51 = 1;
    goto LABEL_209;
  }
LABEL_81:
  if ( !v54 )
  {
    v56 = 0LL;
    v173 = 0LL;
    goto LABEL_83;
  }
  valid = RtlCreateAcl(&v185, 0x80u, 2u);
  v33 = valid;
  if ( valid < 0 )
    goto LABEL_282;
  valid = RtlAddMandatoryAce(&v185, 2u, BYTE1(v117[0]), Sid2, 0x11u, v51);
  v33 = valid;
  if ( valid < 0 )
    goto LABEL_282;
  v56 = &v185;
LABEL_83:
  if ( (a7 & 0x700) != 0 )
  {
    v57 = 4;
  }
  else if ( !v158 && v56 )
  {
    v57 = 0;
  }
  else
  {
    v57 = (*((_WORD *)v10 + 1) & 0x2800 | (*((unsigned __int16 *)v10 + 1) >> 1) & 0x18u) >> 1;
  }
  if ( !*(_QWORD *)v152 || (*(_BYTE *)(*(_QWORD *)v152 + 2LL) & 0x10) == 0 )
    goto LABEL_173;
  if ( *(__int16 *)(*(_QWORD *)v152 + 2LL) >= 0 )
  {
    v58 = *(_QWORD *)(*(_QWORD *)v152 + 24LL);
  }
  else
  {
    if ( *(_DWORD *)(*(_QWORD *)v152 + 12LL) )
    {
      LODWORD(v58) = v152[0] + *(_DWORD *)(*(_QWORD *)v152 + 12LL);
      goto LABEL_92;
    }
LABEL_173:
    LODWORD(v58) = 0;
  }
LABEL_92:
  LOBYTE(v49) = a6;
  LOBYTE(ReturnLengthb) = 1;
  v59 = RtlpInheritAcl(
          v58,
          (int)v56,
          v57,
          v49,
          ReturnLengthb,
          0,
          (int)v137,
          (__int64)v140,
          v145,
          v151,
          GenericMapping,
          3,
          v154,
          a5,
          (__int64)&v172,
          (__int64)&v132,
          &v135);
  valid = v59;
  v33 = v59;
  if ( v59 != -2147483637 )
  {
    if ( v59 >= 0 )
    {
      v56 = (ACL *)v172;
      v60 = v135;
      goto LABEL_94;
    }
    goto LABEL_282;
  }
  v60 = 0;
  v135 = 0;
LABEL_94:
  v33 = RtlpCombineAcls(
          v117[1],
          (_DWORD)v56,
          (_DWORD)v144,
          (_DWORD)v144,
          (__int64)v160,
          (__int64)v144,
          (__int64)&v174,
          (__int64)v128);
  valid = v33;
  v148 = ((v120[1] & 0x2000) << 17) | v128[0];
  if ( !v56 || v56 == v173 )
  {
    v62 = *(void **)&v128[1];
  }
  else
  {
    v99 = v56;
    v62 = *(void **)&v128[1];
    RtlFreeHeap(*(PVOID *)&v128[1], 0, v99);
  }
  if ( v33 < 0 )
    goto LABEL_282;
  v63 = v174;
  if ( v174 )
  {
    if ( BYTE2(v117[0]) && *(_QWORD *)&v117[1] )
      RtlFreeHeap(v62, 0, *(PVOID *)&v117[1]);
    *(_QWORD *)&v117[1] = v63;
    v129 = v63;
    v36 = (ACL *)v63;
    v123 = 1;
    *(_DWORD *)&v120[1] |= 2 * (v60 & 0x1400 | (2 * (v60 & 8 | 4)));
  }
  else
  {
    v36 = *(ACL **)&v117[1];
  }
  v128[0] = a7 & 8;
  if ( (a7 & 8) != 0
    || ((v93 = (char *)RtlFindAceByType(v36, 0x11u, 0LL)) != 0LL ? (v94 = v93 + 8) : (v94 = Sid2), !v94) )
  {
LABEL_100:
    v64 = v161;
    v65 = *((_WORD *)v161 + 1);
    if ( (v65 & 4) == 0 )
      goto LABEL_184;
    if ( v65 >= 0 )
    {
      v66 = *((_QWORD *)v161 + 4);
      goto LABEL_104;
    }
    if ( *((_DWORD *)v161 + 4) )
      LODWORD(v66) = (_DWORD)v161 + *((_DWORD *)v161 + 4);
    else
LABEL_184:
      LODWORD(v66) = 0;
LABEL_104:
    if ( *(_QWORD *)v152 && (*(_BYTE *)(*(_QWORD *)v152 + 2LL) & 4) != 0 )
    {
      if ( *(__int16 *)(*(_QWORD *)v152 + 2LL) >= 0 )
      {
        v67 = *(_QWORD *)(*(_QWORD *)v152 + 32LL);
LABEL_109:
        LOBYTE(v61) = a6;
        LOBYTE(ReturnLengthc) = a7 & 1;
        v68 = RtlpInheritAcl(
                v67,
                v66,
                v65 & 0x140C,
                v61,
                ReturnLengthc,
                AccessStatus,
                (int)v137,
                (__int64)v140,
                v145,
                v151,
                GenericMapping,
                1,
                v154,
                a5,
                (__int64)&Src,
                (__int64)v120,
                &v135);
        valid = v68;
        v33 = v68;
        if ( v68 >= 0 )
        {
          HIBYTE(v117[0]) = 1;
          *(_DWORD *)&v120[1] |= v135 & 0x1408 | 4;
LABEL_111:
          if ( (a7 & 0x1000) != 0 || !v122 || (v71 = ClientToken) == 0LL || !*(_QWORD *)v152 )
          {
LABEL_121:
            if ( (a7 & 1) != 0 && !Src )
              *(_DWORD *)&v120[1] |= 0x1000u;
            v73 = !v148 || (v148 & 0x1B0) != v148;
            v74 = v128[0];
            v75 = ClientToken;
            if ( !LOBYTE(v117[0]) || v128[0] || !v73 )
            {
LABEL_127:
              if ( (_BYTE)v147 && !v74 )
              {
                if ( !v75 )
                  goto LABEL_343;
                v146 = 32LL;
                RequiredPrivileges.PrivilegeCount = 1;
                RequiredPrivileges.Control = 1;
                RequiredPrivileges.Privilege[0].Luid = (_LUID)32LL;
                RequiredPrivileges.Privilege[0].Attributes = 0;
                valid = ZwPrivilegeCheck(v75, &RequiredPrivileges, &Result);
                v33 = valid;
                if ( valid < 0 )
                  goto LABEL_282;
                if ( !Result )
                  goto LABEL_355;
              }
              if ( !v119 || (a7 & 0x10) != 0 )
              {
                v76 = (unsigned __int8 *)v137;
                goto LABEL_130;
              }
              if ( v75 )
              {
                v76 = (unsigned __int8 *)v137;
                LOBYTE(v70) = v133;
                if ( !(unsigned __int8)RtlpValidOwnerSubjectContext(ClientToken, v137, v70, &v149) )
                {
                  v33 = v149;
                  goto LABEL_331;
                }
LABEL_130:
                if ( v134 && LOBYTE(v120[0]) )
                {
                  v109 = Src;
                  LOBYTE(v69) = v142;
                  ServerAcl = RtlpCreateServerAcl((_DWORD)Src, v69, v145, (unsigned int)&v156, (__int64)v126);
                  valid = ServerAcl;
                  v33 = ServerAcl;
                  if ( ServerAcl < 0 )
                    goto LABEL_282;
                  if ( HIBYTE(v117[0]) && v109 )
                    RtlFreeHeap(*(PVOID *)&v128[1], 0, v109);
                  Src = v156;
                  v156 = 0LL;
                }
                v77 = 4 * v76[1] + 8;
                LODWORD(Size) = v77;
                if ( v140 )
                  v78 = 4 * *((unsigned __int8 *)v140 + 1) + 8;
                else
                  v78 = 0;
                v79 = v120[1];
                v128[0] = v78;
                v142 = v120[1] & 0x10;
                if ( (v120[1] & 0x10) != 0 && *(_QWORD *)&v117[1] )
                  v80 = (*(unsigned __int16 *)(*(_QWORD *)&v117[1] + 2LL) + 3) & 0xFFFFFFFC;
                else
                  v80 = 0;
                v149 = v120[1] & 4;
                if ( (v120[1] & 4) != 0 && Src )
                  v81 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
                else
                  v81 = 0;
                v139 = v81;
                Heap = RtlAllocateHeap(*(PVOID *)&v128[1], NtdllBaseTag + 1310720, v80 + v78 + v81 + 20 + v77);
                *(_QWORD *)&v120[3] = Heap;
                v83 = Heap;
                if ( !Heap )
                {
                  v33 = -1073741801;
                  goto LABEL_331;
                }
                *Heap = 0LL;
                Heap[1] = 0LL;
                *((_DWORD *)Heap + 4) = 0;
                *((_WORD *)Heap + 1) |= v79;
                v84 = (char *)Heap + 20;
                *(_BYTE *)Heap = 1;
                if ( v142 )
                {
                  v96 = *(_QWORD *)&v117[1];
                  if ( *(_QWORD *)&v117[1] )
                  {
                    memmove(v84, *(const void **)&v117[1], *(unsigned __int16 *)(*(_QWORD *)&v117[1] + 2LL));
                    if ( !BYTE2(v117[0]) )
                      RtlpApplyAclToObject(v84, GenericMapping);
                    v83 = *(_QWORD **)&v120[3];
                    *(_DWORD *)(*(_QWORD *)&v120[3] + 12LL) = (_DWORD)v84 - *(_DWORD *)&v120[3];
                    v97 = *(unsigned __int16 *)(v96 + 2);
                    if ( v80 > (unsigned int)v97 )
                    {
                      memset(&v84[v97], 0, v80 - (unsigned int)v97);
                      v83 = *(_QWORD **)&v120[3];
                    }
                    v84 += v80;
                  }
                  else
                  {
                    *((_DWORD *)Heap + 3) = 0;
                  }
                }
                if ( v149 )
                {
                  v85 = (unsigned __int16 *)Src;
                  if ( Src )
                  {
                    memmove(v84, Src, *((unsigned __int16 *)Src + 1));
                    if ( !HIBYTE(v117[0]) )
                      RtlpApplyAclToObject(v84, GenericMapping);
                    *(_DWORD *)(*(_QWORD *)&v120[3] + 16LL) = (_DWORD)v84 - *(_DWORD *)&v120[3];
                    v86 = v85[1];
                    v87 = v139;
                    if ( v139 > (unsigned int)v86 )
                      memset(&v84[v86], 0, v139 - (unsigned int)v86);
                    v84 += v87;
                  }
                  else
                  {
                    *((_DWORD *)v83 + 4) = 0;
                  }
                }
                v88 = (unsigned int)Size;
                memmove(v84, v137, (unsigned int)Size);
                v89 = *(_QWORD *)&v120[3];
                v90 = (_DWORD)v84 - *(_DWORD *)&v120[3];
                v91 = &v84[v88];
                *(_DWORD *)(*(_QWORD *)&v120[3] + 4LL) = v90;
                if ( v140 )
                {
                  memmove(v91, v140, v128[0]);
                  *(_DWORD *)(v89 + 8) = (_DWORD)v91 - v89;
                }
                v36 = *(ACL **)&v117[1];
                v33 = 0;
                valid = 0;
                goto LABEL_150;
              }
LABEL_343:
              v33 = -1073741700;
LABEL_331:
              valid = v33;
              goto LABEL_282;
            }
            if ( !ClientToken )
              goto LABEL_343;
            RequiredPrivileges.PrivilegeCount = 1;
            RequiredPrivileges.Control = 1;
            v146 = 8LL;
            RequiredPrivileges.Privilege[0].Luid = (_LUID)8LL;
            RequiredPrivileges.Privilege[0].Attributes = 0;
            valid = ZwPrivilegeCheck(ClientToken, &RequiredPrivileges, &Result);
            v33 = valid;
            if ( valid >= 0 )
            {
              if ( !Result )
              {
LABEL_355:
                v33 = -1073741727;
                goto LABEL_331;
              }
              goto LABEL_127;
            }
LABEL_282:
            v36 = *(ACL **)&v117[1];
            goto LABEL_294;
          }
          LOBYTE(AccessMask) = a6;
          GrantedAccess = 0;
          AccessStatus = 0;
          valid = RtlpNewSecurityObject(
                    v152[0],
                    0,
                    (int)&v155,
                    v154,
                    a5,
                    AccessMask,
                    a7 | 1,
                    ClientToken,
                    (__int64)GenericMapping,
                    v162);
          v33 = valid;
          if ( valid < 0 )
            goto LABEL_282;
          if ( (*((_BYTE *)v155 + 2) & 4) != 0 )
          {
            if ( *((__int16 *)v155 + 1) >= 0 )
            {
              v72 = (char *)*((_QWORD *)v155 + 4);
LABEL_120:
              if ( (unsigned __int8)RtlpOwnerAcesPresent(16LL, v72) )
              {
                NewTokenHandle = 0LL;
                LODWORD(Size) = 20;
                if ( (_BYTE)v139 != 1 )
                  goto LABEL_277;
                v180 = 1;
                v179[1] = 2;
                ObjectAttributes.SecurityQualityOfService = v179;
                v179[0] = 12;
                ObjectAttributes.Length = 48;
                memset(&ObjectAttributes.RootDirectory, 0, 20);
                ObjectAttributes.SecurityDescriptor = 0LL;
                valid = NtDuplicateToken(v71, 8u, &ObjectAttributes, 0, TokenImpersonation, &NewTokenHandle);
                v33 = valid;
                if ( valid < 0 )
                  goto LABEL_282;
                v102 = NewTokenHandle;
                if ( !NewTokenHandle )
LABEL_277:
                  v102 = v71;
                valid = ZwAccessCheck(
                          v155,
                          v102,
                          0x40000u,
                          GenericMapping,
                          &RequiredPrivileges,
                          (PULONG)&Size,
                          &GrantedAccess,
                          &AccessStatus);
                v33 = valid;
                if ( NewTokenHandle )
                  NtClose(NewTokenHandle);
                if ( v33 < 0 )
                  goto LABEL_282;
                v33 = AccessStatus;
                valid = AccessStatus;
                if ( AccessStatus < 0 )
                  goto LABEL_282;
              }
              goto LABEL_121;
            }
            if ( *((_DWORD *)v155 + 4) )
            {
              v72 = (char *)v155 + *((unsigned int *)v155 + 4);
              goto LABEL_120;
            }
          }
          v72 = 0LL;
          goto LABEL_120;
        }
        if ( v68 != -2147483637 )
          goto LABEL_282;
        v69 = *(_DWORD *)&v120[1];
        if ( (a7 & 1) != 0 )
        {
          v69 = *(_DWORD *)&v120[1] | 0x400;
          *(_DWORD *)&v120[1] |= 0x400u;
        }
        v100 = *((_WORD *)v64 + 1);
        if ( (v100 & 0xC) != 0xC )
        {
          if ( !v146 )
            goto LABEL_111;
          Src = (void *)v146;
          v69 |= 4u;
LABEL_249:
          *(_DWORD *)&v120[1] = v69;
          goto LABEL_111;
        }
        if ( (v100 & 4) != 0 )
        {
          if ( v100 >= 0 )
          {
            v103 = (_BYTE *)*((_QWORD *)v64 + 4);
LABEL_286:
            Src = v103;
LABEL_287:
            v69 |= v100 & 0x1000 | 4;
            LOBYTE(v120[0]) = 1;
            goto LABEL_249;
          }
          if ( *((_DWORD *)v64 + 4) )
          {
            v103 = &v64[*((unsigned int *)v64 + 4)];
            goto LABEL_286;
          }
        }
        Src = 0LL;
        goto LABEL_287;
      }
      if ( *(_DWORD *)(*(_QWORD *)v152 + 16LL) )
      {
        LODWORD(v67) = v152[0] + *(_DWORD *)(*(_QWORD *)v152 + 16LL);
        goto LABEL_109;
      }
    }
    LODWORD(v67) = 0;
    goto LABEL_109;
  }
  if ( !ClientToken )
  {
    v33 = -1073741700;
    goto LABEL_316;
  }
  valid = RtlSidDominates(Sid1, v94, &Dominates);
  v33 = valid;
  if ( valid >= 0 )
  {
    v95 = (unsigned __int8)v147;
    if ( !Dominates )
      v95 = 1;
    v147 = v95;
    goto LABEL_100;
  }
LABEL_294:
  v89 = *(_QWORD *)&v120[3];
LABEL_150:
  if ( v155 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v155);
    v36 = (ACL *)v129;
    v33 = valid;
  }
  if ( v126[0] && v156 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v156);
    v36 = (ACL *)v129;
    v33 = valid;
  }
  RtlFreeHeap(*(PVOID *)&v128[1], 0, BaseAddress);
  RtlFreeHeap(*(PVOID *)&v128[1], 0, v165);
  RtlFreeHeap(*(PVOID *)&v128[1], 0, v166);
  RtlFreeHeap(*(PVOID *)&v128[1], 0, v167);
  RtlFreeHeap(*(PVOID *)&v128[1], 0, v168);
  if ( v169 )
    RtlFreeHeap(*(PVOID *)&v128[1], 0, v169);
  if ( v170 )
    RtlFreeHeap(*(PVOID *)&v128[1], 0, v170);
  if ( (v123 || BYTE2(v117[0])) && v36 )
  {
    v98 = v36;
    v92 = *(void **)&v128[1];
    RtlFreeHeap(*(PVOID *)&v128[1], 0, v98);
  }
  else
  {
    v92 = *(void **)&v128[1];
  }
  if ( v124 && v144 )
    RtlFreeHeap(v92, 0, v144);
  if ( v160 && v125 )
    RtlFreeHeap(v92, 0, v160);
  if ( HIBYTE(v117[0]) )
  {
    if ( Src )
      RtlFreeHeap(*(PVOID *)&v128[1], 0, Src);
  }
  *v175 = v89;
  return v33;
}
