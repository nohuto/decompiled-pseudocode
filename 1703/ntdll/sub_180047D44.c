/*
 * XREFs of sub_180047D44 @ 0x180047D44
 * Callers:
 *     sub_180047D44 @ 0x180047D44 (sub_180047D44.c)
 *     RtlNewSecurityObjectEx @ 0x18007FCF0 (RtlNewSecurityObjectEx.c)
 *     RtlNewSecurityObject @ 0x180086680 (RtlNewSecurityObject.c)
 *     RtlCreateUserSecurityObject @ 0x1800D8FB0 (RtlCreateUserSecurityObject.c)
 *     RtlNewInstanceSecurityObject @ 0x1800D9050 (RtlNewInstanceSecurityObject.c)
 *     RtlNewSecurityObjectWithMultipleInheritance @ 0x1800D92C0 (RtlNewSecurityObjectWithMultipleInheritance.c)
 * Callees:
 *     sub_1800044F8 @ 0x1800044F8 (sub_1800044F8.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180047C5C @ 0x180047C5C (sub_180047C5C.c)
 *     sub_180047D44 @ 0x180047D44 (sub_180047D44.c)
 *     sub_18004912C @ 0x18004912C (sub_18004912C.c)
 *     RtlCreateAcl @ 0x1800496D0 (RtlCreateAcl.c)
 *     RtlFindAceByType @ 0x18004A2D0 (RtlFindAceByType.c)
 *     RtlCreateSecurityDescriptor @ 0x18004A330 (RtlCreateSecurityDescriptor.c)
 *     sub_18004B070 @ 0x18004B070 (sub_18004B070.c)
 *     sub_18004B0E8 @ 0x18004B0E8 (sub_18004B0E8.c)
 *     sub_18004B6C4 @ 0x18004B6C4 (sub_18004B6C4.c)
 *     RtlAddMandatoryAce @ 0x18004C070 (RtlAddMandatoryAce.c)
 *     sub_18004C608 @ 0x18004C608 (sub_18004C608.c)
 *     sub_180081410 @ 0x180081410 (sub_180081410.c)
 *     RtlSidDominates @ 0x180081CB0 (RtlSidDominates.c)
 *     RtlAddProcessTrustLabelAce @ 0x1800889C0 (RtlAddProcessTrustLabelAce.c)
 *     sub_180090200 @ 0x180090200 (sub_180090200.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwAccessCheck @ 0x1800A5300 (ZwAccessCheck.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x1800A5720 (ZwQueryInformationToken.c)
 *     ZwDuplicateToken @ 0x1800A5B40 (ZwDuplicateToken.c)
 *     ZwPrivilegeCheck @ 0x1800A7870 (ZwPrivilegeCheck.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800E6AF4 @ 0x1800E6AF4 (sub_1800E6AF4.c)
 */

NTSTATUS __fastcall sub_180047D44(
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
  _BYTE *v10; // rdi
  void *v11; // rbx
  void *v12; // rsi
  NTSTATUS result; // eax
  ULONG v14; // eax
  unsigned __int8 v15; // r10
  char v16; // r10
  __int64 v17; // r8
  unsigned int v18; // edx
  _BYTE *v19; // rcx
  void *v20; // rcx
  __int64 v21; // rax
  _BYTE *v22; // rcx
  void *v23; // rcx
  unsigned int v24; // eax
  int v25; // esi
  int v26; // r9d
  int v27; // r10d
  int v28; // r8d
  int v29; // r11d
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // r8d
  int v33; // r9d
  int v34; // eax
  int v35; // ebx
  __int16 v36; // cx
  int v37; // ebx
  ACL *v38; // rsi
  unsigned __int16 v39; // dx
  int v40; // r9d
  int v41; // r11d
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // r8d
  int v45; // eax
  __int16 v46; // cx
  ACL *v47; // rcx
  char *AceByType; // rbx
  __int64 v49; // r8
  void *v50; // rdx
  ACL *v51; // rcx
  int v52; // r9d
  unsigned int v53; // edx
  ACCESS_MASK v54; // esi
  ACL *v55; // rcx
  char *v56; // rax
  PSID v57; // rdx
  char v58; // cl
  ACL *v59; // rsi
  unsigned int v60; // r8d
  __int64 v61; // rcx
  int v62; // eax
  __int64 v63; // rdi
  __int16 v64; // si
  PVOID v65; // rdi
  ACL *v66; // rbx
  _BYTE *v67; // rdi
  __int16 v68; // r8
  __int64 v69; // rdx
  int v70; // r9d
  __int64 v71; // rcx
  int v72; // eax
  __int64 v73; // r8
  int v74; // edx
  HANDLE v75; // rdi
  char *v76; // rdx
  bool v77; // al
  int v78; // edi
  HANDLE v79; // rsi
  char v80; // bl
  unsigned __int8 *v81; // rsi
  int v82; // r9d
  ACCESS_MASK v83; // r9d
  unsigned int v84; // r8d
  __int16 v85; // bx
  unsigned int v86; // esi
  unsigned int v87; // ecx
  PVOID v88; // rdi
  _DWORD *Heap; // rax
  _DWORD *v90; // rdx
  char *v91; // rbx
  unsigned __int16 *v92; // rdi
  __int64 v93; // rcx
  __int64 v94; // rdi
  __int64 v95; // rsi
  __int64 v96; // rdi
  int v97; // eax
  char *v98; // rbx
  __int64 v99; // rdi
  char *v100; // rax
  PSID v101; // rax
  int v102; // eax
  PACL v103; // rdi
  __int64 AclSize; // rcx
  void *v105; // r8
  int v106; // edx
  __int16 v107; // cx
  void *v108; // rcx
  _BYTE *v109; // rax
  _BYTE *v110; // rax
  ACL *v111; // rcx
  _DWORD *v112; // rax
  ACCESS_MASK v113; // esi
  PSID v114; // rdx
  void *v115; // rdi
  int ReturnLength; // [rsp+20h] [rbp-F0h]
  int ReturnLengtha; // [rsp+20h] [rbp-F0h]
  int ReturnLengthb; // [rsp+20h] [rbp-F0h]
  int ReturnLengthc; // [rsp+20h] [rbp-F0h]
  int AccessMask; // [rsp+28h] [rbp-E8h]
  NTSTATUS v121; // [rsp+90h] [rbp-80h] BYREF
  __int16 v122; // [rsp+94h] [rbp-7Ch] BYREF
  char v123; // [rsp+96h] [rbp-7Ah]
  __int16 v124; // [rsp+97h] [rbp-79h]
  BOOLEAN v125; // [rsp+99h] [rbp-77h] BYREF
  __int16 v126; // [rsp+9Ah] [rbp-76h] BYREF
  int v127; // [rsp+9Ch] [rbp-74h]
  PVOID HeapHandle; // [rsp+A0h] [rbp-70h]
  PACL Acl; // [rsp+A8h] [rbp-68h]
  BOOLEAN Dominates; // [rsp+B0h] [rbp-60h] BYREF
  char v131; // [rsp+B1h] [rbp-5Fh] BYREF
  char v132; // [rsp+B2h] [rbp-5Eh]
  char v133; // [rsp+B3h] [rbp-5Dh]
  char v134; // [rsp+B4h] [rbp-5Ch]
  char v135; // [rsp+B5h] [rbp-5Bh]
  ULONG Index; // [rsp+B8h] [rbp-58h] BYREF
  _DWORD v137[3]; // [rsp+BCh] [rbp-54h] BYREF
  char v138; // [rsp+C8h] [rbp-48h] BYREF
  int v139; // [rsp+CCh] [rbp-44h] BYREF
  char v140; // [rsp+D0h] [rbp-40h] BYREF
  bool v141; // [rsp+D1h] [rbp-3Fh]
  NTSTATUS AccessStatus; // [rsp+D4h] [rbp-3Ch] BYREF
  unsigned int v143; // [rsp+D8h] [rbp-38h]
  void *v144; // [rsp+E0h] [rbp-30h]
  void *Src; // [rsp+E8h] [rbp-28h] BYREF
  unsigned int v146; // [rsp+F0h] [rbp-20h]
  void *v147; // [rsp+F8h] [rbp-18h]
  int v148[2]; // [rsp+100h] [rbp-10h]
  ULONG v149; // [rsp+108h] [rbp-8h] BYREF
  HANDLE ClientToken; // [rsp+110h] [rbp+0h]
  PGENERIC_MAPPING GenericMapping; // [rsp+118h] [rbp+8h]
  PVOID v152; // [rsp+120h] [rbp+10h] BYREF
  __int64 v153; // [rsp+128h] [rbp+18h]
  __int64 v154; // [rsp+130h] [rbp+20h]
  ACCESS_MASK GrantedAccess; // [rsp+138h] [rbp+28h] BYREF
  int v156; // [rsp+13Ch] [rbp+2Ch] BYREF
  size_t Size; // [rsp+140h] [rbp+30h] BYREF
  PSID Sid2; // [rsp+148h] [rbp+38h]
  __int64 v159; // [rsp+150h] [rbp+40h]
  _DWORD *v160; // [rsp+158h] [rbp+48h]
  int v161; // [rsp+160h] [rbp+50h] BYREF
  PSID ProcessTrustLabelSid; // [rsp+168h] [rbp+58h] BYREF
  PVOID v163; // [rsp+170h] [rbp+60h] BYREF
  PVOID v164; // [rsp+178h] [rbp+68h] BYREF
  __int64 v165; // [rsp+180h] [rbp+70h]
  void *v166; // [rsp+188h] [rbp+78h]
  char *v167; // [rsp+190h] [rbp+80h]
  PSID Sid1; // [rsp+198h] [rbp+88h]
  PVOID v169; // [rsp+1A0h] [rbp+90h] BYREF
  __int64 v170; // [rsp+1A8h] [rbp+98h]
  PVOID BaseAddress; // [rsp+1B0h] [rbp+A0h]
  PVOID v172; // [rsp+1B8h] [rbp+A8h] BYREF
  PVOID v173; // [rsp+1C0h] [rbp+B0h] BYREF
  PVOID v174; // [rsp+1C8h] [rbp+B8h]
  PVOID v175; // [rsp+1D0h] [rbp+C0h] BYREF
  PVOID v176; // [rsp+1D8h] [rbp+C8h] BYREF
  PVOID v177; // [rsp+1E0h] [rbp+D0h] BYREF
  __int64 v178; // [rsp+1E8h] [rbp+D8h] BYREF
  ACL *v179; // [rsp+1F0h] [rbp+E0h]
  ACL *v180; // [rsp+1F8h] [rbp+E8h] BYREF
  _BYTE *v181; // [rsp+200h] [rbp+F0h]
  _QWORD *v182; // [rsp+208h] [rbp+F8h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+210h] [rbp+100h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+240h] [rbp+130h] BYREF
  _PRIVILEGE_SET RequiredPrivileges; // [rsp+268h] [rbp+158h] BYREF
  _DWORD v186[2]; // [rsp+280h] [rbp+170h] BYREF
  __int16 v187; // [rsp+288h] [rbp+178h]
  char TokenInformation[24]; // [rsp+290h] [rbp+180h] BYREF
  unsigned int v189; // [rsp+2A8h] [rbp+198h]
  int v190; // [rsp+2ACh] [rbp+19Ch]
  ACL v191; // [rsp+2D0h] [rbp+1C0h] BYREF
  ACL v192; // [rsp+330h] [rbp+220h] BYREF

  GenericMapping = a9;
  v10 = a2;
  v11 = 0LL;
  v170 = a10;
  v12 = 0LL;
  v163 = 0LL;
  v179 = &v192;
  *(_QWORD *)v148 = a1;
  v181 = a2;
  HeapHandle = NtCurrentPeb()->ProcessHeap;
  v165 = a4;
  v182 = a3;
  ClientToken = TokenHandle;
  v152 = 0LL;
  v124 = 0;
  v133 = 0;
  v132 = 0;
  memset(v137, 0, sizeof(v137));
  Src = 0LL;
  v164 = 0LL;
  v126 = 0;
  v122 = 0;
  v138 = 0;
  v140 = 0;
  LOBYTE(v143) = 0;
  v131 = 0;
  Sid1 = 0LL;
  v166 = 0LL;
  v153 = 0LL;
  v159 = 0LL;
  v154 = 0LL;
  v160 = 0LL;
  v161 = 0;
  v167 = 0LL;
  Sid2 = 0LL;
  v178 = 0LL;
  v180 = 0LL;
  Dominates = 1;
  v169 = 0LL;
  v134 = 0;
  LOBYTE(v146) = 1;
  BaseAddress = 0LL;
  v174 = 0LL;
  v175 = 0LL;
  v172 = 0LL;
  v173 = 0LL;
  v176 = 0LL;
  v177 = 0LL;
  if ( TokenHandle )
  {
    result = ZwQueryInformationToken(TokenHandle, 0xAu, TokenInformation, 0x38u, &v149);
    if ( result < 0 )
      return result;
    v146 = v189;
    if ( v189 == 2 && v190 < 1 )
      return -1073741659;
  }
  if ( v10 )
  {
    v135 = 1;
  }
  else
  {
    v135 = 0;
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    v10 = SecurityDescriptor;
    v181 = SecurityDescriptor;
  }
  v14 = *((unsigned __int16 *)v10 + 1);
  v15 = v14;
  LOBYTE(v14) = (v14 & 0x40) != 0;
  v16 = v15 >> 7;
  v149 = v14;
  v123 = v16;
  if ( ClientToken || v16 )
  {
    result = sub_18004B6C4(ClientToken, (ULONG)&v175, (__int64)&v176, (__int64)&v172, (__int64)&v173, (ULONG)&v177);
    if ( result < 0 )
      return result;
    v11 = *(void **)BaseAddress;
    v12 = *(void **)v174;
    v154 = *(_QWORD *)v175;
    Sid1 = *(PSID *)v172;
    v166 = *(void **)v173;
    if ( v176 )
      v153 = *(_QWORD *)v176;
    else
      v153 = 0LL;
    v16 = v123;
    if ( v177 )
    {
      v17 = *(_QWORD *)v177;
      v159 = *(_QWORD *)v177;
    }
    else
    {
      v17 = 0LL;
      v159 = 0LL;
    }
  }
  else
  {
    v17 = 0LL;
  }
  v18 = *((unsigned __int16 *)v10 + 1);
  if ( (v18 & 0x8000u) != 0 )
  {
    if ( !*((_DWORD *)v10 + 1) )
      goto LABEL_15;
    v19 = &v10[*((unsigned int *)v10 + 1)];
  }
  else
  {
    v19 = (_BYTE *)*((_QWORD *)v10 + 1);
  }
  v144 = v19;
  if ( v19 )
  {
    LOBYTE(v126) = 1;
LABEL_19:
    v21 = *(_QWORD *)v148;
    goto LABEL_20;
  }
LABEL_15:
  if ( (a7 & 0x20) == 0 )
  {
    v20 = v11;
    if ( v16 )
      v20 = (void *)v153;
    v144 = v20;
    if ( !v20 )
    {
      v35 = -1073741700;
      goto LABEL_288;
    }
    goto LABEL_19;
  }
  v21 = *(_QWORD *)v148;
  if ( !*(_QWORD *)v148 )
    goto LABEL_286;
  if ( *(__int16 *)(*(_QWORD *)v148 + 2LL) < 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)v148 + 4LL) )
    {
      v108 = (void *)(*(_QWORD *)v148 + *(unsigned int *)(*(_QWORD *)v148 + 4LL));
      goto LABEL_277;
    }
LABEL_286:
    v35 = -1073741734;
LABEL_288:
    v121 = v35;
    goto LABEL_289;
  }
  v108 = *(void **)(*(_QWORD *)v148 + 8LL);
LABEL_277:
  v144 = v108;
  LOBYTE(v126) = 1;
  if ( !v108 )
    goto LABEL_286;
LABEL_20:
  if ( (v18 & 0x8000u) != 0 )
  {
    if ( !*((_DWORD *)v10 + 2) )
    {
LABEL_23:
      if ( (a7 & 0x40) == 0 )
      {
        v23 = v12;
        if ( v16 )
          v23 = (void *)v17;
LABEL_26:
        v147 = v23;
        if ( v23 )
          goto LABEL_27;
        goto LABEL_287;
      }
      if ( v21 )
      {
        if ( *(__int16 *)(v21 + 2) >= 0 )
        {
          v23 = *(void **)(v21 + 16);
          goto LABEL_26;
        }
        if ( *(_DWORD *)(v21 + 8) )
        {
          v23 = (void *)(v21 + *(unsigned int *)(v21 + 8));
          goto LABEL_26;
        }
      }
LABEL_287:
      v35 = -1073741733;
      goto LABEL_288;
    }
    v22 = &v10[*((unsigned int *)v10 + 2)];
  }
  else
  {
    v22 = (_BYTE *)*((_QWORD *)v10 + 2);
  }
  v147 = v22;
  if ( !v22 )
    goto LABEL_23;
LABEL_27:
  v24 = a7 >> 2;
  LOBYTE(v24) = (a7 & 4) != 0;
  v25 = a7 & 2;
  AccessStatus = v24;
  v141 = v25 != 0;
  v26 = (v18 >> 2) & 8;
  v27 = (v18 >> 1) & 0x400;
  v28 = (v18 >> 1) & 0x1000;
  v29 = (v18 & 0x10) != 0 ? 4 : 0;
  if ( (v18 & 0x10) == 0 )
    goto LABEL_28;
  if ( (v18 & 0x8000u) == 0 )
  {
    v30 = *((_QWORD *)v10 + 3);
    goto LABEL_29;
  }
  if ( *((_DWORD *)v10 + 3) )
    LODWORD(v30) = (_DWORD)v10 + *((_DWORD *)v10 + 3);
  else
LABEL_28:
    LODWORD(v30) = 0;
LABEL_29:
  if ( !*(_QWORD *)v148 || (~*(_BYTE *)(*(_QWORD *)v148 + 2LL) & 0x10) != 0 )
  {
LABEL_211:
    LODWORD(v31) = 0;
    goto LABEL_34;
  }
  if ( *(__int16 *)(*(_QWORD *)v148 + 2LL) < 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)v148 + 12LL) )
    {
      LODWORD(v31) = v148[0] + *(_DWORD *)(*(_QWORD *)v148 + 12LL);
      goto LABEL_34;
    }
    goto LABEL_211;
  }
  v31 = *(_QWORD *)(*(_QWORD *)v148 + 24LL);
LABEL_34:
  v32 = v26 | v27 | v28;
  v33 = (int)GenericMapping;
  LOBYTE(v33) = a6;
  LOBYTE(ReturnLength) = v25 != 0;
  v34 = sub_18004912C(
          v31,
          v30,
          v29 | (unsigned int)v32,
          v33,
          ReturnLength,
          AccessStatus,
          (int)v144,
          (__int64)v147,
          v153,
          v159,
          GenericMapping,
          2,
          v165,
          a5,
          (__int64)&v137[1],
          (__int64)&v122,
          &v139);
  v121 = v34;
  v35 = v34;
  if ( v34 < 0 )
  {
    if ( v34 == -2147483637 )
    {
      v36 = *((_WORD *)v10 + 1);
      v37 = 0x8000;
      if ( (a7 & 2) != 0 )
        v37 = 34816;
      v127 = v37;
      if ( (v36 & 0x30) != 0x30 )
        goto LABEL_39;
      if ( (~(_BYTE)v36 & 0x10) == 0 )
      {
        if ( v36 >= 0 )
        {
          v38 = (ACL *)*((_QWORD *)v10 + 3);
          goto LABEL_300;
        }
        if ( *((_DWORD *)v10 + 3) )
        {
          v38 = (ACL *)&v10[*((unsigned int *)v10 + 3)];
LABEL_300:
          *(_QWORD *)&v137[1] = v38;
          Acl = v38;
          goto LABEL_301;
        }
      }
      v38 = 0LL;
      Acl = 0LL;
      *(_QWORD *)&v137[1] = 0LL;
LABEL_301:
      LOBYTE(v122) = 1;
      v127 = v36 & 0x2000 | 0x10 | v37;
      goto LABEL_40;
    }
LABEL_289:
    v38 = *(ACL **)&v137[1];
    goto LABEL_152;
  }
  LOBYTE(v124) = 1;
  v127 = 2 * (v139 & 0x1400 | (2 * (v139 & 8 | 0x2004)));
LABEL_39:
  v38 = *(ACL **)&v137[1];
  Acl = *(PACL *)&v137[1];
LABEL_40:
  v39 = *((_WORD *)v10 + 1);
  v40 = (v39 >> 2) & 8;
  v41 = (v39 & 0x10) != 0 ? 4 : 0;
  if ( (v39 & 0x10) == 0 )
    goto LABEL_41;
  if ( (v39 & 0x8000u) == 0 )
  {
    v42 = *((_QWORD *)v10 + 3);
    goto LABEL_42;
  }
  if ( *((_DWORD *)v10 + 3) )
    LODWORD(v42) = (_DWORD)v10 + *((_DWORD *)v10 + 3);
  else
LABEL_41:
    LODWORD(v42) = 0;
LABEL_42:
  if ( !*(_QWORD *)v148 || (~*(_BYTE *)(*(_QWORD *)v148 + 2LL) & 0x10) != 0 )
  {
LABEL_212:
    LODWORD(v43) = 0;
    goto LABEL_47;
  }
  if ( *(__int16 *)(*(_QWORD *)v148 + 2LL) < 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)v148 + 12LL) )
    {
      LODWORD(v43) = v148[0] + *(_DWORD *)(*(_QWORD *)v148 + 12LL);
      goto LABEL_47;
    }
    goto LABEL_212;
  }
  v43 = *(_QWORD *)(*(_QWORD *)v148 + 24LL);
LABEL_47:
  v44 = v40 | (*((unsigned __int16 *)v10 + 1) >> 1) & 0x1400;
  LOBYTE(v40) = a6;
  LOBYTE(ReturnLengtha) = v141;
  v45 = sub_18004912C(
          v43,
          v42,
          (v41 | v44) & 0xFFFFEFFF,
          v40,
          ReturnLengtha,
          AccessStatus,
          (int)v144,
          (__int64)v147,
          v153,
          v159,
          GenericMapping,
          2,
          v165,
          a5,
          (__int64)&v152,
          (__int64)&v138,
          &v161);
  v121 = v45;
  v35 = v45;
  if ( v45 >= 0 )
  {
    v133 = 1;
  }
  else
  {
    if ( v45 != -2147483637 )
      goto LABEL_152;
    v46 = *((_WORD *)v10 + 1);
    if ( (v46 & 0x30) != 0x30 )
      goto LABEL_50;
    if ( (~(_BYTE)v46 & 0x10) == 0 )
    {
      if ( v46 >= 0 )
      {
        v110 = (_BYTE *)*((_QWORD *)v10 + 3);
        goto LABEL_309;
      }
      if ( *((_DWORD *)v10 + 3) )
      {
        v110 = &v10[*((unsigned int *)v10 + 3)];
LABEL_309:
        v152 = v110;
        goto LABEL_50;
      }
    }
    v152 = 0LL;
  }
LABEL_50:
  Index = 0;
  do
  {
    if ( (~v10[2] & 0x10) != 0 )
    {
LABEL_52:
      v47 = 0LL;
      goto LABEL_53;
    }
    if ( *((__int16 *)v10 + 1) >= 0 )
    {
      v47 = (ACL *)*((_QWORD *)v10 + 3);
    }
    else
    {
      if ( !*((_DWORD *)v10 + 3) )
        goto LABEL_52;
      v47 = (ACL *)&v10[*((unsigned int *)v10 + 3)];
    }
LABEL_53:
    AceByType = (char *)RtlFindAceByType(v47, 0x14u, &Index);
    v50 = AceByType + 8;
    if ( !AceByType )
      v50 = 0LL;
    if ( v50 && !sub_1800044F8(v166, v50, v49, &v121) )
    {
      v35 = -1073741790;
LABEL_311:
      v121 = v35;
      goto LABEL_152;
    }
    ++Index;
  }
  while ( AceByType );
  if ( (a7 & 0x800) == 0 )
  {
LABEL_58:
    v169 = v152;
    goto LABEL_59;
  }
  Index = 0;
  while ( 2 )
  {
    if ( (~v10[2] & 0x10) != 0 )
      goto LABEL_317;
    if ( *((__int16 *)v10 + 1) >= 0 )
    {
      v111 = (ACL *)*((_QWORD *)v10 + 3);
    }
    else
    {
      if ( *((_DWORD *)v10 + 3) )
      {
        v111 = (ACL *)&v10[*((unsigned int *)v10 + 3)];
        goto LABEL_319;
      }
LABEL_317:
      v111 = 0LL;
    }
LABEL_319:
    v112 = RtlFindAceByType(v111, 0x14u, &Index);
    ++Index;
    if ( v112 )
    {
      if ( (*((_BYTE *)v112 + 1) & 8) == 0 )
      {
        v113 = v112[1];
        Index = *((unsigned __int8 *)v112 + 1);
        ProcessTrustLabelSid = v112 + 2;
        if ( !v170 || (v113 & *(_DWORD *)(v170 + 4)) != v113 || v112 == (_DWORD *)-8LL )
        {
          v35 = -1073741811;
          goto LABEL_150;
        }
        goto LABEL_329;
      }
      continue;
    }
    break;
  }
  if ( !v166 )
    goto LABEL_58;
  if ( !v170 )
  {
    v35 = -1073741811;
    goto LABEL_311;
  }
  v113 = *(_DWORD *)(v170 + 4);
  ProcessTrustLabelSid = v166;
  Index = 0;
LABEL_329:
  v121 = RtlCreateAcl(&v191, 0x58u, 2u);
  v35 = v121;
  if ( v121 < 0 )
    goto LABEL_151;
  v121 = RtlAddProcessTrustLabelAce(&v191, 2u, Index, ProcessTrustLabelSid, 0x14u, v113);
  v35 = v121;
  if ( v121 < 0 )
    goto LABEL_151;
  v121 = sub_180090200(
           (int)v152,
           ((*((_WORD *)v10 + 1) & 0x800 | (*((unsigned __int16 *)v10 + 1) >> 1) & 0x18u) >> 1) & 0xFFFFEFFF,
           (int)&v191,
           4,
           (__int64)v144,
           (__int64)v147,
           (__int64)GenericMapping,
           2,
           (__int64)&v169,
           (__int64)&v139);
  v35 = v121;
  if ( v121 < 0 )
    goto LABEL_151;
  v134 = 1;
LABEL_59:
  if ( (~v10[2] & 0x10) != 0 )
  {
LABEL_60:
    v51 = 0LL;
  }
  else if ( *((__int16 *)v10 + 1) >= 0 )
  {
    v51 = (ACL *)*((_QWORD *)v10 + 3);
  }
  else
  {
    if ( !*((_DWORD *)v10 + 3) )
      goto LABEL_60;
    v51 = (ACL *)&v10[*((unsigned int *)v10 + 3)];
  }
  v121 = sub_18004B070(v51);
  v35 = v121;
  if ( v121 < 0 )
    goto LABEL_151;
  v53 = (a7 >> 8) & 1 | 2;
  if ( (a7 & 0x200) == 0 )
    v53 = (a7 >> 8) & 1;
  v54 = v53 | 4;
  if ( (a7 & 0x400) == 0 )
    v54 = v53;
  if ( v54 )
  {
    v56 = 0LL;
    goto LABEL_70;
  }
  if ( (~v10[2] & 0x10) != 0 )
    goto LABEL_68;
  if ( *((__int16 *)v10 + 1) >= 0 )
  {
    v55 = (ACL *)*((_QWORD *)v10 + 3);
  }
  else if ( *((_DWORD *)v10 + 3) )
  {
    v55 = (ACL *)&v10[*((unsigned int *)v10 + 3)];
  }
  else
  {
LABEL_68:
    v55 = 0LL;
  }
  v56 = (char *)RtlFindAceByType(v55, 0x11u, 0LL);
  v167 = v56;
  if ( v56 )
  {
    v58 = v56[1];
    v57 = v56 + 8;
    v54 = *((_DWORD *)v56 + 1);
    Sid2 = v56 + 8;
    HIBYTE(v122) = v58;
    if ( v58 == 8 || (v58 & 0x10) != 0 )
    {
      v56 = 0LL;
      v57 = 0LL;
      v58 = 0;
      v167 = 0LL;
      Sid2 = 0LL;
      v54 = 0;
      HIBYTE(v122) = 0;
    }
  }
  else
  {
LABEL_70:
    v57 = 0LL;
    v58 = 0;
  }
  if ( (v58 & 8) != 0 && *((_DWORD *)Sid1 + 2) < 0x2000u )
  {
    v35 = -1073740730;
    goto LABEL_150;
  }
  if ( v54 )
  {
LABEL_208:
    if ( v56 )
      goto LABEL_75;
    if ( ClientToken )
    {
      v57 = Sid1;
      Sid2 = Sid1;
      HIBYTE(v122) = 0;
      goto LABEL_75;
    }
    goto LABEL_336;
  }
  if ( Sid1 && *((_DWORD *)Sid1 + 2) < 0x2000u )
  {
    v54 = 1;
    goto LABEL_208;
  }
LABEL_75:
  if ( !v57 )
  {
    v59 = 0LL;
    v179 = 0LL;
    goto LABEL_77;
  }
  v121 = RtlCreateAcl(&v192, 0x80u, 2u);
  v35 = v121;
  if ( v121 < 0 )
    goto LABEL_151;
  v121 = RtlAddMandatoryAce(&v192, 2u, HIBYTE(v122), Sid2, 0x11u, v54);
  v35 = v121;
  if ( v121 < 0 )
    goto LABEL_151;
  v59 = &v192;
LABEL_77:
  if ( (a7 & 0x700) != 0 )
  {
    v60 = 4;
  }
  else if ( !v167 && v59 )
  {
    v60 = 0;
  }
  else
  {
    v60 = (*((_WORD *)v10 + 1) & 0x2800 | (*((unsigned __int16 *)v10 + 1) >> 1) & 0x18u) >> 1;
  }
  if ( !*(_QWORD *)v148 || (~*(_BYTE *)(*(_QWORD *)v148 + 2LL) & 0x10) != 0 )
    goto LABEL_213;
  if ( *(__int16 *)(*(_QWORD *)v148 + 2LL) >= 0 )
  {
    v61 = *(_QWORD *)(*(_QWORD *)v148 + 24LL);
  }
  else
  {
    if ( *(_DWORD *)(*(_QWORD *)v148 + 12LL) )
    {
      LODWORD(v61) = v148[0] + *(_DWORD *)(*(_QWORD *)v148 + 12LL);
      goto LABEL_86;
    }
LABEL_213:
    LODWORD(v61) = 0;
  }
LABEL_86:
  LOBYTE(v52) = a6;
  LOBYTE(ReturnLengthb) = 1;
  v62 = sub_18004912C(
          v61,
          (int)v59,
          v60,
          v52,
          ReturnLengthb,
          0,
          (int)v144,
          (__int64)v147,
          v153,
          v159,
          GenericMapping,
          3,
          v165,
          a5,
          (__int64)&v178,
          (__int64)&v140,
          &v139);
  v121 = v62;
  v35 = v62;
  if ( v62 != -2147483637 )
  {
    if ( v62 >= 0 )
    {
      v63 = v178;
      v64 = v139;
      goto LABEL_88;
    }
    goto LABEL_151;
  }
  v63 = (__int64)v59;
  v64 = 0;
  v139 = 0;
LABEL_88:
  v35 = sub_18004B0E8(
          (_DWORD)Acl,
          v63,
          (_DWORD)v152,
          (_DWORD)v152,
          (__int64)v169,
          (__int64)v152,
          (__int64)&v180,
          (__int64)v137);
  v121 = v35;
  v161 = ((v127 & 0x2000) << 17) | v137[0];
  if ( !v63 || (ACL *)v63 == v179 )
  {
    v65 = HeapHandle;
  }
  else
  {
    v105 = (void *)v63;
    v65 = HeapHandle;
    RtlFreeHeap(HeapHandle, 0, v105);
  }
  if ( v35 < 0 )
    goto LABEL_151;
  v66 = v180;
  if ( v180 )
  {
    if ( (_BYTE)v124 && Acl )
      RtlFreeHeap(v65, 0, Acl);
    Acl = v66;
    *(_QWORD *)&v137[1] = v66;
    v132 = 1;
    v127 |= 2 * (v64 & 0x1400 | (2 * (v64 & 8 | 4)));
  }
  v137[0] = a7 & 8;
  if ( (a7 & 8) != 0
    || ((v38 = Acl, (v100 = (char *)RtlFindAceByType(Acl, 0x11u, 0LL)) != 0LL) ? (v101 = v100 + 8) : (v101 = Sid2), !v101) )
  {
LABEL_93:
    v67 = v181;
    v68 = *((_WORD *)v181 + 1);
    if ( (~(_BYTE)v68 & 4) != 0 )
      goto LABEL_97;
    if ( v68 >= 0 )
    {
      v69 = *((_QWORD *)v181 + 4);
      goto LABEL_98;
    }
    if ( !*((_DWORD *)v181 + 4) )
LABEL_97:
      LODWORD(v69) = 0;
    else
      LODWORD(v69) = (_DWORD)v181 + *((_DWORD *)v181 + 4);
LABEL_98:
    v70 = v148[0];
    if ( *(_QWORD *)v148 && (~*(_BYTE *)(*(_QWORD *)v148 + 2LL) & 4) == 0 )
    {
      if ( *(__int16 *)(*(_QWORD *)v148 + 2LL) >= 0 )
      {
        v71 = *(_QWORD *)(*(_QWORD *)v148 + 32LL);
LABEL_103:
        LOBYTE(v70) = a6;
        LOBYTE(ReturnLengthc) = a7 & 1;
        v72 = sub_18004912C(
                v71,
                v69,
                v68 & 0x140C,
                v70,
                ReturnLengthc,
                AccessStatus,
                (int)v144,
                (__int64)v147,
                v153,
                v159,
                GenericMapping,
                1,
                v165,
                a5,
                (__int64)&Src,
                (__int64)&v126 + 1,
                &v139);
        v121 = v72;
        v35 = v72;
        if ( v72 >= 0 )
        {
          HIBYTE(v124) = 1;
          v127 |= v139 & 0x1408 | 4;
LABEL_105:
          v74 = 1;
LABEL_106:
          if ( (a7 & 0x1000) != 0 )
            goto LABEL_116;
          if ( !v135 )
            goto LABEL_116;
          v75 = ClientToken;
          if ( !ClientToken || !*(_QWORD *)v148 )
            goto LABEL_116;
          LOBYTE(AccessMask) = a6;
          GrantedAccess = 0;
          AccessStatus = 0;
          v121 = sub_180047D44(
                   v148[0],
                   0,
                   (int)&v163,
                   v165,
                   a5,
                   AccessMask,
                   a7 | 1,
                   ClientToken,
                   (__int64)GenericMapping,
                   v170);
          v35 = v121;
          if ( v121 >= 0 )
          {
            if ( (~*((_BYTE *)v163 + 2) & 4) == 0 )
            {
              if ( *((__int16 *)v163 + 1) >= 0 )
              {
                v76 = (char *)*((_QWORD *)v163 + 4);
LABEL_115:
                if ( sub_180047C5C(0x10u, (__int64)v76) )
                {
                  ProcessTrustLabelSid = 0LL;
                  LODWORD(Size) = 20;
                  if ( (_BYTE)v146 != 1 )
                    goto LABEL_348;
                  v187 = 1;
                  v186[1] = 2;
                  ObjectAttributes.SecurityQualityOfService = v186;
                  v186[0] = 12;
                  ObjectAttributes.Length = 48;
                  memset(&ObjectAttributes.RootDirectory, 0, 20);
                  ObjectAttributes.SecurityDescriptor = 0LL;
                  v121 = ZwDuplicateToken(v75, 8u, &ObjectAttributes, 0, TokenImpersonation, &ProcessTrustLabelSid);
                  v35 = v121;
                  if ( v121 < 0 )
                    goto LABEL_151;
                  v114 = ProcessTrustLabelSid;
                  if ( !ProcessTrustLabelSid )
LABEL_348:
                    v114 = v75;
                  v121 = ZwAccessCheck(
                           v163,
                           v114,
                           0x40000u,
                           GenericMapping,
                           &RequiredPrivileges,
                           (PULONG)&Size,
                           &GrantedAccess,
                           &AccessStatus);
                  v35 = v121;
                  if ( ProcessTrustLabelSid )
                    ZwClose(ProcessTrustLabelSid);
                  if ( v35 < 0 )
                    goto LABEL_151;
                  v35 = AccessStatus;
                  v121 = AccessStatus;
                  if ( AccessStatus < 0 )
                    goto LABEL_151;
                }
LABEL_116:
                if ( (a7 & 1) != 0 && !Src )
                  v127 |= 0x1000u;
                v77 = !v161 || (v161 & 0x1B0) != v161;
                v78 = v137[0];
                v79 = ClientToken;
                if ( (_BYTE)v122 && !v137[0] && v77 )
                {
                  if ( !ClientToken )
                    goto LABEL_336;
                  RequiredPrivileges.PrivilegeCount = 1;
                  RequiredPrivileges.Control = 1;
                  v154 = 8LL;
                  RequiredPrivileges.Privilege[0].Luid = (LUID)8LL;
                  RequiredPrivileges.Privilege[0].Attributes = 0;
                  v121 = ZwPrivilegeCheck(ClientToken, &RequiredPrivileges, &v125);
                  v35 = v121;
                  if ( v121 < 0 )
                    goto LABEL_151;
                  if ( !v125 )
                    goto LABEL_354;
                }
                if ( (_BYTE)v143 && !v78 )
                {
                  if ( !v79 )
                    goto LABEL_336;
                  v154 = 32LL;
                  RequiredPrivileges.PrivilegeCount = 1;
                  RequiredPrivileges.Control = 1;
                  RequiredPrivileges.Privilege[0].Luid = (LUID)32LL;
                  RequiredPrivileges.Privilege[0].Attributes = 0;
                  v121 = ZwPrivilegeCheck(v79, &RequiredPrivileges, &v125);
                  v35 = v121;
                  if ( v121 < 0 )
                    goto LABEL_151;
                  if ( !v125 )
                  {
LABEL_354:
                    v35 = -1073741727;
                    goto LABEL_150;
                  }
                }
                if ( !(_BYTE)v126 || (a7 & 0x10) != 0 )
                {
                  v80 = v123;
                  v81 = (unsigned __int8 *)v144;
LABEL_125:
                  if ( HIBYTE(v126) && v80 )
                  {
                    v115 = Src;
                    LOBYTE(v74) = v149;
                    v121 = sub_1800E6AF4((_DWORD)Src, v74, v153, (unsigned int)&v164, (__int64)&v131);
                    v35 = v121;
                    if ( v121 < 0 )
                      goto LABEL_151;
                    if ( HIBYTE(v124) && v115 )
                      RtlFreeHeap(HeapHandle, 0, v115);
                    Src = v164;
                    v164 = 0LL;
                  }
                  v82 = 4 * v81[1] + 11;
                  LODWORD(Size) = 4 * v81[1] + 8;
                  v83 = v82 & 0xFFFFFFFC;
                  GrantedAccess = v83;
                  if ( v147 )
                  {
                    v137[0] = 4 * *((unsigned __int8 *)v147 + 1) + 8;
                    v84 = (v137[0] + 3) & 0xFFFFFFFC;
                  }
                  else
                  {
                    v137[0] = 0;
                    v84 = 0;
                  }
                  v85 = v127;
                  v143 = v84;
                  v149 = v127 & 0x10;
                  if ( (v127 & 0x10) != 0 && Acl )
                    v86 = (Acl->AclSize + 3) & 0xFFFFFFFC;
                  else
                    v86 = 0;
                  v156 = v127 & 4;
                  if ( (v127 & 4) != 0 && Src )
                    v87 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
                  else
                    v87 = 0;
                  v88 = HeapHandle;
                  v146 = v87;
                  Heap = RtlAllocateHeap(HeapHandle, dword_18015B268 + 1310720, v84 + v87 + v86 + v83 + 20);
                  v160 = Heap;
                  v90 = Heap;
                  if ( !Heap )
                  {
                    v38 = Acl;
                    v35 = -1073741801;
                    v121 = -1073741801;
                    goto LABEL_153;
                  }
                  *(_QWORD *)Heap = 0LL;
                  *((_QWORD *)Heap + 1) = 0LL;
                  Heap[4] = 0;
                  *((_WORD *)Heap + 1) |= v85;
                  v91 = (char *)(Heap + 5);
                  *(_BYTE *)Heap = 1;
                  if ( v149 )
                  {
                    v103 = Acl;
                    if ( Acl )
                    {
                      memmove(v91, Acl, Acl->AclSize);
                      if ( !(_BYTE)v124 )
                        sub_18004C608(v91, GenericMapping);
                      v90 = v160;
                      v160[3] = (_DWORD)v91 - (_DWORD)v160;
                      AclSize = v103->AclSize;
                      if ( v86 > (unsigned int)AclSize )
                      {
                        memset(&v91[AclSize], 0, v86 - (unsigned int)AclSize);
                        v90 = v160;
                      }
                      v91 += v86;
                    }
                    else
                    {
                      Heap[3] = 0;
                    }
                  }
                  if ( v156 )
                  {
                    v92 = (unsigned __int16 *)Src;
                    if ( Src )
                    {
                      memmove(v91, Src, *((unsigned __int16 *)Src + 1));
                      if ( !HIBYTE(v124) )
                        sub_18004C608(v91, GenericMapping);
                      v160[4] = (_DWORD)v91 - (_DWORD)v160;
                      v93 = v92[1];
                      v94 = v146;
                      if ( v146 > (unsigned int)v93 )
                        memset(&v91[v93], 0, v146 - (unsigned int)v93);
                      v91 += v94;
                    }
                    else
                    {
                      v90[4] = 0;
                    }
                  }
                  v95 = (unsigned int)Size;
                  memmove(v91, v144, (unsigned int)Size);
                  v96 = GrantedAccess;
                  if ( GrantedAccess > (unsigned int)v95 )
                    memset(&v91[v95], 0, GrantedAccess - (unsigned int)v95);
                  v97 = (_DWORD)v91 - (_DWORD)v160;
                  v98 = &v91[v96];
                  v160[1] = v97;
                  if ( v147 )
                  {
                    v99 = v137[0];
                    memmove(v98, v147, v137[0]);
                    if ( v143 > (unsigned int)v99 )
                      memset(&v98[v99], 0, v143 - (unsigned int)v99);
                    v160[2] = (_DWORD)v98 - (_DWORD)v160;
                  }
                  v35 = 0;
                  goto LABEL_150;
                }
                if ( v79 )
                {
                  v80 = v123;
                  v81 = (unsigned __int8 *)v144;
                  LOBYTE(v73) = v123;
                  if ( !(unsigned __int8)sub_180081410(ClientToken, v144, v73, &v156) )
                  {
                    v35 = v156;
                    goto LABEL_150;
                  }
                  goto LABEL_125;
                }
LABEL_336:
                v35 = -1073741700;
LABEL_150:
                v121 = v35;
                goto LABEL_151;
              }
              if ( *((_DWORD *)v163 + 4) )
              {
                v76 = (char *)v163 + *((unsigned int *)v163 + 4);
                goto LABEL_115;
              }
            }
            v76 = 0LL;
            goto LABEL_115;
          }
LABEL_151:
          v38 = Acl;
          goto LABEL_152;
        }
        if ( v72 != -2147483637 )
          goto LABEL_151;
        v106 = v127;
        if ( (a7 & 1) != 0 )
        {
          v106 = v127 | 0x400;
          v127 |= 0x400u;
        }
        v107 = *((_WORD *)v67 + 1);
        if ( (v107 & 0xC) != 0xC )
        {
          if ( v154 )
          {
            Src = (void *)v154;
            v127 = v106 | 4;
          }
          goto LABEL_105;
        }
        if ( (~(_BYTE)v107 & 4) == 0 )
        {
          if ( v107 >= 0 )
          {
            v109 = (_BYTE *)*((_QWORD *)v67 + 4);
LABEL_282:
            Src = v109;
LABEL_283:
            v127 = v107 & 0x1000 | 4 | v106;
            v74 = 1;
            HIBYTE(v126) = 1;
            goto LABEL_106;
          }
          if ( *((_DWORD *)v67 + 4) )
          {
            v109 = &v67[*((unsigned int *)v67 + 4)];
            goto LABEL_282;
          }
        }
        Src = 0LL;
        goto LABEL_283;
      }
      if ( *(_DWORD *)(*(_QWORD *)v148 + 16LL) )
      {
        LODWORD(v71) = v148[0] + *(_DWORD *)(*(_QWORD *)v148 + 16LL);
        goto LABEL_103;
      }
    }
    LODWORD(v71) = 0;
    goto LABEL_103;
  }
  if ( !ClientToken )
  {
    v35 = -1073741700;
    goto LABEL_311;
  }
  v121 = RtlSidDominates(Sid1, v101, &Dominates);
  v35 = v121;
  if ( v121 >= 0 )
  {
    v102 = (unsigned __int8)v143;
    if ( !Dominates )
      v102 = 1;
    v143 = v102;
    goto LABEL_93;
  }
LABEL_152:
  v88 = HeapHandle;
LABEL_153:
  if ( v163 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v163);
    v38 = *(ACL **)&v137[1];
    v35 = v121;
  }
  if ( v131 && v164 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v164);
    v38 = *(ACL **)&v137[1];
    v35 = v121;
  }
  RtlFreeHeap(v88, 0, BaseAddress);
  RtlFreeHeap(v88, 0, v172);
  RtlFreeHeap(v88, 0, v173);
  RtlFreeHeap(v88, 0, v174);
  RtlFreeHeap(v88, 0, v175);
  if ( v176 )
    RtlFreeHeap(v88, 0, v176);
  if ( v177 )
    RtlFreeHeap(v88, 0, v177);
  if ( (v132 || (_BYTE)v124) && v38 )
    RtlFreeHeap(v88, 0, v38);
  if ( v133 && v152 )
    RtlFreeHeap(v88, 0, v152);
  if ( v169 && v134 )
    RtlFreeHeap(v88, 0, v169);
  if ( HIBYTE(v124) )
  {
    if ( Src )
      RtlFreeHeap(HeapHandle, 0, Src);
  }
  *v182 = v160;
  return v35;
}
