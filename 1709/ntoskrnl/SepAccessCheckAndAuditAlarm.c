/*
 * XREFs of SepAccessCheckAndAuditAlarm @ 0x14046A8D0
 * Callers:
 *     NtAccessCheckByTypeAndAuditAlarm @ 0x14046A798 (NtAccessCheckByTypeAndAuditAlarm.c)
 *     NtAccessCheckAndAuditAlarm @ 0x14046A844 (NtAccessCheckAndAuditAlarm.c)
 *     NtAccessCheckByTypeResultListAndAuditAlarm @ 0x14072C8E4 (NtAccessCheckByTypeResultListAndAuditAlarm.c)
 *     NtAccessCheckByTypeResultListAndAuditAlarmByHandle @ 0x14072C990 (NtAccessCheckByTypeResultListAndAuditAlarmByHandle.c)
 * Callees:
 *     SepFreeResourceInfo @ 0x1400150FC (SepFreeResourceInfo.c)
 *     SepTokenIsOwner @ 0x1400151D0 (SepTokenIsOwner.c)
 *     SePrivilegePolicyCheck @ 0x140015260 (SePrivilegePolicyCheck.c)
 *     SepMandatoryToDiscretionary @ 0x1400153D8 (SepMandatoryToDiscretionary.c)
 *     SepFilterToDiscretionary @ 0x1400153FC (SepFilterToDiscretionary.c)
 *     RtlOwnerAcesPresent @ 0x1400154D0 (RtlOwnerAcesPresent.c)
 *     SepConstrainByMandatory @ 0x140015764 (SepConstrainByMandatory.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140017110 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14001A89C (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepConstrainByConstraintMask @ 0x140067BF4 (SepConstrainByConstraintMask.c)
 *     SeCaptureObjectTypeList @ 0x140069F20 (SeCaptureObjectTypeList.c)
 *     SepTrustLevelCheck @ 0x14006A120 (SepTrustLevelCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     SepMandatoryIntegrityCheck @ 0x14007EFF0 (SepMandatoryIntegrityCheck.c)
 *     SepFilterCheck @ 0x14007F470 (SepFilterCheck.c)
 *     SepAccessCheck @ 0x14007F5F0 (SepAccessCheck.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     SepLocateTokenTrustLevel @ 0x140087894 (SepLocateTokenTrustLevel.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x1400894E0 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     SeTokenIsRestricted @ 0x1400D5140 (SeTokenIsRestricted.c)
 *     SeLogAccessFailure @ 0x140113BC0 (SeLogAccessFailure.c)
 *     SepLpacCausedAccessFailure @ 0x14012AD50 (SepLpacCausedAccessFailure.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SeFreeCapturedObjectTypeList @ 0x14025DFA4 (SeFreeCapturedObjectTypeList.c)
 *     SepBuildCapeSecurityDescriptor @ 0x14025E0AC (SepBuildCapeSecurityDescriptor.c)
 *     SepCopyObjectTypeList @ 0x14025E14C (SepCopyObjectTypeList.c)
 *     SepGetScopedPolicySid @ 0x14025E204 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x14025E34C (SepLogLpacAccessFailure.c)
 *     SepMergeObjectTypeListAccesses @ 0x14025E460 (SepMergeObjectTypeListAccesses.c)
 *     SepRmDereferenceCapTable @ 0x14025E490 (SepRmDereferenceCapTable.c)
 *     SepExamineGlobalSaclEx @ 0x14025EDE8 (SepExamineGlobalSaclEx.c)
 *     SepRmReferenceFindCap @ 0x140260144 (SepRmReferenceFindCap.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SeReleaseSid @ 0x140460948 (SeReleaseSid.c)
 *     SepProbeAndCaptureString_U @ 0x14046B9E8 (SepProbeAndCaptureString_U.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14046BB0C (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14046BC3C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtAuditThisEventWithContext @ 0x14046BDC0 (SepAdtAuditThisEventWithContext.c)
 *     SeCheckAuditPrivilege @ 0x14046BEA0 (SeCheckAuditPrivilege.c)
 *     SeCaptureSid @ 0x140487010 (SeCaptureSid.c)
 *     SeReleaseSecurityDescriptor @ 0x14049CFE0 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     SeLockSubjectContext @ 0x1404A6DD0 (SeLockSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     SeUnlockSubjectContext @ 0x1404B2450 (SeUnlockSubjectContext.c)
 *     SeCaptureSecurityDescriptor @ 0x1404BBCD0 (SeCaptureSecurityDescriptor.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14072AC08 (SepAdtOpenObjectAuditAlarm.c)
 *     SepExamineSaclEx @ 0x14072D59C (SepExamineSaclEx.c)
 *     SepAuditFailed @ 0x140731750 (SepAuditFailed.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
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
  char v39; // r12
  unsigned int v40; // r13d
  char IsOwner; // al
  char v42; // al
  unsigned int *v43; // rdx
  char *v44; // rdi
  __int64 v45; // r12
  int v46; // r12d
  unsigned __int8 v47; // dl
  unsigned __int8 v48; // cl
  char *v49; // r10
  unsigned int v50; // r11d
  char v51; // al
  int v52; // edi
  char v53; // r9
  char v54; // r8
  int *v55; // r15
  int v56; // r14d
  char v57; // r13
  char v58; // di
  int *v59; // rcx
  unsigned int *v60; // rdx
  char *v61; // r12
  char *v62; // r8
  unsigned int v63; // ecx
  int *v64; // r9
  unsigned int *v65; // r10
  char v66; // r11
  int *v67; // r8
  unsigned int *v68; // rdx
  unsigned __int64 v69; // rdx
  char v70; // r13
  __int16 v72; // ax
  __int64 v73; // rax
  ACL *v74; // rcx
  int v75; // eax
  unsigned int v76; // eax
  unsigned int v77; // eax
  char *v78; // rsi
  unsigned int v79; // eax
  void *v80; // rcx
  int v81; // eax
  char *PoolWithTag; // r10
  unsigned int v83; // r11d
  char *v84; // r8
  unsigned int i; // edx
  __int64 v86; // rcx
  __int16 v87; // dx
  __int64 v88; // rax
  ACL *v89; // rax
  _BYTE *ScopedPolicySid; // rax
  int Cap; // eax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v92; // rdx
  char *v93; // r10
  unsigned int v94; // r11d
  char *v95; // r8
  unsigned int j; // edx
  __int64 v97; // rcx
  __int64 v98; // rdi
  unsigned int *v99; // rax
  char *v100; // rax
  char *v101; // r9
  int *v102; // r8
  __int64 v103; // rcx
  int v104; // eax
  __int64 v105; // r12
  _QWORD *v106; // rax
  void *v107; // r8
  void *v108; // rdx
  void *v109; // rcx
  void *v110; // r9
  int v111; // eax
  int v112; // esi
  _QWORD *v113; // rax
  void *v114; // r8
  void *v115; // rdx
  void *v116; // rcx
  void *v117; // r9
  unsigned int v118; // esi
  unsigned int v119; // r12d
  unsigned int v120; // r12d
  unsigned int v121; // r8d
  unsigned int v122; // edx
  char *v123; // r9
  struct _KTHREAD *CurrentThread; // rax
  char v125; // di
  char v126; // si
  ULONGLONG TokenTrustLevel; // rax
  __int64 v128; // rdx
  __int64 v129; // r8
  int v130; // ecx
  int PrimaryToken; // r10d
  __int16 v132; // ax
  __int64 v133; // rdx
  unsigned int v134; // ecx
  __int64 v135; // rcx
  unsigned int v136; // eax
  int v137; // r13d
  char *v138; // rdi
  char v139; // r14
  int v140; // r8d
  __int16 v141; // ax
  __int64 v142; // rdx
  unsigned int v143; // eax
  int v144; // r10d
  char v145; // cl
  __int64 v146; // r8
  __int64 *v147; // r10
  __int64 v148; // rdx
  __int64 *v149; // r8
  struct _LIST_ENTRY *Blink; // rcx
  int Object; // [rsp+20h] [rbp-258h]
  int HandleInformation; // [rsp+28h] [rbp-250h]
  char v153; // [rsp+30h] [rbp-248h]
  unsigned int v154; // [rsp+40h] [rbp-238h]
  char v155; // [rsp+48h] [rbp-230h]
  char v156; // [rsp+A0h] [rbp-1D8h]
  char v157; // [rsp+A1h] [rbp-1D7h]
  unsigned __int8 v158; // [rsp+A2h] [rbp-1D6h] BYREF
  char v159; // [rsp+A3h] [rbp-1D5h] BYREF
  char v160; // [rsp+A4h] [rbp-1D4h]
  char v161; // [rsp+A5h] [rbp-1D3h]
  char v162; // [rsp+A6h] [rbp-1D2h]
  char v163; // [rsp+A7h] [rbp-1D1h]
  char v164; // [rsp+A8h] [rbp-1D0h]
  int v165; // [rsp+ACh] [rbp-1CCh]
  int v166; // [rsp+B0h] [rbp-1C8h] BYREF
  char v167; // [rsp+B4h] [rbp-1C4h] BYREF
  char v168; // [rsp+B5h] [rbp-1C3h]
  PVOID v169; // [rsp+B8h] [rbp-1C0h]
  PVOID v170; // [rsp+C0h] [rbp-1B8h]
  char v171; // [rsp+C8h] [rbp-1B0h] BYREF
  char v172; // [rsp+C9h] [rbp-1AFh] BYREF
  char v173[6]; // [rsp+CAh] [rbp-1AEh] BYREF
  PVOID v174; // [rsp+D0h] [rbp-1A8h] BYREF
  _WORD v175[2]; // [rsp+D8h] [rbp-1A0h] BYREF
  unsigned int v176; // [rsp+DCh] [rbp-19Ch] BYREF
  unsigned int v177; // [rsp+E0h] [rbp-198h] BYREF
  char v178; // [rsp+E4h] [rbp-194h]
  char v179; // [rsp+EAh] [rbp-18Eh]
  unsigned __int8 v180; // [rsp+EBh] [rbp-18Dh] BYREF
  char v181; // [rsp+ECh] [rbp-18Ch] BYREF
  char v182; // [rsp+EDh] [rbp-18Bh]
  char v183; // [rsp+EEh] [rbp-18Ah]
  char v184; // [rsp+EFh] [rbp-189h]
  int v185; // [rsp+F0h] [rbp-188h]
  int v186; // [rsp+F4h] [rbp-184h]
  int v187; // [rsp+F8h] [rbp-180h]
  char *v188; // [rsp+100h] [rbp-178h]
  int v189; // [rsp+108h] [rbp-170h]
  int v190; // [rsp+10Ch] [rbp-16Ch]
  __int64 v191; // [rsp+110h] [rbp-168h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+118h] [rbp-160h] BYREF
  int *v193; // [rsp+138h] [rbp-140h]
  PVOID v194; // [rsp+140h] [rbp-138h] BYREF
  PVOID v195; // [rsp+148h] [rbp-130h] BYREF
  int v196; // [rsp+150h] [rbp-128h] BYREF
  int v197; // [rsp+154h] [rbp-124h] BYREF
  unsigned int v198; // [rsp+158h] [rbp-120h]
  __int64 v199; // [rsp+160h] [rbp-118h] BYREF
  ACL *v200; // [rsp+168h] [rbp-110h]
  PVOID v201; // [rsp+170h] [rbp-108h] BYREF
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v202; // [rsp+178h] [rbp-100h] BYREF
  PVOID P; // [rsp+180h] [rbp-F8h] BYREF
  PVOID v204; // [rsp+188h] [rbp-F0h] BYREF
  int v205[2]; // [rsp+190h] [rbp-E8h] BYREF
  PVOID v206; // [rsp+198h] [rbp-E0h] BYREF
  __int64 v207; // [rsp+1A0h] [rbp-D8h] BYREF
  __int64 v208; // [rsp+1A8h] [rbp-D0h]
  __int64 v209; // [rsp+1B0h] [rbp-C8h]
  int v210; // [rsp+1B8h] [rbp-C0h]
  PVOID v211; // [rsp+1C0h] [rbp-B8h]
  PVOID v212[3]; // [rsp+1C8h] [rbp-B0h] BYREF
  void *v213; // [rsp+1E0h] [rbp-98h]
  __int64 v214; // [rsp+1E8h] [rbp-90h] BYREF
  __int64 v215; // [rsp+1F0h] [rbp-88h]
  char v216; // [rsp+1F8h] [rbp-80h] BYREF
  __int128 v217; // [rsp+200h] [rbp-78h] BYREF
  char v218; // [rsp+210h] [rbp-68h] BYREF
  _BYTE SecurityDescriptor[96]; // [rsp+218h] [rbp-60h] BYREF
  __int64 v220; // [rsp+288h] [rbp+10h] BYREF
  void **v221; // [rsp+290h] [rbp+18h]
  __int64 v222; // [rsp+298h] [rbp+20h]

  v222 = a4;
  v221 = a3;
  v220 = a2;
  v165 = 0;
  v177 = 0;
  v20 = 0LL;
  v169 = 0LL;
  v168 = 0;
  v166 = -1073741823;
  v170 = 0LL;
  v193 = 0LL;
  v186 = 0;
  v178 = 0;
  P = 0LL;
  v194 = 0LL;
  v204 = 0LL;
  v174 = 0LL;
  v199 = 0LL;
  v191 = 0LL;
  v176 = 0;
  v201 = 0LL;
  v173[0] = 0;
  v167 = 0;
  v182 = 0;
  v164 = 0;
  v161 = 0;
  v180 = 1;
  v181 = 0;
  v211 = 0LL;
  v213 = 0LL;
  v183 = 0;
  v214 = 0LL;
  v215 = 0LL;
  v205[1] = 0;
  v200 = 0LL;
  memset(SecurityDescriptor, 0, 0x28uLL);
  v202 = 0LL;
  v157 = 0;
  v163 = 0;
  v160 = 0;
  v184 = 0;
  v175[0] = 999;
  v207 = 0LL;
  v208 = 0LL;
  v209 = 0LL;
  v210 = 0;
  v162 = 0;
  v187 = 0;
  v195 = 0LL;
  v185 = 0;
  v179 = 0;
  v171 = 0;
  v172 = 0;
  v206 = 0LL;
  v197 = -1;
  v205[0] = -1;
  v21 = KeGetCurrentThread()->gap0[10];
  v156 = v21;
  v173[1] = v21;
  SeCaptureSubjectContext(&SubjectContext);
  if ( a9 )
  {
    if ( a9 != 1 )
    {
      v25 = -1073741811;
      goto LABEL_380;
    }
    v189 = 7;
  }
  else
  {
    v189 = 2;
  }
  ClientToken = SubjectContext.ClientToken;
  if ( a3 )
    goto LABEL_6;
  if ( !SubjectContext.ClientToken )
  {
    v25 = -1073741732;
    v20 = 0LL;
LABEL_380:
    v70 = 0;
    v61 = 0LL;
    goto LABEL_381;
  }
  if ( SubjectContext.ImpersonationLevel < SecurityIdentification )
  {
    v25 = -1073741659;
    v20 = 0LL;
    goto LABEL_380;
  }
LABEL_6:
  if ( a17 )
  {
    if ( !a12 || a12 > 0x1000 )
    {
      v25 = -1073741811;
      v165 = -1073741811;
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
  v217 = *(_OWORD *)a13;
  v25 = v165;
  ClientToken = SubjectContext.ClientToken;
LABEL_19:
  if ( v25 < 0 )
    goto LABEL_190;
  if ( !a3 )
  {
    v27 = v21;
LABEL_22:
    if ( !ClientToken )
      ClientToken = SubjectContext.PrimaryToken;
    v212[2] = ClientToken;
    if ( (unsigned __int8)SeCheckAuditPrivilege(&SubjectContext, v27) )
    {
LABEL_25:
      if ( (a8 & 0xF0000000) != 0 )
      {
        v25 = -1073741594;
        v20 = (char *)v169;
        v70 = (char)v169;
        v61 = (char *)v169;
        goto LABEL_381;
      }
      v25 = SeCaptureSecurityDescriptor(a6, v27, 1, 0, (__int64)&v174);
      v165 = v25;
      if ( v25 < 0 )
      {
        v28 = 0LL;
        goto LABEL_193;
      }
      v28 = (unsigned int *)v174;
      if ( v174 )
      {
        v29 = *((_WORD *)v174 + 1);
        if ( v29 >= 0 )
        {
          v31 = (char *)*((_QWORD *)v174 + 1);
        }
        else
        {
          v30 = *((unsigned int *)v174 + 1);
          if ( !(_DWORD)v30 )
            goto LABEL_195;
          v31 = (char *)v174 + v30;
        }
        if ( v31 )
        {
          if ( v29 >= 0 )
          {
            v33 = (char *)*((_QWORD *)v174 + 2);
          }
          else
          {
            v32 = *((unsigned int *)v174 + 2);
            if ( !(_DWORD)v32 )
              goto LABEL_195;
            v33 = (char *)v174 + v32;
          }
          if ( v33 )
          {
            v34 = (__int64)a16;
            if ( (unsigned __int64)a16 >= 0x7FFFFFFF0000LL )
              v34 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v34 = *(_BYTE *)v34;
            v25 = SepProbeAndCaptureString_U(a1, &P);
            v165 = v25;
            if ( v25 >= 0 )
            {
              v25 = SepProbeAndCaptureString_U(a4, &v194);
              v165 = v25;
              if ( v25 >= 0 )
              {
                v25 = SepProbeAndCaptureString_U(a5, &v204);
                v165 = v25;
              }
            }
            v35 = v162;
            if ( v25 >= 0 )
            {
              if ( Src )
              {
                v25 = SeCaptureSid(Src, Object, 1, (__int64)&v199);
                if ( v25 < 0 )
                {
                  v199 = 0LL;
                  v20 = (char *)v169;
                  v70 = (char)v169;
                  v61 = (char *)v169;
                  goto LABEL_381;
                }
              }
              v25 = SeCaptureObjectTypeList(a11, a12, v21, &v191);
              if ( v25 >= 0 )
              {
                v28 = (unsigned int *)v174;
                v25 = SepTrustLevelCheck(v36, (__int64)v174, &SubjectContext, 0LL, 0LL, 1, &v197);
                if ( v25 < 0 )
                {
LABEL_194:
                  v20 = (char *)v169;
                  v70 = (char)v169;
                  v61 = (char *)v169;
                  goto LABEL_118;
                }
                v37 = a8;
                v25 = SepFilterToDiscretionary(&v197, a8);
                v165 = v25;
                if ( v25 < 0 )
                {
                  v171 = 1;
LABEL_49:
                  if ( v25 < 0 )
                    goto LABEL_206;
                  v25 = SepMandatoryIntegrityCheck(&v217, (__int64)v28, 0, (__int64)ClientToken, 1, (__int64)&v214);
                  if ( v25 >= 0 )
                  {
                    v38 = SepMandatoryToDiscretionary(&v214, v37);
                    v25 = v38;
                    v165 = v38;
                    if ( (v38 < 0 || (v37 & 0x2000000) != 0)
                      && (ClientToken[50] & 0x4000) != 0
                      && HIDWORD(v215) <= 0x2000 )
                    {
                      v35 = 1;
                      v162 = 1;
                    }
                    if ( v38 >= 0 || v35 )
                    {
                      v39 = v156;
                      v25 = SePrivilegePolicyCheck(&a8, &v176, (__int64 *)&SubjectContext, 0, (__int64)&v201, v156);
                      v165 = v25;
                      v37 = a8;
                      if ( !a8 )
                      {
                        v81 = (unsigned __int8)v185;
                        v40 = v176;
                        if ( v176 )
                          v81 = 1;
                        v185 = v81;
LABEL_56:
                        SeLockSubjectContext(&SubjectContext);
                        if ( v25 < 0 && !v162 )
                        {
                          v48 = 0;
                          v158 = 0;
                          v47 = 1;
                          v159 = 1;
                          v46 = v25;
                          v166 = v25;
                          if ( !a17 )
                          {
                            v169 = &v177;
                            v188 = (char *)&v166;
                            goto LABEL_73;
                          }
                          PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * a12, 0x61476553u);
                          v169 = PoolWithTag;
                          if ( !PoolWithTag )
                          {
                            SeUnlockSubjectContext(&SubjectContext);
                            v25 = -1073741670;
LABEL_212:
                            v21 = v156;
                            v20 = (char *)v169;
                            v70 = v157;
                            v61 = (char *)v170;
                            goto LABEL_118;
                          }
                          v168 = 1;
                          v83 = a12;
                          v84 = &PoolWithTag[4 * a12];
                          v188 = v84;
                          for ( i = 0; i < v83; ++i )
                          {
                            v86 = 4LL * i;
                            *(_DWORD *)&PoolWithTag[v86] = v177;
                            *(_DWORD *)&v84[v86] = v25;
                          }
                          goto LABEL_216;
                        }
                        IsOwner = SepTokenIsOwner((__int64)ClientToken);
                        v160 = IsOwner;
                        v28 = (unsigned int *)v174;
                        if ( !SepRmEnforceCap )
                          goto LABEL_58;
                        v87 = *((_WORD *)v174 + 1);
                        if ( (v87 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
                          goto LABEL_58;
                        if ( v87 >= 0 )
                        {
                          v89 = (ACL *)*((_QWORD *)v174 + 3);
                        }
                        else
                        {
                          v88 = *((unsigned int *)v174 + 3);
                          if ( !(_DWORD)v88 )
                          {
                            v200 = 0LL;
LABEL_230:
                            IsOwner = v160;
LABEL_58:
                            v25 = v165;
                            goto LABEL_59;
                          }
                          v89 = (ACL *)((char *)v174 + v88);
                        }
                        v200 = v89;
                        if ( v89 )
                        {
                          ScopedPolicySid = SepGetScopedPolicySid(v89);
                          if ( ScopedPolicySid )
                          {
                            Cap = SepRmReferenceFindCap(ScopedPolicySid, &v202);
                            v92 = v202;
                            if ( Cap < 0 )
                              v92 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)SepRmDefaultCap;
                            v202 = v92;
                            v25 = 0;
                            v165 = 0;
                            v157 = 1;
                            IsOwner = v160;
LABEL_59:
                            v37 = a8;
                            if ( (a8 & 0x2060000) != 0
                              && IsOwner
                              && ((v72 = *((_WORD *)v28 + 1), (v72 & 4) == 0)
                                ? (v74 = 0LL)
                                : v72 >= 0
                                ? (v74 = (ACL *)*((_QWORD *)v28 + 4))
                                : (v73 = v28[4], !(_DWORD)v73)
                                ? (v74 = 0LL)
                                : (v74 = (ACL *)((char *)v28 + v73)),
                                  !RtlOwnerAcesPresent(v74)) )
                            {
                              if ( (v37 & 0x2000000) != 0 )
                                v75 = 393216;
                              else
                                v75 = v37 & 0x60000;
                              v40 = v75 | v176;
                              v176 |= v75;
                              v187 = v75;
                              v37 &= 0xFFF9FFFF;
                              a8 = v37;
                            }
                            else
                            {
                              v40 = v176;
                            }
                            if ( !v37 && (!v157 || (_BYTE)v185) && ((ClientToken[50] & 0x2000) != 0 || !v187) )
                            {
                              v177 = v40;
                              if ( v40 )
                              {
                                v48 = 1;
                                v47 = 0;
                                v46 = 0;
                                v166 = 0;
                              }
                              else
                              {
                                v48 = 0;
                                v47 = 1;
                                v46 = -1073741790;
                                v166 = -1073741790;
                              }
                              v159 = v47;
                              v158 = v48;
                              if ( !a17 )
                              {
                                v169 = &v177;
                                v188 = (char *)&v166;
LABEL_73:
                                if ( !ClientToken )
                                  goto LABEL_80;
                                if ( v171 || v172 )
                                  goto LABEL_327;
                                if ( !HIDWORD(v208) && (ClientToken[50] & 0x4000) != 0 )
                                {
                                  if ( v25 < 0 )
                                    goto LABEL_80;
                                  if ( v46 < 0 || HIBYTE(v209) )
                                  {
LABEL_327:
                                    CurrentThread = KeGetCurrentThread();
                                    --CurrentThread->KernelApcDisable;
                                    ExAcquireResourceSharedLite(*((PERESOURCE *)ClientToken + 6), 1u);
                                    v125 = v166 >= 0;
                                    v126 = a8 | v176;
                                    TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)&SubjectContext);
                                    SeLogAccessFailure(
                                      (__int64)ClientToken,
                                      v128,
                                      v129,
                                      TokenTrustLevel,
                                      (ULONGLONG)v174,
                                      v126,
                                      v125);
                                    ExReleaseResourceLite(*((PERESOURCE *)ClientToken + 6));
                                    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                                    v37 = a8;
                                    v25 = v165;
                                    v46 = v166;
                                    v28 = (unsigned int *)v174;
                                    v40 = v176;
                                    v48 = v158;
                                    v47 = v159;
                                  }
                                }
                                if ( v25 >= 0 && v46 < 0 && !HIDWORD(v208) && (ClientToken[50] & 0x4000) != 0 )
                                {
                                  if ( SepLpacCausedAccessFailure((__int64)&v207, v37) )
                                    SepLogLpacAccessFailure(v130);
                                  v47 = v159;
                                  v48 = v158;
                                }
LABEL_80:
                                if ( v182 )
                                  goto LABEL_92;
                                v52 = v189;
                                if ( v189 == 2 )
                                {
                                  if ( v48 )
                                  {
                                    LOBYTE(HandleInformation) = 0;
                                    v164 = SepAdtAuditObjectAccessWithContext(
                                             0LL,
                                             v194,
                                             v48,
                                             0LL,
                                             &SubjectContext,
                                             HandleInformation,
                                             v175);
                                    v47 = v159;
                                  }
                                  if ( !v47 )
                                    goto LABEL_85;
                                  LOBYTE(HandleInformation) = 0;
                                  v53 = SepAdtAuditObjectAccessWithContext(
                                          0LL,
                                          v194,
                                          0LL,
                                          v47,
                                          &SubjectContext,
                                          HandleInformation,
                                          v175);
                                  v161 = v53;
                                }
                                else
                                {
                                  if ( v48 )
                                  {
                                    v175[0] = 151;
                                    v164 = SepAdtAuditThisEventWithContext(151LL, v48, 0LL, &SubjectContext);
                                    v47 = v159;
                                  }
                                  if ( !v47 )
                                  {
                                    v52 = v189;
LABEL_85:
                                    v53 = v161;
                                    goto LABEL_86;
                                  }
                                  v175[0] = 151;
                                  v53 = SepAdtAuditThisEventWithContext(151LL, 0LL, v47, &SubjectContext);
                                  v161 = v53;
                                  v52 = v189;
                                }
LABEL_86:
                                v54 = v164;
                                if ( v164 || v53 )
                                {
                                  PrimaryToken = (int)SubjectContext.PrimaryToken;
                                  if ( SubjectContext.ClientToken )
                                    PrimaryToken = (int)SubjectContext.ClientToken;
                                  v132 = *((_WORD *)v28 + 1);
                                  if ( (v132 & 0x10) != 0 )
                                  {
                                    if ( v132 >= 0 )
                                    {
                                      v133 = *((_QWORD *)v28 + 3);
                                    }
                                    else
                                    {
                                      v134 = v28[3];
                                      if ( v134 )
                                        LODWORD(v133) = (_DWORD)v28 + v134;
                                      else
                                        LODWORD(v133) = 0;
                                    }
                                  }
                                  else
                                  {
                                    LODWORD(v133) = 0;
                                  }
                                  if ( (v132 & 0x10) != 0 )
                                  {
                                    if ( v132 >= 0 )
                                    {
                                      v135 = *((_QWORD *)v28 + 3);
                                    }
                                    else
                                    {
                                      v136 = v28[3];
                                      if ( v136 )
                                        LODWORD(v135) = (_DWORD)v28 + v136;
                                      else
                                        LODWORD(v135) = 0;
                                    }
                                  }
                                  else
                                  {
                                    LODWORD(v135) = 0;
                                  }
                                  v137 = v37 | v40;
                                  v55 = (int *)v169;
                                  v138 = v188;
                                  v139 = a17;
                                  SepExamineSaclEx(
                                    v135,
                                    v133,
                                    PrimaryToken,
                                    v137,
                                    v191,
                                    a12,
                                    a17,
                                    (__int64)v188,
                                    (__int64)v169,
                                    v199,
                                    v160,
                                    (__int64)v173,
                                    (__int64)&v167);
                                  v140 = (int)SubjectContext.PrimaryToken;
                                  if ( SubjectContext.ClientToken )
                                    v140 = (int)SubjectContext.ClientToken;
                                  v141 = *((_WORD *)v28 + 1);
                                  if ( (v141 & 0x10) != 0 )
                                  {
                                    if ( v141 >= 0 )
                                    {
                                      v142 = *((_QWORD *)v28 + 3);
                                    }
                                    else
                                    {
                                      v143 = v28[3];
                                      if ( v143 )
                                        LODWORD(v142) = (_DWORD)v28 + v143;
                                      else
                                        LODWORD(v142) = 0;
                                    }
                                  }
                                  else
                                  {
                                    LODWORD(v142) = 0;
                                  }
                                  v153 = v139;
                                  v56 = a12;
                                  SepExamineGlobalSaclEx(
                                    (__int64)v194,
                                    v142,
                                    v140,
                                    v137,
                                    v191,
                                    a12,
                                    v153,
                                    (__int64)v138,
                                    (__int64)v55,
                                    v199,
                                    v160,
                                    v173,
                                    &v167);
                                  v52 = v189;
                                  v54 = v164;
                                  v53 = v161;
                                }
                                else
                                {
                                  v55 = (int *)v169;
                                  v56 = a12;
                                }
                                if ( v173[0] || v167 )
                                {
                                  v144 = (unsigned __int8)v186;
                                  v145 = v158;
                                  if ( v158 )
                                    v144 = 1;
                                  v186 = v144;
                                  v57 = a17;
                                  if ( v173[0] && v54 )
                                  {
                                    v146 = 0LL;
                                    if ( a17 )
                                      v146 = (__int64)v55;
                                    v147 = &v220;
                                    if ( !v158 )
                                      LODWORD(v147) = 0;
                                    v28 = (unsigned int *)v174;
                                    SepAdtOpenObjectAuditAlarm(
                                      v175[0],
                                      (int)P,
                                      (int)v147,
                                      (int)v194,
                                      (__int64)v204,
                                      v174,
                                      (__int64)SubjectContext.ClientToken,
                                      (__int64)SubjectContext.PrimaryToken,
                                      *v55,
                                      *v55,
                                      (__int64)v201,
                                      1,
                                      (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
                                      v52,
                                      v191,
                                      v56,
                                      v146,
                                      0LL,
                                      0LL);
                                    v46 = v166;
                                    v145 = v158;
                                    v53 = v161;
                                  }
                                  if ( v167 && v53 )
                                  {
                                    v148 = 0LL;
                                    if ( v57 )
                                      v148 = (__int64)v55;
                                    v149 = &v220;
                                    if ( !v145 )
                                      LODWORD(v149) = 0;
                                    v28 = (unsigned int *)v174;
                                    SepAdtOpenObjectAuditAlarm(
                                      v175[0],
                                      (int)P,
                                      (int)v149,
                                      (int)v194,
                                      (__int64)v204,
                                      v174,
                                      (__int64)SubjectContext.ClientToken,
                                      (__int64)SubjectContext.PrimaryToken,
                                      a8,
                                      a8,
                                      (__int64)v201,
                                      0,
                                      (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
                                      v52,
                                      v191,
                                      v56,
                                      v148,
                                      0LL,
                                      0LL);
                                    v46 = v166;
                                  }
                                  goto LABEL_93;
                                }
                                if ( v201 && v158 )
                                {
                                  SepAdtPrivilegeObjectAuditAlarm(
                                    (_DWORD)P,
                                    (_DWORD)v194,
                                    (_DWORD)v204,
                                    (unsigned int)&v220,
                                    (__int64)SubjectContext.ClientToken,
                                    (__int64)SubjectContext.PrimaryToken,
                                    (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
                                    a8,
                                    (__int64)v201,
                                    v158);
                                  v58 = 0;
                                  v46 = v166;
                                  v28 = (unsigned int *)v174;
                                  v57 = a17;
LABEL_94:
                                  SeUnlockSubjectContext(&SubjectContext);
                                  if ( v57 )
                                  {
                                    v62 = v188;
                                    v63 = 0;
                                    v198 = 0;
                                    v64 = Address;
                                    v65 = a14;
                                    v66 = v163;
                                    if ( v188 )
                                    {
                                      v20 = (char *)v169;
                                      v61 = (char *)v170;
                                      while ( v63 < a12 )
                                      {
                                        v69 = v63;
                                        v64[v69] = *(_DWORD *)&v62[v69 * 4];
                                        v65[v69] = *(_DWORD *)&v20[v69 * 4];
                                        if ( SepRmEnforceCap && v66 && *(int *)&v62[v69 * 4] >= 0 )
                                        {
                                          v64[v69] = v193[v69];
                                          v65[v69] &= *(_DWORD *)&v61[v69 * 4];
                                        }
                                        v198 = ++v63;
                                        v28 = (unsigned int *)v174;
                                      }
                                      goto LABEL_117;
                                    }
                                    while ( v63 < a12 )
                                    {
                                      v67 = &v64[v63];
                                      *v67 = v46;
                                      v68 = &v65[v63];
                                      *v68 = v177;
                                      if ( SepRmEnforceCap && v66 )
                                      {
                                        v46 = v166;
                                        if ( v166 >= 0 )
                                        {
                                          *v67 = v166;
                                          *v68 &= v177;
                                        }
                                      }
                                      else
                                      {
                                        v46 = v166;
                                      }
                                      v198 = ++v63;
                                      v28 = (unsigned int *)v174;
                                    }
                                  }
                                  else
                                  {
                                    v59 = Address;
                                    *Address = v46;
                                    v60 = a14;
                                    *a14 = v177;
                                    if ( SepRmEnforceCap && v163 && v166 >= 0 )
                                    {
                                      *v59 = *v193;
                                      v61 = (char *)v170;
                                      *v60 &= *(_DWORD *)v170;
                                      v28 = (unsigned int *)v174;
                                      goto LABEL_98;
                                    }
                                    v28 = (unsigned int *)v174;
                                  }
                                  v61 = (char *)v170;
LABEL_98:
                                  v20 = (char *)v169;
LABEL_117:
                                  *a16 = v58;
                                  v25 = 0;
                                  v165 = 0;
                                  v21 = v156;
                                  v70 = v157;
                                  goto LABEL_118;
                                }
LABEL_92:
                                v57 = a17;
LABEL_93:
                                v58 = v186;
                                goto LABEL_94;
                              }
                              v93 = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * a12, 0x61476553u);
                              v169 = v93;
                              if ( v93 )
                              {
                                v168 = 1;
                                v94 = a12;
                                v95 = &v93[4 * a12];
                                v188 = v95;
                                for ( j = 0; j < v94; ++j )
                                {
                                  v97 = 4LL * j;
                                  *(_DWORD *)&v93[v97] = v177;
                                  *(_DWORD *)&v95[v97] = v46;
                                }
LABEL_216:
                                v48 = v158;
                                v47 = v159;
                                goto LABEL_73;
                              }
LABEL_211:
                              v25 = -1073741670;
                              SeUnlockSubjectContext(&SubjectContext);
                              goto LABEL_212;
                            }
                            v42 = a17;
                            if ( a17 )
                            {
                              v98 = a12;
                              v99 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 8LL * a12, 0x61476553u);
                              v43 = v99;
                              v169 = v99;
                              if ( !v99 )
                                goto LABEL_211;
                              v168 = 1;
                              v44 = (char *)&v99[v98];
                              v42 = a17;
                            }
                            else
                            {
                              v43 = &v177;
                              v169 = &v177;
                              v44 = (char *)&v166;
                            }
                            v188 = v44;
                            LODWORD(v207) = v187;
                            v155 = v39;
                            v45 = a12;
                            SepAccessCheck(
                              (__int64)v28,
                              (void *)v199,
                              (__int64)SubjectContext.PrimaryToken,
                              (__int64)ClientToken,
                              v37,
                              (_QWORD *)v191,
                              a12,
                              &v217,
                              v40,
                              v155,
                              v43,
                              0LL,
                              (int *)v44,
                              v42,
                              v160,
                              (int *)&v207,
                              (__int64 *)&v195,
                              (char *)&v158,
                              &v159);
                            if ( SepRmEnforceCap && *(int *)v44 >= 0 && (v70 = v157) != 0 )
                            {
                              if ( a17 )
                              {
                                v100 = (char *)ExAllocatePoolWithTag(PagedPool, 8 * v45, 0x61476553u);
                                v101 = v100;
                                v170 = v100;
                                if ( !v100 )
                                {
                                  SeUnlockSubjectContext(&SubjectContext);
                                  SeReleaseSubjectContext(&SubjectContext);
                                  v25 = -1073741670;
                                  v21 = v156;
                                  v20 = (char *)v169;
                                  v61 = (char *)v170;
                                  goto LABEL_381;
                                }
                                v102 = (int *)&v100[4 * v45];
                              }
                              else
                              {
                                v101 = &v216;
                                v170 = &v216;
                                v102 = (int *)&v218;
                              }
                              v193 = v102;
                              if ( (_DWORD)v45 )
                              {
                                v25 = SepCopyObjectTypeList(v191, v45, &v206);
                                v165 = v25;
                                if ( v25 < 0 )
                                {
                                  v21 = v156;
                                  v20 = (char *)v169;
                                  v61 = (char *)v170;
                                  goto LABEL_381;
                                }
                                v101 = (char *)v170;
                              }
                              else
                              {
                                v25 = v165;
                              }
                              LOBYTE(v28) = 0;
                              v185 = (int)v28;
                              v103 = 0LL;
                              v37 = a8;
                              v40 = v176;
                              v104 = a9;
                              while ( 1 )
                              {
                                v190 = v103;
                                if ( (unsigned int)v103 >= HIDWORD(v202[2].Linkage.Blink) )
                                  break;
                                v105 = *(&v202[2].Signature + v103);
                                v212[0] = (PVOID)v105;
                                if ( !*(_QWORD *)(v105 + 24) )
                                  goto LABEL_296;
                                if ( !v195 )
                                {
                                  LODWORD(v28) = (unsigned __int8)v28;
                                  if ( (int)AuthzBasepInitializeResourceClaimsFromSacl((__int64)v200, (__int64 *)&v195) < 0 )
                                    LODWORD(v28) = 1;
                                  v185 = (int)v28;
                                }
                                v106 = (_QWORD *)*((_QWORD *)ClientToken + 137);
                                v107 = v106 ? (void *)v106[75] : 0LL;
                                v108 = v106 ? (void *)v106[73] : 0LL;
                                v109 = v106 ? (void *)v106[74] : 0LL;
                                v110 = v106 ? (void *)v106[72] : 0LL;
                                v111 = AuthzBasepEvaluateAceCondition(
                                         ClientToken,
                                         *((void **)ClientToken + 97),
                                         v195,
                                         v110,
                                         v109,
                                         v108,
                                         v107,
                                         *(_DWORD **)(v105 + 24),
                                         *(_DWORD *)(v105 + 16),
                                         1u,
                                         0,
                                         &v196);
                                v25 = v111;
                                v165 = v111;
                                v112 = v196;
                                if ( v196 == 1 )
                                  goto LABEL_296;
                                if ( v111 < 0 )
                                  goto LABEL_310;
                                if ( SeTokenIsRestricted(ClientToken) )
                                {
                                  v113 = (_QWORD *)*((_QWORD *)ClientToken + 137);
                                  if ( v113 )
                                    v114 = (void *)v113[75];
                                  else
                                    v114 = 0LL;
                                  if ( v113 )
                                    v115 = (void *)v113[73];
                                  else
                                    v115 = 0LL;
                                  if ( v113 )
                                    v116 = (void *)v113[74];
                                  else
                                    v116 = 0LL;
                                  if ( v113 )
                                    v117 = (void *)v113[72];
                                  else
                                    v117 = 0LL;
                                  v25 = AuthzBasepEvaluateAceCondition(
                                          ClientToken,
                                          *((void **)ClientToken + 97),
                                          v195,
                                          v117,
                                          v116,
                                          v115,
                                          v114,
                                          *(_DWORD **)(v105 + 24),
                                          *(_DWORD *)(v105 + 16),
                                          1u,
                                          1u,
                                          &v196);
                                  v165 = v25;
                                  if ( v25 < 0 )
                                    goto LABEL_310;
                                  v112 = v196;
                                }
                                if ( (_BYTE)v185 || v112 == 1 )
                                {
LABEL_296:
                                  if ( (*(_DWORD *)(v105 + 48) & 1) != 0 )
                                  {
                                    if ( (v37 & 0x2000000) != 0 )
                                      v118 = v37;
                                    else
                                      v118 = v37 | v40;
                                    v119 = 0;
                                  }
                                  else
                                  {
                                    v118 = v37;
                                    v119 = v40;
                                  }
                                  v25 = SepBuildCapeSecurityDescriptor(
                                          SecurityDescriptor,
                                          *((unsigned __int8 **)v212[0] + 4),
                                          v200);
                                  v165 = v25;
                                  if ( v25 < 0 )
                                  {
LABEL_310:
                                    v21 = v156;
                                    v20 = (char *)v169;
                                    v70 = v157;
                                    v61 = (char *)v170;
                                    goto LABEL_381;
                                  }
                                  v154 = v119;
                                  v120 = a12;
                                  SepAccessCheck(
                                    (__int64)SecurityDescriptor,
                                    (void *)v199,
                                    (__int64)SubjectContext.PrimaryToken,
                                    (__int64)SubjectContext.ClientToken,
                                    v118,
                                    v206,
                                    a12,
                                    &v217,
                                    v154,
                                    v156,
                                    (unsigned int *)v170,
                                    0LL,
                                    v193,
                                    a17,
                                    v160,
                                    (int *)&v207,
                                    (__int64 *)&v195,
                                    (char *)&v180,
                                    &v181);
                                  v101 = (char *)v170;
                                  if ( v163 )
                                    v104 = *(_DWORD *)v170 & a9;
                                  else
                                    v104 = *(_DWORD *)v170;
                                  a9 = v104;
                                  if ( v206 )
                                  {
                                    SepMergeObjectTypeListAccesses(v191, (__int64)v206, v120);
                                    v104 = a9;
                                    v101 = (char *)v170;
                                  }
                                  v163 = 1;
                                }
                                else
                                {
                                  v104 = a9;
                                  v101 = (char *)v170;
                                }
                                v103 = (unsigned int)(v190 + 1);
                                LOBYTE(v28) = v185;
                              }
                              v158 = v180;
                              v159 = v181;
                              *(_DWORD *)v101 &= v104;
                              v46 = -1073741790;
                              if ( !v104 )
                              {
                                *v193 = -1073741790;
                                v158 = 0;
                                v159 = 1;
                              }
                            }
                            else
                            {
                              v46 = -1073741790;
                              v37 = a8;
                              v25 = v165;
                              v40 = v176;
                            }
                            if ( (v37 & 0x2000000) != 0 )
                            {
                              if ( !v162
                                || !*(_WORD *)((char *)&v209 + 5)
                                && !ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator() )
                              {
                                if ( a17 )
                                  v76 = a12;
                                else
                                  v76 = 0;
                                SepConstrainByMandatory((__int64)&v214, v37, (char *)v169, v188, 0LL, v76);
                              }
                            }
                            else if ( v162 && !*(_WORD *)((char *)&v209 + 5) )
                            {
                              if ( !ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator() || HIDWORD(v208) )
                              {
                                v48 = 0;
                                v158 = 0;
                                v47 = 1;
                                v159 = 1;
                                v121 = 0;
                                v177 = 0;
                                v166 = -1073741790;
                                v51 = a17;
                                v49 = (char *)v169;
                                v50 = a12;
                                if ( !a17 )
                                  goto LABEL_71;
                                v122 = 0;
                                v123 = v188;
                                while ( v122 < v50 )
                                {
                                  *(_DWORD *)&v49[4 * v122] = v121;
                                  *(_DWORD *)&v123[4 * v122++] = v46;
                                  v121 = v177;
                                  v46 = v166;
                                }
                                v47 = v159;
LABEL_70:
                                v51 = a17;
LABEL_71:
                                if ( (v37 & 0x2000000) != 0 )
                                {
                                  if ( v51 )
                                    v77 = v50;
                                  else
                                    v77 = 0;
                                  v78 = v188;
                                  SepConstrainByConstraintMask(v197, v37, v49, v188, 0LL, v77, &v171);
                                  if ( a17 )
                                    v79 = a12;
                                  else
                                    v79 = 0;
                                  SepConstrainByConstraintMask(v205[0], v37, (char *)v169, v78, 0LL, v79, &v172);
                                  v46 = v166;
                                  v48 = v158;
                                  v47 = v159;
                                }
                                v28 = (unsigned int *)v174;
                                goto LABEL_73;
                              }
                              HIBYTE(v209) = 1;
                              v48 = 1;
                              v158 = 1;
                              v47 = 0;
                              v159 = 0;
                              v177 = v37;
                              v46 = 0;
                              v166 = 0;
LABEL_69:
                              v49 = (char *)v169;
                              v50 = a12;
                              goto LABEL_70;
                            }
                            v47 = v159;
                            v48 = v158;
                            v46 = v166;
                            goto LABEL_69;
                          }
                        }
                        goto LABEL_230;
                      }
LABEL_55:
                      v40 = v176;
                      goto LABEL_56;
                    }
LABEL_206:
                    v39 = v156;
                    goto LABEL_55;
                  }
                  goto LABEL_193;
                }
                v25 = SepFilterCheck((__int64)v28, (__int64 *)&v195, ClientToken, 1, v205);
                if ( v25 >= 0 )
                {
                  v25 = SepFilterToDiscretionary(v205, v37);
                  v165 = v25;
                  if ( v25 < 0 )
                    v172 = 1;
                  goto LABEL_49;
                }
LABEL_193:
                v21 = v156;
                goto LABEL_194;
              }
            }
            goto LABEL_190;
          }
        }
      }
LABEL_195:
      v25 = -1073741703;
      v20 = (char *)v169;
      v70 = (char)v169;
      v61 = (char *)v169;
      goto LABEL_118;
    }
    if ( (a10 & 1) != 0 )
    {
      v182 = 1;
      goto LABEL_25;
    }
    v25 = -1073741727;
LABEL_190:
    v20 = (char *)v169;
    v70 = (char)v169;
    v61 = (char *)v169;
LABEL_381:
    v28 = (unsigned int *)v174;
    goto LABEL_118;
  }
  v80 = *a3;
  v27 = v21;
  v25 = ObReferenceObjectByHandle(v80, 8u, (POBJECT_TYPE)SeTokenObjectType, v21, v212, 0LL);
  v211 = v212[0];
  if ( v25 >= 0 )
  {
    v213 = ClientToken;
    ClientToken = v212[0];
    SubjectContext.ClientToken = v212[0];
    v183 = 1;
    goto LABEL_22;
  }
  v211 = 0LL;
  v28 = (unsigned int *)v174;
  v20 = (char *)v169;
  v70 = (char)v169;
  v61 = (char *)v169;
  if ( v25 != -1073741816 )
    v184 = 1;
LABEL_118:
  if ( v183 )
  {
    ObfDereferenceObject(v211);
    SubjectContext.ClientToken = v213;
  }
  if ( v201 )
    ExFreePoolWithTag(v201, 0);
  SeReleaseSubjectContext(&SubjectContext);
  SeReleaseSecurityDescriptor(v28, v21, 0LL);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v194 )
    ExFreePoolWithTag(v194, 0);
  if ( v204 )
    ExFreePoolWithTag(v204, 0);
  if ( v199 )
    SeReleaseSid((void *)v199, v21, 1);
  if ( v191 )
    SeFreeCapturedObjectTypeList((void *)v191);
  if ( v168 )
  {
    if ( v20 )
      ExFreePoolWithTag(v20, 0);
    if ( v61 )
      ExFreePoolWithTag(v61, 0);
  }
  if ( v70 )
  {
    Blink = v202[1].Linkage.Blink;
    if ( Blink )
      SepRmDereferenceCapTable((volatile signed __int64 *)Blink);
  }
  if ( v206 )
    ExFreePoolWithTag(v206, 0);
  SepFreeResourceInfo(v195);
  if ( v25 == -1073741670 || v184 )
    SepAuditFailed((unsigned int)v25);
  return (unsigned int)v25;
}
