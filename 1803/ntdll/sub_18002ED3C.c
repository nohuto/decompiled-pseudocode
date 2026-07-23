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

int __fastcall sub_18002ED3C(
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
  int result; // eax
  ULONG v14; // eax
  __int16 v15; // r10
  __int64 v16; // r8
  unsigned int v17; // edx
  _BYTE *v18; // rcx
  void *v19; // rcx
  __int64 v20; // rbx
  _BYTE *v21; // rax
  void *v22; // rax
  NTSTATUS v23; // eax
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
  ACL *v37; // rdi
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
  ACL *v48; // rcx
  char *AceByType; // rbx
  __int64 v50; // r8
  void *v51; // rdx
  ACL *v52; // rcx
  int v53; // r9d
  unsigned int v54; // edx
  ACCESS_MASK v55; // edi
  ACL *v56; // rcx
  char *v57; // rax
  PSID v58; // rdx
  char v59; // cl
  unsigned __int8 *v60; // rdi
  unsigned int v61; // r8d
  __int64 v62; // rcx
  int v63; // eax
  __int16 v64; // si
  int v65; // r9d
  void *v66; // rdi
  ACL *v67; // rbx
  size_t v68; // rdi
  __int16 v69; // ax
  __int64 v70; // rdx
  __int64 v71; // rcx
  int v72; // eax
  int v73; // edx
  __int64 v74; // r8
  HANDLE v75; // rdi
  char *v76; // rdx
  bool v77; // al
  int v78; // edi
  HANDLE v79; // rsi
  unsigned __int8 *v80; // rsi
  int v81; // r9d
  int v82; // r8d
  __int16 v83; // bx
  unsigned int v84; // esi
  unsigned int v85; // ecx
  _QWORD *Heap; // rax
  _QWORD *v87; // rdx
  char *v88; // rbx
  unsigned __int16 *v89; // rdi
  __int64 v90; // rsi
  __int64 v91; // rcx
  __int64 v92; // rdi
  __int64 v93; // rdi
  int v94; // eax
  char *v95; // rbx
  void *v96; // rdi
  char *v97; // rax
  PSID v98; // rax
  int v99; // eax
  __int64 v100; // rdi
  __int64 v101; // rcx
  ACL *v102; // r8
  unsigned __int8 *v103; // r8
  __int16 v104; // cx
  void *v105; // rax
  void *v106; // rcx
  _BYTE *v107; // rax
  ACL *v108; // rcx
  _DWORD *v109; // rax
  ACCESS_MASK v110; // edi
  void *v111; // rsi
  HANDLE v112; // rdx
  void *v113; // rdi
  int v114; // eax
  int ReturnLength; // [rsp+20h] [rbp-F0h]
  int ReturnLengtha; // [rsp+20h] [rbp-F0h]
  int ReturnLengthb; // [rsp+20h] [rbp-F0h]
  int ReturnLengthc; // [rsp+20h] [rbp-F0h]
  int AccessMask; // [rsp+28h] [rbp-E8h]
  NTSTATUS v120; // [rsp+90h] [rbp-80h] BYREF
  _DWORD v121[3]; // [rsp+94h] [rbp-7Ch] BYREF
  BOOLEAN Result; // [rsp+A0h] [rbp-70h] BYREF
  char v123; // [rsp+A1h] [rbp-6Fh]
  _WORD v124[7]; // [rsp+A2h] [rbp-6Eh] BYREF
  BOOLEAN Dominates; // [rsp+B0h] [rbp-60h] BYREF
  char v126; // [rsp+B1h] [rbp-5Fh] BYREF
  char v127; // [rsp+B2h] [rbp-5Eh]
  char v128; // [rsp+B3h] [rbp-5Dh]
  char v129; // [rsp+B4h] [rbp-5Ch]
  ULONG Index; // [rsp+B8h] [rbp-58h] BYREF
  _DWORD v131[3]; // [rsp+BCh] [rbp-54h] BYREF
  char v132; // [rsp+C8h] [rbp-48h] BYREF
  bool v133; // [rsp+C9h] [rbp-47h]
  char v134; // [rsp+CAh] [rbp-46h] BYREF
  int v135; // [rsp+CCh] [rbp-44h] BYREF
  __int16 v136; // [rsp+D0h] [rbp-40h]
  bool v137; // [rsp+D2h] [rbp-3Eh]
  NTSTATUS AccessStatus; // [rsp+D4h] [rbp-3Ch] BYREF
  void *v139; // [rsp+D8h] [rbp-38h]
  __int64 v140; // [rsp+E0h] [rbp-30h] BYREF
  unsigned int v141; // [rsp+E8h] [rbp-28h]
  void *v142; // [rsp+F0h] [rbp-20h]
  PGENERIC_MAPPING GenericMapping; // [rsp+F8h] [rbp-18h]
  HANDLE ClientToken; // [rsp+100h] [rbp-10h]
  ULONG v145; // [rsp+108h] [rbp-8h] BYREF
  void *Src; // [rsp+110h] [rbp+0h] BYREF
  __int64 v147; // [rsp+118h] [rbp+8h]
  PVOID v148; // [rsp+120h] [rbp+10h] BYREF
  __int64 v149; // [rsp+128h] [rbp+18h]
  int v150; // [rsp+130h] [rbp+20h]
  int v151; // [rsp+134h] [rbp+24h] BYREF
  int v152; // [rsp+138h] [rbp+28h] BYREF
  PSID Sid2; // [rsp+140h] [rbp+30h]
  __int64 v154; // [rsp+148h] [rbp+38h]
  int v155[2]; // [rsp+150h] [rbp+40h]
  size_t Size; // [rsp+158h] [rbp+48h] BYREF
  __int64 v157; // [rsp+160h] [rbp+50h]
  PVOID v158; // [rsp+168h] [rbp+58h] BYREF
  PVOID v159; // [rsp+170h] [rbp+60h] BYREF
  void *v160; // [rsp+178h] [rbp+68h]
  char *v161; // [rsp+180h] [rbp+70h]
  PSID Sid1; // [rsp+188h] [rbp+78h]
  PVOID v163; // [rsp+190h] [rbp+80h] BYREF
  __int64 v164; // [rsp+198h] [rbp+88h]
  HANDLE NewTokenHandle; // [rsp+1A0h] [rbp+90h] BYREF
  PVOID BaseAddress; // [rsp+1A8h] [rbp+98h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+1B0h] [rbp+A0h] BYREF
  PVOID v168; // [rsp+1B8h] [rbp+A8h] BYREF
  PVOID v169; // [rsp+1C0h] [rbp+B0h] BYREF
  PVOID v170; // [rsp+1C8h] [rbp+B8h] BYREF
  PVOID v171; // [rsp+1D0h] [rbp+C0h] BYREF
  PVOID v172; // [rsp+1D8h] [rbp+C8h] BYREF
  PVOID v173; // [rsp+1E0h] [rbp+D0h] BYREF
  __int64 v174; // [rsp+1E8h] [rbp+D8h] BYREF
  ACL *v175; // [rsp+1F0h] [rbp+E0h]
  ACL *v176; // [rsp+1F8h] [rbp+E8h] BYREF
  _BYTE *v177; // [rsp+200h] [rbp+F0h]
  _QWORD *v178; // [rsp+208h] [rbp+F8h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+210h] [rbp+100h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+240h] [rbp+130h] BYREF
  _PRIVILEGE_SET RequiredPrivileges; // [rsp+268h] [rbp+158h] BYREF
  _DWORD v182[2]; // [rsp+280h] [rbp+170h] BYREF
  __int16 v183; // [rsp+288h] [rbp+178h]
  char TokenInformation[24]; // [rsp+290h] [rbp+180h] BYREF
  unsigned int v185; // [rsp+2A8h] [rbp+198h]
  int v186; // [rsp+2ACh] [rbp+19Ch]
  ACL v187; // [rsp+2D0h] [rbp+1C0h] BYREF
  ACL v188; // [rsp+330h] [rbp+220h] BYREF

  GenericMapping = a9;
  v10 = a2;
  v164 = a10;
  v11 = 0LL;
  v158 = 0LL;
  v175 = &v188;
  v12 = 0LL;
  *(_QWORD *)v155 = a1;
  v177 = a2;
  *(_QWORD *)&v131[1] = NtCurrentPeb()->ProcessHeap;
  v157 = a4;
  v178 = a3;
  ClientToken = TokenHandle;
  v140 = 0LL;
  v148 = 0LL;
  v127 = 0;
  v129 = 0;
  v131[0] = 0;
  Src = 0LL;
  v159 = 0LL;
  memset(v121, 0, sizeof(v121));
  v123 = 0;
  v132 = 0;
  v134 = 0;
  LOBYTE(v124[0]) = 0;
  LOBYTE(v150) = 0;
  v126 = 0;
  Sid1 = 0LL;
  v160 = 0LL;
  v147 = 0LL;
  v154 = 0LL;
  v149 = 0LL;
  *(_QWORD *)&v124[3] = 0LL;
  v151 = 0;
  v161 = 0LL;
  Sid2 = 0LL;
  v174 = 0LL;
  v176 = 0LL;
  Dominates = 1;
  v163 = 0LL;
  v128 = 0;
  LOBYTE(v141) = 1;
  BaseAddress = 0LL;
  v169 = 0LL;
  v170 = 0LL;
  v173 = 0LL;
  v168 = 0LL;
  v171 = 0LL;
  v172 = 0LL;
  if ( TokenHandle )
  {
    result = ZwQueryInformationToken(TokenHandle, 0xAu, TokenInformation, 0x38u, &v145);
    if ( result < 0 )
      return result;
    v141 = v185;
    if ( v185 == 2 && v186 < 1 )
      return -1073741659;
  }
  if ( !v10 )
  {
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    v10 = SecurityDescriptor;
  }
  v14 = *((unsigned __int16 *)v10 + 1);
  Size = (size_t)v10;
  v15 = v14 & 0x80;
  v136 = v15;
  LOBYTE(v14) = (v14 & 0x40) != 0;
  v137 = v15 != 0;
  v145 = v14;
  if ( ClientToken || v15 )
  {
    result = sub_18002E238(ClientToken, v15 != 0, &BaseAddress, &v169, &v170, &v171, &v173, &v168, &v172);
    if ( result < 0 )
      return result;
    v11 = *(void **)BaseAddress;
    v12 = *(void **)v169;
    v149 = *(_QWORD *)v170;
    Sid1 = *(PSID *)v173;
    v160 = *(void **)v168;
    if ( v171 )
      v147 = *(_QWORD *)v171;
    else
      v147 = 0LL;
    v15 = v136;
    if ( v172 )
    {
      v16 = *(_QWORD *)v172;
      v154 = *(_QWORD *)v172;
    }
    else
    {
      v16 = 0LL;
      v154 = 0LL;
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
  v139 = v18;
  if ( v18 )
  {
    v20 = *(_QWORD *)v155;
    v123 = 1;
    goto LABEL_20;
  }
LABEL_15:
  if ( (a7 & 0x20) != 0 )
  {
    v20 = *(_QWORD *)v155;
    if ( *(_QWORD *)v155 )
    {
      if ( *(__int16 *)(*(_QWORD *)v155 + 2LL) >= 0 )
      {
        v106 = *(void **)(*(_QWORD *)v155 + 8LL);
      }
      else
      {
        if ( !*(_DWORD *)(*(_QWORD *)v155 + 4LL) )
          goto LABEL_283;
        v106 = (void *)(*(_QWORD *)v155 + *(unsigned int *)(*(_QWORD *)v155 + 4LL));
      }
      v139 = v106;
      v123 = 1;
      if ( v106 )
        goto LABEL_20;
    }
LABEL_283:
    v34 = -1073741734;
LABEL_285:
    v120 = v34;
    goto LABEL_286;
  }
  v19 = (void *)v147;
  if ( !v15 )
    v19 = v11;
  v139 = v19;
  if ( !v19 )
  {
    v34 = -1073741700;
    goto LABEL_285;
  }
  v20 = *(_QWORD *)v155;
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
  v142 = v21;
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
  v142 = v22;
  if ( !v22 )
  {
LABEL_284:
    v34 = -1073741733;
    goto LABEL_285;
  }
LABEL_27:
  v23 = a7 >> 2;
  LOBYTE(v23) = (a7 & 4) != 0;
  AccessStatus = v23;
  v24 = a7 & 2;
  v133 = v24 != 0;
  v25 = (v17 >> 2) & 8;
  v26 = (v17 >> 1) & 0x400;
  v27 = (v17 >> 1) & 0x1000;
  v28 = (v17 & 0x10) != 0 ? 4 : 0;
  if ( (v17 & 0x10) == LOWORD(v121[1]) )
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
  v32 = (int)GenericMapping;
  LOBYTE(v32) = a6;
  LOBYTE(ReturnLength) = v24 != 0;
  v33 = sub_1800300BC(
          v29,
          v30,
          v28 | v25 | (unsigned int)v31,
          v32,
          ReturnLength,
          AccessStatus,
          (int)v139,
          (__int64)v142,
          v147,
          v154,
          GenericMapping,
          2,
          v157,
          a5,
          (__int64)&v140,
          (__int64)v121,
          &v135);
  v120 = v33;
  v34 = v33;
  if ( v33 >= 0 )
  {
    v35 = *((_WORD *)v10 + 1);
    BYTE2(v121[0]) = 1;
    *(_DWORD *)&v124[1] = 2 * (v135 & 0x1400 | (2 * (v135 & 8 | 0x2004)));
LABEL_40:
    v37 = (ACL *)v140;
    *(_QWORD *)&v121[1] = v140;
    goto LABEL_41;
  }
  if ( v33 != -2147483637 )
  {
LABEL_286:
    v37 = (ACL *)v140;
    goto LABEL_287;
  }
  v35 = *((_WORD *)v10 + 1);
  v36 = 0x8000;
  if ( (a7 & 2) != 0 )
    v36 = 34816;
  *(_DWORD *)&v124[1] = v36;
  if ( (v35 & 0x30) != 0x30 )
    goto LABEL_40;
  if ( (v35 & 0x10) != 0 )
  {
    if ( v35 >= 0 )
    {
      v37 = (ACL *)*((_QWORD *)v10 + 3);
      goto LABEL_298;
    }
    if ( *((_DWORD *)v10 + 3) )
    {
      v37 = (ACL *)&v10[*((unsigned int *)v10 + 3)];
LABEL_298:
      *(_QWORD *)&v121[1] = v37;
      goto LABEL_299;
    }
  }
  v37 = 0LL;
  *(_QWORD *)&v121[1] = 0LL;
LABEL_299:
  v140 = (__int64)v37;
  LOBYTE(v121[0]) = 1;
  *(_DWORD *)&v124[1] = v35 & 0x2000 | 0x10 | v36;
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
  if ( !*(_QWORD *)v155 || (*(_BYTE *)(*(_QWORD *)v155 + 2LL) & 0x10) == 0 )
    goto LABEL_208;
  if ( *(__int16 *)(*(_QWORD *)v155 + 2LL) >= 0 )
  {
    v44 = *(_QWORD *)(*(_QWORD *)v155 + 24LL);
    goto LABEL_48;
  }
  if ( *(_DWORD *)(*(_QWORD *)v155 + 12LL) )
    LODWORD(v44) = v155[0] + *(_DWORD *)(*(_QWORD *)v155 + 12LL);
  else
LABEL_208:
    LODWORD(v44) = 0;
LABEL_48:
  v45 = v42 | v40 | v41;
  LOBYTE(v42) = a6;
  LOBYTE(ReturnLengtha) = v133;
  v46 = sub_1800300BC(
          v44,
          v43,
          v45,
          v42,
          ReturnLengtha,
          AccessStatus,
          (int)v139,
          (__int64)v142,
          v147,
          v154,
          GenericMapping,
          2,
          v157,
          a5,
          (__int64)&v148,
          (__int64)&v132,
          &v151);
  v120 = v46;
  v34 = v46;
  if ( v46 >= 0 )
  {
    v127 = 1;
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
          v107 = (_BYTE *)*((_QWORD *)v10 + 3);
        }
        else if ( *((_DWORD *)v10 + 3) )
        {
          v107 = &v10[*((unsigned int *)v10 + 3)];
        }
        else
        {
          v107 = 0LL;
        }
        v148 = v107;
      }
      else
      {
        v148 = 0LL;
      }
    }
  }
  Index = 0;
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
      v48 = (ACL *)*((_QWORD *)v10 + 3);
    }
    else
    {
      if ( !*((_DWORD *)v10 + 3) )
        goto LABEL_53;
      v48 = (ACL *)&v10[*((unsigned int *)v10 + 3)];
    }
LABEL_54:
    AceByType = (char *)RtlFindAceByType(v48, 0x14u, &Index);
    v51 = AceByType + 8;
    if ( !AceByType )
      v51 = 0LL;
    if ( v51 && !sub_180002C80(v160, v51, v50, &v120) )
    {
      v34 = -1073741790;
LABEL_310:
      v120 = v34;
      goto LABEL_287;
    }
    ++Index;
  }
  while ( AceByType );
  if ( (a7 & 0x800) == 0 )
  {
LABEL_59:
    v163 = v148;
    goto LABEL_60;
  }
  Index = 0;
  while ( 2 )
  {
    if ( (v10[2] & 0x10) == 0 )
      goto LABEL_316;
    if ( *((__int16 *)v10 + 1) >= 0 )
    {
      v108 = (ACL *)*((_QWORD *)v10 + 3);
    }
    else
    {
      if ( *((_DWORD *)v10 + 3) )
      {
        v108 = (ACL *)&v10[*((unsigned int *)v10 + 3)];
        goto LABEL_318;
      }
LABEL_316:
      v108 = 0LL;
    }
LABEL_318:
    v109 = RtlFindAceByType(v108, 0x14u, &Index);
    ++Index;
    if ( v109 )
    {
      if ( (*((_BYTE *)v109 + 1) & 8) == 0 )
      {
        v110 = v109[1];
        v111 = v109 + 2;
        Index = *((unsigned __int8 *)v109 + 1);
        if ( !v164 || (v110 & *(_DWORD *)(v164 + 4)) != v110 || v109 == (_DWORD *)-8LL )
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
  if ( !v160 )
    goto LABEL_59;
  if ( !v164 )
  {
    v34 = -1073741811;
    goto LABEL_310;
  }
  v110 = *(_DWORD *)(v164 + 4);
  v111 = v160;
  Index = 0;
LABEL_330:
  v120 = RtlCreateAcl(&v187, 0x58u, 2u);
  v34 = v120;
  if ( v120 < 0 )
    goto LABEL_279;
  v120 = RtlAddProcessTrustLabelAce(&v187, 2u, Index, v111, 0x14u, v110);
  v34 = v120;
  if ( v120 < 0 )
    goto LABEL_279;
  v10 = (_BYTE *)Size;
  v120 = sub_1800E0618(
           (int)v148,
           (*(_WORD *)(Size + 2) & 0x800 | (*(unsigned __int16 *)(Size + 2) >> 1) & 0x18u) >> 1,
           (int)&v187,
           4,
           (__int64)v139,
           (__int64)v142,
           (__int64)GenericMapping,
           2,
           (__int64)&v163,
           (__int64)&v135);
  v34 = v120;
  if ( v120 < 0 )
    goto LABEL_279;
  v128 = 1;
LABEL_60:
  if ( (v10[2] & 0x10) != 0 )
  {
    if ( *((__int16 *)v10 + 1) >= 0 )
    {
      v52 = (ACL *)*((_QWORD *)v10 + 3);
    }
    else
    {
      if ( !*((_DWORD *)v10 + 3) )
        goto LABEL_61;
      v52 = (ACL *)&v10[*((unsigned int *)v10 + 3)];
    }
  }
  else
  {
LABEL_61:
    v52 = 0LL;
  }
  v120 = sub_18002EC40(v52, v160);
  v34 = v120;
  if ( v120 < 0 )
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
    v56 = (ACL *)*((_QWORD *)v10 + 3);
  }
  else if ( *((_DWORD *)v10 + 3) )
  {
    v56 = (ACL *)&v10[*((unsigned int *)v10 + 3)];
  }
  else
  {
LABEL_69:
    v56 = 0LL;
  }
  v57 = (char *)RtlFindAceByType(v56, 0x11u, 0LL);
  v161 = v57;
  if ( v57 )
  {
    v59 = v57[1];
    v58 = v57 + 8;
    v55 = *((_DWORD *)v57 + 1);
    Sid2 = v57 + 8;
    BYTE1(v121[0]) = v59;
    if ( v59 == 8 || (v59 & 0x10) != 0 )
    {
      v57 = 0LL;
      v58 = 0LL;
      v59 = 0;
      v161 = 0LL;
      Sid2 = 0LL;
      v55 = 0;
      BYTE1(v121[0]) = 0;
    }
  }
  else
  {
LABEL_71:
    v58 = 0LL;
    v59 = 0;
  }
  if ( (v59 & 8) != 0 && *((_DWORD *)Sid1 + 2) < 0x2000u )
  {
    v34 = -1073740730;
    goto LABEL_325;
  }
  if ( v55 )
  {
LABEL_197:
    if ( v57 )
      goto LABEL_76;
    if ( ClientToken )
    {
      v58 = Sid1;
      Sid2 = Sid1;
      BYTE1(v121[0]) = 0;
      goto LABEL_76;
    }
    goto LABEL_337;
  }
  if ( Sid1 && *((_DWORD *)Sid1 + 2) < 0x2000u )
  {
    v55 = 1;
    goto LABEL_197;
  }
LABEL_76:
  if ( !v58 )
  {
    v60 = 0LL;
    v175 = 0LL;
    goto LABEL_78;
  }
  v120 = RtlCreateAcl(&v188, 0x80u, 2u);
  v34 = v120;
  if ( v120 < 0 )
    goto LABEL_279;
  v120 = RtlAddMandatoryAce(&v188, 2u, BYTE1(v121[0]), Sid2, 0x11u, v55);
  v34 = v120;
  if ( v120 < 0 )
    goto LABEL_279;
  v60 = (unsigned __int8 *)&v188;
LABEL_78:
  if ( (a7 & 0x700) != 0 )
  {
    v61 = 4;
  }
  else if ( !v161 && v60 )
  {
    v61 = 0;
  }
  else
  {
    v61 = (*((_WORD *)v10 + 1) & 0x2800 | (*((unsigned __int16 *)v10 + 1) >> 1) & 0x18u) >> 1;
  }
  if ( !*(_QWORD *)v155 || (*(_BYTE *)(*(_QWORD *)v155 + 2LL) & 0x10) == 0 )
    goto LABEL_209;
  if ( *(__int16 *)(*(_QWORD *)v155 + 2LL) >= 0 )
  {
    v62 = *(_QWORD *)(*(_QWORD *)v155 + 24LL);
  }
  else
  {
    if ( *(_DWORD *)(*(_QWORD *)v155 + 12LL) )
    {
      LODWORD(v62) = v155[0] + *(_DWORD *)(*(_QWORD *)v155 + 12LL);
      goto LABEL_87;
    }
LABEL_209:
    LODWORD(v62) = 0;
  }
LABEL_87:
  LOBYTE(v53) = a6;
  LOBYTE(ReturnLengthb) = 1;
  v63 = sub_1800300BC(
          v62,
          (int)v60,
          v61,
          v53,
          ReturnLengthb,
          0,
          (int)v139,
          (__int64)v142,
          v147,
          v154,
          GenericMapping,
          3,
          v157,
          a5,
          (__int64)&v174,
          (__int64)&v134,
          &v135);
  v120 = v63;
  v34 = v63;
  if ( v63 != -2147483637 )
  {
    if ( v63 >= 0 )
    {
      v60 = (unsigned __int8 *)v174;
      v64 = v135;
      goto LABEL_89;
    }
    goto LABEL_279;
  }
  v64 = 0;
  v135 = 0;
LABEL_89:
  v34 = sub_18002E668(
          *(unsigned __int8 **)&v121[1],
          v60,
          (unsigned __int8 *)v148,
          (unsigned __int8 *)v148,
          (unsigned __int8 *)v163,
          (unsigned __int8 *)v148,
          &v176,
          v131);
  v120 = v34;
  v151 = ((v124[1] & 0x2000) << 17) | v131[0];
  if ( !v60 || v60 == (unsigned __int8 *)v175 )
  {
    v66 = *(void **)&v131[1];
  }
  else
  {
    v103 = v60;
    v66 = *(void **)&v131[1];
    RtlFreeHeap(*(PVOID *)&v131[1], 0, v103);
  }
  if ( v34 < 0 )
    goto LABEL_279;
  v67 = v176;
  if ( v176 )
  {
    if ( BYTE2(v121[0]) && *(_QWORD *)&v121[1] )
      RtlFreeHeap(v66, 0, *(PVOID *)&v121[1]);
    *(_QWORD *)&v121[1] = v67;
    v140 = (__int64)v67;
    v37 = v67;
    v129 = 1;
    *(_DWORD *)&v124[1] |= 2 * (v64 & 0x1400 | (2 * (v64 & 8 | 4)));
  }
  else
  {
    v37 = *(ACL **)&v121[1];
  }
  v131[0] = a7 & 8;
  if ( (a7 & 8) != 0
    || ((v97 = (char *)RtlFindAceByType(v37, 0x11u, 0LL)) != 0LL ? (v98 = v97 + 8) : (v98 = Sid2), !v98) )
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
    if ( *(_QWORD *)v155 && (*(_BYTE *)(*(_QWORD *)v155 + 2LL) & 4) != 0 )
    {
      if ( *(__int16 *)(*(_QWORD *)v155 + 2LL) >= 0 )
      {
        v71 = *(_QWORD *)(*(_QWORD *)v155 + 32LL);
LABEL_105:
        LOBYTE(v65) = a6;
        LOBYTE(ReturnLengthc) = a7 & 1;
        v72 = sub_1800300BC(
                v71,
                v70,
                v69 & 0x140C,
                v65,
                ReturnLengthc,
                AccessStatus,
                (int)v139,
                (__int64)v142,
                v147,
                v154,
                GenericMapping,
                1,
                v157,
                a5,
                (__int64)&Src,
                (__int64)v124,
                &v135);
        v120 = v72;
        v34 = v72;
        if ( v72 >= 0 )
        {
          HIBYTE(v121[0]) = 1;
          *(_DWORD *)&v124[1] |= v135 & 0x1408 | 4;
LABEL_107:
          if ( (a7 & 0x1000) != 0 || !v177 || (v75 = ClientToken) == 0LL || !*(_QWORD *)v155 )
          {
LABEL_117:
            if ( (a7 & 1) != 0 && !Src )
              *(_DWORD *)&v124[1] |= 0x1000u;
            v77 = !v151 || (v151 & 0x1B0) != v151;
            v78 = v131[0];
            v79 = ClientToken;
            if ( !LOBYTE(v121[0]) || v131[0] || !v77 )
            {
LABEL_123:
              if ( (_BYTE)v150 && !v78 )
              {
                if ( !v79 )
                  goto LABEL_337;
                v149 = 32LL;
                RequiredPrivileges.PrivilegeCount = 1;
                RequiredPrivileges.Control = 1;
                RequiredPrivileges.Privilege[0].Luid = (LUID)32LL;
                RequiredPrivileges.Privilege[0].Attributes = 0;
                v120 = ZwPrivilegeCheck(v79, &RequiredPrivileges, &Result);
                v34 = v120;
                if ( v120 < 0 )
                  goto LABEL_279;
                if ( !Result )
                  goto LABEL_354;
              }
              if ( !v123 || (a7 & 0x10) != 0 )
              {
                v80 = (unsigned __int8 *)v139;
                goto LABEL_126;
              }
              if ( v79 )
              {
                v80 = (unsigned __int8 *)v139;
                LOBYTE(v74) = v137;
                if ( !(unsigned __int8)sub_180044394(ClientToken, v139, v74, &v152) )
                {
                  v34 = v152;
                  goto LABEL_325;
                }
LABEL_126:
                if ( v136 && LOBYTE(v124[0]) )
                {
                  v113 = Src;
                  LOBYTE(v73) = v145;
                  v114 = sub_1800E1800((_DWORD)Src, v73, v147, (unsigned int)&v159, (__int64)&v126);
                  v120 = v114;
                  v34 = v114;
                  if ( v114 < 0 )
                    goto LABEL_279;
                  if ( HIBYTE(v121[0]) && v113 )
                    RtlFreeHeap(*(PVOID *)&v131[1], 0, v113);
                  Src = v159;
                  v159 = 0LL;
                }
                v81 = 4 * v80[1] + 8;
                LODWORD(Size) = v81;
                if ( v142 )
                  v82 = 4 * *((unsigned __int8 *)v142 + 1) + 8;
                else
                  v82 = 0;
                v83 = v124[1];
                v131[0] = v82;
                v145 = v124[1] & 0x10;
                if ( (v124[1] & 0x10) != 0 && *(_QWORD *)&v121[1] )
                  v84 = (*(unsigned __int16 *)(*(_QWORD *)&v121[1] + 2LL) + 3) & 0xFFFFFFFC;
                else
                  v84 = 0;
                v152 = v124[1] & 4;
                if ( (v124[1] & 4) != 0 && Src )
                  v85 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
                else
                  v85 = 0;
                v141 = v85;
                Heap = RtlAllocateHeap(*(PVOID *)&v131[1], Flags + 1310720, v81 + 20 + v85 + v84 + v82);
                *(_QWORD *)&v124[3] = Heap;
                v87 = Heap;
                if ( !Heap )
                {
                  v34 = -1073741801;
                  goto LABEL_325;
                }
                *Heap = 0LL;
                Heap[1] = 0LL;
                *((_DWORD *)Heap + 4) = 0;
                *((_WORD *)Heap + 1) |= v83;
                v88 = (char *)Heap + 20;
                *(_BYTE *)Heap = 1;
                if ( v145 )
                {
                  v100 = *(_QWORD *)&v121[1];
                  if ( *(_QWORD *)&v121[1] )
                  {
                    memmove(v88, *(const void **)&v121[1], *(unsigned __int16 *)(*(_QWORD *)&v121[1] + 2LL));
                    if ( !BYTE2(v121[0]) )
                      sub_180078B08(v88, GenericMapping);
                    v87 = *(_QWORD **)&v124[3];
                    *(_DWORD *)(*(_QWORD *)&v124[3] + 12LL) = (_DWORD)v88 - *(_DWORD *)&v124[3];
                    v101 = *(unsigned __int16 *)(v100 + 2);
                    if ( v84 > (unsigned int)v101 )
                    {
                      memset(&v88[v101], 0, v84 - (unsigned int)v101);
                      v87 = *(_QWORD **)&v124[3];
                    }
                    v88 += v84;
                  }
                  else
                  {
                    *((_DWORD *)Heap + 3) = 0;
                  }
                }
                if ( v152 )
                {
                  v89 = (unsigned __int16 *)Src;
                  if ( Src )
                  {
                    memmove(v88, Src, *((unsigned __int16 *)Src + 1));
                    if ( !HIBYTE(v121[0]) )
                      sub_180078B08(v88, GenericMapping);
                    v90 = *(_QWORD *)&v124[3];
                    *(_DWORD *)(*(_QWORD *)&v124[3] + 16LL) = (_DWORD)v88 - *(_DWORD *)&v124[3];
                    v91 = v89[1];
                    v92 = v141;
                    if ( v141 > (unsigned int)v91 )
                      memset(&v88[v91], 0, v141 - (unsigned int)v91);
                    v88 += v92;
                    goto LABEL_143;
                  }
                  *((_DWORD *)v87 + 4) = 0;
                }
                v90 = *(_QWORD *)&v124[3];
LABEL_143:
                v93 = (unsigned int)Size;
                memmove(v88, v139, (unsigned int)Size);
                v94 = (_DWORD)v88 - v90;
                v95 = &v88[v93];
                *(_DWORD *)(v90 + 4) = v94;
                if ( v142 )
                {
                  memmove(v95, v142, v131[0]);
                  *(_DWORD *)(v90 + 8) = (_DWORD)v95 - v90;
                }
                v37 = *(ACL **)&v121[1];
                v34 = 0;
                v120 = 0;
                goto LABEL_146;
              }
LABEL_337:
              v34 = -1073741700;
LABEL_325:
              v120 = v34;
              goto LABEL_279;
            }
            if ( !ClientToken )
              goto LABEL_337;
            RequiredPrivileges.PrivilegeCount = 1;
            RequiredPrivileges.Control = 1;
            v149 = 8LL;
            RequiredPrivileges.Privilege[0].Luid = (LUID)8LL;
            RequiredPrivileges.Privilege[0].Attributes = 0;
            v120 = ZwPrivilegeCheck(ClientToken, &RequiredPrivileges, &Result);
            v34 = v120;
            if ( v120 >= 0 )
            {
              if ( !Result )
              {
LABEL_354:
                v34 = -1073741727;
                goto LABEL_325;
              }
              goto LABEL_123;
            }
LABEL_279:
            v37 = *(ACL **)&v121[1];
            goto LABEL_287;
          }
          LOBYTE(AccessMask) = a6;
          GrantedAccess = 0;
          AccessStatus = 0;
          v120 = sub_18002ED3C(
                   v155[0],
                   0,
                   (int)&v158,
                   v157,
                   a5,
                   AccessMask,
                   a7 | 1,
                   ClientToken,
                   (__int64)GenericMapping,
                   v164);
          v34 = v120;
          if ( v120 < 0 )
            goto LABEL_279;
          if ( (*((_BYTE *)v158 + 2) & 4) != 0 )
          {
            if ( *((__int16 *)v158 + 1) >= 0 )
            {
              v76 = (char *)*((_QWORD *)v158 + 4);
LABEL_116:
              if ( (unsigned __int8)sub_180043FA0(16LL, v76) )
              {
                NewTokenHandle = 0LL;
                LODWORD(Size) = 20;
                if ( (_BYTE)v141 != 1 )
                  goto LABEL_348;
                v183 = 1;
                v182[1] = 2;
                ObjectAttributes.SecurityQualityOfService = v182;
                v182[0] = 12;
                ObjectAttributes.Length = 48;
                memset(&ObjectAttributes.RootDirectory, 0, 20);
                ObjectAttributes.SecurityDescriptor = 0LL;
                v120 = ZwDuplicateToken(v75, 8u, &ObjectAttributes, 0, TokenImpersonation, &NewTokenHandle);
                v34 = v120;
                if ( v120 < 0 )
                  goto LABEL_279;
                v112 = NewTokenHandle;
                if ( !NewTokenHandle )
LABEL_348:
                  v112 = v75;
                v120 = ZwAccessCheck(
                         v158,
                         v112,
                         0x40000u,
                         GenericMapping,
                         &RequiredPrivileges,
                         (PULONG)&Size,
                         &GrantedAccess,
                         &AccessStatus);
                v34 = v120;
                if ( NewTokenHandle )
                  ZwClose(NewTokenHandle);
                if ( v34 < 0 )
                  goto LABEL_279;
                v34 = AccessStatus;
                v120 = AccessStatus;
                if ( AccessStatus < 0 )
                  goto LABEL_279;
              }
              goto LABEL_117;
            }
            if ( *((_DWORD *)v158 + 4) )
            {
              v76 = (char *)v158 + *((unsigned int *)v158 + 4);
              goto LABEL_116;
            }
          }
          v76 = 0LL;
          goto LABEL_116;
        }
        if ( v72 != -2147483637 )
          goto LABEL_279;
        v73 = *(_DWORD *)&v124[1];
        if ( (a7 & 1) != 0 )
        {
          v73 = *(_DWORD *)&v124[1] | 0x400;
          *(_DWORD *)&v124[1] |= 0x400u;
        }
        v104 = *(_WORD *)(v68 + 2);
        if ( (v104 & 0xC) != 0xC )
        {
          v105 = (void *)v149;
          if ( !v149 )
            goto LABEL_107;
          v73 |= 4u;
LABEL_246:
          *(_DWORD *)&v124[1] = v73;
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
            LOBYTE(v124[0]) = 1;
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
      if ( *(_DWORD *)(*(_QWORD *)v155 + 16LL) )
      {
        LODWORD(v71) = v155[0] + *(_DWORD *)(*(_QWORD *)v155 + 16LL);
        goto LABEL_105;
      }
    }
    LODWORD(v71) = 0;
    goto LABEL_105;
  }
  if ( !ClientToken )
  {
    v34 = -1073741700;
    goto LABEL_310;
  }
  v120 = RtlSidDominates(Sid1, v98, &Dominates);
  v34 = v120;
  if ( v120 >= 0 )
  {
    v99 = (unsigned __int8)v150;
    if ( !Dominates )
      v99 = 1;
    v150 = v99;
    goto LABEL_95;
  }
LABEL_287:
  v90 = *(_QWORD *)&v124[3];
LABEL_146:
  if ( v158 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v158);
    v37 = (ACL *)v140;
    v34 = v120;
  }
  if ( v126 && v159 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v159);
    v37 = (ACL *)v140;
    v34 = v120;
  }
  RtlFreeHeap(*(PVOID *)&v131[1], 0, BaseAddress);
  RtlFreeHeap(*(PVOID *)&v131[1], 0, v173);
  RtlFreeHeap(*(PVOID *)&v131[1], 0, v168);
  RtlFreeHeap(*(PVOID *)&v131[1], 0, v169);
  RtlFreeHeap(*(PVOID *)&v131[1], 0, v170);
  if ( v171 )
    RtlFreeHeap(*(PVOID *)&v131[1], 0, v171);
  if ( v172 )
    RtlFreeHeap(*(PVOID *)&v131[1], 0, v172);
  if ( (v129 || BYTE2(v121[0])) && v37 )
  {
    v102 = v37;
    v96 = *(void **)&v131[1];
    RtlFreeHeap(*(PVOID *)&v131[1], 0, v102);
  }
  else
  {
    v96 = *(void **)&v131[1];
  }
  if ( v127 && v148 )
    RtlFreeHeap(v96, 0, v148);
  if ( v163 && v128 )
    RtlFreeHeap(v96, 0, v163);
  if ( HIBYTE(v121[0]) )
  {
    if ( Src )
      RtlFreeHeap(*(PVOID *)&v131[1], 0, Src);
  }
  *v178 = v90;
  return v34;
}
