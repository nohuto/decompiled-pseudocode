/*
 * XREFs of SepAccessCheckAndAuditAlarm @ 0x14046B2C0
 * Callers:
 *     NtAccessCheckByTypeAndAuditAlarm @ 0x14046B17C (NtAccessCheckByTypeAndAuditAlarm.c)
 *     NtAccessCheckAndAuditAlarm @ 0x14046B228 (NtAccessCheckAndAuditAlarm.c)
 *     NtAccessCheckByTypeResultListAndAuditAlarm @ 0x1406F4E98 (NtAccessCheckByTypeResultListAndAuditAlarm.c)
 *     NtAccessCheckByTypeResultListAndAuditAlarmByHandle @ 0x1406F4F44 (NtAccessCheckByTypeResultListAndAuditAlarmByHandle.c)
 * Callees:
 *     SepLocateTokenTrustLevel @ 0x140013744 (SepLocateTokenTrustLevel.c)
 *     SeLogAccessFailure @ 0x14001BD60 (SeLogAccessFailure.c)
 *     SepFreeResourceInfo @ 0x14003E044 (SepFreeResourceInfo.c)
 *     SepLpacCausedAccessFailure @ 0x14003E110 (SepLpacCausedAccessFailure.c)
 *     SepTokenIsOwner @ 0x14003E128 (SepTokenIsOwner.c)
 *     SePrivilegePolicyCheck @ 0x14003E1B8 (SePrivilegePolicyCheck.c)
 *     SepMandatoryToDiscretionary @ 0x14003E338 (SepMandatoryToDiscretionary.c)
 *     SepFilterToDiscretionary @ 0x14003E35C (SepFilterToDiscretionary.c)
 *     SepTrustLevelCheck @ 0x14003E378 (SepTrustLevelCheck.c)
 *     RtlOwnerAcesPresent @ 0x14003E3F0 (RtlOwnerAcesPresent.c)
 *     SepConstrainByConstraintMask @ 0x14003E504 (SepConstrainByConstraintMask.c)
 *     SepConstrainByMandatory @ 0x14003E540 (SepConstrainByMandatory.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140065DA4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400897C0 (AuthzBasepEvaluateAceCondition.c)
 *     SepMandatoryIntegrityCheck @ 0x14008E320 (SepMandatoryIntegrityCheck.c)
 *     SepFilterCheck @ 0x14008E7E0 (SepFilterCheck.c)
 *     SepAccessCheck @ 0x14008E970 (SepAccessCheck.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     SeCaptureObjectTypeList @ 0x140093620 (SeCaptureObjectTypeList.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x1400EE140 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     SeTokenIsRestricted @ 0x14012B990 (SeTokenIsRestricted.c)
 *     memset @ 0x140192D80 (memset.c)
 *     SeFreeCapturedObjectTypeList @ 0x140246860 (SeFreeCapturedObjectTypeList.c)
 *     SepBuildCapeSecurityDescriptor @ 0x14024696C (SepBuildCapeSecurityDescriptor.c)
 *     SepCopyObjectTypeList @ 0x140246A0C (SepCopyObjectTypeList.c)
 *     SepGetScopedPolicySid @ 0x140246AC4 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x140246C14 (SepLogLpacAccessFailure.c)
 *     SepMergeObjectTypeListAccesses @ 0x140246D24 (SepMergeObjectTypeListAccesses.c)
 *     SepRmDereferenceCapTable @ 0x140246D54 (SepRmDereferenceCapTable.c)
 *     SepExamineGlobalSaclEx @ 0x1402476BC (SepExamineGlobalSaclEx.c)
 *     SepRmReferenceFindCap @ 0x140248A28 (SepRmReferenceFindCap.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepProbeAndCaptureString_U @ 0x14046C3CC (SepProbeAndCaptureString_U.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14046C4F0 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14046C68C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtAuditThisEventWithContext @ 0x14046C810 (SepAdtAuditThisEventWithContext.c)
 *     SeCheckAuditPrivilege @ 0x14046C8E4 (SeCheckAuditPrivilege.c)
 *     SeReleaseSid @ 0x140471664 (SeReleaseSid.c)
 *     SeCaptureSid @ 0x1404F32A8 (SeCaptureSid.c)
 *     SeLockSubjectContext @ 0x1405086C0 (SeLockSubjectContext.c)
 *     SeReleaseSecurityDescriptor @ 0x14050B570 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x14050B5A0 (SeCaptureSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140531170 (SeUnlockSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1406F3178 (SepAdtOpenObjectAuditAlarm.c)
 *     SepExamineSaclEx @ 0x1406F5B50 (SepExamineSaclEx.c)
 *     SepAuditFailed @ 0x1406F9D10 (SepAuditFailed.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SepAccessCheckAndAuditAlarm(
        __int64 a1,
        __int64 a2,
        void **a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *Src,
        int a8,
        int a9,
        char a10,
        unsigned __int64 a11,
        unsigned int a12,
        __int64 a13,
        unsigned int *a14,
        int *Address,
        _BYTE *a16,
        char a17)
{
  char *v20; // r15
  unsigned __int8 v21; // r14
  _DWORD *ClientToken; // r15
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // edi
  SIZE_T v26; // rdi
  unsigned __int8 v27; // si
  unsigned int *v28; // rsi
  __int16 v29; // cx
  __int64 v30; // rax
  char *v31; // rax
  __int64 v32; // rax
  char *v33; // rax
  __int64 v34; // rcx
  char v35; // r12
  __int64 v36; // rcx
  int v37; // r14d
  int v38; // eax
  char v39; // r13
  unsigned int v40; // r12d
  char IsOwner; // al
  char v42; // al
  unsigned int *v43; // rdx
  char *v44; // rdi
  __int64 v45; // r13
  int v46; // r13d
  int v47; // esi
  unsigned __int8 v48; // r11
  unsigned __int8 v49; // r10
  char v50; // al
  int v51; // ecx
  int v52; // edi
  char v53; // r8
  char v54; // r11
  int *v55; // r15
  int v56; // r14d
  char v57; // r12
  char v58; // di
  int *v59; // rcx
  unsigned int *v60; // rdx
  char *v61; // r13
  char *v62; // r8
  unsigned int v63; // ecx
  int *v64; // r9
  unsigned int *v65; // r10
  char v66; // r11
  int *v67; // r8
  unsigned int *v68; // rdx
  unsigned __int64 v69; // rdx
  char v70; // r12
  __int64 v71; // r8
  __int16 v73; // ax
  __int64 v74; // rax
  ACL *v75; // rcx
  int v76; // eax
  unsigned int v77; // eax
  unsigned int v78; // eax
  char *v79; // rsi
  char *v80; // r13
  unsigned int v81; // eax
  void *v82; // rcx
  int v83; // eax
  char *PoolWithTag; // r9
  unsigned int v85; // r14d
  char *v86; // r8
  unsigned int i; // edx
  __int64 v88; // rcx
  __int16 v89; // r8
  __int64 v90; // rax
  ACL *v91; // rax
  _BYTE *ScopedPolicySid; // rax
  int Cap; // eax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v94; // rdx
  char *v95; // r9
  unsigned int v96; // r14d
  char *v97; // r8
  unsigned int j; // edx
  __int64 v99; // rcx
  __int64 v100; // rdi
  unsigned int *v101; // rax
  char *v102; // rax
  char *v103; // r9
  int *v104; // r8
  __int64 v105; // rcx
  int v106; // eax
  __int64 v107; // r13
  _QWORD *v108; // rax
  void *v109; // r8
  void *v110; // rdx
  void *v111; // rcx
  void *v112; // r9
  int v113; // eax
  int v114; // esi
  _QWORD *v115; // rax
  void *v116; // r8
  void *v117; // rdx
  void *v118; // rcx
  void *v119; // r9
  unsigned int v120; // esi
  unsigned int v121; // r13d
  unsigned int v122; // r13d
  unsigned int v123; // edx
  unsigned int v124; // ecx
  char *v125; // r8
  _DWORD *v126; // r9
  unsigned int v127; // r14d
  struct _KTHREAD *CurrentThread; // rax
  char v129; // si
  char v130; // di
  ULONGLONG TokenTrustLevel; // rax
  __int64 v132; // rdx
  __int64 v133; // r8
  int PrimaryToken; // r10d
  __int16 v135; // r8
  unsigned int v136; // eax
  int v137; // eax
  __int64 v138; // rdx
  unsigned int v139; // ecx
  __int64 v140; // rcx
  unsigned int v141; // eax
  int v142; // r12d
  char *v143; // rdi
  char v144; // r14
  int v145; // r8d
  __int16 v146; // cx
  __int64 v147; // rdx
  unsigned int v148; // eax
  int v149; // r9d
  char v150; // cl
  __int64 v151; // r8
  __int64 *v152; // r10
  __int64 v153; // rdx
  __int64 *v154; // r8
  struct _LIST_ENTRY *Blink; // rcx
  int HandleInformation; // [rsp+28h] [rbp-250h]
  char v157; // [rsp+30h] [rbp-248h]
  unsigned int v158; // [rsp+40h] [rbp-238h]
  char v159; // [rsp+48h] [rbp-230h]
  char v160; // [rsp+A0h] [rbp-1D8h]
  char v161; // [rsp+A1h] [rbp-1D7h]
  unsigned __int8 v162; // [rsp+A2h] [rbp-1D6h] BYREF
  char v163; // [rsp+A3h] [rbp-1D5h] BYREF
  char v164; // [rsp+A4h] [rbp-1D4h]
  char v165; // [rsp+A5h] [rbp-1D3h]
  char v166; // [rsp+A6h] [rbp-1D2h]
  char v167; // [rsp+A7h] [rbp-1D1h]
  int v168; // [rsp+A8h] [rbp-1D0h]
  char v169; // [rsp+ACh] [rbp-1CCh]
  int v170; // [rsp+B0h] [rbp-1C8h] BYREF
  char v171; // [rsp+B4h] [rbp-1C4h] BYREF
  char v172; // [rsp+B5h] [rbp-1C3h]
  PVOID v173; // [rsp+B8h] [rbp-1C0h]
  PVOID v174; // [rsp+C0h] [rbp-1B8h]
  char v175; // [rsp+C8h] [rbp-1B0h] BYREF
  char v176; // [rsp+C9h] [rbp-1AFh] BYREF
  char v177[6]; // [rsp+CAh] [rbp-1AEh] BYREF
  PVOID v178; // [rsp+D0h] [rbp-1A8h] BYREF
  _WORD v179[2]; // [rsp+D8h] [rbp-1A0h] BYREF
  unsigned int v180; // [rsp+DCh] [rbp-19Ch] BYREF
  unsigned int v181; // [rsp+E0h] [rbp-198h] BYREF
  char v182; // [rsp+E4h] [rbp-194h]
  char v183; // [rsp+EAh] [rbp-18Eh]
  unsigned __int8 v184; // [rsp+EBh] [rbp-18Dh] BYREF
  char v185; // [rsp+ECh] [rbp-18Ch] BYREF
  char v186; // [rsp+EDh] [rbp-18Bh]
  char v187; // [rsp+EEh] [rbp-18Ah]
  char v188; // [rsp+EFh] [rbp-189h]
  int v189; // [rsp+F0h] [rbp-188h]
  int v190; // [rsp+F4h] [rbp-184h]
  int v191; // [rsp+F8h] [rbp-180h]
  char *v192; // [rsp+100h] [rbp-178h]
  int v193; // [rsp+108h] [rbp-170h]
  int v194; // [rsp+10Ch] [rbp-16Ch]
  __int64 v195; // [rsp+110h] [rbp-168h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+118h] [rbp-160h] BYREF
  ACL *v197; // [rsp+138h] [rbp-140h]
  int *v198; // [rsp+140h] [rbp-138h]
  PVOID v199; // [rsp+148h] [rbp-130h] BYREF
  _DWORD *v200; // [rsp+150h] [rbp-128h] BYREF
  int v201; // [rsp+158h] [rbp-120h] BYREF
  int v202; // [rsp+15Ch] [rbp-11Ch] BYREF
  unsigned int v203; // [rsp+160h] [rbp-118h]
  __int64 v204; // [rsp+168h] [rbp-110h] BYREF
  PVOID v205; // [rsp+170h] [rbp-108h] BYREF
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v206; // [rsp+178h] [rbp-100h] BYREF
  PVOID P; // [rsp+180h] [rbp-F8h] BYREF
  PVOID v208; // [rsp+188h] [rbp-F0h] BYREF
  int v209[2]; // [rsp+190h] [rbp-E8h] BYREF
  PVOID v210; // [rsp+198h] [rbp-E0h] BYREF
  __int64 v211; // [rsp+1A0h] [rbp-D8h] BYREF
  __int64 v212; // [rsp+1A8h] [rbp-D0h]
  __int64 v213; // [rsp+1B0h] [rbp-C8h]
  int v214; // [rsp+1B8h] [rbp-C0h]
  PVOID v215; // [rsp+1C0h] [rbp-B8h]
  PVOID Object[3]; // [rsp+1C8h] [rbp-B0h] BYREF
  void *v217; // [rsp+1E0h] [rbp-98h]
  __int64 v218; // [rsp+1E8h] [rbp-90h] BYREF
  __int64 v219; // [rsp+1F0h] [rbp-88h]
  char v220; // [rsp+1F8h] [rbp-80h] BYREF
  __int128 v221; // [rsp+200h] [rbp-78h] BYREF
  char v222; // [rsp+210h] [rbp-68h] BYREF
  _BYTE SecurityDescriptor[96]; // [rsp+218h] [rbp-60h] BYREF
  __int64 v224; // [rsp+288h] [rbp+10h] BYREF
  void **v225; // [rsp+290h] [rbp+18h]
  __int64 v226; // [rsp+298h] [rbp+20h]

  v226 = a4;
  v225 = a3;
  v224 = a2;
  v168 = 0;
  v181 = 0;
  v20 = 0LL;
  v173 = 0LL;
  v172 = 0;
  v170 = -1073741823;
  v174 = 0LL;
  v198 = 0LL;
  v190 = 0;
  v182 = 0;
  P = 0LL;
  v199 = 0LL;
  v208 = 0LL;
  v178 = 0LL;
  v204 = 0LL;
  v195 = 0LL;
  v180 = 0;
  v205 = 0LL;
  v177[0] = 0;
  v171 = 0;
  v186 = 0;
  v169 = 0;
  v165 = 0;
  v184 = 1;
  v185 = 0;
  v215 = 0LL;
  v217 = 0LL;
  v187 = 0;
  v218 = 0LL;
  v219 = 0LL;
  v209[1] = 0;
  v197 = 0LL;
  memset(SecurityDescriptor, 0, 0x28uLL);
  v206 = 0LL;
  v161 = 0;
  v167 = 0;
  v164 = 0;
  v188 = 0;
  v179[0] = 999;
  v211 = 0LL;
  v212 = 0LL;
  v213 = 0LL;
  v214 = 0;
  v166 = 0;
  v191 = 0;
  v200 = 0LL;
  v189 = 0;
  v183 = 0;
  v175 = 0;
  v176 = 0;
  v210 = 0LL;
  v202 = -1;
  v209[0] = -1;
  v21 = KeGetCurrentThread()->gap0[10];
  v160 = v21;
  v177[1] = v21;
  SeCaptureSubjectContext(&SubjectContext);
  if ( a9 )
  {
    if ( a9 != 1 )
    {
      v25 = -1073741811;
      goto LABEL_377;
    }
    v193 = 7;
  }
  else
  {
    v193 = 2;
  }
  ClientToken = SubjectContext.ClientToken;
  if ( a3 )
    goto LABEL_6;
  if ( !SubjectContext.ClientToken )
  {
    v25 = -1073741732;
    v20 = 0LL;
LABEL_377:
    v70 = 0;
    v61 = 0LL;
    goto LABEL_378;
  }
  if ( SubjectContext.ImpersonationLevel < SecurityIdentification )
  {
    v25 = -1073741659;
    v20 = 0LL;
    goto LABEL_377;
  }
LABEL_6:
  if ( a17 )
  {
    if ( !a12 || a12 > 0x1000 )
    {
      v25 = -1073741811;
      v168 = -1073741811;
      goto LABEL_19;
    }
    v26 = 4LL * a12;
    ProbeForWrite(Address, v26, 4u);
    ProbeForWrite(a14, v26, 4u);
  }
  else
  {
    v23 = (__int64)Address;
    if ( (unsigned __int64)Address >= 0x7FFFFFFF0000LL )
      v23 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v23 = *(_DWORD *)v23;
    v24 = (__int64)a14;
    if ( (unsigned __int64)a14 >= 0x7FFFFFFF0000LL )
      v24 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v24 = *(_DWORD *)v24;
  }
  if ( (a13 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v221 = *(_OWORD *)a13;
  v25 = v168;
  ClientToken = SubjectContext.ClientToken;
LABEL_19:
  if ( v25 < 0 )
    goto LABEL_186;
  if ( !a3 )
  {
    v27 = v21;
LABEL_22:
    if ( !ClientToken )
      ClientToken = SubjectContext.PrimaryToken;
    Object[2] = ClientToken;
    if ( (unsigned __int8)SeCheckAuditPrivilege(&SubjectContext, v27) )
    {
LABEL_25:
      if ( (a8 & 0xF0000000) != 0 )
      {
        v25 = -1073741594;
        v20 = (char *)v173;
        v70 = (char)v173;
        v61 = (char *)v173;
        goto LABEL_378;
      }
      v25 = SeCaptureSecurityDescriptor(a6, v27, 1LL, 0LL);
      v168 = v25;
      if ( v25 < 0 )
      {
        v28 = 0LL;
        goto LABEL_189;
      }
      v28 = (unsigned int *)v178;
      if ( v178 )
      {
        v29 = *((_WORD *)v178 + 1);
        if ( v29 >= 0 )
        {
          v31 = (char *)*((_QWORD *)v178 + 1);
        }
        else
        {
          v30 = *((unsigned int *)v178 + 1);
          if ( !(_DWORD)v30 )
            goto LABEL_191;
          v31 = (char *)v178 + v30;
        }
        if ( v31 )
        {
          if ( v29 >= 0 )
          {
            v33 = (char *)*((_QWORD *)v178 + 2);
          }
          else
          {
            v32 = *((unsigned int *)v178 + 2);
            if ( !(_DWORD)v32 )
              goto LABEL_191;
            v33 = (char *)v178 + v32;
          }
          if ( v33 )
          {
            v34 = (__int64)a16;
            if ( (unsigned __int64)a16 >= 0x7FFFFFFF0000LL )
              v34 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v34 = *(_BYTE *)v34;
            v25 = SepProbeAndCaptureString_U(a1, &P);
            v168 = v25;
            if ( v25 >= 0 )
            {
              v25 = SepProbeAndCaptureString_U(a4, &v199);
              v168 = v25;
              if ( v25 >= 0 )
              {
                v25 = SepProbeAndCaptureString_U(a5, &v208);
                v168 = v25;
              }
            }
            v35 = v166;
            if ( v25 >= 0 )
            {
              if ( Src )
              {
                v25 = SeCaptureSid(Src, (int)&v178, 1, (__int64)&v204);
                if ( v25 < 0 )
                {
                  v204 = 0LL;
                  v20 = (char *)v173;
                  v70 = (char)v173;
                  v61 = (char *)v173;
                  goto LABEL_378;
                }
              }
              v25 = SeCaptureObjectTypeList(a11, a12, v21, &v195);
              if ( v25 >= 0 )
              {
                v28 = (unsigned int *)v178;
                v25 = SepTrustLevelCheck(v36, (__int64)v178, &SubjectContext, 0LL, 0LL, 1, &v202);
                if ( v25 < 0 )
                {
LABEL_190:
                  v20 = (char *)v173;
                  v70 = (char)v173;
                  v61 = (char *)v173;
                  goto LABEL_116;
                }
                v37 = a8;
                v25 = SepFilterToDiscretionary(&v202, a8);
                v168 = v25;
                if ( v25 < 0 )
                {
                  v175 = 1;
LABEL_49:
                  if ( v25 < 0 )
                    goto LABEL_202;
                  v25 = SepMandatoryIntegrityCheck(&v221, (__int64)v28, 0, (__int64)ClientToken, 1, (__int64)&v218);
                  if ( v25 >= 0 )
                  {
                    v38 = SepMandatoryToDiscretionary(&v218, v37);
                    v25 = v38;
                    v168 = v38;
                    if ( (v38 < 0 || (v37 & 0x2000000) != 0)
                      && (ClientToken[50] & 0x4000) != 0
                      && HIDWORD(v219) <= 0x2000 )
                    {
                      v35 = 1;
                      v166 = 1;
                    }
                    if ( v38 >= 0 || v35 )
                    {
                      v39 = v160;
                      v25 = SePrivilegePolicyCheck(&a8, &v180, (__int64 *)&SubjectContext, 0, (__int64)&v205, v160);
                      v168 = v25;
                      v37 = a8;
                      if ( !a8 )
                      {
                        v83 = (unsigned __int8)v189;
                        v40 = v180;
                        if ( v180 )
                          v83 = 1;
                        v189 = v83;
LABEL_56:
                        SeLockSubjectContext(&SubjectContext);
                        if ( v25 < 0 && !v166 )
                        {
                          v49 = 0;
                          v162 = 0;
                          v48 = 1;
                          v163 = 1;
                          v46 = v25;
                          v170 = v25;
                          if ( a17 )
                          {
                            PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * a12, 0x61476553u);
                            v173 = PoolWithTag;
                            if ( !PoolWithTag )
                            {
                              SeUnlockSubjectContext(&SubjectContext);
                              v25 = -1073741670;
LABEL_208:
                              v21 = v160;
                              v20 = (char *)v173;
                              v70 = v161;
                              v61 = (char *)v174;
                              goto LABEL_116;
                            }
                            v172 = 1;
                            v85 = a12;
                            v86 = &PoolWithTag[4 * a12];
                            v192 = v86;
                            for ( i = 0; i < v85; ++i )
                            {
                              v88 = 4LL * i;
                              *(_DWORD *)&PoolWithTag[v88] = v181;
                              *(_DWORD *)&v86[v88] = v25;
                            }
                            goto LABEL_212;
                          }
                          v173 = &v181;
                          v192 = (char *)&v170;
LABEL_72:
                          if ( ClientToken )
                          {
                            if ( v175
                              || v176
                              || !HIDWORD(v212)
                              && (ClientToken[50] & 0x4000) != 0
                              && v25 >= 0
                              && (v46 < 0 || BYTE3(v213)) )
                            {
                              CurrentThread = KeGetCurrentThread();
                              --CurrentThread->KernelApcDisable;
                              ExAcquireResourceSharedLite(*((PERESOURCE *)ClientToken + 6), 1u);
                              v129 = v170 >= 0;
                              v130 = a8 | v180;
                              TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)&SubjectContext);
                              SeLogAccessFailure(
                                (__int64)ClientToken,
                                v132,
                                v133,
                                TokenTrustLevel,
                                (ULONGLONG)v178,
                                v130,
                                v129);
                              ExReleaseResourceLite(*((PERESOURCE *)ClientToken + 6));
                              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                              v37 = a8;
                              v25 = v168;
                              v46 = v170;
                              v28 = (unsigned int *)v178;
                              v40 = v180;
                            }
                            if ( SepLpacCausedAccessFailure((__int64)&v211, (__int64)ClientToken) && v25 >= 0 && v46 < 0 )
                            {
                              SepLogLpacAccessFailure(v51);
                              v49 = v162;
                              v48 = v163;
                            }
                          }
                          if ( v186 )
                            goto LABEL_90;
                          v52 = v193;
                          if ( v193 == 2 )
                          {
                            if ( v49 )
                            {
                              LOBYTE(HandleInformation) = 0;
                              v169 = SepAdtAuditObjectAccessWithContext(
                                       0LL,
                                       v199,
                                       v49,
                                       0LL,
                                       &SubjectContext,
                                       HandleInformation,
                                       v179);
                              v48 = v163;
                            }
                            if ( !v48 )
                              goto LABEL_83;
                            LOBYTE(HandleInformation) = 0;
                            v53 = SepAdtAuditObjectAccessWithContext(
                                    0LL,
                                    v199,
                                    0LL,
                                    v48,
                                    &SubjectContext,
                                    HandleInformation,
                                    v179);
                            v165 = v53;
                          }
                          else
                          {
                            if ( v49 )
                            {
                              v179[0] = 151;
                              v169 = SepAdtAuditThisEventWithContext(151LL, v49, 0LL, &SubjectContext);
                              v48 = v163;
                            }
                            if ( !v48 )
                            {
                              v52 = v193;
LABEL_83:
                              v53 = v165;
                              goto LABEL_84;
                            }
                            v179[0] = 151;
                            v53 = SepAdtAuditThisEventWithContext(151LL, 0LL, v48, &SubjectContext);
                            v165 = v53;
                            v52 = v193;
                          }
LABEL_84:
                          v54 = v169;
                          if ( v169 || v53 )
                          {
                            PrimaryToken = (int)SubjectContext.PrimaryToken;
                            if ( SubjectContext.ClientToken )
                              PrimaryToken = (int)SubjectContext.ClientToken;
                            v135 = *((_WORD *)v28 + 1);
                            v136 = (unsigned __int16)v135;
                            LOWORD(v136) = ~v135;
                            v137 = (v136 >> 4) & 1;
                            if ( v137 )
                            {
                              LODWORD(v138) = 0;
                            }
                            else if ( v135 >= 0 )
                            {
                              v138 = *((_QWORD *)v28 + 3);
                            }
                            else
                            {
                              v139 = v28[3];
                              if ( v139 )
                                LODWORD(v138) = (_DWORD)v28 + v139;
                              else
                                LODWORD(v138) = 0;
                            }
                            if ( v137 )
                            {
                              LODWORD(v140) = 0;
                            }
                            else if ( v135 >= 0 )
                            {
                              v140 = *((_QWORD *)v28 + 3);
                            }
                            else
                            {
                              v141 = v28[3];
                              if ( v141 )
                                LODWORD(v140) = (_DWORD)v28 + v141;
                              else
                                LODWORD(v140) = 0;
                            }
                            v142 = v37 | v40;
                            v55 = (int *)v173;
                            v143 = v192;
                            v144 = a17;
                            SepExamineSaclEx(
                              v140,
                              v138,
                              PrimaryToken,
                              v142,
                              v195,
                              a12,
                              a17,
                              (__int64)v192,
                              (__int64)v173,
                              v204,
                              v164,
                              (__int64)v177,
                              (__int64)&v171);
                            v145 = (int)SubjectContext.PrimaryToken;
                            if ( SubjectContext.ClientToken )
                              v145 = (int)SubjectContext.ClientToken;
                            v146 = *((_WORD *)v28 + 1);
                            if ( (~(_BYTE)v146 & 0x10) != 0 )
                            {
                              LODWORD(v147) = 0;
                            }
                            else if ( v146 >= 0 )
                            {
                              v147 = *((_QWORD *)v28 + 3);
                            }
                            else
                            {
                              v148 = v28[3];
                              if ( v148 )
                                LODWORD(v147) = (_DWORD)v28 + v148;
                              else
                                LODWORD(v147) = 0;
                            }
                            v157 = v144;
                            v56 = a12;
                            SepExamineGlobalSaclEx(
                              (__int64)v199,
                              v147,
                              v145,
                              v142,
                              v195,
                              a12,
                              v157,
                              (__int64)v143,
                              (__int64)v55,
                              v204,
                              v164,
                              v177,
                              &v171);
                            v52 = v193;
                            v54 = v169;
                            v53 = v165;
                          }
                          else
                          {
                            v55 = (int *)v173;
                            v56 = a12;
                          }
                          if ( v177[0] || v171 )
                          {
                            v149 = (unsigned __int8)v190;
                            v150 = v162;
                            if ( v162 )
                              v149 = 1;
                            v190 = v149;
                            v57 = a17;
                            if ( v177[0] && v54 )
                            {
                              v151 = 0LL;
                              if ( a17 )
                                v151 = (__int64)v55;
                              v152 = &v224;
                              if ( !v162 )
                                LODWORD(v152) = 0;
                              v28 = (unsigned int *)v178;
                              SepAdtOpenObjectAuditAlarm(
                                v179[0],
                                (int)P,
                                (int)v152,
                                (int)v199,
                                (__int64)v208,
                                v178,
                                (__int64)SubjectContext.ClientToken,
                                (__int64)SubjectContext.PrimaryToken,
                                *v55,
                                *v55,
                                (__int64)v205,
                                1,
                                (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
                                v52,
                                v195,
                                v56,
                                v151,
                                0LL,
                                0LL);
                              v46 = v170;
                              v150 = v162;
                              v53 = v165;
                            }
                            if ( v171 && v53 )
                            {
                              v153 = 0LL;
                              if ( v57 )
                                v153 = (__int64)v55;
                              v154 = &v224;
                              if ( !v150 )
                                LODWORD(v154) = 0;
                              v28 = (unsigned int *)v178;
                              SepAdtOpenObjectAuditAlarm(
                                v179[0],
                                (int)P,
                                (int)v154,
                                (int)v199,
                                (__int64)v208,
                                v178,
                                (__int64)SubjectContext.ClientToken,
                                (__int64)SubjectContext.PrimaryToken,
                                a8,
                                a8,
                                (__int64)v205,
                                0,
                                (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
                                v52,
                                v195,
                                v56,
                                v153,
                                0LL,
                                0LL);
                              v46 = v170;
                            }
                            goto LABEL_91;
                          }
                          if ( v205 && v162 )
                          {
                            SepAdtPrivilegeObjectAuditAlarm(
                              (_DWORD)P,
                              (_DWORD)v199,
                              (_DWORD)v208,
                              (unsigned int)&v224,
                              (__int64)SubjectContext.ClientToken,
                              (__int64)SubjectContext.PrimaryToken,
                              (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
                              a8,
                              (__int64)v205,
                              v162);
                            v58 = 0;
                            v46 = v170;
                            v28 = (unsigned int *)v178;
                            v57 = a17;
LABEL_92:
                            SeUnlockSubjectContext(&SubjectContext);
                            if ( v57 )
                            {
                              v62 = v192;
                              v63 = 0;
                              v203 = 0;
                              v64 = Address;
                              v65 = a14;
                              v66 = v167;
                              if ( v192 )
                              {
                                v20 = (char *)v173;
                                v61 = (char *)v174;
                                while ( v63 < a12 )
                                {
                                  v69 = v63;
                                  v64[v69] = *(_DWORD *)&v62[v69 * 4];
                                  v65[v69] = *(_DWORD *)&v20[v69 * 4];
                                  if ( SepRmEnforceCap && v66 && *(int *)&v62[v69 * 4] >= 0 )
                                  {
                                    v64[v69] = v198[v69];
                                    v65[v69] &= *(_DWORD *)&v61[v69 * 4];
                                  }
                                  v203 = ++v63;
                                  v28 = (unsigned int *)v178;
                                }
                                goto LABEL_115;
                              }
                              while ( v63 < a12 )
                              {
                                v67 = &v64[v63];
                                *v67 = v46;
                                v68 = &v65[v63];
                                *v68 = v181;
                                if ( SepRmEnforceCap && v66 )
                                {
                                  v46 = v170;
                                  if ( v170 >= 0 )
                                  {
                                    *v67 = v170;
                                    *v68 &= v181;
                                  }
                                }
                                else
                                {
                                  v46 = v170;
                                }
                                v203 = ++v63;
                                v28 = (unsigned int *)v178;
                              }
                            }
                            else
                            {
                              v59 = Address;
                              *Address = v46;
                              v60 = a14;
                              *a14 = v181;
                              if ( SepRmEnforceCap && v167 && v170 >= 0 )
                              {
                                *v59 = *v198;
                                v61 = (char *)v174;
                                *v60 &= *(_DWORD *)v174;
                                v28 = (unsigned int *)v178;
                                goto LABEL_96;
                              }
                              v28 = (unsigned int *)v178;
                            }
                            v61 = (char *)v174;
LABEL_96:
                            v20 = (char *)v173;
LABEL_115:
                            *a16 = v58;
                            v25 = 0;
                            v168 = 0;
                            v21 = v160;
                            v70 = v161;
                            goto LABEL_116;
                          }
LABEL_90:
                          v57 = a17;
LABEL_91:
                          v58 = v190;
                          goto LABEL_92;
                        }
                        IsOwner = SepTokenIsOwner((__int64)ClientToken);
                        v164 = IsOwner;
                        v28 = (unsigned int *)v178;
                        if ( !SepRmEnforceCap )
                          goto LABEL_58;
                        v89 = *((_WORD *)v178 + 1);
                        if ( (v89 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
                          goto LABEL_58;
                        if ( (v89 & 0x10) == 0 )
                        {
                          v197 = 0LL;
LABEL_58:
                          v25 = v168;
                          goto LABEL_59;
                        }
                        if ( v89 >= 0 )
                        {
                          v91 = (ACL *)*((_QWORD *)v178 + 3);
                        }
                        else
                        {
                          v90 = *((unsigned int *)v178 + 3);
                          if ( !(_DWORD)v90 )
                          {
                            v197 = 0LL;
LABEL_228:
                            IsOwner = v164;
                            goto LABEL_58;
                          }
                          v91 = (ACL *)((char *)v178 + v90);
                        }
                        v197 = v91;
                        if ( v91 )
                        {
                          ScopedPolicySid = SepGetScopedPolicySid(v91);
                          if ( ScopedPolicySid )
                          {
                            Cap = SepRmReferenceFindCap(ScopedPolicySid, &v206);
                            v94 = v206;
                            if ( Cap < 0 )
                              v94 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)SepRmDefaultCap;
                            v206 = v94;
                            v25 = 0;
                            v168 = 0;
                            v161 = 1;
                            IsOwner = v164;
LABEL_59:
                            v37 = a8;
                            if ( (a8 & 0x2060000) != 0
                              && IsOwner
                              && ((v73 = *((_WORD *)v28 + 1), (v73 & 4) == 0)
                                ? (v75 = 0LL)
                                : v73 >= 0
                                ? (v75 = (ACL *)*((_QWORD *)v28 + 4))
                                : (v74 = v28[4], !(_DWORD)v74)
                                ? (v75 = 0LL)
                                : (v75 = (ACL *)((char *)v28 + v74)),
                                  !RtlOwnerAcesPresent(v75)) )
                            {
                              if ( (v37 & 0x2000000) != 0 )
                                v76 = 393216;
                              else
                                v76 = v37 & 0x60000;
                              v40 = v76 | v180;
                              v180 |= v76;
                              v191 = v76;
                              v37 &= 0xFFF9FFFF;
                              a8 = v37;
                            }
                            else
                            {
                              v40 = v180;
                            }
                            if ( !v37 && (!v161 || (_BYTE)v189) && ((ClientToken[50] & 0x2000) != 0 || !v191) )
                            {
                              v181 = v40;
                              if ( v40 )
                              {
                                v49 = 1;
                                v48 = 0;
                                v46 = 0;
                                v170 = 0;
                              }
                              else
                              {
                                v49 = 0;
                                v48 = 1;
                                v46 = -1073741790;
                                v170 = -1073741790;
                              }
                              v163 = v48;
                              v162 = v49;
                              if ( !a17 )
                              {
                                v173 = &v181;
                                v192 = (char *)&v170;
                                goto LABEL_72;
                              }
                              v95 = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * a12, 0x61476553u);
                              v173 = v95;
                              if ( v95 )
                              {
                                v172 = 1;
                                v96 = a12;
                                v97 = &v95[4 * a12];
                                v192 = v97;
                                for ( j = 0; j < v96; ++j )
                                {
                                  v99 = 4LL * j;
                                  *(_DWORD *)&v95[v99] = v181;
                                  *(_DWORD *)&v97[v99] = v46;
                                }
LABEL_212:
                                v37 = a8;
                                v49 = v162;
                                v48 = v163;
                                goto LABEL_72;
                              }
LABEL_207:
                              v25 = -1073741670;
                              SeUnlockSubjectContext(&SubjectContext);
                              goto LABEL_208;
                            }
                            v42 = a17;
                            if ( a17 )
                            {
                              v100 = a12;
                              v101 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 8LL * a12, 0x61476553u);
                              v43 = v101;
                              v173 = v101;
                              if ( !v101 )
                                goto LABEL_207;
                              v172 = 1;
                              v44 = (char *)&v101[v100];
                              v42 = a17;
                            }
                            else
                            {
                              v43 = &v181;
                              v173 = &v181;
                              v44 = (char *)&v170;
                            }
                            v192 = v44;
                            LODWORD(v211) = v191;
                            v159 = v39;
                            v45 = a12;
                            SepAccessCheck(
                              (__int64)v28,
                              v204,
                              (__int64)SubjectContext.PrimaryToken,
                              (__int64)ClientToken,
                              v37,
                              (_QWORD *)v195,
                              a12,
                              &v221,
                              v40,
                              v159,
                              v43,
                              0LL,
                              (int *)v44,
                              v42,
                              v164,
                              (int *)&v211,
                              (__int64)&v200,
                              (char *)&v162,
                              &v163);
                            if ( SepRmEnforceCap && *(int *)v44 >= 0 && (v70 = v161) != 0 )
                            {
                              if ( a17 )
                              {
                                v102 = (char *)ExAllocatePoolWithTag(PagedPool, 8 * v45, 0x61476553u);
                                v103 = v102;
                                v174 = v102;
                                if ( !v102 )
                                {
                                  SeUnlockSubjectContext(&SubjectContext);
                                  SeReleaseSubjectContext(&SubjectContext);
                                  v25 = -1073741670;
                                  v21 = v160;
                                  v20 = (char *)v173;
                                  v61 = (char *)v174;
                                  goto LABEL_378;
                                }
                                v104 = (int *)&v102[4 * v45];
                              }
                              else
                              {
                                v103 = &v220;
                                v174 = &v220;
                                v104 = (int *)&v222;
                              }
                              v198 = v104;
                              if ( (_DWORD)v45 )
                              {
                                v25 = SepCopyObjectTypeList(v195, v45, &v210);
                                v168 = v25;
                                if ( v25 < 0 )
                                {
                                  v21 = v160;
                                  v20 = (char *)v173;
                                  v61 = (char *)v174;
                                  goto LABEL_378;
                                }
                                v103 = (char *)v174;
                              }
                              else
                              {
                                v25 = v168;
                              }
                              LOBYTE(v28) = 0;
                              v189 = (int)v28;
                              v105 = 0LL;
                              v37 = a8;
                              v40 = v180;
                              v106 = a9;
                              while ( 1 )
                              {
                                v194 = v105;
                                if ( (unsigned int)v105 >= HIDWORD(v206[2].Linkage.Blink) )
                                  break;
                                v107 = *(&v206[2].Signature + v105);
                                Object[0] = (PVOID)v107;
                                if ( !*(_QWORD *)(v107 + 24) )
                                  goto LABEL_294;
                                if ( !v200 )
                                {
                                  LODWORD(v28) = (unsigned __int8)v28;
                                  if ( (int)AuthzBasepInitializeResourceClaimsFromSacl((__int64)v197, &v200) < 0 )
                                    LODWORD(v28) = 1;
                                  v189 = (int)v28;
                                }
                                v108 = (_QWORD *)*((_QWORD *)ClientToken + 137);
                                v109 = v108 ? (void *)v108[75] : 0LL;
                                v110 = v108 ? (void *)v108[73] : 0LL;
                                v111 = v108 ? (void *)v108[74] : 0LL;
                                v112 = v108 ? (void *)v108[72] : 0LL;
                                v113 = AuthzBasepEvaluateAceCondition(
                                         ClientToken,
                                         *((void **)ClientToken + 97),
                                         v200,
                                         v112,
                                         v111,
                                         v110,
                                         v109,
                                         *(_DWORD **)(v107 + 24),
                                         *(_DWORD *)(v107 + 16),
                                         1u,
                                         0,
                                         &v201);
                                v25 = v113;
                                v168 = v113;
                                v114 = v201;
                                if ( v201 == 1 )
                                  goto LABEL_294;
                                if ( v113 < 0 )
                                  goto LABEL_308;
                                if ( SeTokenIsRestricted(ClientToken) )
                                {
                                  v115 = (_QWORD *)*((_QWORD *)ClientToken + 137);
                                  if ( v115 )
                                    v116 = (void *)v115[75];
                                  else
                                    v116 = 0LL;
                                  if ( v115 )
                                    v117 = (void *)v115[73];
                                  else
                                    v117 = 0LL;
                                  if ( v115 )
                                    v118 = (void *)v115[74];
                                  else
                                    v118 = 0LL;
                                  if ( v115 )
                                    v119 = (void *)v115[72];
                                  else
                                    v119 = 0LL;
                                  v25 = AuthzBasepEvaluateAceCondition(
                                          ClientToken,
                                          *((void **)ClientToken + 97),
                                          v200,
                                          v119,
                                          v118,
                                          v117,
                                          v116,
                                          *(_DWORD **)(v107 + 24),
                                          *(_DWORD *)(v107 + 16),
                                          1u,
                                          1u,
                                          &v201);
                                  v168 = v25;
                                  if ( v25 < 0 )
                                    goto LABEL_308;
                                  v114 = v201;
                                }
                                if ( (_BYTE)v189 || v114 == 1 )
                                {
LABEL_294:
                                  if ( (*(_DWORD *)(v107 + 48) & 1) != 0 )
                                  {
                                    if ( (v37 & 0x2000000) != 0 )
                                      v120 = v37;
                                    else
                                      v120 = v37 | v40;
                                    v121 = 0;
                                  }
                                  else
                                  {
                                    v120 = v37;
                                    v121 = v40;
                                  }
                                  v25 = SepBuildCapeSecurityDescriptor(
                                          SecurityDescriptor,
                                          *((unsigned __int8 **)Object[0] + 4),
                                          v197);
                                  v168 = v25;
                                  if ( v25 < 0 )
                                  {
LABEL_308:
                                    v21 = v160;
                                    v20 = (char *)v173;
                                    v70 = v161;
                                    v61 = (char *)v174;
                                    goto LABEL_378;
                                  }
                                  v158 = v121;
                                  v122 = a12;
                                  SepAccessCheck(
                                    (__int64)SecurityDescriptor,
                                    v204,
                                    (__int64)SubjectContext.PrimaryToken,
                                    (__int64)SubjectContext.ClientToken,
                                    v120,
                                    v210,
                                    a12,
                                    &v221,
                                    v158,
                                    v160,
                                    (unsigned int *)v174,
                                    0LL,
                                    v198,
                                    a17,
                                    v164,
                                    (int *)&v211,
                                    (__int64)&v200,
                                    (char *)&v184,
                                    &v185);
                                  v103 = (char *)v174;
                                  if ( v167 )
                                    v106 = *(_DWORD *)v174 & a9;
                                  else
                                    v106 = *(_DWORD *)v174;
                                  a9 = v106;
                                  if ( v210 )
                                  {
                                    SepMergeObjectTypeListAccesses(v195, (__int64)v210, v122);
                                    v106 = a9;
                                    v103 = (char *)v174;
                                  }
                                  v167 = 1;
                                }
                                else
                                {
                                  v106 = a9;
                                  v103 = (char *)v174;
                                }
                                v105 = (unsigned int)(v194 + 1);
                                LOBYTE(v28) = v189;
                              }
                              v162 = v184;
                              v163 = v185;
                              *(_DWORD *)v103 &= v106;
                              v46 = -1073741790;
                              if ( !v106 )
                              {
                                *v198 = -1073741790;
                                v162 = 0;
                                v163 = 1;
                              }
                            }
                            else
                            {
                              v46 = -1073741790;
                              v37 = a8;
                              v25 = v168;
                              v40 = v180;
                            }
                            v47 = v37 & 0x2000000;
                            if ( (v37 & 0x2000000) != 0 )
                            {
                              if ( !v166
                                || !*(_WORD *)((char *)&v213 + 1)
                                && !ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator() )
                              {
                                if ( a17 )
                                  v77 = a12;
                                else
                                  v77 = 0;
                                SepConstrainByMandatory((__int64)&v218, v37, (char *)v173, v192, 0LL, v77);
                              }
                            }
                            else if ( v166 && !*(_WORD *)((char *)&v213 + 1) )
                            {
                              if ( !ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator() || HIDWORD(v212) )
                              {
                                v49 = 0;
                                v162 = 0;
                                v48 = 1;
                                v163 = 1;
                                v123 = 0;
                                v181 = 0;
                                v170 = -1073741790;
                                v50 = a17;
                                if ( !a17 )
                                  goto LABEL_70;
                                v124 = 0;
                                v125 = v192;
                                v126 = v173;
                                v127 = a12;
                                while ( v124 < v127 )
                                {
                                  v126[v124] = v123;
                                  *(_DWORD *)&v125[4 * v124++] = v46;
                                  v123 = v181;
                                  v46 = v170;
                                }
                                v37 = a8;
                              }
                              else
                              {
                                BYTE3(v213) = 1;
                                v49 = 1;
                                v162 = 1;
                                v48 = 0;
                                v163 = 0;
                                v181 = v37;
                                v46 = 0;
                                v170 = 0;
                              }
LABEL_69:
                              v50 = a17;
LABEL_70:
                              if ( v47 )
                              {
                                if ( v50 )
                                  v78 = a12;
                                else
                                  v78 = 0;
                                v79 = v192;
                                v80 = (char *)v173;
                                SepConstrainByConstraintMask(v202, v37, (char *)v173, v192, 0LL, v78, &v175);
                                if ( a17 )
                                  v81 = a12;
                                else
                                  v81 = 0;
                                SepConstrainByConstraintMask(v209[0], v37, v80, v79, 0LL, v81, &v176);
                                v46 = v170;
                                v49 = v162;
                                v48 = v163;
                              }
                              v28 = (unsigned int *)v178;
                              goto LABEL_72;
                            }
                            v48 = v163;
                            v49 = v162;
                            v46 = v170;
                            goto LABEL_69;
                          }
                        }
                        goto LABEL_228;
                      }
LABEL_55:
                      v40 = v180;
                      goto LABEL_56;
                    }
LABEL_202:
                    v39 = v160;
                    goto LABEL_55;
                  }
                  goto LABEL_189;
                }
                v25 = SepFilterCheck((__int64)v28, (void **)&v200, ClientToken, 1, v209);
                if ( v25 >= 0 )
                {
                  v25 = SepFilterToDiscretionary(v209, v37);
                  v168 = v25;
                  if ( v25 < 0 )
                    v176 = 1;
                  goto LABEL_49;
                }
LABEL_189:
                v21 = v160;
                goto LABEL_190;
              }
            }
            goto LABEL_186;
          }
        }
      }
LABEL_191:
      v25 = -1073741703;
      v20 = (char *)v173;
      v70 = (char)v173;
      v61 = (char *)v173;
      goto LABEL_116;
    }
    if ( (a10 & 1) != 0 )
    {
      v186 = 1;
      goto LABEL_25;
    }
    v25 = -1073741727;
LABEL_186:
    v20 = (char *)v173;
    v70 = (char)v173;
    v61 = (char *)v173;
LABEL_378:
    v28 = (unsigned int *)v178;
    goto LABEL_116;
  }
  v82 = *a3;
  v27 = v21;
  v25 = ObReferenceObjectByHandle(v82, 8u, (POBJECT_TYPE)SeTokenObjectType, v21, Object, 0LL);
  v215 = Object[0];
  if ( v25 >= 0 )
  {
    v217 = ClientToken;
    ClientToken = Object[0];
    SubjectContext.ClientToken = Object[0];
    v187 = 1;
    goto LABEL_22;
  }
  v215 = 0LL;
  v28 = (unsigned int *)v178;
  v20 = (char *)v173;
  v70 = (char)v173;
  v61 = (char *)v173;
  if ( v25 != -1073741816 )
    v188 = 1;
LABEL_116:
  if ( v187 )
  {
    ObfDereferenceObject(v215);
    SubjectContext.ClientToken = v217;
  }
  if ( v205 )
    ExFreePoolWithTag(v205, 0);
  SeReleaseSubjectContext(&SubjectContext);
  SeReleaseSecurityDescriptor(v28, v21, 0LL);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v199 )
    ExFreePoolWithTag(v199, 0);
  if ( v208 )
    ExFreePoolWithTag(v208, 0);
  if ( v204 )
  {
    LOBYTE(v71) = 1;
    SeReleaseSid(v204, v21, v71);
  }
  if ( v195 )
    SeFreeCapturedObjectTypeList((void *)v195);
  if ( v172 )
  {
    if ( v20 )
      ExFreePoolWithTag(v20, 0);
    if ( v61 )
      ExFreePoolWithTag(v61, 0);
  }
  if ( v70 )
  {
    Blink = v206[1].Linkage.Blink;
    if ( Blink )
      SepRmDereferenceCapTable((volatile signed __int64 *)Blink);
  }
  if ( v210 )
    ExFreePoolWithTag(v210, 0);
  SepFreeResourceInfo(v200);
  if ( v25 == -1073741670 || v188 )
    SepAuditFailed((unsigned int)v25);
  return (unsigned int)v25;
}
