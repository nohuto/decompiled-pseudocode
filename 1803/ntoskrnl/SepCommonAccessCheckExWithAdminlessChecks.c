/*
 * XREFs of SepCommonAccessCheckExWithAdminlessChecks @ 0x140148E84
 * Callers:
 *     SepCommonAccessCheckEx @ 0x140148DCC (SepCommonAccessCheckEx.c)
 * Callees:
 *     AuthzBasepEvaluateAceCondition @ 0x140044F30 (AuthzBasepEvaluateAceCondition.c)
 *     SepLocateTokenTrustLevel @ 0x14005C9F4 (SepLocateTokenTrustLevel.c)
 *     SepTrustLevelCheck @ 0x14005E4CC (SepTrustLevelCheck.c)
 *     SepFreeResourceInfo @ 0x140062FE4 (SepFreeResourceInfo.c)
 *     SepTokenIsOwner @ 0x140063010 (SepTokenIsOwner.c)
 *     SepMandatoryToDiscretionary @ 0x1400630B4 (SepMandatoryToDiscretionary.c)
 *     RtlpOwnerAcesPresent @ 0x1400AAD70 (RtlpOwnerAcesPresent.c)
 *     AuthzBasepSetAccessReasons @ 0x1400B1500 (AuthzBasepSetAccessReasons.c)
 *     SeLogAccessFailure @ 0x1400B1D20 (SeLogAccessFailure.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400BBECC (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepConstrainByMandatory @ 0x1400BF03C (SepConstrainByMandatory.c)
 *     SepLpacCausedAccessFailure @ 0x1400C9E48 (SepLpacCausedAccessFailure.c)
 *     SepMandatoryIntegrityCheck @ 0x1401018A0 (SepMandatoryIntegrityCheck.c)
 *     SepFilterCheck @ 0x140101D80 (SepFilterCheck.c)
 *     SepAccessCheckEx @ 0x1401495A4 (SepAccessCheckEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SepBuildCapeSecurityDescriptor @ 0x14029FA3C (SepBuildCapeSecurityDescriptor.c)
 *     SepGetScopedPolicySid @ 0x14029FB94 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x14029FDD4 (SepLogLpacAccessFailure.c)
 *     SepRmDereferenceCapTable @ 0x14029FF18 (SepRmDereferenceCapTable.c)
 *     SepRmReferenceFindCap @ 0x1402A1BE0 (SepRmReferenceFindCap.c)
 *     AuthzBasepMergeAccessReasons @ 0x1402C3980 (AuthzBasepMergeAccessReasons.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     SepAdtAuditThisEventWithContext @ 0x1404D5AA0 (SepAdtAuditThisEventWithContext.c)
 *     SeLockSubjectContext @ 0x1405A4DC0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1405A5520 (SeUnlockSubjectContext.c)
 */

char __fastcall SepCommonAccessCheckExWithAdminlessChecks(
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        char a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        char a6,
        char a7,
        char a8)
{
  _DWORD *v12; // rcx
  _DWORD *v13; // rdx
  _DWORD *v14; // rax
  _DWORD *v15; // rax
  _QWORD *v16; // rax
  char v17; // si
  unsigned int v18; // r13d
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // eax
  int v22; // eax
  _DWORD *v23; // r8
  __int64 v24; // r9
  int *v25; // rdx
  int v26; // ebx
  int *v27; // rax
  _QWORD *ClientToken; // rdi
  __int64 v29; // rcx
  int v30; // eax
  int *v31; // rdx
  __int64 v32; // rdx
  char v33; // bl
  int v34; // eax
  char v35; // cl
  int v36; // eax
  char v37; // al
  char IsOwner; // al
  int v39; // ebx
  unsigned int v40; // edi
  char v41; // al
  _QWORD *v42; // r13
  __int64 v43; // rcx
  PACCESS_TOKEN v44; // r8
  __int64 v45; // rcx
  PACCESS_TOKEN v46; // r9
  char v47; // al
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rbx
  PVOID v52; // rbx
  bool v53; // r13
  int v54; // edi
  int *v55; // r8
  _DWORD *v56; // rcx
  int v57; // edx
  int *v58; // rdx
  _DWORD *v59; // r9
  int v60; // ecx
  int v61; // r8d
  _DWORD *v62; // rcx
  __int64 v64; // rcx
  __int16 v65; // ax
  __int64 v66; // rax
  __int64 v67; // rdx
  char v68; // al
  int v69; // ecx
  int v70; // edx
  int v71; // eax
  int v72; // edx
  int v73; // r13d
  int v74; // eax
  int *v75; // rcx
  int v76; // ecx
  _QWORD *v77; // rax
  bool v78; // zf
  int v79; // esi
  __int64 v80; // rdi
  ULONGLONG TokenTrustLevel; // rax
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // rax
  int v85; // ecx
  __int64 v86; // rcx
  __int64 v87; // rax
  ACL *v88; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  bool v91; // sf
  int *v92; // rcx
  int *v93; // rdi
  int v94; // r9d
  int v95; // r10d
  unsigned int **v96; // rcx
  unsigned int *v97; // rcx
  unsigned int v98; // eax
  _DWORD *v99; // rcx
  char v100; // r9
  int *PoolWithTag; // rax
  __int64 v102; // rdx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rcx
  PVOID v106; // rcx
  unsigned int v107; // ecx
  unsigned int v108; // edx
  __int64 v109; // rax
  int v110; // eax
  int v111; // ecx
  _QWORD *v112; // rax
  __int64 v113; // r8
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r9
  int v117; // eax
  __int64 v118; // rdx
  __int64 v119; // r8
  __int64 v120; // r9
  int v121; // ecx
  _QWORD *v122; // rax
  __int64 v123; // r8
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r9
  __int64 v127; // rdx
  __int64 v128; // r8
  __int64 v129; // r9
  int v130; // ebx
  int v131; // edx
  char v132; // al
  int v133; // r8d
  int v134; // ebx
  int v135; // edx
  int v136; // ebx
  int v137; // eax
  int v138; // ebx
  __int64 v139; // r9
  int v140; // ebx
  int v141; // edx
  unsigned __int64 v142; // rcx
  int v143; // r8d
  int v144; // eax
  int v145; // r13d
  int v146; // eax
  unsigned int v147; // edx
  unsigned int v148; // r8d
  int *v149; // rcx
  int v150; // ecx
  int v151; // r8d
  int v152; // ebx
  int v153; // ebx
  __int64 v154; // rcx
  unsigned __int64 v155; // rcx
  __int64 v156; // rcx
  int v157; // ecx
  PVOID v158; // rcx
  __int64 v159; // rcx
  __int64 v160; // rcx
  int v161; // ecx
  int v162; // eax
  int v163; // eax
  int v164; // edi
  __int64 v165; // rbx
  char v166; // si
  ULONGLONG v167; // rax
  __int64 v168; // rdx
  __int64 v169; // r8
  __int64 v170; // rcx
  __int64 v171; // rcx
  __int64 v172; // [rsp+28h] [rbp-108h]
  int v173; // [rsp+30h] [rbp-100h]
  __int64 v174; // [rsp+38h] [rbp-F8h]
  int v175; // [rsp+40h] [rbp-F0h]
  __int64 v176; // [rsp+50h] [rbp-E0h]
  __int64 v177; // [rsp+58h] [rbp-D8h]
  __int64 v178; // [rsp+60h] [rbp-D0h]
  __int64 v179; // [rsp+68h] [rbp-C8h]
  char v180; // [rsp+B0h] [rbp-80h]
  char v182; // [rsp+B2h] [rbp-7Eh]
  bool v183; // [rsp+B3h] [rbp-7Dh] BYREF
  char v184; // [rsp+B4h] [rbp-7Ch]
  char v185; // [rsp+B5h] [rbp-7Bh]
  int v186; // [rsp+B8h] [rbp-78h]
  char v187; // [rsp+BCh] [rbp-74h]
  char v188; // [rsp+BDh] [rbp-73h]
  char v189; // [rsp+BEh] [rbp-72h]
  int v190; // [rsp+C0h] [rbp-70h]
  PVOID P; // [rsp+C8h] [rbp-68h] BYREF
  int v192; // [rsp+D0h] [rbp-60h]
  int v193; // [rsp+D4h] [rbp-5Ch]
  int v194; // [rsp+D8h] [rbp-58h]
  unsigned int v195; // [rsp+DCh] [rbp-54h] BYREF
  __int64 v196; // [rsp+E0h] [rbp-50h]
  int v197; // [rsp+E8h] [rbp-48h]
  int v198; // [rsp+ECh] [rbp-44h] BYREF
  int v199; // [rsp+F0h] [rbp-40h] BYREF
  int v200; // [rsp+F4h] [rbp-3Ch]
  _QWORD *PrimaryToken; // [rsp+F8h] [rbp-38h]
  PVOID v202; // [rsp+100h] [rbp-30h]
  int v203; // [rsp+10Ch] [rbp-24h] BYREF
  int v204; // [rsp+110h] [rbp-20h]
  int v205; // [rsp+114h] [rbp-1Ch] BYREF
  int v206; // [rsp+118h] [rbp-18h]
  __int64 v207; // [rsp+120h] [rbp-10h]
  __int64 v208; // [rsp+128h] [rbp-8h]
  int v209; // [rsp+130h] [rbp+0h] BYREF
  unsigned __int64 v210; // [rsp+138h] [rbp+8h]
  __int64 v211; // [rsp+140h] [rbp+10h] BYREF
  __int64 v212; // [rsp+148h] [rbp+18h]
  __int64 v213; // [rsp+150h] [rbp+20h]
  int v214; // [rsp+158h] [rbp+28h]
  __int64 v215; // [rsp+160h] [rbp+30h] BYREF
  __int64 v216; // [rsp+168h] [rbp+38h]
  char v217[8]; // [rsp+170h] [rbp+40h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+178h] [rbp+48h] BYREF
  _BYTE v219[40]; // [rsp+1A0h] [rbp+70h] BYREF
  _DWORD v220[14]; // [rsp+1C8h] [rbp+98h] BYREF
  _BYTE v221[128]; // [rsp+200h] [rbp+D0h] BYREF
  _BYTE v222[128]; // [rsp+280h] [rbp+150h] BYREF
  _BYTE v223[128]; // [rsp+300h] [rbp+1D0h] BYREF

  v215 = 0LL;
  v216 = 0LL;
  v208 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(v219, 0, sizeof(v219));
  v196 = 0LL;
  v180 = 0;
  P = 0LL;
  memset(v221, 0, sizeof(v221));
  memset(v222, 0, sizeof(v222));
  memset(v223, 0, sizeof(v223));
  v187 = 0;
  v188 = 0;
  v198 = -1;
  v209 = -1;
  if ( !a4 )
    return 0;
  if ( *(_DWORD *)a4 != 40 )
    return 0;
  v12 = *(_DWORD **)(a4 + 16);
  if ( !v12 )
    return 0;
  if ( !SubjectContext
    || !a3
    || *(_DWORD *)a3 != 56
    || (v13 = *(_DWORD **)(a4 + 8)) == 0LL
    || (v14 = *(_DWORD **)(a3 + 8)) != 0LL && (*v14 != 16 || (v14[1] & 0xFFFFFFF8) != 0)
    || a5 && *a5 != 96 )
  {
    *v12 = -1073741811;
    return 0;
  }
  *v13 = 0;
  v15 = *(_DWORD **)(a4 + 16);
  v205 = 0;
  v199 = -1073741790;
  *v15 = -1073741790;
  v16 = *(_QWORD **)(a4 + 32);
  if ( v16 )
    *v16 = 0LL;
  v17 = 1;
  v18 = *(_DWORD *)(a3 + 16) & ~*(_DWORD *)(a3 + 20) & 0xFDFFFFFF;
  AuthzBasepSetAccessReasons(v18, 0, 0, *(_QWORD *)(a4 + 24), 1);
  if ( !a6 )
  {
    v74 = *(_DWORD *)(a3 + 16);
    v75 = *(int **)(a4 + 8);
    if ( (v74 & 0x2000000) != 0 )
    {
      *v75 = *(_DWORD *)(*(_QWORD *)(a3 + 32) + 12LL);
      **(_DWORD **)(a4 + 8) |= *(_DWORD *)(a3 + 16) & 0xFDFFFFFF;
      **(_DWORD **)(a4 + 8) |= *(_DWORD *)(a3 + 20);
    }
    else
    {
      *v75 = *(_DWORD *)(a3 + 20) | v74;
    }
    **(_DWORD **)(a4 + 16) = 0;
    return v17;
  }
  v20 = *(_QWORD *)(a3 + 8);
  if ( !v20 || !*(_QWORD *)(v20 + 8) )
  {
    **(_DWORD **)(a4 + 16) = -1073741790;
    return 0;
  }
  if ( SubjectContext->ClientToken && SubjectContext->ImpersonationLevel < SecurityImpersonation )
  {
    **(_DWORD **)(a4 + 16) = -1073741659;
    return 0;
  }
  if ( !*(_DWORD *)(a3 + 16) )
  {
    v76 = *(_DWORD *)(a3 + 20);
    if ( !v76 )
    {
      **(_DWORD **)(a4 + 16) = -1073741790;
      return 0;
    }
    **(_DWORD **)(a4 + 8) = v76;
    **(_DWORD **)(a4 + 16) = 0;
    v77 = *(_QWORD **)(a4 + 32);
    if ( v77 )
      *v77 = 0LL;
    return v17;
  }
  v21 = *(_DWORD *)(a4 + 4);
  if ( v21 != 1 && v21 != *(_DWORD *)(a3 + 40) )
  {
    **(_DWORD **)(a4 + 16) = -1073741811;
    return 0;
  }
  if ( !a2 )
  {
    SeLockSubjectContext(SubjectContext);
    v20 = *(_QWORD *)(a3 + 8);
  }
  v22 = SepTrustLevelCheck(v19, *(_QWORD *)(v20 + 8), SubjectContext, 0LL, 0LL, 0, &v198);
  v24 = 0LL;
  **(_DWORD **)(a4 + 16) = v22;
  v25 = *(int **)(a4 + 16);
  if ( *v25 < 0 )
  {
    v78 = a2 == 0;
    goto LABEL_101;
  }
  v26 = v198;
  *v25 = (*(_DWORD *)(a3 + 16) & 0xFDFFFFFF) != (v198 & *(_DWORD *)(a3 + 16) & 0xFDFFFFFF) ? 0xC0000022 : 0;
  v27 = *(int **)(a4 + 16);
  ClientToken = SubjectContext->ClientToken;
  PrimaryToken = SubjectContext->ClientToken;
  if ( *v27 < 0 )
  {
    if ( !ClientToken )
      PrimaryToken = SubjectContext->PrimaryToken;
    v79 = *(_DWORD *)(a3 + 16) | *(_DWORD *)(a3 + 20);
    v80 = *(_QWORD *)(a3 + 8);
    TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)SubjectContext);
    SeLogAccessFailure((__int64)PrimaryToken, v82, v83, TokenTrustLevel, *(_QWORD *)(v80 + 8), v79, 0);
    if ( !a2 )
      SeUnlockSubjectContext(SubjectContext);
    AuthzBasepSetAccessReasons(v18 & ~v26, 9437184, 0, *(_QWORD *)(a4 + 24), 0);
    return 0;
  }
  if ( !ClientToken )
  {
    ClientToken = SubjectContext->PrimaryToken;
    PrimaryToken = ClientToken;
  }
  v29 = *(_QWORD *)(a3 + 8);
  if ( (*(_DWORD *)(v29 + 4) & 4) == 0 )
  {
    v30 = SepFilterCheck(*(_QWORD *)(v29 + 8), (__int64)&P, (__int64)ClientToken, 0, &v209);
    v24 = 0LL;
    **(_DWORD **)(a4 + 16) = v30;
    v31 = *(int **)(a4 + 16);
    if ( *v31 < 0 )
      goto LABEL_100;
    *v31 = (*(_DWORD *)(a3 + 16) & 0xFDFFFFFF) != (v209 & *(_DWORD *)(a3 + 16) & 0xFDFFFFFF) ? 0xC0000022 : 0;
    if ( **(int **)(a4 + 16) < 0 )
    {
      SeLogAccessFailure(
        (__int64)ClientToken,
        (unsigned int)(*(_DWORD *)(a3 + 16) | *(_DWORD *)(a3 + 20)),
        (__int64)v23,
        0LL,
        *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL),
        *(_BYTE *)(a3 + 16) | *(_BYTE *)(a3 + 20),
        0);
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContext);
      AuthzBasepSetAccessReasons(v209 & v18, 10485760, 0, *(_QWORD *)(a4 + 24), 0);
      return 0;
    }
  }
  v32 = *(_QWORD *)(a3 + 8);
  v33 = *(_DWORD *)(v32 + 4) & 1;
  v78 = (*(_DWORD *)(v32 + 4) & 2) == 0;
  v34 = *(_DWORD *)(v32 + 4) & 2;
  v185 = v33;
  LOBYTE(v23) = !v78;
  if ( !v34 || (v35 = 1, (ClientToken[25] & 0x2000) == 0) )
    v35 = 0;
  v189 = v35;
  if ( !SepAllowAccessUponLogoff && (ClientToken[25] & 0x20) == 0 )
  {
    v84 = ClientToken[27];
    if ( v84 )
    {
      if ( (*(_DWORD *)(v84 + 32) & 0x20) != 0 )
      {
        **(_DWORD **)(a4 + 8) = 0;
        **(_DWORD **)(a4 + 16) = -1073741790;
        goto LABEL_100;
      }
    }
  }
  LOBYTE(v194) = 0;
  if ( !v35 )
  {
    **(_DWORD **)(a4 + 16) = SepMandatoryIntegrityCheck(
                               *(int **)(a3 + 32),
                               *(_QWORD *)(v32 + 8),
                               (char)v23,
                               (__int64)ClientToken,
                               0,
                               a8,
                               (__int64)&v215);
    if ( **(int **)(a4 + 16) >= 0 )
    {
      v36 = SepMandatoryToDiscretionary(&v215, *(_DWORD *)(a3 + 16));
      *v23 = v36;
      if ( **(_DWORD **)(a4 + 16) < (int)v24 )
      {
        if ( (ClientToken[25] & 0x4000) == 0 || HIDWORD(v216) > 0x2000 )
        {
          if ( a2 == (_BYTE)v24 )
          {
            SeUnlockSubjectContext(SubjectContext);
            LOBYTE(v24) = 0;
          }
          AuthzBasepSetAccessReasons(v18 & ~(_DWORD)v215, 3145728, 0, *(_QWORD *)(a4 + 24), v24);
          return 0;
        }
        LOBYTE(v194) = 1;
      }
      else if ( (*(_DWORD *)(a3 + 16) & 0x2000000) != 0 && (ClientToken[25] & 0x4000) != 0 )
      {
        v85 = (unsigned __int8)v194;
        if ( HIDWORD(v216) <= 0x2000 )
          v85 = 1;
        v194 = v85;
      }
      goto LABEL_39;
    }
LABEL_100:
    v78 = a2 == 0;
LABEL_101:
    if ( v78 )
      SeUnlockSubjectContext(SubjectContext);
    return 0;
  }
LABEL_39:
  if ( !SepRmEnforceCap )
    goto LABEL_40;
  v86 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL);
  LODWORD(v32) = *(unsigned __int16 *)(v86 + 2);
  if ( (v32 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
    goto LABEL_40;
  if ( (v32 & 0x8000u) == 0LL )
  {
    v88 = *(ACL **)(v86 + 24);
  }
  else
  {
    v87 = *(unsigned int *)(v86 + 12);
    if ( !(_DWORD)v87 )
    {
      v208 = v24;
LABEL_40:
      v37 = 0;
      goto LABEL_41;
    }
    v88 = (ACL *)(v86 + v87);
  }
  v208 = (__int64)v88;
  if ( !v88 )
    goto LABEL_40;
  ScopedPolicySid = (void *)SepGetScopedPolicySid(v88);
  v24 = 0LL;
  if ( ScopedPolicySid )
  {
    Cap = SepRmReferenceFindCap(ScopedPolicySid);
    v32 = v196;
    v24 = 0LL;
    v91 = Cap < 0;
    v37 = 1;
    v180 = 1;
    if ( v91 )
      v32 = SepRmDefaultCap;
    v196 = v32;
  }
  else
  {
    v37 = 0;
  }
LABEL_41:
  if ( !v33 || (v39 = *(_DWORD *)(a3 + 16), (v39 & 0x2060000) != 0) || v37 )
  {
    IsOwner = SepTokenIsOwner((__int64)ClientToken, *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL), (__int64)v23, a8);
    v39 = *(_DWORD *)(a3 + 16);
    v24 = 0LL;
  }
  else
  {
    IsOwner = v24;
  }
  v182 = IsOwner;
  v40 = v39;
  if ( !IsOwner || (v39 & 0x2060000) == 0 )
    goto LABEL_44;
  if ( v185 )
    goto LABEL_76;
  v64 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL);
  v65 = *(_WORD *)(v64 + 2);
  if ( (v65 & 4) == 0 )
  {
LABEL_142:
    v67 = v24;
    goto LABEL_75;
  }
  if ( v65 < 0 )
  {
    v66 = *(unsigned int *)(v64 + 16);
    if ( (_DWORD)v66 )
    {
      v67 = v64 + v66;
      goto LABEL_75;
    }
    goto LABEL_142;
  }
  v67 = *(_QWORD *)(v64 + 32);
LABEL_75:
  v68 = RtlpOwnerAcesPresent(0, v67);
  v24 = 0LL;
  if ( v68 )
  {
LABEL_44:
    v41 = v180;
    goto LABEL_45;
  }
LABEL_76:
  v69 = 393216;
  v70 = *(_DWORD *)(a3 + 16);
  v71 = v70 & 0x60000;
  v39 = 393216;
  v72 = v70 & 0x2000000;
  if ( !v72 )
    v39 = v71;
  v73 = v18 & 0x60000;
  *(_DWORD *)(a3 + 20) |= v39;
  if ( !v72 )
    v69 = v73;
  AuthzBasepSetAccessReasons(v69, 0x400000, 0, *(_QWORD *)(a4 + 24), v24);
  v24 = 0LL;
  v41 = v180;
  v40 = *(_DWORD *)(a3 + 16) & 0xFFF9FFFF;
  *(_DWORD *)(a3 + 16) = v40;
  if ( !v180 )
  {
    LOBYTE(v32) = 0;
    v182 = 0;
    goto LABEL_46;
  }
LABEL_45:
  LOBYTE(v32) = v182;
LABEL_46:
  v42 = PrimaryToken;
  if ( !v40 )
  {
    v40 = v24;
    if ( !v41 && ((PrimaryToken[25] & 0x2000) != 0 || !v39) )
    {
      if ( a2 == (_BYTE)v24 )
      {
        SeUnlockSubjectContext(SubjectContext);
        LODWORD(v24) = 0;
      }
      **(_DWORD **)(a4 + 8) = *(_DWORD *)(a3 + 20);
      **(_DWORD **)(a4 + 16) = v24;
      return v17;
    }
  }
  v43 = *(_QWORD *)(a3 + 8);
  v44 = SubjectContext->PrimaryToken;
  v211 = 0LL;
  v212 = 0LL;
  v45 = *(_QWORD *)(v43 + 8);
  v213 = 0LL;
  v214 = 0;
  v179 = *(_QWORD *)(a4 + 24);
  v178 = *(_QWORD *)(a4 + 16);
  v177 = *(_QWORD *)(a4 + 32);
  v176 = *(_QWORD *)(a4 + 8);
  v175 = *(_DWORD *)(a3 + 20);
  v174 = *(_QWORD *)(a3 + 32);
  v173 = v24;
  v172 = v24;
  v46 = SubjectContext->ClientToken;
  LODWORD(v211) = v39;
  v47 = SepAccessCheckEx(v45, v32, (_DWORD)v44, (_DWORD)v46, v40, v172, v173, v174, v175, a6, v176, v177, v178, v179);
  v51 = v196;
  v207 = v196;
  v185 = v47;
  if ( !SepRmEnforceCap || (v200 = **(_DWORD **)(a4 + 16), v200 < 0) || !v180 )
  {
    v52 = P;
    v53 = v183;
    v202 = P;
LABEL_49:
    if ( v189 || (v48 = *(unsigned int *)(a3 + 16), (v48 & 0x2000000) == 0) )
    {
      if ( (_BYTE)v194 && !*(_WORD *)((char *)&v213 + 5) )
      {
        v53 = 0;
        **(_DWORD **)(a4 + 16) = -1073741790;
        **(_DWORD **)(a4 + 8) = 0;
        AuthzBasepSetAccessReasons(~**(_DWORD **)(a4 + 8), 3145728, 0, *(_QWORD *)(a4 + 24), 0);
      }
    }
    else
    {
      v49 = *(_QWORD *)(a4 + 8);
      v54 = *(_DWORD *)v49;
      if ( !(_BYTE)v194 || !*(_WORD *)((char *)&v213 + 5) )
      {
        SepConstrainByMandatory((__int64)&v215, v48, (char *)v49, *(char **)(a4 + 16), &v183, 0);
        AuthzBasepSetAccessReasons(v54 & ~**(_DWORD **)(a4 + 8), 3145728, 0, *(_QWORD *)(a4 + 24), 0);
        v53 = v183;
      }
    }
    if ( (*(_DWORD *)(a3 + 16) & 0x2000000) != 0 )
    {
      v55 = *(int **)(a4 + 8);
      v56 = *(_DWORD **)(a4 + 16);
      v187 = 0;
      v57 = *v55;
      if ( v198 != -1 )
      {
        v162 = v198 & v57;
        if ( (v198 & v57) != v57 )
        {
          v187 = 1;
          *v55 = v162;
          if ( v162 )
          {
            *v56 = 0;
            v53 = 1;
          }
          else
          {
            v53 = 0;
            *v56 = -1073741790;
          }
        }
      }
      AuthzBasepSetAccessReasons(v57 & ~**(_DWORD **)(a4 + 8), 9437184, 0, *(_QWORD *)(a4 + 24), 0);
      v58 = *(int **)(a4 + 8);
      v59 = *(_DWORD **)(a4 + 16);
      v60 = *(_DWORD *)(a3 + 16);
      v61 = *v58;
      v188 = 0;
      if ( v209 != -1 )
      {
        v163 = v209 & v61;
        if ( (v209 & v61) != v61 )
        {
          v188 = 1;
          *v58 = v163;
          if ( (v60 & 0x2000000) != 0 )
          {
            v53 = v163 != 0;
            *v59 = v163 == 0 ? 0xC0000022 : 0;
          }
          else
          {
            *v59 = -1073741790;
            v53 = *v58 != 0;
          }
        }
      }
      AuthzBasepSetAccessReasons(v61 & ~**(_DWORD **)(a4 + 8), 10485760, 0, *(_QWORD *)(a4 + 24), 0);
    }
    v62 = PrimaryToken;
    if ( PrimaryToken )
    {
      if ( v187
        || v188
        || !HIDWORD(v212) && (PrimaryToken[25] & 0x4000) != 0 && (**(int **)(a4 + 16) < 0 || HIBYTE(v213)) )
      {
        v164 = *(_DWORD *)(a3 + 16) | *(_DWORD *)(a3 + 20);
        v165 = *(_QWORD *)(a3 + 8);
        v166 = **(_DWORD **)(a4 + 16) >= 0;
        v167 = SepLocateTokenTrustLevel((__int64 *)SubjectContext);
        SeLogAccessFailure((__int64)PrimaryToken, v168, v169, v167, *(_QWORD *)(v165 + 8), v164, v166);
        v62 = PrimaryToken;
        v52 = v202;
        v17 = 1;
      }
      if ( **(int **)(a4 + 16) < 0
        && !HIDWORD(v212)
        && (v62[50] & 0x4000) != 0
        && SepLpacCausedAccessFailure((__int64)&v211, *(_DWORD *)(a3 + 16)) )
      {
        SepLogLpacAccessFailure(v170, v48, v49);
      }
    }
    if ( v180 )
    {
      v171 = *(_QWORD *)(v207 + 32);
      if ( v171 )
        SepRmDereferenceCapTable(v171, v48, v49, v50);
    }
    if ( !a2 )
      SeUnlockSubjectContext(SubjectContext);
    SepFreeResourceInfo(v52, v48, v49);
    if ( !v185 || !v53 )
      return 0;
    return v17;
  }
  v92 = *(int **)(a4 + 8);
  v93 = 0LL;
  LOBYTE(v204) = 0;
  v94 = 0;
  v192 = 0;
  v95 = *v92;
  v96 = *(unsigned int ***)(a4 + 32);
  v197 = v95;
  v193 = v95;
  if ( v96 )
  {
    v97 = *v96;
    if ( v97 )
    {
      v98 = *v97;
      if ( *v97 )
      {
        v99 = v97 + 3;
        v49 = v98;
        do
        {
          if ( (int)v99[1] < 0 )
          {
            v48 = (unsigned int)*(v99 - 1);
            if ( *(_QWORD *)(v99 - 1) == SeSecurityPrivilege )
            {
              v94 |= 0x1000000u;
            }
            else if ( *(_QWORD *)(v99 - 1) == SeTakeOwnershipPrivilege || *(_QWORD *)(v99 - 1) == SeRelabelPrivilege )
            {
              v94 |= 0x80000u;
            }
          }
          v99 += 3;
          --v49;
        }
        while ( v49 );
        v192 = v94;
      }
    }
  }
  v206 = v95;
  LOBYTE(v49) = 1;
  LOBYTE(v48) = 1;
  v184 = SepAdtAuditThisEventWithContext(129LL, v48, v49, SubjectContext);
  v100 = v184;
  if ( v184 )
  {
    PoolWithTag = (int *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * *(unsigned int *)(v51 + 60), 0x41536553u);
    v93 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContext);
      v105 = *(_QWORD *)(v51 + 32);
      if ( v105 )
        SepRmDereferenceCapTable(v105, v102, v103, v104);
      v106 = P;
      **(_DWORD **)(a4 + 8) = 0;
      **(_DWORD **)(a4 + 16) = -1073741801;
      SepFreeResourceInfo(v106, v102, v103);
      return 0;
    }
    memset(PoolWithTag, 0, 8LL * *(unsigned int *)(v51 + 60));
    v100 = v184;
  }
  v107 = *(_DWORD *)(v51 + 60);
  v108 = 0;
  v52 = P;
  v202 = P;
  v190 = 0;
  v186 = v107;
  if ( !v107 )
  {
LABEL_234:
    if ( v100 )
    {
      if ( v193 != v197 )
      {
        v145 = v193 & (v197 ^ v193);
        v146 = v197 & (v197 ^ v193);
        v147 = 0;
        v190 = v146;
        v195 = 0;
        if ( v107 )
        {
          v148 = v186;
          v149 = v93;
          v210 = (unsigned __int64)v93;
          do
          {
            if ( !v145 && !v146 )
              break;
            if ( *((_BYTE *)v149 + 4) )
            {
              v150 = *v149;
              v199 = v150;
              v151 = v147 << 24;
              v152 = v146 & (v150 ^ v146);
              if ( v152 )
              {
                AuthzBasepSetAccessReasons(v152, 0x80000000, v151, (__int64)v222, 0);
                v146 = v190;
                v150 = v199;
              }
              v190 = ~v152 & v146;
              v153 = v150 & v145;
              if ( (v150 & v145) != 0 )
                AuthzBasepSetAccessReasons(v153, 0x80000000, v151, (__int64)v222, 0);
              v145 &= ~v153;
              AuthzBasepMergeAccessReasons(v221, v222, 4278190080LL);
              v146 = v190;
              v149 = (int *)v210;
              v147 = v195;
              v148 = v186;
            }
            ++v147;
            v149 += 2;
            v195 = v147;
            v210 = (unsigned __int64)v149;
          }
          while ( v147 < v148 );
          v52 = v202;
        }
      }
    }
    if ( v93 )
      ExFreePoolWithTag(v93, 0);
    v53 = v183;
    **(_DWORD **)(a4 + 16) = v200;
    **(_DWORD **)(a4 + 8) &= v197;
    v154 = *(_QWORD *)(a4 + 24);
    if ( **(int **)(a4 + 16) < 0 )
      v53 = 0;
    v183 = v53;
    AuthzBasepMergeAccessReasons(v154, v221, 0LL);
    AuthzBasepMergeAccessReasons(*(_QWORD *)(a4 + 24), v221, 4278190080LL);
    goto LABEL_49;
  }
  v109 = v207;
  while ( 1 )
  {
    v210 = v108;
    v196 = *(_QWORD *)(v109 + 8LL * v108 + 64);
    if ( *(_QWORD *)(v196 + 24) )
    {
      if ( !v52 )
      {
        v110 = AuthzBasepInitializeResourceClaimsFromSacl(v208, (__int64 *)&P);
        v52 = P;
        v111 = (unsigned __int8)v204;
        if ( v110 < 0 )
          v111 = 1;
        v202 = P;
        v204 = v111;
      }
      v112 = (_QWORD *)v42[137];
      v113 = v112 ? v112[75] : 0LL;
      v114 = v112 ? v112[73] : 0LL;
      v115 = v112 ? v112[74] : 0LL;
      v116 = v112 ? v112[72] : 0LL;
      v117 = AuthzBasepEvaluateAceCondition(
               (__int64)v42,
               v42[97],
               (__int64)v52,
               v116,
               v115,
               v114,
               v113,
               *(_DWORD **)(v196 + 24),
               *(_DWORD *)(v196 + 16),
               1u,
               0,
               &v203);
      v121 = v203;
      v186 = v117;
      if ( v203 != 1 )
        break;
    }
LABEL_211:
    v200 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
    if ( v200 < 0 )
    {
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContext);
      v160 = *(_QWORD *)(v207 + 32);
      if ( v160 )
        SepRmDereferenceCapTable(v160, v127, v128, v129);
      v161 = v200;
      **(_DWORD **)(a4 + 8) = 0;
      **(_DWORD **)(a4 + 16) = v161;
      v158 = v52;
      goto LABEL_261;
    }
    v130 = *(_DWORD *)(a3 + 16);
    if ( (*(_DWORD *)(v196 + 48) & 1) != 0 )
    {
      if ( (v130 & 0x2000000) == 0 )
        v130 |= *(_DWORD *)(a3 + 20);
      v186 = 0;
    }
    else
    {
      v186 = *(_DWORD *)(a3 + 20);
    }
    memset(v220, 0, 0x30uLL);
    v132 = SepAccessCheckEx(
             (unsigned int)SecurityDescriptor,
             v131,
             SubjectContext->PrimaryToken,
             SubjectContext->ClientToken,
             v130 | 0x2000000u,
             (__int64)v220,
             1,
             *(_QWORD *)(a3 + 32),
             v186,
             a6,
             (__int64)&v205,
             0LL,
             (__int64)&v199,
             (__int64)v223);
    v133 = v192;
    v134 = v192 | v220[7];
    v185 = v132;
    v135 = v205 & (v186 | **(_DWORD **)(a4 + 8));
    v186 = v135;
    v205 = v135;
    if ( v182 )
      v134 |= v135 & 0x60000;
    v136 = ~v220[8] & v134;
    v137 = v199;
    v197 &= v135;
    if ( !v197 )
      v137 = -1073741790;
    v200 = v137;
    if ( (v206 & (v206 ^ v136)) != 0 )
    {
      AuthzBasepSetAccessReasons(v206 & (v206 ^ v136), 327680, v190, (__int64)v221, 0);
      v206 &= v136;
      v135 = v186;
      v133 = v192;
    }
    v100 = v184;
    if ( !v184 )
      goto LABEL_254;
    if ( !*(_QWORD *)(v196 + 40) )
    {
      v155 = v210;
      v193 &= v135;
      LOBYTE(v93[2 * v210 + 1]) = 1;
      v93[2 * v155] = v133 | v135;
LABEL_254:
      v52 = P;
      v202 = P;
      goto LABEL_233;
    }
    v138 = SepBuildCapeSecurityDescriptor(v219);
    if ( v138 < 0 )
    {
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContext);
      v159 = *(_QWORD *)(v207 + 32);
      if ( v159 )
        SepRmDereferenceCapTable(v159, v127, v128, v139);
      v158 = P;
      **(_DWORD **)(a4 + 8) = 0;
      **(_DWORD **)(a4 + 16) = v138;
LABEL_261:
      SepFreeResourceInfo(v158, v127, v128);
      goto LABEL_262;
    }
    v140 = *(_DWORD *)(a3 + 16);
    if ( (*(_DWORD *)(v196 + 48) & 0x100) != 0 )
    {
      if ( (v140 & 0x2000000) == 0 )
        v140 |= *(_DWORD *)(a3 + 20);
      v186 = 0;
    }
    else
    {
      v186 = *(_DWORD *)(a3 + 20);
    }
    memset(v220, 0, 0x30uLL);
    SepAccessCheckEx(
      (unsigned int)v219,
      v141,
      SubjectContext->PrimaryToken,
      SubjectContext->ClientToken,
      v140,
      0LL,
      0,
      *(_QWORD *)(a3 + 32),
      v186,
      a6,
      (__int64)&v195,
      0LL,
      (__int64)v217,
      (__int64)v223);
    v142 = v210;
    v143 = v195 & v193;
    v144 = v192 | v195;
    v52 = P;
    LOBYTE(v93[2 * v210 + 1]) = 1;
    v93[2 * v142] = v144;
    v193 = v143;
    v202 = v52;
LABEL_232:
    v100 = v184;
LABEL_233:
    v109 = v207;
    v108 = v190 + 1;
    v190 = v108;
    v107 = *(_DWORD *)(v207 + 60);
    v186 = v107;
    if ( v108 >= v107 )
      goto LABEL_234;
  }
  if ( v117 < 0 )
    goto LABEL_255;
  if ( (v42[25] & 0x10) == 0 )
  {
LABEL_209:
    if ( !(_BYTE)v204 && v121 != 1 )
      goto LABEL_232;
    goto LABEL_211;
  }
  v122 = (_QWORD *)v42[137];
  if ( v122 )
    v123 = v122[75];
  else
    v123 = 0LL;
  if ( v122 )
    v124 = v122[73];
  else
    v124 = 0LL;
  if ( v122 )
    v125 = v122[74];
  else
    v125 = 0LL;
  if ( v122 )
    v126 = v122[72];
  else
    v126 = 0LL;
  v186 = AuthzBasepEvaluateAceCondition(
           (__int64)v42,
           v42[97],
           (__int64)v52,
           v126,
           v125,
           v124,
           v123,
           *(_DWORD **)(v196 + 24),
           *(_DWORD *)(v196 + 16),
           1u,
           1u,
           &v203);
  if ( v186 >= 0 )
  {
    v121 = v203;
    goto LABEL_209;
  }
LABEL_255:
  if ( !a2 )
    SeUnlockSubjectContext(SubjectContext);
  v156 = *(_QWORD *)(v207 + 32);
  if ( v156 )
    SepRmDereferenceCapTable(v156, v118, v119, v120);
  v157 = v186;
  **(_DWORD **)(a4 + 8) = 0;
  **(_DWORD **)(a4 + 16) = v157;
  SepFreeResourceInfo(v52, v118, v119);
LABEL_262:
  if ( v93 )
    ExFreePoolWithTag(v93, 0);
  return 0;
}
