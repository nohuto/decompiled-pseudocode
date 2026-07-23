/*
 * XREFs of SepCommonAccessCheckEx @ 0x14014204C
 * Callers:
 *     SeAccessCheckEx @ 0x140142020 (SeAccessCheckEx.c)
 *     SeSrpAccessCheck @ 0x14025E080 (SeSrpAccessCheck.c)
 * Callees:
 *     SepFreeResourceInfo @ 0x1400150FC (SepFreeResourceInfo.c)
 *     SepTokenIsOwner @ 0x1400151D0 (SepTokenIsOwner.c)
 *     SepMandatoryToDiscretionary @ 0x1400153D8 (SepMandatoryToDiscretionary.c)
 *     RtlpOwnerAcesPresent @ 0x1400154F0 (RtlpOwnerAcesPresent.c)
 *     SepConstrainByMandatory @ 0x140015764 (SepConstrainByMandatory.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140017110 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14001A89C (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepTrustLevelCheck @ 0x14006A120 (SepTrustLevelCheck.c)
 *     SepMandatoryIntegrityCheck @ 0x14007EFF0 (SepMandatoryIntegrityCheck.c)
 *     SepFilterCheck @ 0x14007F470 (SepFilterCheck.c)
 *     SepLocateTokenTrustLevel @ 0x140087894 (SepLocateTokenTrustLevel.c)
 *     AuthzBasepSetAccessReasons @ 0x140110310 (AuthzBasepSetAccessReasons.c)
 *     SeLogAccessFailure @ 0x140113BC0 (SeLogAccessFailure.c)
 *     SepLpacCausedAccessFailure @ 0x14012AD50 (SepLpacCausedAccessFailure.c)
 *     SepAccessCheckEx @ 0x14014272C (SepAccessCheckEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SepBuildCapeSecurityDescriptor @ 0x14025E0AC (SepBuildCapeSecurityDescriptor.c)
 *     SepGetScopedPolicySid @ 0x14025E204 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x14025E34C (SepLogLpacAccessFailure.c)
 *     SepRmDereferenceCapTable @ 0x14025E490 (SepRmDereferenceCapTable.c)
 *     SepRmReferenceFindCap @ 0x140260144 (SepRmReferenceFindCap.c)
 *     AuthzBasepMergeAccessReasons @ 0x14028DD04 (AuthzBasepMergeAccessReasons.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SepAdtAuditThisEventWithContext @ 0x14046BDC0 (SepAdtAuditThisEventWithContext.c)
 *     SeLockSubjectContext @ 0x1404A6DD0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1404B2450 (SeUnlockSubjectContext.c)
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
  char v15; // di
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
  int v31; // esi
  char v32; // r8
  char v33; // cl
  int v34; // eax
  _DWORD *v35; // r8
  char v36; // cl
  char IsOwner; // r8
  int v38; // ebx
  char v39; // si
  int v40; // edx
  __int64 v41; // rcx
  PACCESS_TOKEN v42; // r9
  __int64 v43; // rcx
  PACCESS_TOKEN v44; // r8
  __int64 v45; // rdx
  char *v46; // r8
  __int64 v47; // r9
  bool v48; // r13
  int v49; // ebx
  int v50; // r11d
  int *v51; // rdx
  int *v52; // r8
  int v53; // r9d
  int v54; // r11d
  int *v55; // r8
  _DWORD *v56; // rdx
  int v57; // r9d
  int v58; // r10d
  _DWORD *v59; // rcx
  __int64 v61; // rcx
  __int16 v62; // ax
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
  __int16 v82; // dx
  __int64 v83; // rax
  ACL *v84; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v87; // rdx
  int *v88; // rcx
  char *v89; // rsi
  int v90; // r9d
  int v91; // r10d
  int v92; // r13d
  unsigned int **v93; // rcx
  unsigned int *v94; // rcx
  unsigned int v95; // eax
  _DWORD *v96; // rcx
  __int64 v97; // rbx
  char v98; // cl
  char *PoolWithTag; // rax
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rcx
  PVOID v104; // rcx
  void *v105; // r9
  unsigned __int64 v106; // rax
  __int64 v107; // r8
  PVOID v108; // r13
  int v109; // eax
  int v110; // ecx
  _QWORD *v111; // rax
  void *v112; // r8
  void *v113; // rdx
  void *v114; // rcx
  int v115; // eax
  __int64 v116; // rdx
  __int64 v117; // r8
  int v118; // ecx
  int v119; // ebx
  _QWORD *v120; // rax
  void *v121; // r8
  void *v122; // rdx
  void *v123; // rcx
  int v124; // eax
  int v125; // r13d
  int v126; // ebx
  int v127; // r13d
  char *v128; // rax
  unsigned int v129; // r12d
  unsigned int v130; // ecx
  int v131; // r11d
  int v132; // ecx
  int v133; // r11d
  __int64 v134; // rcx
  __int64 v135; // rdx
  __int64 v136; // r8
  __int64 v137; // r9
  int v138; // ebx
  int v139; // r13d
  int v140; // edx
  char v141; // al
  int v142; // r8d
  int v143; // r11d
  int v144; // ebx
  int v145; // r13d
  int v146; // r11d
  int v147; // eax
  int v148; // r11d
  __int64 v149; // r13
  __int64 v150; // rdx
  __int64 v151; // r8
  __int64 v152; // r9
  int v153; // ebx
  int v154; // r13d
  int v155; // edx
  unsigned __int64 v156; // rcx
  int v157; // eax
  unsigned __int64 v158; // rcx
  __int64 v159; // rcx
  PVOID v160; // rcx
  __int64 v161; // rcx
  __int64 v162; // rcx
  int v163; // ecx
  int v164; // ecx
  __int64 v165; // rbx
  char v166; // si
  int v167; // edi
  ULONGLONG v168; // rax
  __int64 v169; // rdx
  __int64 v170; // r8
  __int64 v171; // rcx
  __int64 v172; // rcx
  __int64 v173; // [rsp+38h] [rbp-F8h]
  int v174; // [rsp+40h] [rbp-F0h]
  __int64 v175; // [rsp+50h] [rbp-E0h]
  __int64 v176; // [rsp+58h] [rbp-D8h]
  __int64 v177; // [rsp+60h] [rbp-D0h]
  __int64 v178; // [rsp+68h] [rbp-C8h]
  char v179; // [rsp+B0h] [rbp-80h]
  char v181; // [rsp+B2h] [rbp-7Eh]
  bool v182; // [rsp+B3h] [rbp-7Dh] BYREF
  char v183; // [rsp+B4h] [rbp-7Ch]
  char v184; // [rsp+B5h] [rbp-7Bh]
  char v185; // [rsp+B6h] [rbp-7Ah]
  char v186; // [rsp+B7h] [rbp-79h]
  char v187; // [rsp+B8h] [rbp-78h]
  int v188; // [rsp+BCh] [rbp-74h]
  __int64 v189; // [rsp+C0h] [rbp-70h]
  int v190; // [rsp+C8h] [rbp-68h]
  int v191; // [rsp+CCh] [rbp-64h]
  unsigned int v192; // [rsp+D0h] [rbp-60h] BYREF
  PVOID P; // [rsp+D8h] [rbp-58h] BYREF
  int v194; // [rsp+E0h] [rbp-50h]
  int v195; // [rsp+E4h] [rbp-4Ch]
  int v196; // [rsp+E8h] [rbp-48h] BYREF
  __int64 ClientToken; // [rsp+F0h] [rbp-40h] BYREF
  int v198; // [rsp+FCh] [rbp-34h] BYREF
  int v199; // [rsp+100h] [rbp-30h]
  int v200; // [rsp+104h] [rbp-2Ch]
  int v201; // [rsp+108h] [rbp-28h] BYREF
  _DWORD *v202; // [rsp+110h] [rbp-20h]
  __int64 v203; // [rsp+118h] [rbp-18h]
  int v204; // [rsp+120h] [rbp-10h] BYREF
  int v205; // [rsp+124h] [rbp-Ch]
  __int64 v206; // [rsp+128h] [rbp-8h]
  unsigned __int64 v207; // [rsp+130h] [rbp+0h]
  __int64 v208; // [rsp+138h] [rbp+8h] BYREF
  __int64 v209; // [rsp+140h] [rbp+10h]
  __int64 v210; // [rsp+148h] [rbp+18h]
  int v211; // [rsp+150h] [rbp+20h]
  __int64 v212; // [rsp+158h] [rbp+28h] BYREF
  __int64 v213; // [rsp+160h] [rbp+30h]
  char v214[8]; // [rsp+168h] [rbp+38h] BYREF
  __int64 v215; // [rsp+170h] [rbp+40h]
  PSECURITY_SUBJECT_CONTEXT v216; // [rsp+178h] [rbp+48h]
  _BYTE SecurityDescriptor[40]; // [rsp+180h] [rbp+50h] BYREF
  _BYTE v218[40]; // [rsp+1A8h] [rbp+78h] BYREF
  _DWORD v219[12]; // [rsp+1D0h] [rbp+A0h] BYREF
  _BYTE v220[128]; // [rsp+200h] [rbp+D0h] BYREF
  _BYTE v221[128]; // [rsp+280h] [rbp+150h] BYREF
  _BYTE v222[128]; // [rsp+300h] [rbp+1D0h] BYREF

  v215 = a3;
  v6 = a3;
  v216 = SubjectContext;
  v8 = SubjectContext;
  v212 = 0LL;
  v213 = 0LL;
  v203 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(v218, 0, sizeof(v218));
  v189 = 0LL;
  v179 = 0;
  P = 0LL;
  memset(v220, 0, sizeof(v220));
  memset(v221, 0, sizeof(v221));
  memset(v222, 0, sizeof(v222));
  v184 = 0;
  v185 = 0;
  v196 = -1;
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
  v201 = 0;
  v204 = -1073741790;
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
  v21 = SepTrustLevelCheck(v17, *(_QWORD *)(*(_QWORD *)(v6 + 8) + 8LL), v8, 0LL, 0LL, 0, &v196);
  v22 = 0LL;
  **(_DWORD **)(a4 + 16) = v21;
  v23 = *(int **)(a4 + 16);
  if ( *v23 < 0 )
    goto LABEL_98;
  v24 = v196;
  *v23 = (*(_DWORD *)(v6 + 16) & 0xFDFFFFFF) != (v196 & *(_DWORD *)(v6 + 16) & 0xFDFFFFFF) ? 0xC0000022 : 0;
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
  v202 = (_DWORD *)PrimaryToken;
  if ( !PrimaryToken )
  {
    PrimaryToken = (__int64)v8->PrimaryToken;
    v202 = (_DWORD *)PrimaryToken;
  }
  v26 = *(_QWORD *)(v6 + 8);
  if ( (*(_DWORD *)(v26 + 4) & 4) == 0 )
  {
    v27 = SepFilterCheck(*(_QWORD *)(v26 + 8), (__int64 *)&P, (_DWORD *)PrimaryToken, 0, (int *)&ClientToken);
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
LABEL_98:
    v73 = a2 == 0;
    goto LABEL_100;
  }
LABEL_31:
  v30 = *(_QWORD *)(v6 + 8);
  v31 = *(_DWORD *)(v30 + 4) & 1;
  v32 = (*(_DWORD *)(v30 + 4) & 2) != 0;
  if ( (*(_DWORD *)(v30 + 4) & 2) == 0 || (v33 = 1, (*(_DWORD *)(PrimaryToken + 200) & 0x2000) == 0) )
    v33 = 0;
  v186 = v33;
  if ( !SepAllowAccessUponLogoff && (*(_DWORD *)(PrimaryToken + 200) & 0x20) == 0 )
  {
    v79 = *(_QWORD *)(PrimaryToken + 216);
    if ( v79 )
    {
      if ( (*(_DWORD *)(v79 + 32) & 0x20) != 0 )
      {
        **(_DWORD **)(a4 + 8) = 0;
        **(_DWORD **)(a4 + 16) = -1073741790;
        goto LABEL_99;
      }
    }
  }
  LOBYTE(v191) = 0;
  if ( !v33 )
  {
    **(_DWORD **)(a4 + 16) = SepMandatoryIntegrityCheck(
                               *(_DWORD **)(v6 + 32),
                               *(_QWORD *)(v30 + 8),
                               v32,
                               PrimaryToken,
                               0,
                               (__int64)&v212);
    if ( **(int **)(a4 + 16) < 0 )
    {
LABEL_99:
      v73 = a2 == 0;
LABEL_100:
      if ( v73 )
        SeUnlockSubjectContext(v8);
      return 0;
    }
    v34 = SepMandatoryToDiscretionary(&v212, *(_DWORD *)(v6 + 16));
    *v35 = v34;
    if ( **(_DWORD **)(a4 + 16) < (int)v22 )
    {
      if ( (*(_DWORD *)(PrimaryToken + 200) & 0x4000) == 0 || HIDWORD(v213) > 0x2000 )
      {
        if ( a2 == (_BYTE)v22 )
        {
          SeUnlockSubjectContext(v8);
          LOBYTE(v22) = 0;
        }
        AuthzBasepSetAccessReasons(v16 & ~(_DWORD)v212, 3145728, 0, *(_QWORD *)(a4 + 24), v22);
        return 0;
      }
      LOBYTE(v191) = 1;
    }
    else if ( (*(_DWORD *)(v6 + 16) & 0x2000000) != 0 && (*(_DWORD *)(PrimaryToken + 200) & 0x4000) != 0 )
    {
      v80 = (unsigned __int8)v191;
      if ( HIDWORD(v213) <= 0x2000 )
        v80 = 1;
      v191 = v80;
    }
  }
  if ( !SepRmEnforceCap )
    goto LABEL_40;
  v81 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 8LL);
  v82 = *(_WORD *)(v81 + 2);
  if ( (v82 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
    goto LABEL_40;
  if ( v82 >= 0 )
  {
    v84 = *(ACL **)(v81 + 24);
  }
  else
  {
    v83 = *(unsigned int *)(v81 + 12);
    if ( !(_DWORD)v83 )
    {
      v203 = v22;
LABEL_40:
      v36 = 0;
      goto LABEL_41;
    }
    v84 = (ACL *)(v81 + v83);
  }
  v203 = (__int64)v84;
  if ( !v84 )
    goto LABEL_40;
  ScopedPolicySid = (void *)SepGetScopedPolicySid(v84);
  v22 = 0LL;
  if ( ScopedPolicySid )
  {
    Cap = SepRmReferenceFindCap(ScopedPolicySid);
    v87 = v189;
    v22 = 0LL;
    if ( Cap < 0 )
      v87 = SepRmDefaultCap;
    v36 = 1;
    v179 = 1;
    v189 = v87;
  }
  else
  {
    v36 = 0;
  }
LABEL_41:
  if ( !(_BYTE)v31 || (*(_DWORD *)(v6 + 16) & 0x2060000) != 0 || v36 )
  {
    IsOwner = SepTokenIsOwner(PrimaryToken);
    v181 = IsOwner;
    v22 = 0LL;
  }
  else
  {
    IsOwner = v22;
    v181 = v22;
  }
  v38 = *(_DWORD *)(v6 + 16);
  if ( !IsOwner || (v38 & 0x2060000) == 0 )
    goto LABEL_44;
  if ( !(_BYTE)v31 )
  {
    v61 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 8LL);
    v62 = *(_WORD *)(v61 + 2);
    if ( (v62 & 4) != 0 )
    {
      if ( v62 >= 0 )
      {
        v64 = *(_QWORD *)(v61 + 32);
LABEL_75:
        v65 = RtlpOwnerAcesPresent(0, v64);
        LODWORD(v22) = 0;
        if ( !v65 )
          goto LABEL_76;
LABEL_44:
        v39 = v179;
        goto LABEL_45;
      }
      v63 = *(unsigned int *)(v61 + 16);
      if ( (_DWORD)v63 )
      {
        v64 = v61 + v63;
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
  v39 = v179;
  v181 &= -(v179 != 0);
LABEL_45:
  v40 = *(_DWORD *)(v6 + 16);
  if ( !v40 && !v39 && ((v202[50] & 0x2000) != 0 || !v38) )
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
  v208 = 0LL;
  v209 = 0LL;
  v43 = *(_QWORD *)(v41 + 8);
  v210 = 0LL;
  v211 = 0;
  v44 = v8->PrimaryToken;
  v178 = *(_QWORD *)(a4 + 24);
  v177 = *(_QWORD *)(a4 + 16);
  v176 = *(_QWORD *)(a4 + 32);
  v175 = *(_QWORD *)(a4 + 8);
  v174 = *(_DWORD *)(v6 + 20);
  v173 = *(_QWORD *)(v6 + 32);
  LODWORD(v208) = v38;
  v187 = SepAccessCheckEx(v43, v40, (_DWORD)v44, (_DWORD)v42, v40, 0LL, 0, v173, v174, a6, v175, v176, v177, v178);
  if ( !SepRmEnforceCap || (v205 = **(_DWORD **)(a4 + 16), v205 < 0) || !v39 )
  {
    v48 = v182;
    goto LABEL_48;
  }
  v88 = *(int **)(a4 + 8);
  v89 = 0LL;
  LOBYTE(v199) = 0;
  v90 = 0;
  v190 = 0;
  v91 = *v88;
  v92 = v91;
  v93 = *(unsigned int ***)(a4 + 32);
  v195 = v91;
  v188 = v91;
  if ( v93 )
  {
    v94 = *v93;
    if ( v94 )
    {
      v95 = *v94;
      if ( *v94 )
      {
        v96 = v94 + 3;
        v46 = (char *)v95;
        do
        {
          if ( (int)v96[1] < 0 )
          {
            v45 = (unsigned int)*(v96 - 1);
            if ( *(_QWORD *)(v96 - 1) == SeSecurityPrivilege )
            {
              v90 |= 0x1000000u;
            }
            else if ( *(_QWORD *)(v96 - 1) == SeTakeOwnershipPrivilege || *(_QWORD *)(v96 - 1) == SeRelabelPrivilege )
            {
              v90 |= 0x80000u;
            }
          }
          v96 += 3;
          --v46;
        }
        while ( v46 );
        v190 = v90;
      }
    }
  }
  v194 = v91;
  LOBYTE(v46) = 1;
  LOBYTE(v45) = 1;
  v97 = v189;
  v98 = SepAdtAuditThisEventWithContext(129LL, v45, v46, v8);
  v183 = v98;
  if ( v98 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * *(unsigned int *)(v189 + 60), 0x41536553u);
    v89 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( !a2 )
        SeUnlockSubjectContext(v8);
      v103 = *(_QWORD *)(v189 + 32);
      if ( v103 )
        SepRmDereferenceCapTable(v103, v100, v101, v102);
      v104 = P;
      **(_DWORD **)(a4 + 8) = 0;
      **(_DWORD **)(a4 + 16) = -1073741801;
      SepFreeResourceInfo(v104);
      return 0;
    }
    memset(PoolWithTag, 0, 8LL * *(unsigned int *)(v189 + 60));
    v98 = v183;
  }
  v105 = 0LL;
  v106 = 0LL;
  v200 = 0;
  if ( !*(_DWORD *)(v189 + 60) )
  {
LABEL_210:
    if ( v98 )
    {
      if ( v92 != v195 )
      {
        v125 = v195 ^ v92;
        v126 = v188 & v125;
        v127 = v195 & v125;
        v192 = *(_DWORD *)(v189 + 60);
        if ( v192 )
        {
          v128 = v89;
          v129 = 0;
          v130 = v192;
          v207 = (unsigned __int64)v89;
          do
          {
            if ( !v126 && !v127 )
              break;
            if ( v128[4] )
            {
              v131 = *(_DWORD *)v128;
              v132 = v127 & (v127 ^ *(_DWORD *)v128);
              if ( v132 )
                AuthzBasepSetAccessReasons(v132, 0x80000000, v129 << 24, (__int64)v221, 0);
              v127 &= ~v132;
              v133 = v126 & v131;
              if ( v133 )
                AuthzBasepSetAccessReasons(v133, 0x80000000, v129 << 24, (__int64)v221, 0);
              v126 &= ~v133;
              AuthzBasepMergeAccessReasons(v220, v221, 4278190080LL);
              v128 = (char *)v207;
              v130 = v192;
            }
            v128 += 8;
            ++v129;
            v207 = (unsigned __int64)v128;
          }
          while ( v129 < v130 );
          v6 = v215;
          v8 = v216;
        }
      }
    }
    if ( v89 )
      ExFreePoolWithTag(v89, 0);
    v48 = v182;
    **(_DWORD **)(a4 + 16) = v205;
    **(_DWORD **)(a4 + 8) &= v195;
    v134 = *(_QWORD *)(a4 + 24);
    if ( **(int **)(a4 + 16) < 0 )
      v48 = 0;
    v182 = v48;
    AuthzBasepMergeAccessReasons(v134, v220, 0LL);
    AuthzBasepMergeAccessReasons(*(_QWORD *)(a4 + 24), v220, 4278190080LL);
LABEL_48:
    if ( v186 || (v45 = *(unsigned int *)(v6 + 16), (v45 & 0x2000000) == 0) )
    {
      if ( (_BYTE)v191 && !BYTE6(v210) )
      {
        v50 = -1073741790;
        if ( !BYTE5(v210) )
        {
          v48 = 0;
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
      v49 = *(_DWORD *)v46;
      if ( !(_BYTE)v191 || !*(_WORD *)((char *)&v210 + 5) )
      {
        SepConstrainByMandatory((__int64)&v212, v45, v46, *(char **)(a4 + 16), &v182, 0);
        AuthzBasepSetAccessReasons(v49 & ~**(_DWORD **)(a4 + 8), 3145728, 0, *(_QWORD *)(a4 + 24), 0);
        v48 = v182;
      }
    }
    v50 = -1073741790;
LABEL_53:
    if ( (*(_DWORD *)(v6 + 16) & 0x2000000) != 0 )
    {
      v51 = *(int **)(a4 + 8);
      v52 = *(int **)(a4 + 16);
      v184 = 0;
      v53 = *v51;
      if ( v196 != -1 )
      {
        v163 = v196 & v53;
        if ( (v196 & v53) != v53 )
        {
          v184 = 1;
          *v51 = v163;
          if ( v163 )
          {
            *v52 = 0;
            v48 = 1;
          }
          else
          {
            *v52 = v50;
            v48 = 0;
          }
        }
      }
      AuthzBasepSetAccessReasons(v53 & ~**(_DWORD **)(a4 + 8), 9437184, 0, *(_QWORD *)(a4 + 24), 0);
      v55 = *(int **)(a4 + 8);
      v56 = *(_DWORD **)(a4 + 16);
      v57 = *(_DWORD *)(v6 + 16);
      v185 = 0;
      v58 = *v55;
      if ( (_DWORD)ClientToken != -1 )
      {
        v164 = ClientToken & v58;
        if ( ((unsigned int)ClientToken & v58) != v58 )
        {
          v185 = 1;
          *v55 = v164;
          if ( (v57 & 0x2000000) != 0 )
          {
            if ( v164 )
            {
              *v56 = 0;
              v48 = 1;
            }
            else
            {
              *v56 = v54;
              v48 = 0;
            }
          }
          else
          {
            *v56 = v54;
            v48 = *v55 != 0;
          }
        }
      }
      AuthzBasepSetAccessReasons(v58 & ~**(_DWORD **)(a4 + 8), 10485760, 0, *(_QWORD *)(a4 + 24), 0);
    }
    v59 = v202;
    if ( v202 )
    {
      if ( v184 || v185 || !HIDWORD(v209) && (v202[50] & 0x4000) != 0 && (**(int **)(a4 + 16) < 0 || HIBYTE(v210)) )
      {
        v165 = *(_QWORD *)(v6 + 8);
        v166 = **(_DWORD **)(a4 + 16) >= 0;
        v167 = *(_DWORD *)(v6 + 16) | *(_DWORD *)(v6 + 20);
        v168 = SepLocateTokenTrustLevel((__int64 *)v8);
        SeLogAccessFailure((__int64)v202, v169, v170, v168, *(_QWORD *)(v165 + 8), v167, v166);
        v59 = v202;
        v15 = 1;
      }
      if ( **(int **)(a4 + 16) < 0
        && !HIDWORD(v209)
        && (v59[50] & 0x4000) != 0
        && SepLpacCausedAccessFailure((__int64)&v208, *(_DWORD *)(v6 + 16)) )
      {
        SepLogLpacAccessFailure(v171, v45, v46);
      }
    }
    if ( v179 )
    {
      v172 = *(_QWORD *)(v189 + 32);
      if ( v172 )
        SepRmDereferenceCapTable(v172, v45, v46, v47);
    }
    if ( !a2 )
      SeUnlockSubjectContext(v8);
    SepFreeResourceInfo(P);
    if ( !v187 || !v48 )
      return 0;
    return v15;
  }
  while ( 1 )
  {
    v107 = *(_QWORD *)(v97 + 8 * v106 + 64);
    v108 = P;
    v207 = v106;
    v206 = v107;
    if ( !*(_QWORD *)(v107 + 24) )
      break;
    if ( !P )
    {
      v109 = AuthzBasepInitializeResourceClaimsFromSacl(v203, (__int64 *)&P);
      v105 = 0LL;
      v108 = P;
      v110 = (unsigned __int8)v199;
      if ( v109 < 0 )
        v110 = 1;
      v199 = v110;
    }
    v111 = (_QWORD *)*((_QWORD *)v202 + 137);
    if ( v111 )
      v112 = (void *)v111[75];
    else
      v112 = 0LL;
    if ( v111 )
      v113 = (void *)v111[73];
    else
      v113 = 0LL;
    if ( v111 )
      v114 = (void *)v111[74];
    else
      v114 = 0LL;
    if ( v111 )
      v105 = (void *)v111[72];
    v115 = AuthzBasepEvaluateAceCondition(
             v202,
             *((void **)v202 + 97),
             v108,
             v105,
             v114,
             v113,
             v112,
             *(_DWORD **)(v206 + 24),
             *(_DWORD *)(v206 + 16),
             1u,
             0,
             &v198);
    v118 = v198;
    v119 = v115;
    if ( v198 == 1 )
      break;
    v105 = 0LL;
    if ( v115 < 0 )
      goto LABEL_252;
    if ( (v202[50] & 0x10) != 0 )
    {
      v120 = (_QWORD *)*((_QWORD *)v202 + 137);
      if ( v120 )
        v121 = (void *)v120[75];
      else
        v121 = 0LL;
      if ( v120 )
        v122 = (void *)v120[73];
      else
        v122 = 0LL;
      if ( v120 )
        v123 = (void *)v120[74];
      else
        v123 = 0LL;
      if ( v120 )
        v105 = (void *)v120[72];
      v124 = AuthzBasepEvaluateAceCondition(
               v202,
               *((void **)v202 + 97),
               v108,
               v105,
               v123,
               v122,
               v121,
               *(_DWORD **)(v206 + 24),
               *(_DWORD *)(v206 + 16),
               1u,
               1u,
               &v198);
      v105 = 0LL;
      v119 = v124;
      if ( v124 < 0 )
      {
LABEL_252:
        if ( !a2 )
          SeUnlockSubjectContext(v8);
        v159 = *(_QWORD *)(v189 + 32);
        if ( v159 )
          SepRmDereferenceCapTable(v159, v116, v117, 0LL);
        **(_DWORD **)(a4 + 8) = 0;
        goto LABEL_258;
      }
      v118 = v198;
    }
    if ( (_BYTE)v199 || v118 == 1 )
      break;
    v92 = v188;
LABEL_208:
    v98 = v183;
LABEL_209:
    v97 = v189;
    v106 = (unsigned int)(v200 + 1);
    v200 = v106;
    if ( (unsigned int)v106 >= *(_DWORD *)(v189 + 60) )
      goto LABEL_210;
  }
  v119 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
  if ( v119 < 0 )
  {
    if ( !a2 )
      SeUnlockSubjectContext(v8);
    v162 = *(_QWORD *)(v189 + 32);
    if ( v162 )
      SepRmDereferenceCapTable(v162, v135, v136, v137);
    **(_DWORD **)(a4 + 8) = 0;
LABEL_258:
    v160 = v108;
    goto LABEL_260;
  }
  v138 = *(_DWORD *)(v6 + 16);
  if ( (*(_DWORD *)(v206 + 48) & 1) != 0 )
  {
    if ( (v138 & 0x2000000) == 0 )
      v138 |= *(_DWORD *)(v6 + 20);
    v139 = 0;
  }
  else
  {
    v139 = *(_DWORD *)(v6 + 20);
  }
  memset(v219, 0, sizeof(v219));
  v141 = SepAccessCheckEx(
           (unsigned int)SecurityDescriptor,
           v140,
           v8->PrimaryToken,
           v8->ClientToken,
           v138 | 0x2000000u,
           (__int64)v219,
           1,
           *(_QWORD *)(v6 + 32),
           v139,
           a6,
           (__int64)&v201,
           0LL,
           (__int64)&v204,
           (__int64)v222);
  v105 = 0LL;
  v142 = v190;
  v143 = v190 | v219[7];
  v187 = v141;
  v144 = (v139 | **(_DWORD **)(a4 + 8)) & v201;
  v201 = v144;
  if ( v181 )
    v143 |= v144 & 0x60000;
  v145 = v194;
  v146 = ~v219[8] & v143;
  v147 = v204;
  v195 &= v144;
  if ( !v195 )
    v147 = -1073741790;
  v205 = v147;
  if ( (v194 & (v194 ^ v146)) != 0 )
  {
    AuthzBasepSetAccessReasons(v194 & (v194 ^ v146), 327680, v200, (__int64)v220, 0);
    v142 = v190;
    v194 = v148 & v145;
    v105 = 0LL;
  }
  v98 = v183;
  if ( !v183 )
  {
    v92 = v188;
    goto LABEL_209;
  }
  v149 = v206;
  if ( !*(_QWORD *)(v206 + 40) )
  {
    v158 = v207;
    v92 = v144 & v188;
    v188 &= v144;
    v89[8 * v207 + 4] = 1;
    *(_DWORD *)&v89[8 * v158] = v144 | v142;
    goto LABEL_208;
  }
  v119 = SepBuildCapeSecurityDescriptor(v218);
  if ( v119 >= 0 )
  {
    v153 = *(_DWORD *)(v6 + 16);
    if ( (*(_DWORD *)(v149 + 48) & 0x100) != 0 )
    {
      if ( (v153 & 0x2000000) == 0 )
        v153 |= *(_DWORD *)(v6 + 20);
      v154 = 0;
    }
    else
    {
      v154 = *(_DWORD *)(v6 + 20);
    }
    memset(v219, 0, sizeof(v219));
    SepAccessCheckEx(
      (unsigned int)v218,
      v155,
      v8->PrimaryToken,
      v8->ClientToken,
      v153,
      0LL,
      0,
      *(_QWORD *)(v6 + 32),
      v154,
      a6,
      (__int64)&v192,
      0LL,
      (__int64)v214,
      (__int64)v222);
    v156 = v207;
    v92 = v192 & v188;
    v157 = v190 | v192;
    v89[8 * v207 + 4] = 1;
    v105 = 0LL;
    *(_DWORD *)&v89[8 * v156] = v157;
    v188 = v92;
    goto LABEL_208;
  }
  if ( !a2 )
    SeUnlockSubjectContext(v8);
  v161 = *(_QWORD *)(v189 + 32);
  if ( v161 )
    SepRmDereferenceCapTable(v161, v150, v151, v152);
  v160 = P;
  **(_DWORD **)(a4 + 8) = 0;
LABEL_260:
  **(_DWORD **)(a4 + 16) = v119;
  SepFreeResourceInfo(v160);
  if ( v89 )
    ExFreePoolWithTag(v89, 0);
  return 0;
}
