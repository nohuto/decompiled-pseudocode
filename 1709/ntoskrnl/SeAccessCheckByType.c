/*
 * XREFs of SeAccessCheckByType @ 0x140068AB0
 * Callers:
 *     NtAccessCheck @ 0x14006899C (NtAccessCheck.c)
 *     NtAccessCheckByType @ 0x14011E8AC (NtAccessCheckByType.c)
 *     NtAccessCheckByTypeResultList @ 0x14025DE60 (NtAccessCheckByTypeResultList.c)
 * Callees:
 *     RtlpOwnerAcesPresent @ 0x1400154F0 (RtlpOwnerAcesPresent.c)
 *     SepConstrainByMandatory @ 0x140015764 (SepConstrainByMandatory.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140017110 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14001A89C (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14001EED0 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepConstrainByConstraintMask @ 0x140067BF4 (SepConstrainByConstraintMask.c)
 *     SepSidInTokenSidHash @ 0x140068A00 (SepSidInTokenSidHash.c)
 *     SeCaptureObjectTypeList @ 0x140069F20 (SeCaptureObjectTypeList.c)
 *     SepTrustLevelCheck @ 0x14006A120 (SepTrustLevelCheck.c)
 *     RtlSidHashLookup @ 0x14006A190 (RtlSidHashLookup.c)
 *     ExpReleaseResourceForThreadLite @ 0x14006A2D0 (ExpReleaseResourceForThreadLite.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x14006A3A0 (SepReferenceTokenUsingPseudoHandle.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     SepMandatoryIntegrityCheck @ 0x14007EFF0 (SepMandatoryIntegrityCheck.c)
 *     SepFilterCheck @ 0x14007F470 (SepFilterCheck.c)
 *     SepAccessCheck @ 0x14007F5F0 (SepAccessCheck.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExpAcquireResourceSharedLite @ 0x1400801D0 (ExpAcquireResourceSharedLite.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     SepPrivilegeCheck @ 0x140087BC0 (SepPrivilegeCheck.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     SeLogAccessFailure @ 0x140113BC0 (SeLogAccessFailure.c)
 *     SepLpacCausedAccessFailure @ 0x14012AD50 (SepLpacCausedAccessFailure.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14013FB78 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExAcquireFastResourceShared @ 0x14013FBD0 (ExAcquireFastResourceShared.c)
 *     ExpFastResourceLegacyRelease @ 0x1401400C4 (ExpFastResourceLegacyRelease.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SepBuildCapeSecurityDescriptor @ 0x14025E0AC (SepBuildCapeSecurityDescriptor.c)
 *     SepCopyObjectTypeList @ 0x14025E14C (SepCopyObjectTypeList.c)
 *     SepGetScopedPolicySid @ 0x14025E204 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x14025E34C (SepLogLpacAccessFailure.c)
 *     SepMergeObjectTypeListAccesses @ 0x14025E460 (SepMergeObjectTypeListAccesses.c)
 *     SepRmDereferenceCapTable @ 0x14025E490 (SepRmDereferenceCapTable.c)
 *     SepRmReferenceFindCap @ 0x140260144 (SepRmReferenceFindCap.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SeReleaseSid @ 0x140460948 (SeReleaseSid.c)
 *     SeCaptureSid @ 0x140487010 (SeCaptureSid.c)
 *     SeReleaseSecurityDescriptor @ 0x14049CFE0 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     SeCaptureSecurityDescriptor @ 0x1404BBCD0 (SeCaptureSecurityDescriptor.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeAccessCheckByType(
        __int64 a1,
        void *a2,
        void *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int128 *a7,
        _DWORD *Address,
        PERESOURCE *a9,
        volatile void *a10,
        int *a11,
        char a12)
{
  unsigned int v12; // r12d
  __int64 v14; // rsi
  _QWORD *v15; // r13
  int v16; // r9d
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  SIZE_T v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 result; // rax
  int v25; // r14d
  NTSTATUS v26; // ebx
  __int16 *v27; // r14
  __int16 v28; // dx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // r9d
  unsigned int v35; // esi
  char v36; // cl
  int v37; // edx
  char v38; // r13
  unsigned int v39; // r15d
  int v40; // r14d
  int v41; // ebx
  int v42; // ecx
  int *v43; // rsi
  __int64 CurrentIrql; // rdx
  struct _KTHREAD *CurrentThread; // rax
  char *v46; // r15
  ULONG_PTR v47; // rbx
  __int16 v48; // cx
  __int64 v49; // rcx
  void *v50; // rbx
  PSID_AND_ATTRIBUTES v51; // rax
  char v52; // r14
  __int16 *v53; // rbx
  __int64 v54; // r13
  int v55; // r15d
  int v56; // ecx
  PVOID v57; // rbx
  char v58; // al
  _BYTE *v59; // rcx
  char *v60; // rsi
  __int64 v61; // r15
  char v62; // r13
  char *v63; // r15
  __int16 v64; // cx
  bool v65; // zf
  PERESOURCE v66; // rcx
  struct _KTHREAD *v67; // rcx
  int *v68; // r14
  _DWORD *v69; // rcx
  __int64 v70; // rax
  _DWORD *v71; // rdx
  __int64 v72; // rcx
  unsigned __int8 v73; // di
  int v74; // edx
  PVOID v75; // rdi
  __int64 v76; // rax
  __int64 v77; // rdx
  unsigned int v78; // eax
  unsigned int v79; // ebx
  unsigned int v80; // eax
  unsigned int v81; // eax
  int v82; // eax
  unsigned int v83; // ecx
  _DWORD *k; // r9
  _DWORD *v85; // rax
  unsigned int v86; // ecx
  _DWORD *v87; // rdx
  struct _ERESOURCE *v88; // rcx
  struct _KTHREAD *v89; // rax
  PVOID v90; // rbx
  int v91; // edx
  int v92; // r8d
  __int64 v93; // r9
  struct _KTHREAD *v94; // r8
  unsigned __int8 v95; // al
  struct _KTHREAD *v96; // rdx
  unsigned int v97; // ecx
  _DWORD *i; // r9
  int *PoolWithTag; // rax
  __int64 v100; // rcx
  __int64 v101; // rcx
  int v102; // eax
  int v103; // ecx
  unsigned int v104; // edx
  unsigned int v105; // eax
  void *OwnerEntryForLegacyShim; // rsi
  __int64 v107; // rax
  unsigned int v108; // ecx
  _DWORD *j; // r9
  __int64 v110; // rax
  ACL *v111; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v114; // rdx
  __int64 v115; // rsi
  _BYTE *v116; // rax
  char *v117; // rax
  int v118; // r15d
  int v119; // eax
  unsigned int v120; // ecx
  PVOID v121; // r13
  _DWORD *v122; // r10
  __int64 v123; // rbx
  int v124; // eax
  int v125; // edx
  _QWORD *v126; // rax
  void *v127; // r8
  void *v128; // rdx
  void *v129; // rcx
  void *v130; // r9
  int v131; // eax
  int v132; // ecx
  _QWORD *v133; // rax
  void *v134; // r8
  void *v135; // rdx
  void *v136; // rcx
  void *v137; // r9
  int v138; // eax
  int v139; // ecx
  int *v140; // r15
  PVOID v141; // rbx
  int Object; // [rsp+20h] [rbp-2C8h]
  int v143; // [rsp+40h] [rbp-2A8h]
  unsigned __int8 v144; // [rsp+A0h] [rbp-248h]
  int v145; // [rsp+A4h] [rbp-244h]
  char v146; // [rsp+A8h] [rbp-240h]
  char v147; // [rsp+AAh] [rbp-23Eh]
  char v148; // [rsp+B8h] [rbp-230h] BYREF
  char v149; // [rsp+B9h] [rbp-22Fh]
  char v150; // [rsp+BAh] [rbp-22Eh]
  char v151; // [rsp+BBh] [rbp-22Dh]
  unsigned int v152; // [rsp+C0h] [rbp-228h]
  char v153; // [rsp+C8h] [rbp-220h] BYREF
  char v154[7]; // [rsp+C9h] [rbp-21Fh] BYREF
  PVOID v155; // [rsp+D0h] [rbp-218h] BYREF
  unsigned int v156; // [rsp+D8h] [rbp-210h]
  int v157; // [rsp+E0h] [rbp-208h]
  int v158; // [rsp+E4h] [rbp-204h]
  int v159; // [rsp+E8h] [rbp-200h]
  int v160; // [rsp+ECh] [rbp-1FCh]
  __int64 v161; // [rsp+F0h] [rbp-1F8h] BYREF
  char v162; // [rsp+F8h] [rbp-1F0h]
  volatile void *v163; // [rsp+100h] [rbp-1E8h]
  PERESOURCE *v164; // [rsp+108h] [rbp-1E0h]
  __int16 *v165; // [rsp+110h] [rbp-1D8h]
  PVOID v166; // [rsp+118h] [rbp-1D0h]
  PVOID P; // [rsp+120h] [rbp-1C8h] BYREF
  PVOID v168; // [rsp+128h] [rbp-1C0h]
  unsigned int v169; // [rsp+130h] [rbp-1B8h]
  int v170; // [rsp+134h] [rbp-1B4h] BYREF
  int v171; // [rsp+138h] [rbp-1B0h] BYREF
  PVOID Src; // [rsp+140h] [rbp-1A8h]
  ACL *v173; // [rsp+148h] [rbp-1A0h]
  int *v174; // [rsp+150h] [rbp-198h]
  __int64 v175; // [rsp+158h] [rbp-190h] BYREF
  PVOID v176; // [rsp+160h] [rbp-188h] BYREF
  __int64 v177; // [rsp+168h] [rbp-180h]
  int v178[2]; // [rsp+170h] [rbp-178h] BYREF
  __int64 v179; // [rsp+178h] [rbp-170h] BYREF
  __int64 v180; // [rsp+180h] [rbp-168h] BYREF
  __int64 v181; // [rsp+188h] [rbp-160h]
  __int64 v182; // [rsp+190h] [rbp-158h]
  int v183; // [rsp+198h] [rbp-150h]
  void *v184; // [rsp+1A0h] [rbp-148h]
  PVOID v185; // [rsp+1A8h] [rbp-140h] BYREF
  __int64 v186; // [rsp+1B0h] [rbp-138h] BYREF
  __int64 v187; // [rsp+1B8h] [rbp-130h]
  void *v188; // [rsp+1C0h] [rbp-128h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+1C8h] [rbp-120h] BYREF
  char v190; // [rsp+1E8h] [rbp-100h] BYREF
  _BYTE v191[4]; // [rsp+1ECh] [rbp-FCh] BYREF
  char v192; // [rsp+1F0h] [rbp-F8h] BYREF
  char v193; // [rsp+1F4h] [rbp-F4h] BYREF
  __int64 v194; // [rsp+1F8h] [rbp-F0h]
  __int64 v195; // [rsp+200h] [rbp-E8h]
  __int64 v196; // [rsp+218h] [rbp-D0h]
  void *v197; // [rsp+220h] [rbp-C8h]
  void *v198; // [rsp+228h] [rbp-C0h]
  __int64 v199; // [rsp+230h] [rbp-B8h]
  PVOID v200; // [rsp+238h] [rbp-B0h] BYREF
  __int128 v201; // [rsp+240h] [rbp-A8h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+250h] [rbp-98h] BYREF
  __int64 v203; // [rsp+278h] [rbp-70h] BYREF
  int v204; // [rsp+280h] [rbp-68h]
  LUID v205; // [rsp+288h] [rbp-60h] BYREF
  int v206; // [rsp+290h] [rbp-58h]
  LUID v207; // [rsp+298h] [rbp-50h] BYREF
  int v208; // [rsp+2A0h] [rbp-48h]

  v12 = a4;
  v188 = a2;
  v195 = a1;
  v196 = a1;
  v197 = a2;
  v198 = a3;
  v156 = a4;
  v14 = a5;
  v194 = a5;
  v199 = a5;
  v152 = a6;
  v15 = Address;
  v184 = Address;
  v164 = a9;
  v163 = a10;
  v168 = 0LL;
  v166 = 0LL;
  v174 = 0LL;
  v155 = 0LL;
  v161 = 0LL;
  v175 = 0LL;
  v158 = 0;
  v157 = 0;
  v176 = 0LL;
  Src = 0LL;
  v169 = 0;
  v186 = 0LL;
  v187 = 0LL;
  v146 = 0;
  P = 0LL;
  v180 = 0LL;
  v181 = 0LL;
  v182 = 0LL;
  v183 = 0;
  v173 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v177 = 0LL;
  v149 = 0;
  v147 = 0;
  LOBYTE(v16) = 0;
  v160 = v16;
  v162 = 0;
  v185 = 0LL;
  v148 = 0;
  v153 = 0;
  v154[0] = 0;
  v179 = 0LL;
  v178[1] = 0;
  v171 = -1;
  v178[0] = -1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v144 = PreviousMode;
  if ( !PreviousMode )
  {
    *a11 = 0;
    *(_DWORD *)v163 = v12;
    return 0LL;
  }
  if ( a12 )
  {
    v23 = v152;
    if ( !v152 )
    {
      result = 3221225485LL;
      goto LABEL_21;
    }
    ProbeForWrite(a11, 4LL * v152, 4u);
    ProbeForWrite(v163, 4LL * v152, 4u);
  }
  else
  {
    v18 = (__int64)a11;
    if ( (unsigned __int64)a11 >= 0x7FFFFFFF0000LL )
      v18 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v18 = *(_DWORD *)v18;
    v19 = (__int64)v163;
    if ( (unsigned __int64)v163 >= 0x7FFFFFFF0000LL )
      v19 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v19 = *(_DWORD *)v19;
  }
  v20 = (__int64)v164;
  if ( (unsigned __int64)v164 >= 0x7FFFFFFF0000LL )
    v20 = 0x7FFFFFFF0000LL;
  v21 = *(unsigned int *)v20;
  v169 = *(_DWORD *)v20;
  v22 = (__int64)v164;
  if ( (unsigned __int64)v164 >= 0x7FFFFFFF0000LL )
    v22 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v22 = *(_DWORD *)v22;
  ProbeForWrite(Address, v21, 4u);
  if ( Address && (unsigned int)v21 >= 0x14 )
    *Address = 0;
  if ( ((unsigned __int8)a7 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v201 = *a7;
  result = 0LL;
  v14 = v194;
  PreviousMode = v144;
LABEL_21:
  v25 = v195;
  if ( (int)result < 0 )
    return result;
  if ( (v12 & 0xF0000000) != 0 )
  {
    v26 = -1073741594;
    goto LABEL_218;
  }
  v148 = 0;
  v179 = 0LL;
  if ( (unsigned __int64)a3 + 6 > 2 )
  {
    v26 = ObReferenceObjectByHandle(a3, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &v200, 0LL);
    v155 = v200;
LABEL_25:
    v145 = v26;
    goto LABEL_26;
  }
  v82 = SepReferenceTokenUsingPseudoHandle(a3, &v155, &v148, &v179);
  v26 = v82;
  if ( v82 >= 0 )
    goto LABEL_25;
  v145 = v82;
LABEL_26:
  if ( v26 < 0 )
  {
    v155 = 0LL;
    goto LABEL_219;
  }
  if ( (unsigned __int64)a3 + 6 > 2 )
  {
    if ( *((_DWORD *)v155 + 48) != 2 )
    {
      v26 = -1073741732;
      goto LABEL_218;
    }
    if ( *((int *)v155 + 49) < 1 )
    {
      v26 = -1073741659;
      goto LABEL_218;
    }
  }
  v26 = SeCaptureObjectTypeList(v14, v152, v144, &v176);
  v145 = v26;
  if ( v26 < 0 )
    goto LABEL_219;
  v26 = SeCaptureSecurityDescriptor(v25, v144, 1, 0, (__int64)&v161);
  v145 = v26;
  if ( v26 < 0 )
    goto LABEL_219;
  if ( !v161 )
    goto LABEL_229;
  v27 = (__int16 *)(v161 + 2);
  v165 = (__int16 *)(v161 + 2);
  v28 = *(_WORD *)(v161 + 2);
  if ( v28 >= 0 )
  {
    v30 = *(_QWORD *)(v161 + 8);
  }
  else
  {
    v29 = *(unsigned int *)(v161 + 4);
    if ( !(_DWORD)v29 )
      goto LABEL_229;
    v30 = v161 + v29;
  }
  if ( !v30 )
    goto LABEL_229;
  if ( v28 < 0 )
  {
    v31 = *(unsigned int *)(v161 + 8);
    if ( (_DWORD)v31 )
    {
      v32 = v161 + v31;
      goto LABEL_40;
    }
LABEL_229:
    v26 = -1073741703;
    goto LABEL_218;
  }
  v32 = *(_QWORD *)(v161 + 16);
LABEL_40:
  if ( !v32 )
    goto LABEL_229;
  if ( v148 )
    LODWORD(v33) = v179;
  else
    v33 = *((_QWORD *)v155 + 138);
  Object = v33;
  v26 = SepTrustLevelCheck(&v171, v161, 0LL, v155);
  v145 = v26;
  if ( v26 < 0 )
    goto LABEL_219;
  v35 = v12 & 0xFDFFFFFF;
  if ( (v171 & v12 & 0xFDFFFFFF) == (v12 & 0xFDFFFFFF) )
  {
    LOBYTE(v34) = 1;
    v26 = SepFilterCheck(v161, (unsigned int)&P, (_DWORD)v155, v34, (__int64)v178);
    v145 = v26;
    if ( v26 < 0 )
      goto LABEL_219;
    if ( (v178[0] & v35) == v35 )
    {
      v26 = SepMandatoryIntegrityCheck((unsigned int)&v201, v161, 0, (_DWORD)v155, 1, (__int64)&v186);
      v145 = v26;
      if ( v26 >= 0 )
      {
        v36 = 0;
        v146 = 0;
        if ( (_DWORD)v187 && ((unsigned int)v186 & v35) != v35 )
        {
          v37 = -1073741790;
        }
        else
        {
          v37 = 0;
          if ( (v12 & 0x2000000) == 0 )
            goto LABEL_51;
        }
        if ( (*((_DWORD *)v155 + 50) & 0x4000) != 0 && HIDWORD(v187) <= 0x2000 )
        {
          v36 = 1;
          v146 = 1;
        }
        else
        {
          v36 = 0;
        }
LABEL_51:
        if ( v37 < 0 && !v36 )
        {
          v43 = (int *)Src;
          goto LABEL_61;
        }
        v38 = 0;
        v151 = 0;
        v150 = 0;
        v39 = 0;
        v40 = 0;
        v41 = 0x1000000;
        if ( (v12 & 0x1000000) != 0 )
        {
          v207 = SeSecurityPrivilege;
          v208 = 0;
          v40 = 1;
          if ( !(unsigned __int8)SepPrivilegeCheck((_DWORD)v155, (unsigned int)&v207, 1, 1, v144) )
          {
            v37 = -1073741727;
            v41 = v158;
            v43 = (int *)Src;
            goto LABEL_58;
          }
          v42 = v23;
          v150 = v23;
          v12 &= ~0x1000000u;
          v156 = v12;
          v158 = 0x1000000;
        }
        else
        {
          v41 = v158;
          v42 = 1;
        }
        if ( (v12 & 0x80000) != 0 )
        {
          v203 = SeTakeOwnershipPrivilege;
          v204 = 0;
          if ( (unsigned __int8)SepPrivilegeCheck((_DWORD)v155, (unsigned int)&v203, v42, v42, v144) )
          {
            ++v40;
            v38 = 1;
            v12 &= ~0x80000u;
            v156 = v12;
            v41 |= 0x80000u;
            v158 = v41;
          }
          else
          {
            v205 = SeRelabelPrivilege;
            v206 = 0;
            if ( (unsigned __int8)SepPrivilegeCheck((_DWORD)v155, (unsigned int)&v205, 1, 1, v144) )
            {
              ++v40;
              v151 = 1;
              v12 &= ~0x80000u;
              v156 = v12;
              v41 |= 0x80000u;
              v158 = v41;
            }
          }
        }
        if ( v40 )
        {
          PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(12 * v40 + 8), 0x72506553u);
          v43 = PoolWithTag;
          Src = PoolWithTag;
          if ( !PoolWithTag )
          {
            v37 = -1073741670;
            goto LABEL_58;
          }
          *PoolWithTag = v40;
          PoolWithTag[1] = 0;
          if ( v38 )
          {
            *((_QWORD *)PoolWithTag + 1) = SeTakeOwnershipPrivilege;
            PoolWithTag[4] = 0x80000000;
            v39 = 1;
          }
          if ( v150 )
          {
            v100 = 3LL * v39;
            *(LUID *)&PoolWithTag[v100 + 2] = SeSecurityPrivilege;
            PoolWithTag[v100 + 4] = 0x80000000;
            ++v39;
          }
          if ( v151 )
          {
            v101 = 3LL * v39;
            *(LUID *)&PoolWithTag[v101 + 2] = SeRelabelPrivilege;
            PoolWithTag[v101 + 4] = 0x80000000;
          }
        }
        else
        {
          v43 = (int *)Src;
        }
        v37 = 0;
LABEL_58:
        v15 = v184;
        if ( !v12 )
        {
          v102 = (unsigned __int8)v160;
          if ( v41 )
            v102 = 1;
          v160 = v102;
        }
        v27 = v165;
        goto LABEL_60;
      }
LABEL_219:
      v62 = a12;
LABEL_220:
      v68 = a11;
      v73 = v144;
      goto LABEL_110;
    }
    v154[0] = 1;
  }
  else
  {
    v153 = 1;
  }
  v37 = -1073741790;
  v43 = (int *)Src;
LABEL_60:
  v36 = v146;
LABEL_61:
  if ( v37 < 0 && !v36 )
  {
    v62 = a12;
    if ( a12 )
    {
      v97 = 0;
      v23 = (__int64)a11;
      for ( i = v163; ; i[v97++] = 0 )
      {
        v159 = v97;
        if ( v97 >= v152 )
          break;
        a11[v97] = v37;
      }
    }
    else
    {
      *a11 = v37;
      *(_DWORD *)v163 = 0;
    }
    v26 = 0;
    v145 = 0;
    goto LABEL_220;
  }
  if ( !v43 )
  {
    if ( v169 >= 0x14 )
    {
      *v15 = 0LL;
      goto LABEL_65;
    }
    *(_DWORD *)v164 = 20;
    v26 = -1073741789;
    v145 = -1073741789;
    v73 = v144;
    v68 = a11;
LABEL_199:
    v62 = a12;
    goto LABEL_110;
  }
  v103 = *v43;
  v104 = 8;
  if ( *v43 )
    v105 = 12 * v103 + 8;
  else
    v105 = 8;
  if ( v105 > v169 )
  {
    if ( v103 )
      v104 = 12 * v103 + 8;
    *(_DWORD *)v164 = v104;
    v26 = -1073741789;
    v145 = -1073741789;
    v73 = v144;
    v68 = a11;
    ExFreePoolWithTag(v43, 0);
    goto LABEL_199;
  }
  if ( v103 )
    v104 = 12 * v103 + 8;
  memmove(v15, v43, v104);
  ExFreePoolWithTag(v43, 0);
LABEL_65:
  if ( v188 )
  {
    v26 = SeCaptureSid(v188, Object, 1, (__int64)&v175);
    v145 = v26;
    if ( v26 < 0 )
    {
      v175 = 0LL;
      goto LABEL_219;
    }
  }
  SeCaptureSubjectContext(&SubjectContext);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v46 = (char *)v155;
  v164 = (PERESOURCE *)((char *)v155 + 48);
  v47 = *((_QWORD *)v155 + 6);
  if ( (*(_WORD *)(v47 + 26) & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, v47, 0LL, 0LL);
  v48 = *(_WORD *)(v47 + 26) & 1;
  if ( v48 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v94 = KeGetCurrentThread();
    if ( (unsigned __int8)CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)CurrentIrql, 1uLL, 0LL);
    if ( (v94->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !(_BYTE)CurrentIrql && (v94->MiscFlags & 0x400) == 0 && !v94->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    v46 = (char *)v155;
  }
  if ( v48 )
  {
    OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim();
    if ( !(unsigned __int8)ExAcquireFastResourceShared(v47, (ULONG_PTR)OwnerEntryForLegacyShim) )
      ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  }
  else
  {
    LOBYTE(CurrentIrql) = 1;
    ExpAcquireResourceSharedLite(*((_QWORD *)v155 + 6), CurrentIrql);
  }
  if ( *v27 >= 0 )
  {
    v50 = *(void **)(v161 + 8);
  }
  else
  {
    v49 = *(unsigned int *)(v161 + 4);
    if ( (_DWORD)v49 )
      v50 = (void *)(v161 + v49);
    else
      v50 = 0LL;
  }
  v51 = RtlSidHashLookup((PSID_AND_ATTRIBUTES_HASH)(v46 + 232), v50);
  if ( v51 )
    v52 = v51 == *((PSID_AND_ATTRIBUTES *)v46 + 30) && (v51->Attributes & 0x10) == 0 || (v51->Attributes & 4) != 0;
  else
    v52 = 0;
  if ( v52 && *((_DWORD *)v46 + 32) )
    v52 = SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(v46 + 504), 0LL, v50, 0, 1, 0);
  if ( !SepAllowAccessUponLogoff && (*((_DWORD *)v46 + 50) & 0x20) == 0 )
  {
    v107 = *((_QWORD *)v46 + 27);
    if ( v107 )
    {
      if ( (*(_DWORD *)(v107 + 32) & 0x20) != 0 )
      {
        v62 = a12;
        v68 = a11;
        if ( a12 )
        {
          v108 = 0;
          for ( j = v163; ; j[v108++] = 0 )
          {
            v159 = v108;
            if ( v108 >= v152 )
              break;
            a11[v108] = -1073741790;
          }
        }
        else
        {
          *a11 = -1073741790;
          *(_DWORD *)v163 = 0;
        }
        v145 = 0;
        v73 = v144;
        v88 = (struct _ERESOURCE *)*((_QWORD *)v46 + 6);
LABEL_197:
        ExReleaseResourceLite(v88);
        KeLeaveCriticalRegionThread(KeGetCurrentThread());
        SeReleaseSubjectContext(&SubjectContext);
        v26 = 0;
        goto LABEL_110;
      }
    }
  }
  v53 = v165;
  if ( !SepRmEnforceCap || (*v165 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
  {
    v54 = v161;
    goto LABEL_79;
  }
  v54 = v161;
  if ( *v165 >= 0 )
  {
    v111 = *(ACL **)(v161 + 24);
  }
  else
  {
    v110 = *(unsigned int *)(v161 + 12);
    if ( !(_DWORD)v110 )
    {
      v173 = 0LL;
      goto LABEL_79;
    }
    v111 = (ACL *)(v161 + v110);
  }
  v173 = v111;
  if ( v111 )
  {
    ScopedPolicySid = (void *)SepGetScopedPolicySid(v111);
    if ( ScopedPolicySid )
    {
      Cap = SepRmReferenceFindCap(ScopedPolicySid);
      v114 = v177;
      if ( Cap < 0 )
        v114 = SepRmDefaultCap;
      v177 = v114;
      v149 = 1;
    }
  }
LABEL_79:
  if ( (v12 & 0x2060000) != 0
    && v52
    && ((*v53 & 4) == 0
      ? (v77 = 0LL)
      : *v53 >= 0
      ? (v77 = *(_QWORD *)(v54 + 32))
      : (v76 = *(unsigned int *)(v54 + 16), !(_DWORD)v76)
      ? (v77 = 0LL)
      : (v77 = v76 + v54),
        !RtlpOwnerAcesPresent(0, v77)) )
  {
    v56 = 393216;
    if ( (v12 & 0x2000000) == 0 )
      v56 = v12 & 0x60000;
    v157 = v56;
    v12 &= 0xFFF9FFFF;
    v156 = v12;
    v55 = v56 | v158;
    v158 |= v56;
  }
  else
  {
    v55 = v158;
    v56 = v157;
  }
  if ( v12 || v149 && !(_BYTE)v160 )
  {
    LODWORD(v57) = (_DWORD)v155;
  }
  else
  {
    v57 = v155;
    if ( (*((_DWORD *)v155 + 50) & 0x2000) != 0 || !v56 )
    {
      v62 = a12;
      v68 = a11;
      if ( a12 )
      {
        v86 = 0;
        v87 = v163;
        while ( 1 )
        {
          v159 = v86;
          if ( v86 >= v152 )
            break;
          if ( v55 )
          {
            a11[v86] = 0;
            v87[v86] = v55;
          }
          else
          {
            a11[v86] = -1073741790;
            v87[v86] = 0;
          }
          ++v86;
        }
      }
      else
      {
        v85 = v163;
        if ( v55 )
        {
          *a11 = 0;
          *v85 = v55;
        }
        else
        {
          *a11 = -1073741790;
          *v85 = 0;
        }
      }
      v145 = 0;
      v73 = v144;
      v88 = (struct _ERESOURCE *)*((_QWORD *)v57 + 6);
      goto LABEL_197;
    }
  }
  v58 = a12;
  if ( a12 )
  {
    v115 = v152;
    v116 = ExAllocatePoolWithTag(PagedPool, 8LL * v152, 0x61476553u);
    v59 = v116;
    v168 = v116;
    if ( v116 )
    {
      v60 = &v116[4 * v115];
      v58 = a12;
      goto LABEL_85;
    }
    ExReleaseResourceLite(*v164);
    KeLeaveCriticalRegionThread(KeGetCurrentThread());
    SeReleaseSubjectContext(&SubjectContext);
    v26 = -1073741670;
LABEL_218:
    v145 = v26;
    goto LABEL_219;
  }
  v59 = v191;
  v168 = v191;
  v60 = &v190;
LABEL_85:
  LODWORD(v180) = v157;
  v143 = v55;
  v61 = v152;
  SepAccessCheck(
    v54,
    v175,
    SubjectContext.PrimaryToken,
    (_DWORD)v57,
    v12,
    (__int64)v176,
    v152,
    (__int64)&v201,
    v143,
    v144,
    (__int64)v59,
    0LL,
    (__int64)v60,
    v58,
    v52,
    (__int64)&v180,
    (__int64)&P,
    0LL,
    0LL);
  v62 = a12;
  if ( SepRmEnforceCap && *(int *)v60 >= 0 && v149 )
  {
    if ( a12 )
    {
      v117 = (char *)ExAllocatePoolWithTag(PagedPool, 8 * v61, 0x61476553u);
      v166 = v117;
      if ( !v117 )
      {
        ExReleaseResourceLite(*v164);
        KeLeaveCriticalRegionThread(KeGetCurrentThread());
        SeReleaseSubjectContext(&SubjectContext);
        v26 = -1073741670;
        v145 = -1073741670;
        goto LABEL_220;
      }
      v174 = (int *)&v117[4 * v61];
    }
    else
    {
      v166 = &v192;
      v174 = (int *)&v193;
    }
    v118 = *(_DWORD *)v60;
    v119 = *(_DWORD *)v168;
    v157 = *(_DWORD *)v168;
    LOBYTE(v160) = 0;
    if ( v152 )
    {
      v26 = SepCopyObjectTypeList(v176, v152, &v185);
      v145 = v26;
      if ( v26 < 0 )
        goto LABEL_220;
      v119 = v157;
    }
    v120 = 0;
    v121 = P;
    v122 = v155;
    while ( 1 )
    {
      LODWORD(v165) = v120;
      if ( v120 >= *(_DWORD *)(v177 + 60) )
        break;
      v123 = *(_QWORD *)(v177 + 8LL * v120 + 64);
      if ( !*(_QWORD *)(v123 + 24) )
        goto LABEL_358;
      if ( !v121 )
      {
        v124 = AuthzBasepInitializeResourceClaimsFromSacl((__int64)v173, (__int64 *)&P);
        v125 = (unsigned __int8)v160;
        if ( v124 < 0 )
          v125 = 1;
        v160 = v125;
        v121 = P;
        v122 = v155;
      }
      v126 = (_QWORD *)*((_QWORD *)v122 + 137);
      v127 = v126 ? (void *)v126[75] : 0LL;
      v128 = v126 ? (void *)v126[73] : 0LL;
      v129 = v126 ? (void *)v126[74] : 0LL;
      v130 = v126 ? (void *)v126[72] : 0LL;
      v131 = AuthzBasepEvaluateAceCondition(
               v122,
               *((void **)v122 + 97),
               v121,
               v130,
               v129,
               v128,
               v127,
               *(_DWORD **)(v123 + 24),
               *(_DWORD *)(v123 + 16),
               1u,
               0,
               &v170);
      v145 = v131;
      v132 = v170;
      if ( v170 == 1 )
        goto LABEL_358;
      if ( v131 < 0 )
        goto LABEL_375;
      v122 = v155;
      if ( (*((_DWORD *)v155 + 50) & 0x10) != 0 )
      {
        v133 = (_QWORD *)*((_QWORD *)v155 + 137);
        if ( v133 )
          v134 = (void *)v133[75];
        else
          v134 = 0LL;
        if ( v133 )
          v135 = (void *)v133[73];
        else
          v135 = 0LL;
        if ( v133 )
          v136 = (void *)v133[74];
        else
          v136 = 0LL;
        if ( v133 )
          v137 = (void *)v133[72];
        else
          v137 = 0LL;
        v145 = AuthzBasepEvaluateAceCondition(
                 v155,
                 *((void **)v155 + 97),
                 v121,
                 v137,
                 v136,
                 v135,
                 v134,
                 *(_DWORD **)(v123 + 24),
                 *(_DWORD *)(v123 + 16),
                 1u,
                 1u,
                 &v170);
        if ( v145 < 0 )
        {
LABEL_375:
          ExReleaseResourceLite(*v164);
          KeLeaveCriticalRegionThread(KeGetCurrentThread());
          SeReleaseSubjectContext(&SubjectContext);
          v26 = v145;
          goto LABEL_219;
        }
        v132 = v170;
        v122 = v155;
      }
      if ( (_BYTE)v160 || v132 == 1 )
      {
LABEL_358:
        v145 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
        if ( v145 < 0 )
          goto LABEL_375;
        v138 = v12;
        if ( (*(_DWORD *)(v123 + 48) & 1) != 0 )
        {
          if ( (v12 & 0x2000000) == 0 )
            v138 = v158 | v12;
          v139 = 0;
        }
        else
        {
          v139 = v158;
        }
        v62 = a12;
        v140 = v174;
        v141 = v185;
        SepAccessCheck(
          (unsigned int)SecurityDescriptor,
          v175,
          SubjectContext.PrimaryToken,
          (_DWORD)v155,
          v138,
          (__int64)v185,
          v152,
          (__int64)&v201,
          v139,
          v144,
          (__int64)v166,
          0LL,
          (__int64)v174,
          a12,
          v52,
          (__int64)&v180,
          (__int64)&P,
          0LL,
          0LL);
        if ( v147 )
          v119 = *(_DWORD *)v166 & v157;
        else
          v119 = *(_DWORD *)v166;
        v157 = v119;
        if ( v119 )
          v118 = *v140;
        else
          v118 = -1073741790;
        v147 = 1;
        if ( v141 )
        {
          SepMergeObjectTypeListAccesses(v176, v141, v152);
          v119 = v157;
        }
        if ( v118 < 0 )
          goto LABEL_377;
        v121 = P;
        v122 = v155;
      }
      else
      {
        v119 = v157;
      }
      v120 = (_DWORD)v165 + 1;
    }
    v62 = a12;
LABEL_377:
    *(_DWORD *)v60 = v118;
    v63 = (char *)v168;
    *(_DWORD *)v168 &= v119;
  }
  else
  {
    v63 = (char *)v168;
  }
  if ( ((*v164)->Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)*v164, 0LL, 0LL);
  v64 = (*v164)->Flag & 1;
  if ( v64 )
  {
    v95 = KeGetCurrentIrql();
    v96 = KeGetCurrentThread();
    if ( v95 > 2u )
      KeBugCheckEx(0x1C6u, 0LL, v95, 2uLL, 0LL);
    if ( !v95 && (v96->MiscFlags & 0x400) == 0 && !v96->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  v65 = v64 == 0;
  v66 = *v164;
  if ( v65 )
    ExpReleaseResourceForThreadLite((ULONG_PTR)v66, (ULONG_PTR)KeGetCurrentThread());
  else
    ExpFastResourceLegacyRelease(v66);
  v67 = KeGetCurrentThread();
  v65 = v67->KernelApcDisable++ == -1;
  if ( v65
    && ($B476B70DB57F76B110DA5B9238C3E934 *)v67->ApcState.ApcListHead[0].Flink != &v67->152
    && !v67->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  SeReleaseSubjectContext(&SubjectContext);
  if ( (v12 & 0x2000000) != 0 )
  {
    if ( !v146 || !*(_WORD *)((char *)&v182 + 5) )
    {
      if ( v62 )
        v78 = v152;
      else
        v78 = 0;
      SepConstrainByMandatory((__int64)&v186, v12, v63, v60, 0LL, v78);
    }
  }
  else if ( v146 && !*(_WORD *)((char *)&v182 + 5) )
  {
    v68 = a11;
    if ( v62 )
    {
      v83 = 0;
      for ( k = v163; ; k[v83++] = 0 )
      {
        v159 = v83;
        if ( v83 >= v152 )
          break;
        a11[v83] = -1073741790;
      }
    }
    else
    {
      *a11 = -1073741790;
      *(_DWORD *)v163 = 0;
    }
    v26 = 0;
    v145 = 0;
    v73 = v144;
    goto LABEL_110;
  }
  if ( (v12 & 0x2000000) != 0 )
  {
    v79 = v152;
    if ( v62 )
      v80 = v152;
    else
      v80 = 0;
    SepConstrainByConstraintMask(v171, v12, v63, v60, 0LL, v80, &v153);
    if ( v62 )
      v81 = v79;
    else
      v81 = 0;
    SepConstrainByConstraintMask(v178[0], v12, v63, v60, 0LL, v81, v154);
  }
  v68 = a11;
  if ( v62 )
  {
    v70 = 0LL;
    v71 = v163;
    v23 = (__int64)v174;
    while ( 1 )
    {
      v159 = v70;
      if ( (unsigned int)v70 >= v152 )
        break;
      v72 = v70;
      a11[v72] = *(_DWORD *)&v60[4 * v70];
      v71[v72] = *(_DWORD *)&v63[4 * v70];
      if ( SepRmEnforceCap && v147 && a11[v70] >= 0 )
      {
        a11[v70] = *(_DWORD *)(4 * v70 + v23);
        v71[v70] &= *((_DWORD *)v166 + v70);
      }
      v70 = (unsigned int)(v159 + 1);
    }
  }
  else
  {
    *a11 = *(_DWORD *)v60;
    v69 = v163;
    *(_DWORD *)v163 = *(_DWORD *)v63;
    if ( SepRmEnforceCap && v147 && *a11 >= 0 )
    {
      v23 = (__int64)v174;
      *a11 = *v174;
      *v69 &= *(_DWORD *)v166;
    }
  }
  v26 = 0;
  v145 = 0;
  v73 = v144;
LABEL_110:
  if ( v161 && v155 )
  {
    if ( v153 || v154[0] )
    {
LABEL_203:
      v89 = KeGetCurrentThread();
      --v89->KernelApcDisable;
      v90 = v155;
      ExAcquireResourceSharedLite(*((PERESOURCE *)v155 + 6), 1u);
      if ( v148 )
        LODWORD(v93) = v179;
      else
        v93 = *((_QWORD *)v90 + 138);
      SeLogAccessFailure((_DWORD)v90, v91, v92, v93, v161, v158 | v12, *v68 >= 0);
      ExReleaseResourceLite(*((PERESOURCE *)v90 + 6));
      KeLeaveCriticalRegionThread(KeGetCurrentThread());
      v26 = v145;
      v74 = HIDWORD(v181);
LABEL_116:
      if ( v26 >= 0
        && *v68 < 0
        && !v74
        && (*((_DWORD *)v155 + 50) & 0x4000) != 0
        && (unsigned __int8)SepLpacCausedAccessFailure(&v180, v12) )
      {
        SepLogLpacAccessFailure();
      }
      goto LABEL_118;
    }
    v74 = HIDWORD(v181);
    if ( HIDWORD(v181) || (*((_DWORD *)v155 + 50) & 0x4000) == 0 )
      goto LABEL_116;
    if ( v26 >= 0 )
    {
      if ( *v68 >= 0 && !HIBYTE(v182) )
        goto LABEL_116;
      goto LABEL_203;
    }
  }
LABEL_118:
  if ( v62 )
  {
    if ( v168 )
      ExFreePoolWithTag(v168, 0);
    if ( v166 )
      ExFreePoolWithTag(v166, 0);
  }
  if ( v155 )
    ObfDereferenceObjectWithTag(v155, 0x746C6644u);
  if ( v176 )
    ExFreePoolWithTag(v176, 0);
  if ( v175 )
  {
    LOBYTE(v23) = 1;
    SeReleaseSid(v175, v73, v23);
  }
  if ( v161 )
    SeReleaseSecurityDescriptor(v161, v73, 0LL);
  if ( v149 && *(_QWORD *)(v177 + 32) )
    SepRmDereferenceCapTable();
  if ( v185 )
    ExFreePoolWithTag(v185, 0);
  v75 = P;
  if ( P )
  {
    AuthzBasepFreeSecurityAttributesList(P);
    ExFreePoolWithTag(v75, 0);
  }
  return (unsigned int)v26;
}
