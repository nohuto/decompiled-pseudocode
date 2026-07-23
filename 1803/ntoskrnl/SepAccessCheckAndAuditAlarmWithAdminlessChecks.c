/*
 * XREFs of SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1404D7FE0
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x1404D7DC4 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     AuthzBasepEvaluateAceCondition @ 0x140044F30 (AuthzBasepEvaluateAceCondition.c)
 *     SepLocateTokenTrustLevel @ 0x14005C9F4 (SepLocateTokenTrustLevel.c)
 *     SeCaptureObjectTypeList @ 0x14005E2BC (SeCaptureObjectTypeList.c)
 *     SepTrustLevelCheck @ 0x14005E4CC (SepTrustLevelCheck.c)
 *     SePrivilegePolicyCheck @ 0x14005E5C8 (SePrivilegePolicyCheck.c)
 *     SepFreeResourceInfo @ 0x140062FE4 (SepFreeResourceInfo.c)
 *     SepTokenIsOwner @ 0x140063010 (SepTokenIsOwner.c)
 *     SepMandatoryToDiscretionary @ 0x1400630B4 (SepMandatoryToDiscretionary.c)
 *     SepFilterToDiscretionary @ 0x1400630D8 (SepFilterToDiscretionary.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x140063100 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     SeTokenIsRestricted @ 0x140063230 (SeTokenIsRestricted.c)
 *     RtlOwnerAcesPresent @ 0x1400AAD50 (RtlOwnerAcesPresent.c)
 *     SeLogAccessFailure @ 0x1400B1D20 (SeLogAccessFailure.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400BBECC (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepConstrainByConstraintMask @ 0x1400BDC64 (SepConstrainByConstraintMask.c)
 *     SepConstrainByMandatory @ 0x1400BF03C (SepConstrainByMandatory.c)
 *     SepLpacCausedAccessFailure @ 0x1400C9E48 (SepLpacCausedAccessFailure.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     SepMandatoryIntegrityCheck @ 0x1401018A0 (SepMandatoryIntegrityCheck.c)
 *     SepFilterCheck @ 0x140101D80 (SepFilterCheck.c)
 *     SepAccessCheck @ 0x140101F00 (SepAccessCheck.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SeFreeCapturedObjectTypeList @ 0x14029F928 (SeFreeCapturedObjectTypeList.c)
 *     SepBuildCapeSecurityDescriptor @ 0x14029FA3C (SepBuildCapeSecurityDescriptor.c)
 *     SepCopyObjectTypeList @ 0x14029FADC (SepCopyObjectTypeList.c)
 *     SepGetScopedPolicySid @ 0x14029FB94 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x14029FDD4 (SepLogLpacAccessFailure.c)
 *     SepMergeObjectTypeListAccesses @ 0x14029FEE8 (SepMergeObjectTypeListAccesses.c)
 *     SepRmDereferenceCapTable @ 0x14029FF18 (SepRmDereferenceCapTable.c)
 *     SepExamineGlobalSaclEx @ 0x1402A0898 (SepExamineGlobalSaclEx.c)
 *     SepRmReferenceFindCap @ 0x1402A1BE0 (SepRmReferenceFindCap.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     SeCaptureSecurityDescriptor @ 0x1404C7830 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1404C8E50 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1404D591C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtAuditThisEventWithContext @ 0x1404D5AA0 (SepAdtAuditThisEventWithContext.c)
 *     SeCheckAuditPrivilege @ 0x1404D7CA8 (SeCheckAuditPrivilege.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1404D7D40 (SepAdtAuditObjectAccessWithContext.c)
 *     SepProbeAndCaptureString_U @ 0x1404D9134 (SepProbeAndCaptureString_U.c)
 *     SeReleaseSid @ 0x140543EF0 (SeReleaseSid.c)
 *     SeCaptureSid @ 0x140543F18 (SeCaptureSid.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     SeLockSubjectContext @ 0x1405A4DC0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1405A5520 (SeUnlockSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14078EFAC (SepAdtOpenObjectAuditAlarm.c)
 *     SepExamineSaclEx @ 0x140791850 (SepExamineSaclEx.c)
 *     SepAuditFailed @ 0x140795050 (SepAuditFailed.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SepAccessCheckAndAuditAlarmWithAdminlessChecks(
        __int64 a1,
        __int64 a2,
        void **a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *Src,
        unsigned int a8,
        int a9,
        char a10,
        unsigned __int64 a11,
        unsigned int a12,
        __int64 a13,
        int *a14,
        int *Address,
        _BYTE *a16,
        char a17,
        char a18)
{
  char *v21; // r15
  unsigned __int8 v22; // r14
  PACCESS_TOKEN ClientToken; // r15
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // edi
  SIZE_T v27; // rdi
  char v28; // si
  unsigned int *v29; // rsi
  __int16 v30; // cx
  __int64 v31; // rax
  char *v32; // rax
  __int64 v33; // rax
  char *v34; // rax
  __int64 v35; // rcx
  char v36; // r13
  __int64 v37; // rcx
  int v38; // r14d
  char v39; // r12
  __int64 v40; // r8
  char IsOwner; // al
  int v42; // r13d
  char v43; // al
  unsigned int *v44; // rdx
  char *v45; // rdi
  __int64 v46; // r13
  unsigned __int8 v47; // r13
  char v48; // al
  unsigned int v49; // r11d
  unsigned __int8 v50; // r12
  char *v51; // r10
  char v52; // al
  char v53; // r15
  char v54; // dl
  int v55; // r12d
  char v56; // di
  char v57; // r14
  int *v58; // rcx
  int *v59; // rdx
  char *v60; // r12
  char *v61; // r8
  char v62; // r11
  unsigned int v63; // edx
  int *v64; // r8
  int *v65; // r9
  __int64 v66; // rcx
  unsigned int v67; // ecx
  int *v68; // r9
  int *v69; // r10
  unsigned __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // r8
  __int16 v74; // ax
  __int64 v75; // rax
  ACL *v76; // rcx
  int v77; // eax
  unsigned int v78; // eax
  unsigned int v79; // eax
  char *v80; // rsi
  unsigned int v81; // eax
  int v82; // r12d
  char v83; // al
  void *v84; // rcx
  int v85; // ecx
  char *PoolWithTag; // r10
  unsigned int v87; // r14d
  char *v88; // r8
  unsigned int i; // edx
  __int64 v90; // rcx
  __int16 v91; // dx
  __int64 v92; // rax
  ACL *v93; // rax
  _BYTE *ScopedPolicySid; // rax
  int Cap; // eax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v96; // rdx
  char *v97; // r10
  unsigned int v98; // r13d
  char *v99; // r8
  unsigned int j; // edx
  __int64 v101; // rcx
  __int64 v102; // rdi
  unsigned int *v103; // rax
  char *v104; // rax
  int *v105; // r8
  unsigned int v106; // eax
  unsigned int v107; // edx
  __int64 v108; // r13
  _QWORD *v109; // rax
  __int64 v110; // r8
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r9
  int v114; // eax
  int v115; // esi
  _QWORD *v116; // rax
  __int64 v117; // r8
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r9
  unsigned int v121; // r13d
  unsigned int v122; // esi
  PVOID v123; // rsi
  int v124; // r8d
  int v125; // edx
  char IsKTMCommitCoordinator; // al
  unsigned int v127; // r11d
  int v128; // r8d
  unsigned int v129; // edx
  char *v130; // r9
  __int64 v131; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char v133; // di
  char v134; // si
  ULONGLONG TokenTrustLevel; // rax
  __int64 v136; // rdx
  __int64 v137; // r8
  int v138; // ecx
  int PrimaryToken; // r10d
  __int16 v140; // ax
  __int64 v141; // rdx
  unsigned int v142; // ecx
  __int64 v143; // rcx
  unsigned int v144; // eax
  int v145; // edi
  PVOID v146; // r12
  char *v147; // r14
  char v148; // r15
  int v149; // r8d
  __int16 v150; // ax
  __int64 v151; // rdx
  unsigned int v152; // eax
  int v153; // r8d
  int v154; // r14d
  bool v155; // zf
  PVOID v156; // r8
  __int64 *v157; // r10
  __int64 v158; // rdx
  __int64 *v159; // r8
  struct _LIST_ENTRY *Blink; // rcx
  int Object; // [rsp+20h] [rbp-258h]
  unsigned int v162; // [rsp+40h] [rbp-238h]
  unsigned int v163; // [rsp+40h] [rbp-238h]
  __int64 v164; // [rsp+40h] [rbp-238h]
  char v165; // [rsp+A0h] [rbp-1D8h]
  char v166; // [rsp+A1h] [rbp-1D7h]
  unsigned __int8 v167; // [rsp+A2h] [rbp-1D6h] BYREF
  char v168; // [rsp+A3h] [rbp-1D5h] BYREF
  char v169; // [rsp+A4h] [rbp-1D4h]
  char v170; // [rsp+A5h] [rbp-1D3h]
  char v171; // [rsp+A6h] [rbp-1D2h]
  char v172; // [rsp+A7h] [rbp-1D1h]
  int v173; // [rsp+A8h] [rbp-1D0h]
  unsigned __int8 v174; // [rsp+ACh] [rbp-1CCh]
  PVOID v175; // [rsp+B0h] [rbp-1C8h]
  char v176; // [rsp+B8h] [rbp-1C0h] BYREF
  char v177; // [rsp+B9h] [rbp-1BFh]
  char v178; // [rsp+BAh] [rbp-1BEh]
  int v179; // [rsp+BCh] [rbp-1BCh]
  char v180; // [rsp+C0h] [rbp-1B8h] BYREF
  char v181; // [rsp+C1h] [rbp-1B7h] BYREF
  char v182[2]; // [rsp+C2h] [rbp-1B6h] BYREF
  int v183; // [rsp+C4h] [rbp-1B4h] BYREF
  PVOID v184; // [rsp+C8h] [rbp-1B0h] BYREF
  PVOID v185; // [rsp+D0h] [rbp-1A8h]
  unsigned __int16 v186[2]; // [rsp+D8h] [rbp-1A0h] BYREF
  int v187; // [rsp+DCh] [rbp-19Ch] BYREF
  int v188; // [rsp+E0h] [rbp-198h] BYREF
  unsigned __int8 v189; // [rsp+E9h] [rbp-18Fh] BYREF
  char v190; // [rsp+EAh] [rbp-18Eh] BYREF
  char v191; // [rsp+EBh] [rbp-18Dh]
  char v192; // [rsp+ECh] [rbp-18Ch]
  char v193; // [rsp+EDh] [rbp-18Bh]
  char v194; // [rsp+EEh] [rbp-18Ah]
  int v195; // [rsp+F0h] [rbp-188h]
  int v196; // [rsp+F4h] [rbp-184h]
  int v197; // [rsp+F8h] [rbp-180h]
  char *v198; // [rsp+100h] [rbp-178h]
  int v199; // [rsp+108h] [rbp-170h]
  __int64 v200; // [rsp+110h] [rbp-168h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+118h] [rbp-160h] BYREF
  int *v202; // [rsp+138h] [rbp-140h]
  PVOID v203; // [rsp+140h] [rbp-138h] BYREF
  PVOID v204; // [rsp+148h] [rbp-130h] BYREF
  int v205; // [rsp+150h] [rbp-128h] BYREF
  int v206; // [rsp+154h] [rbp-124h] BYREF
  unsigned int v207; // [rsp+158h] [rbp-120h]
  ACL *v208; // [rsp+160h] [rbp-118h]
  __int64 v209; // [rsp+168h] [rbp-110h] BYREF
  PVOID v210; // [rsp+170h] [rbp-108h] BYREF
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v211; // [rsp+178h] [rbp-100h] BYREF
  PVOID P; // [rsp+180h] [rbp-F8h] BYREF
  PVOID v213; // [rsp+188h] [rbp-F0h] BYREF
  int v214[2]; // [rsp+190h] [rbp-E8h] BYREF
  __int64 v215; // [rsp+198h] [rbp-E0h] BYREF
  __int64 v216; // [rsp+1A0h] [rbp-D8h]
  __int64 v217; // [rsp+1A8h] [rbp-D0h]
  int v218; // [rsp+1B0h] [rbp-C8h]
  PVOID v219; // [rsp+1B8h] [rbp-C0h]
  PVOID v220; // [rsp+1C0h] [rbp-B8h] BYREF
  PVOID v221[3]; // [rsp+1C8h] [rbp-B0h] BYREF
  void *v222; // [rsp+1E0h] [rbp-98h]
  __int64 v223; // [rsp+1E8h] [rbp-90h] BYREF
  __int64 v224; // [rsp+1F0h] [rbp-88h]
  char v225; // [rsp+1F8h] [rbp-80h] BYREF
  char v226; // [rsp+1FCh] [rbp-7Ch] BYREF
  __int128 v227; // [rsp+200h] [rbp-78h] BYREF
  _BYTE SecurityDescriptor[104]; // [rsp+210h] [rbp-68h] BYREF
  __int64 v229; // [rsp+288h] [rbp+10h] BYREF
  void **v230; // [rsp+290h] [rbp+18h]
  __int64 v231; // [rsp+298h] [rbp+20h]

  v231 = a4;
  v230 = a3;
  v229 = a2;
  v173 = 0;
  v187 = 0;
  v21 = 0LL;
  v175 = 0LL;
  v177 = 0;
  v183 = -1073741823;
  v185 = 0LL;
  v202 = 0LL;
  v196 = 0;
  v194 = 0;
  P = 0LL;
  v203 = 0LL;
  v213 = 0LL;
  v184 = 0LL;
  v209 = 0LL;
  v200 = 0LL;
  v188 = 0;
  v210 = 0LL;
  v182[0] = 0;
  v176 = 0;
  v191 = 0;
  v171 = 0;
  v169 = 0;
  v189 = 1;
  v190 = 0;
  v219 = 0LL;
  v222 = 0LL;
  v192 = 0;
  v223 = 0LL;
  v224 = 0LL;
  v214[1] = 0;
  v208 = 0LL;
  memset(SecurityDescriptor, 0, 0x28uLL);
  v211 = 0LL;
  v178 = 0;
  v172 = 0;
  v166 = 0;
  v193 = 0;
  v186[0] = 999;
  v215 = 0LL;
  v216 = 0LL;
  v217 = 0LL;
  v218 = 0;
  v170 = 0;
  v195 = 0;
  v204 = 0LL;
  v197 = 0;
  v174 = 0;
  v180 = 0;
  v181 = 0;
  v220 = 0LL;
  v206 = -1;
  v214[0] = -1;
  v22 = KeGetCurrentThread()->gap0[10];
  v165 = v22;
  v182[1] = v22;
  SeCaptureSubjectContext(&SubjectContext);
  if ( a9 )
  {
    if ( a9 != 1 )
    {
      v26 = -1073741811;
      goto LABEL_381;
    }
    v199 = 7;
  }
  else
  {
    v199 = 2;
  }
  ClientToken = SubjectContext.ClientToken;
  if ( a3 )
    goto LABEL_6;
  if ( !SubjectContext.ClientToken )
  {
    v26 = -1073741732;
    v21 = 0LL;
LABEL_381:
    v60 = 0LL;
    goto LABEL_382;
  }
  if ( SubjectContext.ImpersonationLevel < SecurityIdentification )
  {
    v26 = -1073741659;
    v21 = 0LL;
    goto LABEL_381;
  }
LABEL_6:
  if ( a17 )
  {
    if ( !a12 || a12 > 0x1000 )
    {
      v26 = -1073741811;
      v173 = -1073741811;
      goto LABEL_19;
    }
    v27 = 4LL * a12;
    ProbeForWrite(Address, v27, 4u);
    ProbeForWrite(a14, v27, 4u);
  }
  else
  {
    v24 = (__int64)Address;
    if ( (unsigned __int64)Address >= 0x7FFFFFFF0000LL )
      v24 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v24 = *(_DWORD *)v24;
    v25 = (__int64)a14;
    if ( (unsigned __int64)a14 >= 0x7FFFFFFF0000LL )
      v25 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v25 = *(_DWORD *)v25;
  }
  if ( (a13 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v227 = *(_OWORD *)a13;
  v26 = v173;
  ClientToken = SubjectContext.ClientToken;
LABEL_19:
  if ( v26 < 0 )
    goto LABEL_190;
  if ( a3 )
  {
    v84 = *a3;
    v28 = v22;
    v26 = ObReferenceObjectByHandle(v84, 8u, (POBJECT_TYPE)SeTokenObjectType, v22, v221, 0LL);
    v219 = v221[0];
    if ( v26 < 0 )
    {
      v219 = 0LL;
      v29 = (unsigned int *)v184;
      v21 = (char *)v175;
      v60 = (char *)v175;
      if ( v26 != -1073741816 )
        v193 = 1;
      goto LABEL_118;
    }
    v222 = ClientToken;
    ClientToken = v221[0];
    SubjectContext.ClientToken = v221[0];
    v192 = 1;
  }
  else
  {
    v28 = v22;
  }
  if ( !ClientToken )
    ClientToken = SubjectContext.PrimaryToken;
  v221[2] = ClientToken;
  if ( !SeCheckAuditPrivilege((__int64 *)&SubjectContext, v28) )
  {
    if ( (a10 & 1) != 0 )
    {
      v191 = 1;
      goto LABEL_25;
    }
    v26 = -1073741727;
LABEL_190:
    v21 = (char *)v175;
    v60 = (char *)v175;
LABEL_382:
    v29 = (unsigned int *)v184;
    goto LABEL_118;
  }
LABEL_25:
  if ( (a8 & 0xF0000000) != 0 )
  {
    v26 = -1073741594;
    v21 = (char *)v175;
    v60 = (char *)v175;
    goto LABEL_382;
  }
  v26 = SeCaptureSecurityDescriptor(a6, v28, PagedPool, 0, &v184);
  v173 = v26;
  if ( v26 < 0 )
  {
    v29 = 0LL;
    goto LABEL_193;
  }
  v29 = (unsigned int *)v184;
  if ( !v184 )
    goto LABEL_195;
  v30 = *((_WORD *)v184 + 1);
  if ( v30 >= 0 )
  {
    v32 = (char *)*((_QWORD *)v184 + 1);
  }
  else
  {
    v31 = *((unsigned int *)v184 + 1);
    if ( !(_DWORD)v31 )
      goto LABEL_195;
    v32 = (char *)v184 + v31;
  }
  if ( !v32 )
    goto LABEL_195;
  if ( v30 < 0 )
  {
    v33 = *((unsigned int *)v184 + 2);
    if ( (_DWORD)v33 )
    {
      v34 = (char *)v184 + v33;
      goto LABEL_35;
    }
LABEL_195:
    v26 = -1073741703;
    v21 = (char *)v175;
    v60 = (char *)v175;
    goto LABEL_118;
  }
  v34 = (char *)*((_QWORD *)v184 + 2);
LABEL_35:
  if ( !v34 )
    goto LABEL_195;
  v35 = (__int64)a16;
  if ( (unsigned __int64)a16 >= 0x7FFFFFFF0000LL )
    v35 = 0x7FFFFFFF0000LL;
  *(_BYTE *)v35 = *(_BYTE *)v35;
  v26 = SepProbeAndCaptureString_U(a1, &P);
  v173 = v26;
  if ( v26 >= 0 )
  {
    v26 = SepProbeAndCaptureString_U(a4, &v203);
    v173 = v26;
    if ( v26 >= 0 )
    {
      v26 = SepProbeAndCaptureString_U(a5, &v213);
      v173 = v26;
    }
  }
  v36 = v170;
  if ( v26 < 0 )
    goto LABEL_190;
  if ( Src )
  {
    v26 = SeCaptureSid(Src, Object, 1, (__int64)&v209);
    if ( v26 < 0 )
    {
      v209 = 0LL;
      v21 = (char *)v175;
      v60 = (char *)v175;
      goto LABEL_382;
    }
  }
  v26 = SeCaptureObjectTypeList(a11, a12, v22, &v200);
  if ( v26 < 0 )
    goto LABEL_190;
  v29 = (unsigned int *)v184;
  v26 = SepTrustLevelCheck(v37, (__int64)v184, &SubjectContext, 0LL, 0LL, 1, &v206);
  if ( v26 < 0 )
  {
LABEL_194:
    v21 = (char *)v175;
    v60 = (char *)v175;
    goto LABEL_118;
  }
  v38 = a8;
  v26 = SepFilterToDiscretionary(&v206, a8);
  v173 = v26;
  if ( v26 < 0 )
  {
    v180 = 1;
    goto LABEL_49;
  }
  v26 = SepFilterCheck((__int64)v29, (__int64)&v204, (__int64)ClientToken, 1, v214);
  if ( v26 < 0 )
  {
LABEL_193:
    v22 = v165;
    goto LABEL_194;
  }
  v26 = SepFilterToDiscretionary(v214, v38);
  v173 = v26;
  if ( v26 < 0 )
    v181 = 1;
LABEL_49:
  v39 = a18;
  if ( v26 < 0 )
  {
    v179 = v188;
    goto LABEL_56;
  }
  v26 = SepMandatoryIntegrityCheck((int *)&v227, (__int64)v29, 0, (__int64)ClientToken, 1, a18, (__int64)&v223);
  if ( v26 < 0 )
    goto LABEL_193;
  v26 = SepMandatoryToDiscretionary(&v223, v38);
  v173 = v26;
  if ( (v26 < 0 || (v38 & 0x2000000) != 0) && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0 && HIDWORD(v224) <= 0x2000 )
  {
    v36 = 1;
    v170 = 1;
  }
  if ( (v26 >= 0 || v36)
    && (v26 = SePrivilegePolicyCheck((int *)&a8, &v188, (__int64 *)&SubjectContext, 0, (__int64)&v210, v165),
        v173 = v26,
        (v38 = a8) == 0) )
  {
    v85 = (unsigned __int8)v197;
    v179 = v188;
    if ( v188 )
      v85 = 1;
    v197 = v85;
  }
  else
  {
    v179 = v188;
  }
LABEL_56:
  SeLockSubjectContext(&SubjectContext);
  if ( v26 < 0 && !v170 )
  {
    v47 = 0;
    v167 = 0;
    v50 = 1;
    v168 = 1;
    v183 = v26;
    if ( !a17 )
    {
      v175 = &v187;
      v198 = (char *)&v183;
      goto LABEL_74;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * a12, 0x61476553u);
    v175 = PoolWithTag;
    if ( PoolWithTag )
    {
      v177 = 1;
      v87 = a12;
      v88 = &PoolWithTag[4 * a12];
      v198 = v88;
      for ( i = 0; i < v87; ++i )
      {
        v90 = 4LL * i;
        *(_DWORD *)&PoolWithTag[v90] = v187;
        *(_DWORD *)&v88[v90] = v26;
      }
      v38 = a8;
      goto LABEL_74;
    }
    SeUnlockSubjectContext(&SubjectContext);
    v26 = -1073741670;
    v22 = v165;
    v21 = 0LL;
    v60 = (char *)v185;
    goto LABEL_118;
  }
  IsOwner = SepTokenIsOwner((__int64)ClientToken, (__int64)v29, v40, v39);
  v166 = IsOwner;
  v29 = (unsigned int *)v184;
  if ( !SepRmEnforceCap )
    goto LABEL_58;
  v91 = *((_WORD *)v184 + 1);
  if ( (v91 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
    goto LABEL_58;
  if ( v91 >= 0 )
  {
    v93 = (ACL *)*((_QWORD *)v184 + 3);
    goto LABEL_224;
  }
  v92 = *((unsigned int *)v184 + 3);
  if ( (_DWORD)v92 )
  {
    v93 = (ACL *)((char *)v184 + v92);
LABEL_224:
    v208 = v93;
    if ( v93 )
    {
      ScopedPolicySid = SepGetScopedPolicySid(v93);
      if ( ScopedPolicySid )
      {
        Cap = SepRmReferenceFindCap(ScopedPolicySid, &v211);
        v96 = v211;
        if ( Cap < 0 )
          v96 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)SepRmDefaultCap;
        v211 = v96;
        v26 = 0;
        v173 = 0;
        v178 = 1;
        IsOwner = v166;
        goto LABEL_59;
      }
    }
    goto LABEL_221;
  }
  v208 = 0LL;
LABEL_221:
  IsOwner = v166;
LABEL_58:
  v26 = v173;
LABEL_59:
  v38 = a8;
  if ( (a8 & 0x2060000) != 0
    && IsOwner
    && ((v74 = *((_WORD *)v29 + 1), (v74 & 4) == 0)
      ? (v76 = 0LL)
      : v74 >= 0
      ? (v76 = (ACL *)*((_QWORD *)v29 + 4))
      : (v75 = v29[4], !(_DWORD)v75)
      ? (v76 = 0LL)
      : (v76 = (ACL *)((char *)v29 + v75)),
        !RtlOwnerAcesPresent(v76)) )
  {
    if ( (v38 & 0x2000000) != 0 )
    {
      v77 = 393216;
      v42 = v188 | 0x60000;
    }
    else
    {
      v77 = v38 & 0x60000;
      v42 = v188 | v38 & 0x60000;
    }
    v195 = v77;
    v188 = v42;
    v38 &= 0xFFF9FFFF;
    a8 = v38;
  }
  else
  {
    v42 = v188;
  }
  v179 = v42;
  if ( !v38 && (!v178 || (_BYTE)v197) && ((*((_DWORD *)ClientToken + 50) & 0x2000) != 0 || !v195) )
  {
    v187 = v42;
    if ( v42 )
    {
      v82 = 0;
      v83 = 0;
      v47 = 1;
    }
    else
    {
      v82 = -1073741790;
      v83 = 1;
      v47 = 0;
    }
    v174 = v47;
    LOBYTE(a9) = v83;
    v167 = v47;
    v168 = v83;
    v183 = v82;
    if ( !a17 )
    {
      v175 = &v187;
      v198 = (char *)&v183;
      v50 = a9;
      goto LABEL_74;
    }
    v97 = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * a12, 0x61476553u);
    v175 = v97;
    if ( v97 )
    {
      v177 = 1;
      v98 = a12;
      v99 = &v97[4 * a12];
      v198 = v99;
      for ( j = 0; j < v98; ++j )
      {
        v101 = 4LL * j;
        *(_DWORD *)&v97[v101] = v187;
        *(_DWORD *)&v99[v101] = v82;
      }
      v47 = v174;
      v50 = a9;
      goto LABEL_74;
    }
    goto LABEL_241;
  }
  v43 = a17;
  if ( a17 )
  {
    v102 = a12;
    v103 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 8LL * a12, 0x61476553u);
    v44 = v103;
    v175 = v103;
    if ( !v103 )
    {
LABEL_241:
      v26 = -1073741670;
      SeUnlockSubjectContext(&SubjectContext);
      v22 = v165;
      v21 = (char *)v175;
      v60 = (char *)v185;
      goto LABEL_118;
    }
    v177 = 1;
    v45 = (char *)&v103[v102];
    v43 = a17;
  }
  else
  {
    v44 = (unsigned int *)&v187;
    v175 = &v187;
    v45 = (char *)&v183;
  }
  v198 = v45;
  LODWORD(v215) = v195;
  v162 = v42;
  v46 = a12;
  SepAccessCheck(
    (__int64)v29,
    (unsigned __int8 *)v209,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)ClientToken,
    v38,
    (_QWORD *)v200,
    a12,
    &v227,
    v162,
    v165,
    v44,
    0LL,
    (int *)v45,
    v43,
    v166,
    (int *)&v215,
    (__int64 *)&v204,
    (char *)&v167,
    &v168,
    v39);
  if ( !SepRmEnforceCap || *(int *)v45 < 0 || !v178 )
  {
    v38 = a8;
    v26 = v173;
    v179 = v188;
    v47 = v167;
    v48 = v168;
    v49 = a12;
    goto LABEL_66;
  }
  if ( a17 )
  {
    v104 = (char *)ExAllocatePoolWithTag(PagedPool, 8 * v46, 0x61476553u);
    v185 = v104;
    if ( !v104 )
    {
      SeUnlockSubjectContext(&SubjectContext);
      SeReleaseSubjectContext(&SubjectContext);
      v26 = -1073741670;
LABEL_250:
      v22 = v165;
      v21 = (char *)v175;
      v60 = (char *)v185;
      goto LABEL_382;
    }
    v105 = (int *)&v104[4 * v46];
  }
  else
  {
    v185 = &v225;
    v105 = (int *)&v226;
  }
  v202 = v105;
  v49 = a12;
  if ( a12 )
  {
    v26 = SepCopyObjectTypeList(v200, a12, &v220);
    v173 = v26;
    if ( v26 < 0 )
    {
      v22 = v165;
      v21 = (char *)v175;
      v60 = (char *)v185;
      goto LABEL_382;
    }
    v49 = a12;
  }
  else
  {
    v26 = v173;
  }
  LOBYTE(v29) = 0;
  a9 = (int)v29;
  v106 = 0;
  v38 = a8;
  v107 = v188;
  v179 = v188;
  while ( 1 )
  {
    v197 = v106;
    if ( v106 >= HIDWORD(v211[2].Linkage.Blink) )
      break;
    v108 = *(&v211[2].Signature + v106);
    v221[0] = (PVOID)v108;
    if ( *(_QWORD *)(v108 + 24) )
    {
      if ( !v204 )
      {
        LODWORD(v29) = (unsigned __int8)v29;
        if ( (int)AuthzBasepInitializeResourceClaimsFromSacl((__int64)v208, (__int64 *)&v204) < 0 )
          LODWORD(v29) = 1;
        a9 = (int)v29;
      }
      v109 = (_QWORD *)*((_QWORD *)ClientToken + 137);
      if ( v109 )
        v110 = v109[75];
      else
        v110 = 0LL;
      if ( v109 )
        v111 = v109[73];
      else
        v111 = 0LL;
      if ( v109 )
        v112 = v109[74];
      else
        v112 = 0LL;
      if ( v109 )
        v113 = v109[72];
      else
        v113 = 0LL;
      v114 = AuthzBasepEvaluateAceCondition(
               (__int64)ClientToken,
               *((_QWORD *)ClientToken + 97),
               (__int64)v204,
               v113,
               v112,
               v111,
               v110,
               *(_DWORD **)(v108 + 24),
               *(_DWORD *)(v108 + 16),
               1u,
               0,
               &v205);
      v26 = v114;
      v173 = v114;
      v115 = v205;
      if ( v205 != 1 )
      {
        if ( v114 < 0 )
          goto LABEL_250;
        if ( SeTokenIsRestricted(ClientToken) )
        {
          v116 = (_QWORD *)*((_QWORD *)ClientToken + 137);
          if ( v116 )
            v117 = v116[75];
          else
            v117 = 0LL;
          if ( v116 )
            v118 = v116[73];
          else
            v118 = 0LL;
          if ( v116 )
            v119 = v116[74];
          else
            v119 = 0LL;
          if ( v116 )
            v120 = v116[72];
          else
            v120 = 0LL;
          v26 = AuthzBasepEvaluateAceCondition(
                  (__int64)ClientToken,
                  *((_QWORD *)ClientToken + 97),
                  (__int64)v204,
                  v120,
                  v119,
                  v118,
                  v117,
                  *(_DWORD **)(v108 + 24),
                  *(_DWORD *)(v108 + 16),
                  1u,
                  1u,
                  &v205);
          v173 = v26;
          if ( v26 < 0 )
            goto LABEL_250;
          v115 = v205;
        }
        if ( !(_BYTE)a9 && v115 != 1 )
        {
          v49 = a12;
          goto LABEL_310;
        }
      }
      v107 = v179;
    }
    if ( (*(_DWORD *)(v108 + 48) & 1) != 0 )
    {
      if ( (v38 & 0x2000000) != 0 )
        v121 = v38;
      else
        v121 = v38 | v107;
      v122 = 0;
    }
    else
    {
      v121 = v38;
      v122 = v107;
    }
    v26 = SepBuildCapeSecurityDescriptor(SecurityDescriptor, *((unsigned __int8 **)v221[0] + 4), v208);
    v173 = v26;
    if ( v26 < 0 )
      goto LABEL_250;
    v163 = v122;
    v123 = v220;
    SepAccessCheck(
      (__int64)SecurityDescriptor,
      (unsigned __int8 *)v209,
      (__int64)SubjectContext.PrimaryToken,
      (__int64)SubjectContext.ClientToken,
      v121,
      v220,
      a12,
      &v227,
      v163,
      v165,
      (unsigned int *)v185,
      0LL,
      v202,
      a17,
      v166,
      (int *)&v215,
      (__int64 *)&v204,
      (char *)&v189,
      &v190,
      v39);
    v124 = *(_DWORD *)v185;
    if ( v172 )
      v124 = v195 & *(_DWORD *)v185;
    v195 = v124;
    v49 = a12;
    if ( v123 )
      SepMergeObjectTypeListAccesses(v200, (__int64)v123, a12);
    v172 = 1;
LABEL_310:
    v106 = v197 + 1;
    v107 = v179;
    LOBYTE(v29) = a9;
  }
  v47 = v189;
  v167 = v189;
  LOBYTE(a9) = v190;
  v168 = v190;
  v125 = v195;
  *(_DWORD *)v185 &= v195;
  if ( !v125 )
  {
    *v202 = -1073741790;
    v47 = 0;
    v167 = 0;
    v48 = 1;
    v168 = 1;
LABEL_66:
    LOBYTE(a9) = v48;
  }
  if ( (v38 & 0x2000000) != 0 )
  {
    if ( !v170
      || !*(_WORD *)((char *)&v217 + 5)
      && (IsKTMCommitCoordinator = ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator()) == 0 )
    {
      if ( a17 )
        v78 = v49;
      else
        v78 = 0;
      SepConstrainByMandatory((__int64)&v223, v38, (char *)v175, v198, 0LL, v78);
    }
    goto LABEL_69;
  }
  if ( !v170 || *(_WORD *)((char *)&v217 + 5) )
  {
LABEL_69:
    v50 = a9;
    goto LABEL_70;
  }
  if ( !ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator() || HIDWORD(v216) )
  {
    v47 = 0;
    v167 = 0;
    LOBYTE(a9) = 1;
    v168 = 1;
    v128 = 0;
    v187 = 0;
    v183 = -1073741790;
    v52 = a17;
    v51 = (char *)v175;
    if ( a17 )
    {
      v129 = 0;
      v130 = v198;
      while ( v129 < v127 )
      {
        v131 = 4LL * v129;
        *(_DWORD *)&v51[v131] = v128;
        *(_DWORD *)&v130[v131] = v183;
        ++v129;
        v128 = v187;
      }
      v50 = a9;
      goto LABEL_71;
    }
    v50 = 1;
  }
  else
  {
    HIBYTE(v217) = 1;
    v47 = 1;
    v167 = 1;
    v50 = 0;
    v168 = 0;
    v187 = v38;
    v183 = 0;
LABEL_70:
    v51 = (char *)v175;
LABEL_71:
    v52 = a17;
  }
  if ( (v38 & 0x2000000) != 0 )
  {
    if ( v52 )
      v79 = a12;
    else
      v79 = 0;
    v80 = v198;
    SepConstrainByConstraintMask(v206, v38, v51, v198, 0LL, v79, &v180);
    if ( a17 )
      v81 = a12;
    else
      v81 = 0;
    SepConstrainByConstraintMask(v214[0], v38, (char *)v175, v80, 0LL, v81, &v181);
  }
  v29 = (unsigned int *)v184;
LABEL_74:
  if ( ClientToken )
  {
    if ( v180 || v181 )
    {
LABEL_328:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)ClientToken + 6), 1u);
      v133 = v183 >= 0;
      v134 = a8 | v188;
      TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)&SubjectContext);
      SeLogAccessFailure((__int64)ClientToken, v136, v137, TokenTrustLevel, (ULONGLONG)v184, v134, v133);
      ExReleaseResourceLite(*((PERESOURCE *)ClientToken + 6));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v38 = a8;
      v26 = v173;
      v29 = (unsigned int *)v184;
      v179 = v188;
      v47 = v167;
      v50 = v168;
      goto LABEL_79;
    }
    if ( HIDWORD(v216) || (*((_DWORD *)ClientToken + 50) & 0x4000) == 0 )
      goto LABEL_79;
    if ( v26 >= 0 )
    {
      if ( v183 < 0 || HIBYTE(v217) )
        goto LABEL_328;
LABEL_79:
      if ( v26 >= 0
        && v183 < 0
        && !HIDWORD(v216)
        && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0
        && SepLpacCausedAccessFailure((__int64)&v215, v38) )
      {
        SepLogLpacAccessFailure(v138);
      }
    }
  }
  if ( v191 )
    goto LABEL_93;
  if ( v199 == 2 )
  {
    if ( v47 )
    {
      v53 = SepAdtAuditObjectAccessWithContext(0LL, (const UNICODE_STRING *)v203, v47, 0, &SubjectContext, 0, v186);
      v171 = v53;
    }
    else
    {
      v53 = v171;
    }
    if ( !v50 )
      goto LABEL_86;
    v54 = SepAdtAuditObjectAccessWithContext(0LL, (const UNICODE_STRING *)v203, 0, v50, &SubjectContext, 0, v186);
    v169 = v54;
  }
  else
  {
    if ( v47 )
    {
      v186[0] = 151;
      v53 = SepAdtAuditThisEventWithContext(151LL, v47, 0, &SubjectContext);
      v171 = v53;
    }
    else
    {
      v53 = v171;
    }
    if ( v50 )
    {
      v186[0] = 151;
      v54 = SepAdtAuditThisEventWithContext(151LL, 0, v50, &SubjectContext);
      v169 = v54;
    }
    else
    {
LABEL_86:
      v54 = v169;
    }
  }
  if ( v53 || v54 )
  {
    PrimaryToken = (int)SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      PrimaryToken = (int)SubjectContext.ClientToken;
    v140 = *((_WORD *)v29 + 1);
    if ( (v140 & 0x10) != 0 )
    {
      if ( v140 >= 0 )
      {
        v141 = *((_QWORD *)v29 + 3);
      }
      else
      {
        v142 = v29[3];
        if ( v142 )
          LODWORD(v141) = (_DWORD)v29 + v142;
        else
          LODWORD(v141) = 0;
      }
    }
    else
    {
      LODWORD(v141) = 0;
    }
    if ( (v140 & 0x10) != 0 )
    {
      if ( v140 >= 0 )
      {
        v143 = *((_QWORD *)v29 + 3);
      }
      else
      {
        v144 = v29[3];
        if ( v144 )
          LODWORD(v143) = (_DWORD)v29 + v144;
        else
          LODWORD(v143) = 0;
      }
    }
    else
    {
      LODWORD(v143) = 0;
    }
    v145 = v38 | v179;
    v146 = v175;
    v147 = v198;
    v148 = a17;
    SepExamineSaclEx(
      v143,
      v141,
      PrimaryToken,
      v145,
      v200,
      a12,
      a17,
      (__int64)v198,
      (__int64)v175,
      v209,
      v166,
      (__int64)v182,
      (__int64)&v176);
    v149 = (int)SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      v149 = (int)SubjectContext.ClientToken;
    v150 = *((_WORD *)v29 + 1);
    if ( (v150 & 0x10) != 0 )
    {
      if ( v150 >= 0 )
      {
        v151 = *((_QWORD *)v29 + 3);
      }
      else
      {
        v152 = v29[3];
        if ( v152 )
          LODWORD(v151) = (_DWORD)v29 + v152;
        else
          LODWORD(v151) = 0;
      }
    }
    else
    {
      LODWORD(v151) = 0;
    }
    v164 = (__int64)v146;
    v55 = a12;
    SepExamineGlobalSaclEx(
      (__int64)v203,
      v151,
      v149,
      v145,
      v200,
      a12,
      v148,
      (__int64)v147,
      v164,
      v209,
      v166,
      v182,
      &v176);
    v53 = v171;
    v54 = v169;
  }
  else
  {
    v55 = a12;
  }
  if ( v182[0] || v176 )
  {
    v153 = (unsigned __int8)v196;
    if ( v47 )
      v153 = 1;
    v196 = v153;
    v56 = a17;
    v154 = v199;
    if ( v182[0] )
    {
      v155 = v53 == 0;
      v21 = (char *)v175;
      if ( !v155 )
      {
        v156 = v175;
        if ( !a17 )
          v156 = 0LL;
        v157 = &v229;
        if ( !v47 )
          LODWORD(v157) = 0;
        v29 = (unsigned int *)v184;
        SepAdtOpenObjectAuditAlarm(
          v186[0],
          (int)P,
          (int)v157,
          (int)v203,
          (__int64)v213,
          v184,
          (__int64)SubjectContext.ClientToken,
          (__int64)SubjectContext.PrimaryToken,
          *(_DWORD *)v175,
          *(_DWORD *)v175,
          (__int64)v210,
          1,
          (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
          v199,
          v200,
          v55,
          (__int64)v156,
          0LL,
          0LL);
        v47 = v167;
        v54 = v169;
      }
    }
    else
    {
      v21 = (char *)v175;
    }
    if ( v176 && v54 )
    {
      v158 = (__int64)v21;
      if ( !v56 )
        v158 = 0LL;
      v159 = &v229;
      if ( !v47 )
        LODWORD(v159) = 0;
      v29 = (unsigned int *)v184;
      SepAdtOpenObjectAuditAlarm(
        v186[0],
        (int)P,
        (int)v159,
        (int)v203,
        (__int64)v213,
        v184,
        (__int64)SubjectContext.ClientToken,
        (__int64)SubjectContext.PrimaryToken,
        a8,
        a8,
        (__int64)v210,
        0,
        (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
        v154,
        v200,
        v55,
        v158,
        0LL,
        0LL);
    }
    goto LABEL_94;
  }
  if ( !v210 || !v47 )
  {
LABEL_93:
    v21 = (char *)v175;
    v56 = a17;
LABEL_94:
    v57 = v196;
    goto LABEL_95;
  }
  SepAdtPrivilegeObjectAuditAlarm(
    (const int *)P,
    (unsigned __int16 *)v203,
    (unsigned __int16 *)v213,
    (__int64)&v229,
    (__int64)SubjectContext.ClientToken,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
    a8,
    (int *)v210,
    v167);
  v57 = 0;
  v29 = (unsigned int *)v184;
  v56 = a17;
  v21 = (char *)v175;
LABEL_95:
  SeUnlockSubjectContext(&SubjectContext);
  if ( !v56 )
  {
    v58 = Address;
    *Address = v183;
    v59 = a14;
    *a14 = v187;
    if ( SepRmEnforceCap && v172 && v183 >= 0 )
    {
      *v58 = *v202;
      v60 = (char *)v185;
      *v59 &= *(_DWORD *)v185;
      v29 = (unsigned int *)v184;
      goto LABEL_117;
    }
    v29 = (unsigned int *)v184;
LABEL_98:
    v60 = (char *)v185;
    goto LABEL_117;
  }
  v61 = v198;
  v207 = 0;
  v62 = v172;
  if ( !v198 )
  {
    v63 = 0;
    v64 = Address;
    v65 = a14;
    while ( v63 < a12 )
    {
      v66 = v63;
      v64[v66] = v183;
      v65[v66] = v187;
      if ( SepRmEnforceCap && v62 && v183 >= 0 )
      {
        v64[v66] = v183;
        v65[v66] &= v187;
      }
      v207 = ++v63;
      v29 = (unsigned int *)v184;
    }
    goto LABEL_98;
  }
  v67 = 0;
  v68 = Address;
  v69 = a14;
  v60 = (char *)v185;
  while ( v67 < a12 )
  {
    v70 = v67;
    v68[v70] = *(_DWORD *)&v61[v70 * 4];
    v69[v70] = *(_DWORD *)&v21[v70 * 4];
    if ( SepRmEnforceCap && v62 && *(int *)&v61[v70 * 4] >= 0 )
    {
      v68[v70] = v202[v70];
      v69[v70] &= *(_DWORD *)&v60[v70 * 4];
    }
    v207 = ++v67;
    v29 = (unsigned int *)v184;
  }
LABEL_117:
  *a16 = v57;
  v26 = 0;
  v173 = 0;
  v22 = v165;
LABEL_118:
  if ( v192 )
  {
    ObfDereferenceObject(v219);
    SubjectContext.ClientToken = v222;
  }
  if ( v210 )
    ExFreePoolWithTag(v210, 0);
  SeReleaseSubjectContext(&SubjectContext);
  SeReleaseSecurityDescriptor(v29, v22, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v203 )
    ExFreePoolWithTag(v203, 0);
  if ( v213 )
    ExFreePoolWithTag(v213, 0);
  if ( v209 )
  {
    LOBYTE(v72) = 1;
    SeReleaseSid(v209, v22, v72);
  }
  if ( v200 )
    SeFreeCapturedObjectTypeList((void *)v200);
  if ( v177 )
  {
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
    if ( v60 )
      ExFreePoolWithTag(v60, 0);
  }
  if ( v178 )
  {
    Blink = v211[1].Linkage.Blink;
    if ( Blink )
      SepRmDereferenceCapTable((volatile signed __int64 *)Blink);
  }
  if ( v220 )
    ExFreePoolWithTag(v220, 0);
  SepFreeResourceInfo(v204, v71, v72);
  if ( v26 == -1073741670 || v193 )
    SepAuditFailed((unsigned int)v26);
  return (unsigned int)v26;
}
