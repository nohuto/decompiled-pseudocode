/*
 * XREFs of SeAccessCheckByType @ 0x140092020
 * Callers:
 *     NtAccessCheckByType @ 0x1400244F8 (NtAccessCheckByType.c)
 *     NtAccessCheck @ 0x140091FBC (NtAccessCheck.c)
 *     NtAccessCheckByTypeResultList @ 0x140246714 (NtAccessCheckByTypeResultList.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x14000DBA0 (AuthzBasepFreeSecurityAttributesList.c)
 *     SeLogAccessFailure @ 0x14001BD60 (SeLogAccessFailure.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x140026074 (SepReferenceTokenUsingPseudoHandle.c)
 *     RtlpOwnerAcesPresent @ 0x14003E400 (RtlpOwnerAcesPresent.c)
 *     SepConstrainByConstraintMask @ 0x14003E504 (SepConstrainByConstraintMask.c)
 *     SepConstrainByMandatory @ 0x14003E540 (SepConstrainByMandatory.c)
 *     RtlSidDominatesForTrust @ 0x140044710 (RtlSidDominatesForTrust.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140065DA4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400897C0 (AuthzBasepEvaluateAceCondition.c)
 *     SepMandatoryIntegrityCheck @ 0x14008E320 (SepMandatoryIntegrityCheck.c)
 *     SepFilterCheck @ 0x14008E7E0 (SepFilterCheck.c)
 *     SepAccessCheck @ 0x14008E970 (SepAccessCheck.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     ExpAcquireResourceSharedLite @ 0x14008F610 (ExpAcquireResourceSharedLite.c)
 *     SepSidInTokenSidHash @ 0x140091F00 (SepSidInTokenSidHash.c)
 *     SeCaptureObjectTypeList @ 0x140093620 (SeCaptureObjectTypeList.c)
 *     SeGetTrustLabelAce @ 0x140093830 (SeGetTrustLabelAce.c)
 *     RtlSidHashLookup @ 0x1400938C0 (RtlSidHashLookup.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     SepPrivilegeCheck @ 0x1400EDD50 (SepPrivilegeCheck.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x1400EECB0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1400EF460 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14011C530 (KxWaitForLockOwnerShipWithIrql.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     ExpFastResourceLegacyRelease @ 0x14014DBCC (ExpFastResourceLegacyRelease.c)
 *     ExAcquireFastResourceShared @ 0x14014E540 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14014EA10 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x1401FE96C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     SepBuildCapeSecurityDescriptor @ 0x14024696C (SepBuildCapeSecurityDescriptor.c)
 *     SepCopyObjectTypeList @ 0x140246A0C (SepCopyObjectTypeList.c)
 *     SepGetScopedPolicySid @ 0x140246AC4 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x140246C14 (SepLogLpacAccessFailure.c)
 *     SepMergeObjectTypeListAccesses @ 0x140246D24 (SepMergeObjectTypeListAccesses.c)
 *     SepRmDereferenceCapTable @ 0x140246D54 (SepRmDereferenceCapTable.c)
 *     SepRmReferenceFindCap @ 0x140248A28 (SepRmReferenceFindCap.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeAccessCheckByType(
        __int64 a1,
        void *a2,
        void *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int128 *a7,
        volatile void *a8,
        unsigned int *a9,
        volatile void *a10,
        volatile void *a11,
        char a12)
{
  __int64 v14; // r14
  int *v15; // r9
  int v16; // r8d
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  SIZE_T v22; // r14
  __int64 v23; // rcx
  __int64 result; // rax
  char *v25; // r15
  int v26; // edi
  unsigned __int8 v27; // r13
  char v28; // r12
  __int64 v29; // rax
  ULONGLONG v30; // rax
  __int64 v31; // rax
  ULONGLONG v32; // rax
  void *v33; // r12
  char v34; // r15
  void *v35; // r14
  int v36; // r13d
  __int64 TrustLabelAce; // rax
  int v38; // r12d
  unsigned int v39; // r14d
  char v40; // cl
  char v41; // r15
  char v42; // r13
  unsigned int v43; // r14d
  int v44; // edi
  unsigned int v45; // ebx
  int *v46; // rbx
  __int64 CurrentIrql; // rdx
  struct _KTHREAD *v48; // rax
  PERESOURCE *v49; // r12
  ULONG_PTR v50; // rbx
  __int64 v51; // rcx
  __int64 v52; // rcx
  void *v53; // rbx
  PSID_AND_ATTRIBUTES v54; // rax
  char v55; // r14
  __int16 *v56; // rax
  __int64 v57; // r13
  int v58; // edi
  PERESOURCE *v59; // rbx
  char v60; // al
  unsigned int *v61; // rcx
  int *v62; // r15
  int v63; // edi
  char *v64; // r13
  PERESOURCE v65; // rbx
  __int16 v66; // cx
  ULONG_PTR v67; // rdi
  char v68; // al
  __int64 v69; // rdx
  struct _KTHREAD *v70; // r8
  USHORT Flag; // cx
  struct _KTHREAD *v72; // rcx
  __int16 v73; // ax
  char v74; // r14
  int *v75; // r8
  _DWORD *v76; // rcx
  __int64 v77; // rax
  char v78; // r10
  __int64 v79; // rcx
  PVOID v80; // rbx
  unsigned int v81; // eax
  unsigned int v82; // ebx
  unsigned int v83; // eax
  unsigned int v84; // eax
  __int16 v85; // ax
  __int64 v86; // rax
  __int64 v87; // rdx
  unsigned int v88; // eax
  int v89; // eax
  unsigned int v90; // ecx
  _DWORD *v91; // r8
  unsigned int v92; // ecx
  _DWORD *v93; // rdx
  _DWORD *v94; // r8
  struct _KTHREAD *v95; // rax
  PVOID v96; // rbx
  __int64 v97; // rdx
  __int64 v98; // r8
  ULONGLONG v99; // r9
  int v100; // r8d
  unsigned __int8 v101; // r8
  struct _KTHREAD *v102; // r8
  unsigned __int8 v103; // al
  struct _KTHREAD *v104; // rdx
  unsigned int v105; // ecx
  _DWORD *v106; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v108; // r12
  int v109; // r8d
  int *PoolWithTag; // rax
  __int64 v111; // rcx
  __int64 v112; // rcx
  int v113; // eax
  bool v114; // zf
  int v115; // ecx
  unsigned int v116; // edx
  unsigned int v117; // eax
  void *OwnerEntryForLegacyShim; // rdi
  __int64 v119; // rax
  unsigned int v120; // ecx
  _DWORD *v121; // r8
  _DWORD *v122; // r9
  __int64 v123; // rax
  ACL *v124; // rcx
  void *ScopedPolicySid; // rax
  __int64 v126; // rdx
  __int64 v127; // r15
  unsigned int *v128; // rax
  __int64 v129; // rbx
  char *v130; // rax
  int v131; // r13d
  int v132; // eax
  unsigned int v133; // ecx
  PVOID v134; // rdi
  _DWORD *v135; // r10
  __int64 v136; // rbx
  int v137; // eax
  int v138; // edx
  _QWORD *v139; // rax
  void *v140; // r8
  void *v141; // rdx
  void *v142; // rcx
  void *v143; // r9
  int v144; // eax
  int v145; // ecx
  _QWORD *v146; // rax
  void *v147; // r8
  void *v148; // rdx
  void *v149; // rcx
  void *v150; // r9
  unsigned int v151; // eax
  unsigned int v152; // ecx
  int *v153; // r13
  PVOID v154; // rbx
  __int64 v155; // rcx
  __int64 v156; // rcx
  PVOID *Object; // [rsp+20h] [rbp-2F8h]
  unsigned int v158; // [rsp+40h] [rbp-2D8h]
  unsigned __int8 v159; // [rsp+A0h] [rbp-278h]
  int v160; // [rsp+A4h] [rbp-274h]
  int Cap; // [rsp+A4h] [rbp-274h]
  unsigned __int8 v162; // [rsp+A8h] [rbp-270h]
  unsigned __int8 v163[8]; // [rsp+B0h] [rbp-268h] BYREF
  unsigned int v164; // [rsp+B8h] [rbp-260h]
  volatile void *v165; // [rsp+C0h] [rbp-258h]
  char v166; // [rsp+C8h] [rbp-250h]
  char v167; // [rsp+C9h] [rbp-24Fh] BYREF
  char v168; // [rsp+CAh] [rbp-24Eh]
  unsigned int v169; // [rsp+D0h] [rbp-248h]
  PVOID v170; // [rsp+D8h] [rbp-240h] BYREF
  char v171; // [rsp+E0h] [rbp-238h] BYREF
  char v172[7]; // [rsp+E1h] [rbp-237h] BYREF
  unsigned int v173; // [rsp+E8h] [rbp-230h]
  int v174; // [rsp+F0h] [rbp-228h]
  int v175; // [rsp+F4h] [rbp-224h]
  BOOLEAN DominatesTrust; // [rsp+F8h] [rbp-220h] BYREF
  BOOLEAN v177[3]; // [rsp+F9h] [rbp-21Fh] BYREF
  unsigned int v178; // [rsp+FCh] [rbp-21Ch]
  ULONGLONG v179; // [rsp+100h] [rbp-218h] BYREF
  int v180; // [rsp+108h] [rbp-210h]
  char v181; // [rsp+10Eh] [rbp-20Ah]
  volatile void *v182; // [rsp+110h] [rbp-208h]
  __int16 *v183; // [rsp+118h] [rbp-200h]
  int v184; // [rsp+120h] [rbp-1F8h]
  PVOID Src; // [rsp+128h] [rbp-1F0h]
  PVOID v186; // [rsp+130h] [rbp-1E8h]
  PVOID v187; // [rsp+138h] [rbp-1E0h]
  PVOID P; // [rsp+140h] [rbp-1D8h] BYREF
  unsigned int v189; // [rsp+148h] [rbp-1D0h]
  int v190; // [rsp+14Ch] [rbp-1CCh] BYREF
  ACL *v191; // [rsp+150h] [rbp-1C8h]
  char *v192; // [rsp+158h] [rbp-1C0h]
  PVOID v193; // [rsp+160h] [rbp-1B8h] BYREF
  __int64 v194; // [rsp+168h] [rbp-1B0h] BYREF
  __int64 v195; // [rsp+170h] [rbp-1A8h]
  volatile void *Address; // [rsp+178h] [rbp-1A0h]
  __int64 v197; // [rsp+180h] [rbp-198h] BYREF
  __int64 v198; // [rsp+188h] [rbp-190h]
  __int64 v199; // [rsp+190h] [rbp-188h]
  int v200; // [rsp+198h] [rbp-180h]
  unsigned int *v201; // [rsp+1A0h] [rbp-178h]
  int v202[2]; // [rsp+1A8h] [rbp-170h] BYREF
  void *v203; // [rsp+1B0h] [rbp-168h] BYREF
  PVOID v204; // [rsp+1B8h] [rbp-160h] BYREF
  __int64 v205; // [rsp+1C0h] [rbp-158h] BYREF
  __int64 v206; // [rsp+1C8h] [rbp-150h]
  void *v207; // [rsp+1D0h] [rbp-148h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+1D8h] [rbp-140h] BYREF
  _QWORD v209[3]; // [rsp+1F8h] [rbp-120h] BYREF
  _BYTE v210[4]; // [rsp+210h] [rbp-108h] BYREF
  char v211; // [rsp+214h] [rbp-104h] BYREF
  char v212; // [rsp+218h] [rbp-100h] BYREF
  __int64 v213; // [rsp+220h] [rbp-F8h]
  __int64 v214; // [rsp+238h] [rbp-E0h]
  void *v215; // [rsp+240h] [rbp-D8h]
  void *v216; // [rsp+248h] [rbp-D0h]
  __int64 v217; // [rsp+250h] [rbp-C8h]
  PVOID v218; // [rsp+258h] [rbp-C0h] BYREF
  __int128 v219; // [rsp+260h] [rbp-B8h] BYREF
  char v220; // [rsp+270h] [rbp-A8h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+278h] [rbp-A0h] BYREF
  __int64 v222; // [rsp+2A0h] [rbp-78h] BYREF
  int v223; // [rsp+2A8h] [rbp-70h]
  LUID v224; // [rsp+2B0h] [rbp-68h] BYREF
  int v225; // [rsp+2B8h] [rbp-60h]
  LUID v226; // [rsp+2C0h] [rbp-58h] BYREF
  int v227; // [rsp+2C8h] [rbp-50h]

  v164 = a4;
  v207 = a2;
  v14 = a1;
  v213 = a1;
  v214 = a1;
  v215 = a2;
  v216 = a3;
  v173 = a4;
  v217 = a5;
  v169 = a6;
  Address = a8;
  v201 = a9;
  v182 = a10;
  v165 = a11;
  v186 = 0LL;
  v187 = 0LL;
  v192 = 0LL;
  v170 = 0LL;
  v179 = 0LL;
  v194 = 0LL;
  v174 = 0;
  v175 = 0;
  v193 = 0LL;
  Src = 0LL;
  v189 = 0;
  v178 = 0;
  v205 = 0LL;
  v206 = 0LL;
  v162 = 0;
  P = 0LL;
  v197 = 0LL;
  v198 = 0LL;
  v199 = 0LL;
  v200 = 0;
  v191 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v195 = 0LL;
  v168 = 0;
  LOBYTE(v15) = 0;
  v166 = 0;
  LOBYTE(v16) = 0;
  v180 = v16;
  v181 = 0;
  v204 = 0LL;
  v167 = 0;
  v171 = 0;
  v172[0] = 0;
  v203 = 0LL;
  v202[1] = 0;
  v17 = -1;
  v184 = -1;
  v202[0] = -1;
  v18 = (unsigned __int8)KeGetCurrentThread()->gap0[10];
  v159 = v18;
  if ( !(_BYTE)v18 )
  {
    *(_DWORD *)v165 = 0;
    *(_DWORD *)v182 = a4;
    return 0LL;
  }
  if ( a12 )
  {
    if ( !v169 )
    {
      result = 3221225485LL;
      goto LABEL_21;
    }
    ProbeForWrite(v165, 4LL * v169, 4u);
    ProbeForWrite(v182, 4LL * v169, 4u);
  }
  else
  {
    v19 = (__int64)v165;
    if ( (unsigned __int64)v165 >= 0x7FFFFFFF0000LL )
      v19 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v19 = *(_DWORD *)v19;
    v20 = (__int64)v182;
    if ( (unsigned __int64)v182 >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v20 = *(_DWORD *)v20;
  }
  v21 = (__int64)v201;
  if ( (unsigned __int64)v201 >= 0x7FFFFFFF0000LL )
    v21 = 0x7FFFFFFF0000LL;
  v22 = *(unsigned int *)v21;
  v189 = *(_DWORD *)v21;
  v23 = (__int64)v201;
  if ( (unsigned __int64)v201 >= 0x7FFFFFFF0000LL )
    v23 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v23 = *(_DWORD *)v23;
  ProbeForWrite(Address, v22, 4u);
  if ( Address && (unsigned int)v22 >= 0x14 )
    *(_DWORD *)Address = 0;
  if ( ((unsigned __int8)a7 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v219 = *a7;
  result = 0LL;
  v14 = v213;
  v18 = v159;
LABEL_21:
  LOBYTE(v25) = v164;
  if ( (int)result < 0 )
    return result;
  if ( (v164 & 0xF0000000) != 0 )
  {
    v26 = -1073741594;
    goto LABEL_235;
  }
  v167 = 0;
  v203 = 0LL;
  if ( (unsigned __int64)a3 + 6 > 2 )
  {
    v26 = ObReferenceObjectByHandle(a3, 8u, (POBJECT_TYPE)SeTokenObjectType, v18, &v218, 0LL);
    v170 = v218;
LABEL_25:
    v160 = v26;
    goto LABEL_26;
  }
  v89 = SepReferenceTokenUsingPseudoHandle((__int64)a3, &v170, &v167, &v203);
  v26 = v89;
  if ( v89 >= 0 )
    goto LABEL_25;
  v160 = v89;
LABEL_26:
  if ( v26 < 0 )
  {
    v170 = 0LL;
    goto LABEL_236;
  }
  if ( (unsigned __int64)a3 + 6 > 2 )
  {
    if ( *((_DWORD *)v170 + 48) == 2 )
    {
      if ( *((int *)v170 + 49) >= 1 )
        goto LABEL_30;
      v26 = -1073741659;
    }
    else
    {
      v26 = -1073741732;
    }
LABEL_235:
    v160 = v26;
    goto LABEL_236;
  }
LABEL_30:
  v27 = v159;
  v26 = SeCaptureObjectTypeList(a5, v169, v159, &v193);
  v160 = v26;
  if ( v26 < 0 )
  {
LABEL_237:
    v28 = 1;
    goto LABEL_238;
  }
  Object = (PVOID *)&v179;
  v28 = 1;
  v26 = SeCaptureSecurityDescriptor(v14, v159, 1LL, 0LL);
  v160 = v26;
  if ( v26 < 0 )
  {
LABEL_238:
    v75 = (int *)v165;
    goto LABEL_219;
  }
  if ( !v179 )
    goto LABEL_250;
  v183 = (__int16 *)(v179 + 2);
  v18 = *(unsigned __int16 *)(v179 + 2);
  if ( (v18 & 0x8000u) == 0LL )
  {
    v30 = *(_QWORD *)(v179 + 8);
  }
  else
  {
    v29 = *(unsigned int *)(v179 + 4);
    if ( !(_DWORD)v29 )
      goto LABEL_250;
    v30 = v179 + v29;
  }
  if ( !v30 )
    goto LABEL_250;
  if ( (v18 & 0x8000u) != 0LL )
  {
    v31 = *(unsigned int *)(v179 + 8);
    if ( (_DWORD)v31 )
    {
      v32 = v179 + v31;
      goto LABEL_40;
    }
LABEL_250:
    v26 = -1073741703;
    v160 = -1073741703;
    goto LABEL_238;
  }
  v32 = *(_QWORD *)(v179 + 16);
LABEL_40:
  if ( !v32 )
    goto LABEL_250;
  if ( v167 )
    v33 = v203;
  else
    v33 = (void *)*((_QWORD *)v170 + 138);
  v26 = 0;
  v177[0] = 0;
  DominatesTrust = 0;
  v34 = 0;
  v35 = 0LL;
  v36 = -1;
  TrustLabelAce = SeGetTrustLabelAce(v179);
  if ( TrustLabelAce )
  {
    v36 = *(_DWORD *)(TrustLabelAce + 4);
    v35 = (void *)(TrustLabelAce + 8);
  }
  if ( !v35 )
  {
    v184 = -1;
LABEL_47:
    v38 = 0x1000000;
    goto LABEL_48;
  }
  if ( v170 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)v170 + 6), 1u);
  }
  else
  {
    SeLockSubjectContext(0LL);
  }
  v34 = 1;
  if ( !v170 )
  {
    v108 = MEMORY[0];
    if ( MEMORY[0] )
      v26 = RtlSidDominatesForTrust(*(PSID *)(MEMORY[0x10] + 1104LL), *(PSID *)(MEMORY[0] + 1104LL), &DominatesTrust);
    if ( v26 < 0 )
      goto LABEL_276;
    if ( DominatesTrust && v108 )
      v33 = *(void **)(v108 + 1104);
    else
      v33 = *(void **)(MEMORY[0x10] + 1104LL);
  }
  v26 = RtlSidDominatesForTrust(v33, v35, v177);
  if ( v26 < 0 )
  {
LABEL_276:
    v17 = v184;
    goto LABEL_47;
  }
  v38 = 0x1000000;
  if ( v177[0] )
  {
    v184 = -1;
  }
  else
  {
    v17 = v36 | 0x1000000;
    v184 = v36 | 0x1000000;
  }
LABEL_48:
  if ( v34 )
  {
    if ( v170 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v170 + 6));
      KeLeaveCriticalRegion();
    }
    else
    {
      SeUnlockSubjectContext(0LL);
    }
  }
  v160 = v26;
  LOBYTE(v25) = v164;
  if ( v26 < 0 )
    goto LABEL_236;
  v39 = v164 & 0xFDFFFFFF;
  if ( (v17 & v164 & 0xFDFFFFFF) != (v164 & 0xFDFFFFFF) )
  {
    v18 = 3221225506LL;
    v171 = 1;
LABEL_298:
    v46 = (int *)Src;
    goto LABEL_65;
  }
  v26 = SepFilterCheck(v179, &P, v170, 1, v202);
  v160 = v26;
  if ( v26 < 0 )
  {
LABEL_236:
    v27 = v159;
    goto LABEL_237;
  }
  if ( (v202[0] & v39) != v39 )
  {
    v18 = 3221225506LL;
    v172[0] = 1;
    goto LABEL_298;
  }
  v26 = SepMandatoryIntegrityCheck(&v219, v179, 0, (__int64)v170, 1, (__int64)&v205);
  v160 = v26;
  if ( v26 < 0 )
    goto LABEL_236;
  v40 = 0;
  v162 = 0;
  if ( (_DWORD)v206 && ((unsigned int)v205 & v39) != v39 )
  {
    v18 = 3221225506LL;
  }
  else
  {
    v18 = 0LL;
    if ( (v164 & 0x2000000) == 0 )
      goto LABEL_57;
  }
  if ( (*((_DWORD *)v170 + 50) & 0x4000) != 0 && HIDWORD(v206) <= 0x2000 )
  {
    v40 = 1;
    v162 = 1;
  }
  else
  {
    v40 = 0;
  }
LABEL_57:
  if ( (int)v18 < 0 && !v40 )
  {
    v46 = (int *)Src;
    goto LABEL_66;
  }
  v41 = 0;
  v163[0] = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = v164;
  if ( (v164 & 0x1000000) != 0 )
  {
    v226 = SeSecurityPrivilege;
    v227 = 0;
    if ( !(unsigned __int8)SepPrivilegeCheck((_DWORD)v170, (unsigned int)&v226, 1, 1, v159) )
    {
      v18 = 3221225569LL;
      v38 = v174;
      v46 = (int *)Src;
      goto LABEL_64;
    }
    v44 = v109;
    v42 = v109;
    v45 = v164 & 0xFEFFFFFF;
    v164 = v45;
    v173 = v45;
    v174 = 0x1000000;
  }
  else
  {
    v38 = v174;
  }
  if ( (v45 & 0x80000) != 0 )
  {
    v222 = SeTakeOwnershipPrivilege;
    v223 = 0;
    if ( (unsigned __int8)SepPrivilegeCheck((_DWORD)v170, (unsigned int)&v222, 1, 1, v159) )
    {
      v41 = v100;
    }
    else
    {
      v224 = SeRelabelPrivilege;
      v225 = 0;
      if ( !(unsigned __int8)SepPrivilegeCheck((_DWORD)v170, (unsigned int)&v224, v100, v100, v159) )
        goto LABEL_61;
      v163[0] = v101;
    }
    ++v44;
    v38 |= 0x80000u;
    v174 = v38;
    v173 = v45 & 0xFFF7FFFF;
    v164 = v45 & 0xFFF7FFFF;
  }
LABEL_61:
  if ( !v44 )
  {
    v46 = (int *)Src;
LABEL_63:
    v18 = 0LL;
    goto LABEL_64;
  }
  PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(12 * v44 + 8), 0x72506553u);
  v46 = PoolWithTag;
  Src = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = v44;
    PoolWithTag[1] = 0;
    if ( v41 )
    {
      *((_QWORD *)PoolWithTag + 1) = SeTakeOwnershipPrivilege;
      PoolWithTag[4] = 0x80000000;
      v43 = 1;
    }
    if ( v42 )
    {
      v111 = 3LL * v43;
      *(LUID *)&PoolWithTag[v111 + 2] = SeSecurityPrivilege;
      PoolWithTag[v111 + 4] = 0x80000000;
      ++v43;
    }
    if ( v163[0] )
    {
      v112 = 3LL * v43;
      *(LUID *)&PoolWithTag[v112 + 2] = SeRelabelPrivilege;
      PoolWithTag[v112 + 4] = 0x80000000;
    }
    goto LABEL_63;
  }
  v18 = 3221225626LL;
LABEL_64:
  LOBYTE(v25) = v164;
  if ( v164 )
  {
LABEL_65:
    v40 = v162;
LABEL_66:
    v28 = 1;
    goto LABEL_67;
  }
  v113 = (unsigned __int8)v180;
  v114 = v38 == 0;
  v28 = 1;
  if ( !v114 )
    v113 = 1;
  v180 = v113;
  v40 = v162;
LABEL_67:
  if ( (int)v18 < 0 && !v40 )
  {
    v74 = a12;
    if ( a12 )
    {
      v105 = 0;
      v106 = v182;
      v15 = (int *)v165;
      while ( 1 )
      {
        v178 = v105;
        if ( v105 >= v169 )
          break;
        v15[v105] = v18;
        v106[v105++] = 0;
      }
      v75 = v15;
    }
    else
    {
      v75 = (int *)v165;
      *(_DWORD *)v165 = v18;
      *(_DWORD *)v182 = 0;
    }
    v26 = 0;
    v160 = 0;
    v27 = v159;
    goto LABEL_129;
  }
  if ( v46 )
  {
    v115 = *v46;
    v116 = 8;
    if ( *v46 )
      v117 = 12 * v115 + 8;
    else
      v117 = 8;
    if ( v117 > v189 )
    {
      if ( v115 )
        v116 = 12 * v115 + 8;
      *v201 = v116;
      v26 = -1073741789;
      v160 = -1073741789;
      v27 = v159;
      ExFreePoolWithTag(v46, 0);
      goto LABEL_238;
    }
    if ( v115 )
      v116 = 12 * v115 + 8;
    memmove((void *)Address, v46, v116);
    ExFreePoolWithTag(v46, 0);
LABEL_71:
    v27 = v159;
    if ( v207 )
    {
      v26 = SeCaptureSid(v207, (int)Object, 1, (__int64)&v194);
      v160 = v26;
      if ( v26 < 0 )
      {
        v194 = 0LL;
        goto LABEL_238;
      }
    }
    SeCaptureSubjectContext(&SubjectContext);
    v48 = KeGetCurrentThread();
    --v48->KernelApcDisable;
    v25 = (char *)v170;
    v49 = (PERESOURCE *)((char *)v170 + 48);
    v50 = *((_QWORD *)v170 + 6);
    v51 = *(unsigned __int16 *)(v50 + 26);
    if ( (v51 & 0x41) == 1 )
      KeBugCheckEx(0x1C6u, 0xFuLL, v50, 0LL, 0LL);
    LOWORD(v51) = *(_WORD *)(v50 + 26) & 1;
    if ( (_WORD)v51 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v102 = KeGetCurrentThread();
      if ( (unsigned __int8)CurrentIrql > 1u )
        KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)CurrentIrql, 1uLL, 0LL);
      if ( (v102->ApcState.InProgressFlags & 2) != 0 )
        KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
      if ( !(_BYTE)CurrentIrql && (v102->MiscFlags & 0x400) == 0 && !v102->WaitBlock[3].SpareLong )
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      v25 = (char *)v170;
    }
    if ( (_WORD)v51 )
    {
      OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim(v51, CurrentIrql);
      if ( !(unsigned __int8)ExAcquireFastResourceShared(v50, (ULONG_PTR)OwnerEntryForLegacyShim) )
        ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
    }
    else
    {
      ExpAcquireResourceSharedLite(*((_QWORD *)v170 + 6), 1);
    }
    if ( *v183 >= 0 )
    {
      v53 = *(void **)(v179 + 8);
    }
    else
    {
      v52 = *(unsigned int *)(v179 + 4);
      if ( (_DWORD)v52 )
        v53 = (void *)(v179 + v52);
      else
        v53 = 0LL;
    }
    v54 = RtlSidHashLookup((PSID_AND_ATTRIBUTES_HASH)(v25 + 232), v53);
    if ( v54 )
      v55 = v54 == *((PSID_AND_ATTRIBUTES *)v25 + 30) && (v54->Attributes & 0x10) == 0 || (v54->Attributes & 4) != 0;
    else
      v55 = 0;
    if ( v55 && *((_DWORD *)v25 + 32) )
      v55 = SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(v25 + 504), 0LL, v53, 0, 1, 0);
    if ( !SepAllowAccessUponLogoff && (*((_DWORD *)v25 + 50) & 0x20) == 0 )
    {
      v119 = *((_QWORD *)v25 + 27);
      if ( v119 )
      {
        if ( (*(_DWORD *)(v119 + 32) & 0x20) != 0 )
        {
          v74 = a12;
          if ( a12 )
          {
            v120 = 0;
            v121 = v182;
            v122 = v165;
            while ( 1 )
            {
              v178 = v120;
              if ( v120 >= v169 )
                break;
              v122[v120] = -1073741790;
              v121[v120++] = 0;
            }
          }
          else
          {
            *(_DWORD *)v165 = -1073741790;
            *(_DWORD *)v182 = 0;
          }
          v160 = 0;
          v28 = 1;
          ExReleaseResourceLite(*((PERESOURCE *)v25 + 6));
          KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
          SeReleaseSubjectContext(&SubjectContext);
          v26 = 0;
          LOBYTE(v25) = v164;
          v75 = (int *)v165;
          goto LABEL_129;
        }
      }
    }
    v56 = v183;
    if ( SepRmEnforceCap && (*v183 & 0x10) != 0 )
    {
      if ( KeGetCurrentIrql() < 2u )
      {
        v57 = v179;
        if ( (*v183 & 0x10) != 0 )
        {
          if ( *v183 >= 0 )
          {
            v124 = *(ACL **)(v179 + 24);
            goto LABEL_331;
          }
          v123 = *(unsigned int *)(v179 + 12);
          if ( (_DWORD)v123 )
          {
            v124 = (ACL *)(v123 + v179);
LABEL_331:
            v191 = v124;
            if ( v124 )
            {
              ScopedPolicySid = (void *)SepGetScopedPolicySid(v124);
              if ( ScopedPolicySid )
              {
                Cap = SepRmReferenceFindCap(ScopedPolicySid);
                v126 = v195;
                if ( Cap < 0 )
                  v126 = SepRmDefaultCap;
                v195 = v126;
                v168 = 1;
              }
            }
            goto LABEL_338;
          }
        }
        v191 = 0LL;
LABEL_338:
        v56 = v183;
LABEL_88:
        LODWORD(v25) = v164;
        if ( (v164 & 0x2060000) != 0
          && v55
          && ((v85 = *v56, (v85 & 4) == 0)
            ? (v87 = 0LL)
            : v85 >= 0
            ? (v87 = *(_QWORD *)(v57 + 32))
            : (v86 = *(unsigned int *)(v57 + 16), !(_DWORD)v86)
            ? (v87 = 0LL)
            : (v87 = v86 + v57),
              !RtlpOwnerAcesPresent(0, v87)) )
        {
          if ( (v164 & 0x2000000) != 0 )
            v88 = 393216;
          else
            v88 = v164 & 0x60000;
          v58 = v88 | v174;
          v174 |= v88;
          v175 = v88;
          LODWORD(v25) = v164 & 0xFFF9FFFF;
          v164 = (unsigned int)v25;
          v173 = (unsigned int)v25;
        }
        else
        {
          v58 = v174;
        }
        if ( (_DWORD)v25 || v168 && !(_BYTE)v180 )
        {
          v59 = (PERESOURCE *)v170;
        }
        else
        {
          v59 = (PERESOURCE *)v170;
          if ( (*((_DWORD *)v170 + 50) & 0x2000) != 0 || !v175 )
          {
            v74 = a12;
            if ( a12 )
            {
              v92 = 0;
              v93 = v182;
              v94 = v165;
              while ( 1 )
              {
                v178 = v92;
                if ( v92 >= v169 )
                  break;
                if ( v58 )
                {
                  v94[v92] = 0;
                  v93[v92] = v58;
                }
                else
                {
                  v94[v92] = -1073741790;
                  v93[v92] = 0;
                }
                ++v92;
              }
            }
            else if ( v58 )
            {
              *(_DWORD *)v165 = 0;
              *(_DWORD *)v182 = v58;
            }
            else
            {
              *(_DWORD *)v165 = -1073741790;
              *(_DWORD *)v182 = 0;
            }
            v160 = 0;
            v27 = v159;
            v28 = 1;
            ExReleaseResourceLite(v59[6]);
            KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
            SeReleaseSubjectContext(&SubjectContext);
            v26 = 0;
            v75 = (int *)v165;
            goto LABEL_129;
          }
        }
        v60 = a12;
        if ( a12 )
        {
          v127 = v169;
          v128 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 8LL * v169, 0x61476553u);
          v61 = v128;
          v186 = v128;
          if ( !v128 )
            goto LABEL_348;
          v62 = (int *)&v128[v127];
          v60 = a12;
        }
        else
        {
          v61 = (unsigned int *)v210;
          v186 = v210;
          v62 = (int *)&v211;
        }
        LODWORD(v197) = v175;
        v158 = v58;
        v63 = v164;
        SepAccessCheck(
          v57,
          v194,
          (__int64)SubjectContext.PrimaryToken,
          (__int64)v59,
          v164,
          v193,
          v169,
          &v219,
          v158,
          v159,
          v61,
          0LL,
          v62,
          v60,
          v55,
          (int *)&v197,
          (__int64)&P,
          0LL,
          0LL);
        if ( !SepRmEnforceCap || *v62 < 0 || !v168 )
        {
          v64 = (char *)v186;
          goto LABEL_96;
        }
        if ( !a12 )
        {
          v187 = &v212;
          v192 = &v220;
          goto LABEL_357;
        }
        v129 = v169;
        v130 = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * v169, 0x61476553u);
        v187 = v130;
        if ( v130 )
        {
          v192 = &v130[4 * v129];
LABEL_357:
          v131 = *v62;
          v132 = *(_DWORD *)v186;
          v175 = *(_DWORD *)v186;
          LOBYTE(v180) = 0;
          if ( !v169 )
            goto LABEL_360;
          v26 = SepCopyObjectTypeList(v193, v169, &v204);
          v160 = v26;
          if ( v26 >= 0 )
          {
            v132 = v175;
LABEL_360:
            v133 = 0;
            v134 = P;
            v135 = v170;
            while ( 1 )
            {
              LODWORD(v183) = v133;
              if ( v133 >= *(_DWORD *)(v195 + 60) )
                break;
              v136 = *(_QWORD *)(v195 + 8LL * v133 + 64);
              if ( !*(_QWORD *)(v136 + 24) )
                goto LABEL_399;
              if ( !v134 )
              {
                v137 = AuthzBasepInitializeResourceClaimsFromSacl((__int64)v191, &P);
                v138 = (unsigned __int8)v180;
                if ( v137 < 0 )
                  v138 = 1;
                v180 = v138;
                v134 = P;
                v135 = v170;
              }
              v139 = (_QWORD *)*((_QWORD *)v135 + 137);
              v140 = v139 ? (void *)v139[75] : 0LL;
              v141 = v139 ? (void *)v139[73] : 0LL;
              v142 = v139 ? (void *)v139[74] : 0LL;
              v143 = v139 ? (void *)v139[72] : 0LL;
              v144 = AuthzBasepEvaluateAceCondition(
                       v135,
                       *((void **)v135 + 97),
                       v134,
                       v143,
                       v142,
                       v141,
                       v140,
                       *(_DWORD **)(v136 + 24),
                       *(_DWORD *)(v136 + 16),
                       1u,
                       0,
                       &v190);
              v160 = v144;
              v145 = v190;
              if ( v190 == 1 )
                goto LABEL_399;
              if ( v144 < 0 )
                goto LABEL_349;
              v135 = v170;
              if ( (*((_DWORD *)v170 + 50) & 0x10) != 0 )
              {
                v146 = (_QWORD *)*((_QWORD *)v170 + 137);
                if ( v146 )
                  v147 = (void *)v146[75];
                else
                  v147 = 0LL;
                if ( v146 )
                  v148 = (void *)v146[73];
                else
                  v148 = 0LL;
                if ( v146 )
                  v149 = (void *)v146[74];
                else
                  v149 = 0LL;
                if ( v146 )
                  v150 = (void *)v146[72];
                else
                  v150 = 0LL;
                v160 = AuthzBasepEvaluateAceCondition(
                         v170,
                         *((void **)v170 + 97),
                         v134,
                         v150,
                         v149,
                         v148,
                         v147,
                         *(_DWORD **)(v136 + 24),
                         *(_DWORD *)(v136 + 16),
                         1u,
                         1u,
                         &v190);
                if ( v160 < 0 )
                {
LABEL_349:
                  ExReleaseResourceLite(*v49);
                  KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
                  SeReleaseSubjectContext(&SubjectContext);
                  v26 = v160;
                  goto LABEL_350;
                }
                v145 = v190;
                v135 = v170;
              }
              if ( (_BYTE)v180 || v145 == 1 )
              {
LABEL_399:
                v160 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
                if ( v160 < 0 )
                  goto LABEL_349;
                v63 = v164;
                v151 = v164;
                if ( (*(_DWORD *)(v136 + 48) & 1) != 0 )
                {
                  if ( (v164 & 0x2000000) == 0 )
                    v151 = v174 | v164;
                  v152 = 0;
                }
                else
                {
                  v152 = v174;
                }
                v153 = (int *)v192;
                v154 = v204;
                SepAccessCheck(
                  (__int64)SecurityDescriptor,
                  v194,
                  (__int64)SubjectContext.PrimaryToken,
                  (__int64)v170,
                  v151,
                  v204,
                  v169,
                  &v219,
                  v152,
                  v159,
                  (unsigned int *)v187,
                  0LL,
                  (int *)v192,
                  a12,
                  v55,
                  (int *)&v197,
                  (__int64)&P,
                  0LL,
                  0LL);
                if ( v166 )
                  v132 = *(_DWORD *)v187 & v175;
                else
                  v132 = *(_DWORD *)v187;
                v175 = v132;
                if ( v132 )
                  v131 = *v153;
                else
                  v131 = -1073741790;
                v166 = 1;
                if ( v154 )
                {
                  SepMergeObjectTypeListAccesses(v193, v154, v169);
                  v132 = v175;
                }
                if ( v131 < 0 )
                  goto LABEL_417;
                v134 = P;
                v135 = v170;
              }
              else
              {
                v132 = v175;
              }
              v133 = (_DWORD)v183 + 1;
            }
            v63 = v164;
LABEL_417:
            *v62 = v131;
            v64 = (char *)v186;
            *(_DWORD *)v186 &= v132;
LABEL_96:
            v65 = *v49;
            if ( ((*v49)->Flag & 0x41) == 1 )
              KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v65, 0LL, 0LL);
            v66 = (*v49)->Flag & 1;
            if ( v66 )
            {
              v103 = KeGetCurrentIrql();
              v104 = KeGetCurrentThread();
              if ( v103 > 2u )
                KeBugCheckEx(0x1C6u, 0LL, v103, 2uLL, 0LL);
              if ( !v103 && (v104->MiscFlags & 0x400) == 0 && !v104->WaitBlock[3].SpareLong )
                KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
            }
            if ( v66 )
            {
              ExpFastResourceLegacyRelease(*v49);
              v28 = 1;
            }
            else
            {
              v67 = (ULONG_PTR)KeGetCurrentThread();
              v163[0] = 2;
              v209[1] = &v65->SpinLock;
              v209[0] = 0LL;
              _disable();
              if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
              {
                v68 = KiFastAcquireQueuedSpinLockInstrumented(v209, &v65->SpinLock, v163);
              }
              else
              {
                v68 = 0;
                v69 = _InterlockedExchange64((volatile __int64 *)&v65->SpinLock, (__int64)v209);
                if ( v69 )
                {
                  KxWaitForLockOwnerShipWithIrql(v209, v69, v163);
                  v68 = 1;
                }
              }
              if ( v68 )
              {
                _disable();
                __writecr8(v163[0]);
              }
              v70 = KeGetCurrentThread();
              Flag = v65->Flag;
              if ( ((Flag & 1) != 0 || ExpResourceEnforceOwnerTransfer)
                && (v67 & 3) != 3
                && (struct _KTHREAD *)v67 != v70 )
              {
                KeBugCheckEx(0x16Eu, (ULONG_PTR)v65, (ULONG_PTR)v70, v67, 0LL);
              }
              v28 = 1;
              if ( (Flag & 0x80u) != 0 )
                ExpReleaseResourceExclusiveForThreadLite((ULONG_PTR)v65, v67);
              else
                ExpReleaseResourceSharedForThreadLite((ULONG_PTR)v65, v67);
              v63 = v164;
            }
            v72 = KeGetCurrentThread();
            v73 = v72->KernelApcDisable + 1;
            v72->KernelApcDisable = v73;
            if ( !v73
              && ($69CD3F157F9F39B6F7113F2231989901 *)v72->ApcState.ApcListHead[0].Flink != &v72->152
              && !v72->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
            SeReleaseSubjectContext(&SubjectContext);
            v18 = v162;
            if ( (v63 & 0x2000000) != 0 )
            {
              if ( !v162 || !*(_WORD *)((char *)&v199 + 1) )
              {
                v74 = a12;
                if ( a12 )
                  v81 = v169;
                else
                  v81 = 0;
                SepConstrainByMandatory((__int64)&v205, v63, v64, (char *)v62, 0LL, v81);
                goto LABEL_114;
              }
            }
            else if ( v162 && !*(_WORD *)((char *)&v199 + 1) )
            {
              v74 = a12;
              if ( a12 )
              {
                v90 = 0;
                v91 = v182;
                v15 = (int *)v165;
                while ( 1 )
                {
                  v178 = v90;
                  if ( v90 >= v169 )
                    break;
                  v15[v90] = -1073741790;
                  v91[v90++] = 0;
                }
                v75 = v15;
              }
              else
              {
                v75 = (int *)v165;
                *(_DWORD *)v165 = -1073741790;
                *(_DWORD *)v182 = 0;
              }
              v26 = 0;
              v160 = 0;
              LOBYTE(v25) = v164;
              v27 = v159;
              goto LABEL_129;
            }
            v74 = a12;
LABEL_114:
            if ( (v63 & 0x2000000) != 0 )
            {
              v82 = v169;
              if ( v74 )
                v83 = v169;
              else
                v83 = 0;
              SepConstrainByConstraintMask(v184, v63, v64, (char *)v62, 0LL, v83, &v171);
              if ( v74 )
                v84 = v82;
              else
                v84 = 0;
              SepConstrainByConstraintMask(v202[0], v63, v64, (char *)v62, 0LL, v84, v172);
            }
            v75 = (int *)v165;
            if ( v74 )
            {
              v77 = 0LL;
              v18 = (__int64)v182;
              v15 = (int *)v192;
              v78 = v166;
              while ( 1 )
              {
                v178 = v77;
                if ( (unsigned int)v77 >= v169 )
                  break;
                v79 = v77;
                v75[v79] = v62[v77];
                *(_DWORD *)(v18 + v79 * 4) = *(_DWORD *)&v64[4 * v77];
                if ( SepRmEnforceCap && v78 && v75[v77] >= 0 )
                {
                  v75[v77] = v15[v77];
                  *(_DWORD *)(v18 + 4 * v77) &= *((_DWORD *)v187 + v77);
                }
                v77 = v178 + 1;
              }
            }
            else
            {
              *(_DWORD *)v165 = *v62;
              v76 = v182;
              *(_DWORD *)v182 = *(_DWORD *)v64;
              if ( SepRmEnforceCap && v166 && *v75 >= 0 )
              {
                v15 = (int *)v192;
                *v75 = *(_DWORD *)v192;
                *v76 &= *(_DWORD *)v187;
              }
            }
            v26 = 0;
            v160 = 0;
            LOBYTE(v25) = v164;
            v27 = v159;
            goto LABEL_129;
          }
          goto LABEL_350;
        }
LABEL_348:
        ExReleaseResourceLite(*v49);
        KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
        SeReleaseSubjectContext(&SubjectContext);
        v26 = -1073741670;
        v160 = -1073741670;
LABEL_350:
        LOBYTE(v25) = v164;
        goto LABEL_236;
      }
      v56 = v183;
    }
    v57 = v179;
    goto LABEL_88;
  }
  if ( v189 >= 0x14 )
  {
    *(_QWORD *)Address = 0LL;
    goto LABEL_71;
  }
  *v201 = 20;
  v26 = -1073741789;
  v160 = -1073741789;
  v27 = v159;
  v75 = (int *)v165;
LABEL_219:
  v74 = a12;
LABEL_129:
  if ( v179 && v170 )
  {
    if ( v171
      || v172[0]
      || (v18 = HIDWORD(v198), !HIDWORD(v198))
      && (*((_DWORD *)v170 + 50) & 0x4000) != 0
      && v26 >= 0
      && (*v75 < 0 || BYTE3(v199)) )
    {
      v95 = KeGetCurrentThread();
      --v95->KernelApcDisable;
      v96 = v170;
      ExAcquireResourceSharedLite(*((PERESOURCE *)v170 + 6), 1u);
      if ( *(int *)v165 < 0 )
        v28 = 0;
      if ( v167 )
        v99 = (ULONGLONG)v203;
      else
        v99 = *((_QWORD *)v96 + 138);
      SeLogAccessFailure((__int64)v96, v97, v98, v99, v179, v174 | (unsigned __int8)v25, v28);
      ExReleaseResourceLite(*((PERESOURCE *)v96 + 6));
      KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
      v26 = v160;
      v18 = HIDWORD(v198);
    }
    if ( BYTE4(v199) )
    {
      if ( !(_DWORD)v18
        && (*((_DWORD *)v170 + 50) & 0x4000) != 0
        && (v200 & (HIDWORD(v197) | (unsigned int)v198)) != v200 )
      {
        v155 = (unsigned int)~v200;
        if ( ((unsigned int)v155 & (unsigned int)v197) == 0 && v26 >= 0 && *(int *)v165 < 0 )
          SepLogLpacAccessFailure(v155, v18, v75, v15);
      }
    }
  }
  if ( v74 )
  {
    if ( v186 )
      ExFreePoolWithTag(v186, 0);
    if ( v187 )
      ExFreePoolWithTag(v187, 0);
  }
  if ( v170 )
    ObfDereferenceObjectWithTag(v170, 0x746C6644u);
  if ( v193 )
    ExFreePoolWithTag(v193, 0);
  if ( v194 )
  {
    LOBYTE(v75) = 1;
    SeReleaseSid(v194, v27, v75);
  }
  if ( v179 )
    SeReleaseSecurityDescriptor(v179, v27, 0LL);
  if ( v168 )
  {
    v156 = *(_QWORD *)(v195 + 32);
    if ( v156 )
      SepRmDereferenceCapTable(v156, v18, v75, v15);
  }
  if ( v204 )
    ExFreePoolWithTag(v204, 0);
  v80 = P;
  if ( P )
  {
    AuthzBasepFreeSecurityAttributesList(P);
    ExFreePoolWithTag(v80, 0);
  }
  return (unsigned int)v26;
}
