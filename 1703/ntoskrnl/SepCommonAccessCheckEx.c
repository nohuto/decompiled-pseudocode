/*
 * XREFs of SepCommonAccessCheckEx @ 0x1401326AC
 * Callers:
 *     SeAccessCheckEx @ 0x140132680 (SeAccessCheckEx.c)
 *     SeSrpAccessCheck @ 0x140246940 (SeSrpAccessCheck.c)
 * Callees:
 *     AuthzBasepSetAccessReasons @ 0x140011A70 (AuthzBasepSetAccessReasons.c)
 *     SepLocateTokenTrustLevel @ 0x140013744 (SepLocateTokenTrustLevel.c)
 *     SeLogAccessFailure @ 0x14001BD60 (SeLogAccessFailure.c)
 *     SepFreeResourceInfo @ 0x14003E044 (SepFreeResourceInfo.c)
 *     SepLpacCausedAccessFailure @ 0x14003E110 (SepLpacCausedAccessFailure.c)
 *     SepTokenIsOwner @ 0x14003E128 (SepTokenIsOwner.c)
 *     SepMandatoryToDiscretionary @ 0x14003E338 (SepMandatoryToDiscretionary.c)
 *     SepTrustLevelCheck @ 0x14003E378 (SepTrustLevelCheck.c)
 *     RtlpOwnerAcesPresent @ 0x14003E400 (RtlpOwnerAcesPresent.c)
 *     SepConstrainByMandatory @ 0x14003E540 (SepConstrainByMandatory.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140065DA4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400897C0 (AuthzBasepEvaluateAceCondition.c)
 *     SepMandatoryIntegrityCheck @ 0x14008E320 (SepMandatoryIntegrityCheck.c)
 *     SepFilterCheck @ 0x14008E7E0 (SepFilterCheck.c)
 *     SepAccessCheckEx @ 0x140132DE0 (SepAccessCheckEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     SepBuildCapeSecurityDescriptor @ 0x14024696C (SepBuildCapeSecurityDescriptor.c)
 *     SepGetScopedPolicySid @ 0x140246AC4 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x140246C14 (SepLogLpacAccessFailure.c)
 *     SepRmDereferenceCapTable @ 0x140246D54 (SepRmDereferenceCapTable.c)
 *     SepRmReferenceFindCap @ 0x140248A28 (SepRmReferenceFindCap.c)
 *     AuthzBasepMergeAccessReasons @ 0x1402639D4 (AuthzBasepMergeAccessReasons.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepAdtAuditThisEventWithContext @ 0x14046C810 (SepAdtAuditThisEventWithContext.c)
 *     SeLockSubjectContext @ 0x1405086C0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140531170 (SeUnlockSubjectContext.c)
 */

char __fastcall SepCommonAccessCheckEx(
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        char a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        char a6)
{
  __int64 v6; // r15
  PSECURITY_SUBJECT_CONTEXT v8; // r12
  _DWORD *v10; // rcx
  _DWORD *v11; // rdx
  _DWORD *v12; // rax
  _DWORD *v13; // rax
  _QWORD *v14; // rax
  char v15; // si
  unsigned int v16; // r13d
  __int64 v17; // rcx
  int v18; // r11d
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  __int64 v22; // r11
  int *v23; // rdx
  int v24; // ebx
  __int64 PrimaryToken; // rbx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // r8
  int *v29; // rdx
  __int64 v30; // rdx
  char v31; // di
  char v32; // r8
  char v33; // cl
  int v34; // eax
  _DWORD *v35; // r8
  char v36; // cl
  char IsOwner; // r8
  int v38; // ebx
  char v39; // di
  int v40; // edx
  __int64 v41; // rcx
  PACCESS_TOKEN v42; // r9
  __int64 v43; // rcx
  PACCESS_TOKEN v44; // r8
  LUID v45; // rdx
  char *v46; // r8
  bool v47; // r13
  int v48; // ebx
  int v49; // r11d
  __int64 v50; // r9
  int *v51; // rdx
  int *v52; // r8
  int v53; // r10d
  int v54; // r11d
  int *v55; // r8
  _DWORD *v56; // rdx
  int v57; // r9d
  int v58; // r10d
  _DWORD *v59; // rcx
  __int64 v60; // rcx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdx
  char v65; // al
  int v66; // ecx
  int v67; // eax
  int v68; // r13d
  int v69; // eax
  int *v70; // rcx
  int v71; // ecx
  _QWORD *v72; // rax
  bool v73; // zf
  int v74; // esi
  __int64 v75; // rdi
  ULONGLONG TokenTrustLevel; // rax
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // rax
  int v80; // ecx
  __int64 v81; // rcx
  __int16 v82; // r8
  __int64 v83; // rax
  ACL *v84; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v87; // rdx
  int *v88; // rcx
  char *v89; // rdi
  unsigned int *v90; // r8
  int v91; // ecx
  int v92; // r13d
  __int64 v93; // r10
  __int64 v94; // rbx
  char v95; // cl
  char *PoolWithTag; // rax
  __int64 v97; // rdx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rcx
  _DWORD *v101; // rcx
  void *v102; // r9
  unsigned __int64 v103; // rax
  __int64 v104; // r8
  void *v105; // r13
  int v106; // eax
  int v107; // ecx
  _QWORD *v108; // rax
  void *v109; // r8
  void *v110; // rdx
  void *v111; // rcx
  int v112; // eax
  __int64 v113; // rdx
  __int64 v114; // r8
  int v115; // ecx
  int v116; // ebx
  _QWORD *v117; // rax
  void *v118; // r8
  void *v119; // rdx
  void *v120; // rcx
  int v121; // eax
  int v122; // r13d
  int v123; // ebx
  int v124; // r13d
  char *v125; // rax
  unsigned int v126; // r12d
  unsigned int v127; // ecx
  int v128; // r11d
  int v129; // ecx
  int v130; // ecx
  __int64 v131; // rcx
  __int64 v132; // rdx
  __int64 v133; // r8
  __int64 v134; // r9
  int v135; // ebx
  int v136; // r13d
  int v137; // edx
  char v138; // al
  int v139; // r8d
  int v140; // r11d
  int v141; // ebx
  int v142; // r13d
  int v143; // r11d
  int v144; // eax
  int v145; // r11d
  __int64 v146; // r13
  __int64 v147; // rdx
  __int64 v148; // r8
  __int64 v149; // r9
  int v150; // ebx
  int v151; // r13d
  int v152; // edx
  unsigned __int64 v153; // rcx
  int v154; // eax
  unsigned __int64 v155; // rcx
  __int64 v156; // rcx
  _DWORD *v157; // rcx
  __int64 v158; // rcx
  __int64 v159; // rcx
  int v160; // ecx
  int v161; // ecx
  __int64 v162; // rbx
  char v163; // si
  int v164; // edi
  ULONGLONG v165; // rax
  __int64 v166; // rdx
  __int64 v167; // r8
  __int64 v168; // rcx
  __int64 v169; // [rsp+38h] [rbp-F8h]
  int v170; // [rsp+40h] [rbp-F0h]
  __int64 v171; // [rsp+50h] [rbp-E0h]
  __int64 v172; // [rsp+58h] [rbp-D8h]
  __int64 v173; // [rsp+60h] [rbp-D0h]
  __int64 v174; // [rsp+68h] [rbp-C8h]
  char v175; // [rsp+B0h] [rbp-80h]
  char v177; // [rsp+B2h] [rbp-7Eh]
  bool v178; // [rsp+B3h] [rbp-7Dh] BYREF
  char v179; // [rsp+B4h] [rbp-7Ch]
  char v180; // [rsp+B5h] [rbp-7Bh]
  char v181; // [rsp+B6h] [rbp-7Ah]
  char v182; // [rsp+B7h] [rbp-79h]
  char v183; // [rsp+B8h] [rbp-78h]
  int v184; // [rsp+BCh] [rbp-74h]
  int v185; // [rsp+C0h] [rbp-70h]
  __int64 v186; // [rsp+C8h] [rbp-68h]
  unsigned int v187; // [rsp+D0h] [rbp-60h] BYREF
  int v188; // [rsp+D4h] [rbp-5Ch]
  int v189; // [rsp+D8h] [rbp-58h]
  _DWORD *v190; // [rsp+E0h] [rbp-50h] BYREF
  int v191; // [rsp+E8h] [rbp-48h]
  int v192; // [rsp+ECh] [rbp-44h] BYREF
  __int64 ClientToken; // [rsp+F0h] [rbp-40h] BYREF
  int v194; // [rsp+FCh] [rbp-34h] BYREF
  int v195; // [rsp+100h] [rbp-30h]
  int v196; // [rsp+104h] [rbp-2Ch]
  int v197; // [rsp+108h] [rbp-28h] BYREF
  __int64 v198; // [rsp+110h] [rbp-20h]
  _DWORD *v199; // [rsp+118h] [rbp-18h]
  int v200; // [rsp+120h] [rbp-10h] BYREF
  int v201; // [rsp+124h] [rbp-Ch]
  __int64 v202; // [rsp+128h] [rbp-8h]
  unsigned __int64 v203; // [rsp+130h] [rbp+0h]
  __int64 v204; // [rsp+138h] [rbp+8h] BYREF
  __int64 v205; // [rsp+140h] [rbp+10h]
  __int64 v206; // [rsp+148h] [rbp+18h]
  int v207; // [rsp+150h] [rbp+20h]
  __int64 v208; // [rsp+158h] [rbp+28h] BYREF
  __int64 v209; // [rsp+160h] [rbp+30h]
  char v210[8]; // [rsp+168h] [rbp+38h] BYREF
  __int64 v211; // [rsp+170h] [rbp+40h]
  PSECURITY_SUBJECT_CONTEXT v212; // [rsp+178h] [rbp+48h]
  _BYTE SecurityDescriptor[40]; // [rsp+180h] [rbp+50h] BYREF
  _BYTE v214[40]; // [rsp+1A8h] [rbp+78h] BYREF
  _DWORD v215[12]; // [rsp+1D0h] [rbp+A0h] BYREF
  _BYTE v216[128]; // [rsp+200h] [rbp+D0h] BYREF
  _BYTE v217[128]; // [rsp+280h] [rbp+150h] BYREF
  _BYTE v218[128]; // [rsp+300h] [rbp+1D0h] BYREF

  v211 = a3;
  v6 = a3;
  v212 = SubjectContext;
  v8 = SubjectContext;
  v208 = 0LL;
  v209 = 0LL;
  v198 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(v214, 0, sizeof(v214));
  v186 = 0LL;
  v175 = 0;
  v190 = 0LL;
  memset(v216, 0, sizeof(v216));
  memset(v217, 0, sizeof(v217));
  memset(v218, 0, sizeof(v218));
  v180 = 0;
  v181 = 0;
  v192 = -1;
  LODWORD(ClientToken) = -1;
  if ( !a4 )
    return 0;
  if ( *(_DWORD *)a4 != 40 )
    return 0;
  v10 = *(_DWORD **)(a4 + 16);
  if ( !v10 )
    return 0;
  if ( !v8
    || !v6
    || *(_DWORD *)v6 != 56
    || (v11 = *(_DWORD **)(a4 + 8)) == 0LL
    || (v12 = *(_DWORD **)(v6 + 8)) != 0LL && (*v12 != 16 || (v12[1] & 0xFFFFFFF8) != 0)
    || a5 && *a5 != 96 )
  {
    *v10 = -1073741811;
    return 0;
  }
  *v11 = 0;
  v13 = *(_DWORD **)(a4 + 16);
  v197 = 0;
  v200 = -1073741790;
  *v13 = -1073741790;
  v14 = *(_QWORD **)(a4 + 32);
  if ( v14 )
    *v14 = 0LL;
  v15 = 1;
  v16 = *(_DWORD *)(v6 + 16) & ~*(_DWORD *)(v6 + 20) & 0xFDFFFFFF;
  AuthzBasepSetAccessReasons(v16, 0, 0, *(_QWORD *)(a4 + 24), 1);
  if ( !a6 )
  {
    v69 = *(_DWORD *)(v6 + 16);
    v70 = *(int **)(a4 + 8);
    if ( (v69 & 0x2000000) != 0 )
    {
      *v70 = *(_DWORD *)(*(_QWORD *)(v6 + 32) + 12LL);
      **(_DWORD **)(a4 + 8) |= v18 & *(_DWORD *)(v6 + 16);
      **(_DWORD **)(a4 + 8) |= *(_DWORD *)(v6 + 20);
    }
    else
    {
      *v70 = *(_DWORD *)(v6 + 20) | v69;
    }
    **(_DWORD **)(a4 + 16) = 0;
    return v15;
  }
  v19 = *(_QWORD *)(v6 + 8);
  if ( !v19 || !*(_QWORD *)(v19 + 8) )
  {
    **(_DWORD **)(a4 + 16) = -1073741790;
    return 0;
  }
  if ( v8->ClientToken && v8->ImpersonationLevel < SecurityImpersonation )
  {
    **(_DWORD **)(a4 + 16) = -1073741659;
    return 0;
  }
  if ( !*(_DWORD *)(v6 + 16) )
  {
    v71 = *(_DWORD *)(v6 + 20);
    if ( !v71 )
    {
      **(_DWORD **)(a4 + 16) = -1073741790;
      return 0;
    }
    **(_DWORD **)(a4 + 8) = v71;
    **(_DWORD **)(a4 + 16) = 0;
    v72 = *(_QWORD **)(a4 + 32);
    if ( v72 )
      *v72 = 0LL;
    return v15;
  }
  v20 = *(_DWORD *)(a4 + 4);
  if ( v20 != 1 && v20 != *(_DWORD *)(v6 + 40) )
  {
    **(_DWORD **)(a4 + 16) = -1073741811;
    return 0;
  }
  if ( !a2 )
    SeLockSubjectContext(v8);
  v21 = SepTrustLevelCheck(v17, *(_QWORD *)(*(_QWORD *)(v6 + 8) + 8LL), v8, 0LL, 0LL, 0, &v192);
  v22 = 0LL;
  **(_DWORD **)(a4 + 16) = v21;
  v23 = *(int **)(a4 + 16);
  if ( *v23 < 0 )
    goto LABEL_100;
  v24 = v192;
  *v23 = (*(_DWORD *)(v6 + 16) & 0xFDFFFFFF) != (v192 & *(_DWORD *)(v6 + 16) & 0xFDFFFFFF) ? 0xC0000022 : 0;
  if ( **(int **)(a4 + 16) < 0 )
  {
    ClientToken = (__int64)v8->ClientToken;
    if ( !ClientToken )
      ClientToken = (__int64)v8->PrimaryToken;
    v74 = *(_DWORD *)(v6 + 16) | *(_DWORD *)(v6 + 20);
    v75 = *(_QWORD *)(v6 + 8);
    TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)v8);
    SeLogAccessFailure(ClientToken, v77, v78, TokenTrustLevel, *(_QWORD *)(v75 + 8), v74, 0);
    if ( !a2 )
      SeUnlockSubjectContext(v8);
    AuthzBasepSetAccessReasons(v16 & ~v24, 9437184, 0, *(_QWORD *)(a4 + 24), 0);
    return 0;
  }
  PrimaryToken = (__int64)v8->ClientToken;
  v199 = (_DWORD *)PrimaryToken;
  if ( !PrimaryToken )
  {
    PrimaryToken = (__int64)v8->PrimaryToken;
    v199 = (_DWORD *)PrimaryToken;
  }
  v26 = *(_QWORD *)(v6 + 8);
  if ( (*(_DWORD *)(v26 + 4) & 4) == 0 )
  {
    v27 = SepFilterCheck(*(_QWORD *)(v26 + 8), (void **)&v190, (_DWORD *)PrimaryToken, 0, (int *)&ClientToken);
    v22 = 0LL;
    **(_DWORD **)(a4 + 16) = v27;
    v29 = *(int **)(a4 + 16);
    if ( *v29 >= 0 )
    {
      *v29 = (*(_DWORD *)(v6 + 16) & 0xFDFFFFFF) != ((unsigned int)ClientToken & *(_DWORD *)(v6 + 16) & 0xFDFFFFFF)
           ? 0xC0000022
           : 0;
      if ( **(int **)(a4 + 16) < 0 )
      {
        SeLogAccessFailure(
          PrimaryToken,
          (unsigned int)(*(_DWORD *)(v6 + 16) | *(_DWORD *)(v6 + 20)),
          v28,
          0LL,
          *(_QWORD *)(*(_QWORD *)(v6 + 8) + 8LL),
          *(_BYTE *)(v6 + 16) | *(_BYTE *)(v6 + 20),
          0);
        if ( !a2 )
          SeUnlockSubjectContext(v8);
        AuthzBasepSetAccessReasons(ClientToken & v16, 10485760, 0, *(_QWORD *)(a4 + 24), 0);
        return 0;
      }
      goto LABEL_31;
    }
LABEL_100:
    v73 = a2 == 0;
    goto LABEL_102;
  }
LABEL_31:
  v30 = *(_QWORD *)(v6 + 8);
  v31 = *(_DWORD *)(v30 + 4) & 1;
  v32 = (*(_DWORD *)(v30 + 4) & 2) != 0;
  if ( (*(_DWORD *)(v30 + 4) & 2) == 0 || (v33 = 1, (*(_DWORD *)(PrimaryToken + 200) & 0x2000) == 0) )
    v33 = 0;
  v182 = v33;
  if ( !SepAllowAccessUponLogoff && (*(_DWORD *)(PrimaryToken + 200) & 0x20) == 0 )
  {
    v79 = *(_QWORD *)(PrimaryToken + 216);
    if ( v79 )
    {
      if ( (*(_DWORD *)(v79 + 32) & 0x20) != 0 )
      {
        **(_DWORD **)(a4 + 8) = 0;
        **(_DWORD **)(a4 + 16) = -1073741790;
        goto LABEL_101;
      }
    }
  }
  LOBYTE(v189) = 0;
  if ( !v33 )
  {
    **(_DWORD **)(a4 + 16) = SepMandatoryIntegrityCheck(
                               *(_DWORD **)(v6 + 32),
                               *(_QWORD *)(v30 + 8),
                               v32,
                               PrimaryToken,
                               0,
                               (__int64)&v208);
    if ( **(int **)(a4 + 16) < 0 )
    {
LABEL_101:
      v73 = a2 == 0;
LABEL_102:
      if ( v73 )
        SeUnlockSubjectContext(v8);
      return 0;
    }
    v34 = SepMandatoryToDiscretionary(&v208, *(_DWORD *)(v6 + 16));
    *v35 = v34;
    if ( **(_DWORD **)(a4 + 16) < (int)v22 )
    {
      if ( (*(_DWORD *)(PrimaryToken + 200) & 0x4000) == 0 || HIDWORD(v209) > 0x2000 )
      {
        if ( a2 == (_BYTE)v22 )
        {
          SeUnlockSubjectContext(v8);
          LOBYTE(v22) = 0;
        }
        AuthzBasepSetAccessReasons(v16 & ~(_DWORD)v208, 3145728, 0, *(_QWORD *)(a4 + 24), v22);
        return 0;
      }
      LOBYTE(v189) = 1;
    }
    else if ( (*(_DWORD *)(v6 + 16) & 0x2000000) != 0 && (*(_DWORD *)(PrimaryToken + 200) & 0x4000) != 0 )
    {
      v80 = (unsigned __int8)v189;
      if ( HIDWORD(v209) <= 0x2000 )
        v80 = 1;
      v189 = v80;
    }
  }
  if ( !SepRmEnforceCap )
    goto LABEL_40;
  v81 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 8LL);
  v82 = *(_WORD *)(v81 + 2);
  if ( (v82 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
    goto LABEL_40;
  if ( (v82 & 0x10) == 0 )
    goto LABEL_129;
  if ( v82 < 0 )
  {
    v83 = *(unsigned int *)(v81 + 12);
    if ( (_DWORD)v83 )
    {
      v84 = (ACL *)(v81 + v83);
      goto LABEL_131;
    }
LABEL_129:
    v198 = v22;
LABEL_40:
    v36 = 0;
    goto LABEL_41;
  }
  v84 = *(ACL **)(v81 + 24);
LABEL_131:
  v198 = (__int64)v84;
  if ( !v84 )
    goto LABEL_40;
  ScopedPolicySid = (void *)SepGetScopedPolicySid(v84);
  v22 = 0LL;
  if ( ScopedPolicySid )
  {
    Cap = SepRmReferenceFindCap(ScopedPolicySid);
    v87 = v186;
    v22 = 0LL;
    if ( Cap < 0 )
      v87 = SepRmDefaultCap;
    v36 = 1;
    v175 = 1;
    v186 = v87;
  }
  else
  {
    v36 = 0;
  }
LABEL_41:
  if ( !v31 || (*(_DWORD *)(v6 + 16) & 0x2060000) != 0 || v36 )
  {
    IsOwner = SepTokenIsOwner(PrimaryToken);
    v177 = IsOwner;
    v22 = 0LL;
  }
  else
  {
    IsOwner = v22;
    v177 = v22;
  }
  v38 = *(_DWORD *)(v6 + 16);
  if ( !IsOwner || (v38 & 0x2060000) == 0 )
    goto LABEL_44;
  if ( !v31 )
  {
    v62 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 8LL);
    if ( (~(unsigned __int8)*(_WORD *)(v62 + 2) & 4) == 0 )
    {
      if ( *(__int16 *)(v62 + 2) >= 0 )
      {
        v64 = *(_QWORD *)(v62 + 32);
LABEL_75:
        v65 = RtlpOwnerAcesPresent(0, v64);
        LODWORD(v22) = 0;
        if ( !v65 )
          goto LABEL_76;
LABEL_44:
        v39 = v175;
        goto LABEL_45;
      }
      v63 = *(unsigned int *)(v62 + 16);
      if ( (_DWORD)v63 )
      {
        v64 = v62 + v63;
        goto LABEL_75;
      }
    }
    v64 = v22;
    goto LABEL_75;
  }
LABEL_76:
  v66 = 393216;
  v67 = v38 & 0x2000000;
  if ( (v38 & 0x2000000) != 0 )
  {
    *(_DWORD *)(v6 + 20) |= 0x60000u;
    v38 = 393216;
  }
  else
  {
    v38 &= 0x60000u;
    *(_DWORD *)(v6 + 20) |= v38;
  }
  v68 = v16 & 0x60000;
  if ( !v67 )
    v66 = v68;
  AuthzBasepSetAccessReasons(v66, 0x400000, 0, *(_QWORD *)(a4 + 24), v22);
  *(_DWORD *)(v6 + 16) &= 0xFFF9FFFF;
  v39 = v175;
  v177 &= -(v175 != 0);
LABEL_45:
  v40 = *(_DWORD *)(v6 + 16);
  if ( !v40 && !v39 && ((v199[50] & 0x2000) != 0 || !v38) )
  {
    if ( a2 == (_BYTE)v22 )
    {
      SeUnlockSubjectContext(v8);
      LODWORD(v22) = 0;
    }
    **(_DWORD **)(a4 + 8) = *(_DWORD *)(v6 + 20);
    **(_DWORD **)(a4 + 16) = v22;
    return v15;
  }
  v41 = *(_QWORD *)(v6 + 8);
  v42 = v8->ClientToken;
  v204 = 0LL;
  v205 = 0LL;
  v43 = *(_QWORD *)(v41 + 8);
  v206 = 0LL;
  v207 = 0;
  v44 = v8->PrimaryToken;
  v174 = *(_QWORD *)(a4 + 24);
  v173 = *(_QWORD *)(a4 + 16);
  v172 = *(_QWORD *)(a4 + 32);
  v171 = *(_QWORD *)(a4 + 8);
  v170 = *(_DWORD *)(v6 + 20);
  v169 = *(_QWORD *)(v6 + 32);
  LODWORD(v204) = v38;
  v183 = SepAccessCheckEx(v43, v40, (_DWORD)v44, (_DWORD)v42, v40, 0LL, 0, v169, v170, a6, v171, v172, v173, v174);
  if ( !SepRmEnforceCap || (v201 = **(_DWORD **)(a4 + 16), v201 < 0) || !v39 )
  {
    v47 = v178;
    goto LABEL_48;
  }
  v88 = *(int **)(a4 + 8);
  v89 = 0LL;
  v90 = *(unsigned int **)(a4 + 32);
  LOBYTE(v195) = 0;
  v185 = 0;
  v91 = *v88;
  v92 = v91;
  v188 = v91;
  v184 = v91;
  if ( v90 )
  {
    v90 = *(unsigned int **)v90;
    if ( v90 )
    {
      if ( *v90 )
      {
        v93 = *v90;
        v90 += 2;
        v45 = SeRelabelPrivilege;
        do
        {
          if ( (v90[2] & 0x80000000) != 0 )
          {
            if ( *v90 == SeSecurityPrivilege.LowPart && v90[1] == SeSecurityPrivilege.HighPart )
            {
              v185 |= 0x1000000u;
            }
            else if ( *(_QWORD *)v90 == SeTakeOwnershipPrivilege
                   || *v90 == SeRelabelPrivilege.LowPart && v90[1] == SeRelabelPrivilege.HighPart )
            {
              v185 |= 0x80000u;
            }
          }
          v90 += 3;
          --v93;
        }
        while ( v93 );
        v92 = v184;
        v91 = v184;
      }
    }
  }
  v191 = v91;
  LOBYTE(v90) = 1;
  LOBYTE(v45.LowPart) = 1;
  v94 = v186;
  v95 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SepAdtAuditThisEventWithContext)(129LL, v45, v90, v8);
  v179 = v95;
  if ( v95 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * *(unsigned int *)(v186 + 60), 0x41536553u);
    v89 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( !a2 )
        SeUnlockSubjectContext(v8);
      v100 = *(_QWORD *)(v186 + 32);
      if ( v100 )
        SepRmDereferenceCapTable(v100, v97, v98, v99);
      v101 = v190;
      **(_DWORD **)(a4 + 8) = 0;
      **(_DWORD **)(a4 + 16) = -1073741801;
      SepFreeResourceInfo(v101);
      return 0;
    }
    memset(PoolWithTag, 0, 8LL * *(unsigned int *)(v186 + 60));
    v95 = v179;
  }
  v102 = 0LL;
  v103 = 0LL;
  v196 = 0;
  if ( !*(_DWORD *)(v186 + 60) )
  {
LABEL_212:
    if ( v95 )
    {
      if ( v92 != v188 )
      {
        v122 = v188 ^ v92;
        v123 = v184 & v122;
        v124 = v188 & v122;
        v187 = *(_DWORD *)(v186 + 60);
        if ( v187 )
        {
          v125 = v89;
          v126 = 0;
          v127 = v187;
          v203 = (unsigned __int64)v89;
          do
          {
            if ( !v123 && !v124 )
              break;
            if ( v125[4] )
            {
              v128 = *(_DWORD *)v125;
              v129 = v124 & (*(_DWORD *)v125 ^ v124);
              if ( v129 )
                AuthzBasepSetAccessReasons(v129, 0x80000000, v126 << 24, (__int64)v217, 0);
              v124 &= ~v129;
              v130 = v128 & v123;
              if ( (v128 & v123) != 0 )
                AuthzBasepSetAccessReasons(v130, 0x80000000, v126 << 24, (__int64)v217, 0);
              v123 &= ~v130;
              AuthzBasepMergeAccessReasons(v216, v217, 4278190080LL);
              v125 = (char *)v203;
              v127 = v187;
            }
            v125 += 8;
            ++v126;
            v203 = (unsigned __int64)v125;
          }
          while ( v126 < v127 );
          v6 = v211;
          v8 = v212;
        }
      }
    }
    if ( v89 )
      ExFreePoolWithTag(v89, 0);
    v47 = v178;
    **(_DWORD **)(a4 + 16) = v201;
    **(_DWORD **)(a4 + 8) &= v188;
    v131 = *(_QWORD *)(a4 + 24);
    if ( **(int **)(a4 + 16) < 0 )
      v47 = 0;
    v178 = v47;
    AuthzBasepMergeAccessReasons(v131, v216, 0LL);
    AuthzBasepMergeAccessReasons(*(_QWORD *)(a4 + 24), v216, 4278190080LL);
LABEL_48:
    if ( v182 || (v45 = (LUID)*(unsigned int *)(v6 + 16), (v45.LowPart & 0x2000000) == 0) )
    {
      if ( (_BYTE)v189 && !BYTE2(v206) )
      {
        v49 = -1073741790;
        if ( !BYTE1(v206) )
        {
          v47 = 0;
          **(_DWORD **)(a4 + 16) = -1073741790;
          **(_DWORD **)(a4 + 8) = 0;
          AuthzBasepSetAccessReasons(~**(_DWORD **)(a4 + 8), 3145728, 0, *(_QWORD *)(a4 + 24), 0);
        }
        goto LABEL_53;
      }
    }
    else
    {
      v46 = *(char **)(a4 + 8);
      v48 = *(_DWORD *)v46;
      if ( !(_BYTE)v189 || !*(_WORD *)((char *)&v206 + 1) )
      {
        SepConstrainByMandatory((__int64)&v208, v45.LowPart, v46, *(char **)(a4 + 16), &v178, 0);
        AuthzBasepSetAccessReasons(v48 & ~**(_DWORD **)(a4 + 8), 3145728, 0, *(_QWORD *)(a4 + 24), 0);
        v47 = v178;
      }
    }
    v49 = -1073741790;
LABEL_53:
    v50 = *(unsigned int *)(v6 + 16);
    if ( (v50 & 0x2000000) != 0 )
    {
      v51 = *(int **)(a4 + 8);
      v52 = *(int **)(a4 + 16);
      v180 = 0;
      v53 = *v51;
      if ( v192 != -1 )
      {
        v160 = v192 & v53;
        if ( (v192 & v53) != v53 )
        {
          v180 = 1;
          *v51 = v160;
          if ( (v50 & 0x2000000) != 0 )
          {
            if ( v160 )
            {
              *v52 = 0;
              v47 = 1;
            }
            else
            {
              *v52 = v49;
              v47 = 0;
            }
          }
          else
          {
            *v52 = v49;
            v47 = *v51 != 0;
          }
        }
      }
      AuthzBasepSetAccessReasons(v53 & ~**(_DWORD **)(a4 + 8), 9437184, 0, *(_QWORD *)(a4 + 24), 0);
      v55 = *(int **)(a4 + 8);
      v56 = *(_DWORD **)(a4 + 16);
      v57 = *(_DWORD *)(v6 + 16);
      v181 = 0;
      v58 = *v55;
      if ( (_DWORD)ClientToken != -1 )
      {
        v161 = ClientToken & v58;
        if ( ((unsigned int)ClientToken & v58) != v58 )
        {
          v181 = 1;
          *v55 = v161;
          if ( (v57 & 0x2000000) != 0 )
          {
            if ( v161 )
            {
              *v56 = 0;
              v47 = 1;
            }
            else
            {
              *v56 = v54;
              v47 = 0;
            }
          }
          else
          {
            *v56 = v54;
            v47 = *v55 != 0;
          }
        }
      }
      AuthzBasepSetAccessReasons(v58 & ~**(_DWORD **)(a4 + 8), 10485760, 0, *(_QWORD *)(a4 + 24), 0);
    }
    v59 = v199;
    if ( v199 )
    {
      if ( v180 || v181 || !HIDWORD(v205) && (v199[50] & 0x4000) != 0 && (**(int **)(a4 + 16) < 0 || BYTE3(v206)) )
      {
        v162 = *(_QWORD *)(v6 + 8);
        v163 = **(_DWORD **)(a4 + 16) >= 0;
        v164 = *(_DWORD *)(v6 + 16) | *(_DWORD *)(v6 + 20);
        v165 = SepLocateTokenTrustLevel((__int64 *)v8);
        SeLogAccessFailure((__int64)v199, v166, v167, v165, *(_QWORD *)(v162 + 8), v164, v163);
        v59 = v199;
        v15 = 1;
      }
      if ( SepLpacCausedAccessFailure((__int64)&v204, (__int64)v59) && **(int **)(a4 + 16) < 0 )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SepLogLpacAccessFailure)(v60, v45, v46, v50);
    }
    if ( v175 )
    {
      v168 = *(_QWORD *)(v186 + 32);
      if ( v168 )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SepRmDereferenceCapTable)(v168, v45, v46, v50);
    }
    if ( !a2 )
      SeUnlockSubjectContext(v8);
    SepFreeResourceInfo(v190);
    if ( !v183 || !v47 )
      return 0;
    return v15;
  }
  while ( 1 )
  {
    v104 = *(_QWORD *)(v94 + 8 * v103 + 64);
    v105 = v190;
    v203 = v103;
    v202 = v104;
    if ( !*(_QWORD *)(v104 + 24) )
      break;
    if ( !v190 )
    {
      v106 = AuthzBasepInitializeResourceClaimsFromSacl(v198, &v190);
      v102 = 0LL;
      v105 = v190;
      v107 = (unsigned __int8)v195;
      if ( v106 < 0 )
        v107 = 1;
      v195 = v107;
    }
    v108 = (_QWORD *)*((_QWORD *)v199 + 137);
    if ( v108 )
      v109 = (void *)v108[75];
    else
      v109 = 0LL;
    if ( v108 )
      v110 = (void *)v108[73];
    else
      v110 = 0LL;
    if ( v108 )
      v111 = (void *)v108[74];
    else
      v111 = 0LL;
    if ( v108 )
      v102 = (void *)v108[72];
    v112 = AuthzBasepEvaluateAceCondition(
             v199,
             *((void **)v199 + 97),
             v105,
             v102,
             v111,
             v110,
             v109,
             *(_DWORD **)(v202 + 24),
             *(_DWORD *)(v202 + 16),
             1u,
             0,
             &v194);
    v115 = v194;
    v116 = v112;
    if ( v194 == 1 )
      break;
    v102 = 0LL;
    if ( v112 < 0 )
      goto LABEL_254;
    if ( (v199[50] & 0x10) != 0 )
    {
      v117 = (_QWORD *)*((_QWORD *)v199 + 137);
      if ( v117 )
        v118 = (void *)v117[75];
      else
        v118 = 0LL;
      if ( v117 )
        v119 = (void *)v117[73];
      else
        v119 = 0LL;
      if ( v117 )
        v120 = (void *)v117[74];
      else
        v120 = 0LL;
      if ( v117 )
        v102 = (void *)v117[72];
      v121 = AuthzBasepEvaluateAceCondition(
               v199,
               *((void **)v199 + 97),
               v105,
               v102,
               v120,
               v119,
               v118,
               *(_DWORD **)(v202 + 24),
               *(_DWORD *)(v202 + 16),
               1u,
               1u,
               &v194);
      v102 = 0LL;
      v116 = v121;
      if ( v121 < 0 )
      {
LABEL_254:
        if ( !a2 )
          SeUnlockSubjectContext(v8);
        v156 = *(_QWORD *)(v186 + 32);
        if ( v156 )
          SepRmDereferenceCapTable(v156, v113, v114, 0LL);
        **(_DWORD **)(a4 + 8) = 0;
        goto LABEL_260;
      }
      v115 = v194;
    }
    if ( (_BYTE)v195 || v115 == 1 )
      break;
    v92 = v184;
LABEL_210:
    v95 = v179;
LABEL_211:
    v94 = v186;
    v103 = (unsigned int)(v196 + 1);
    v196 = v103;
    if ( (unsigned int)v103 >= *(_DWORD *)(v186 + 60) )
      goto LABEL_212;
  }
  v116 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
  if ( v116 < 0 )
  {
    if ( !a2 )
      SeUnlockSubjectContext(v8);
    v159 = *(_QWORD *)(v186 + 32);
    if ( v159 )
      SepRmDereferenceCapTable(v159, v132, v133, v134);
    **(_DWORD **)(a4 + 8) = 0;
LABEL_260:
    v157 = v105;
    goto LABEL_262;
  }
  v135 = *(_DWORD *)(v6 + 16);
  if ( (*(_DWORD *)(v202 + 48) & 1) != 0 )
  {
    if ( (v135 & 0x2000000) == 0 )
      v135 |= *(_DWORD *)(v6 + 20);
    v136 = 0;
  }
  else
  {
    v136 = *(_DWORD *)(v6 + 20);
  }
  memset(v215, 0, sizeof(v215));
  v138 = SepAccessCheckEx(
           (unsigned int)SecurityDescriptor,
           v137,
           v8->PrimaryToken,
           v8->ClientToken,
           v135 | 0x2000000u,
           (__int64)v215,
           1,
           *(_QWORD *)(v6 + 32),
           v136,
           a6,
           (__int64)&v197,
           0LL,
           (__int64)&v200,
           (__int64)v218);
  v102 = 0LL;
  v139 = v185;
  v140 = v185 | v215[7];
  v183 = v138;
  v141 = (v136 | **(_DWORD **)(a4 + 8)) & v197;
  v197 = v141;
  if ( v177 )
    v140 |= v141 & 0x60000;
  v142 = v191;
  v143 = ~v215[8] & v140;
  v144 = v200;
  v188 &= v141;
  if ( !v188 )
    v144 = -1073741790;
  v201 = v144;
  if ( (v191 & (v191 ^ v143)) != 0 )
  {
    AuthzBasepSetAccessReasons(v191 & (v191 ^ v143), 327680, v196, (__int64)v216, 0);
    v139 = v185;
    v191 = v145 & v142;
    v102 = 0LL;
  }
  v95 = v179;
  if ( !v179 )
  {
    v92 = v184;
    goto LABEL_211;
  }
  v146 = v202;
  if ( !*(_QWORD *)(v202 + 40) )
  {
    v155 = v203;
    v92 = v141 & v184;
    v184 &= v141;
    v89[8 * v203 + 4] = 1;
    *(_DWORD *)&v89[8 * v155] = v141 | v139;
    goto LABEL_210;
  }
  v116 = SepBuildCapeSecurityDescriptor(v214);
  if ( v116 >= 0 )
  {
    v150 = *(_DWORD *)(v6 + 16);
    if ( (*(_DWORD *)(v146 + 48) & 0x100) != 0 )
    {
      if ( (v150 & 0x2000000) == 0 )
        v150 |= *(_DWORD *)(v6 + 20);
      v151 = 0;
    }
    else
    {
      v151 = *(_DWORD *)(v6 + 20);
    }
    memset(v215, 0, sizeof(v215));
    SepAccessCheckEx(
      (unsigned int)v214,
      v152,
      v8->PrimaryToken,
      v8->ClientToken,
      v150,
      0LL,
      0,
      *(_QWORD *)(v6 + 32),
      v151,
      a6,
      (__int64)&v187,
      0LL,
      (__int64)v210,
      (__int64)v218);
    v153 = v203;
    v92 = v187 & v184;
    v154 = v185 | v187;
    v89[8 * v203 + 4] = 1;
    v102 = 0LL;
    *(_DWORD *)&v89[8 * v153] = v154;
    v184 = v92;
    goto LABEL_210;
  }
  if ( !a2 )
    SeUnlockSubjectContext(v8);
  v158 = *(_QWORD *)(v186 + 32);
  if ( v158 )
    SepRmDereferenceCapTable(v158, v147, v148, v149);
  v157 = v190;
  **(_DWORD **)(a4 + 8) = 0;
LABEL_262:
  **(_DWORD **)(a4 + 16) = v116;
  SepFreeResourceInfo(v157);
  if ( v89 )
    ExFreePoolWithTag(v89, 0);
  return 0;
}
