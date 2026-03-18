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
  __int64 v33; // r12
  char v34; // r15
  __int64 v35; // r14
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
  __int64 v54; // rax
  __int64 v55; // r8
  char v56; // r14
  __int16 *v57; // rax
  __int64 v58; // r13
  int v59; // edi
  PERESOURCE *v60; // rbx
  char v61; // al
  unsigned int *v62; // rcx
  int *v63; // r15
  int v64; // edi
  char *v65; // r13
  PERESOURCE v66; // rbx
  __int16 v67; // cx
  ULONG_PTR v68; // rdi
  char v69; // al
  __int64 v70; // rdx
  struct _KTHREAD *v71; // r8
  USHORT Flag; // cx
  struct _KTHREAD *v73; // rcx
  __int16 v74; // ax
  char v75; // r14
  int *v76; // r8
  _DWORD *v77; // rcx
  __int64 v78; // rax
  char v79; // r10
  __int64 v80; // rcx
  PVOID v81; // rbx
  unsigned int v82; // eax
  unsigned int v83; // ebx
  unsigned int v84; // eax
  unsigned int v85; // eax
  __int16 v86; // ax
  __int64 v87; // rax
  __int64 v88; // rdx
  unsigned int v89; // eax
  int v90; // eax
  unsigned int v91; // ecx
  _DWORD *v92; // r8
  unsigned int v93; // ecx
  _DWORD *v94; // rdx
  _DWORD *v95; // r8
  struct _KTHREAD *v96; // rax
  PVOID v97; // rbx
  __int64 v98; // rdx
  __int64 v99; // r8
  ULONGLONG v100; // r9
  int v101; // r8d
  unsigned __int8 v102; // r8
  struct _KTHREAD *v103; // r8
  unsigned __int8 v104; // al
  struct _KTHREAD *v105; // rdx
  unsigned int v106; // ecx
  _DWORD *v107; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v109; // r12
  int v110; // r8d
  int *PoolWithTag; // rax
  __int64 v112; // rcx
  __int64 v113; // rcx
  int v114; // eax
  bool v115; // zf
  int v116; // ecx
  unsigned int v117; // edx
  unsigned int v118; // eax
  void *OwnerEntryForLegacyShim; // rdi
  __int64 v120; // rax
  unsigned int v121; // ecx
  _DWORD *v122; // r8
  _DWORD *v123; // r9
  __int64 v124; // rdx
  __int64 v125; // rax
  __int64 v126; // rcx
  void *ScopedPolicySid; // rax
  __int64 v128; // rdx
  __int64 v129; // r15
  unsigned int *v130; // rax
  __int64 v131; // rbx
  char *v132; // rax
  int v133; // r13d
  int v134; // eax
  unsigned int v135; // ecx
  PVOID v136; // rdi
  _DWORD *v137; // r10
  __int64 v138; // rbx
  int v139; // eax
  int v140; // edx
  _QWORD *v141; // rax
  void *v142; // r8
  void *v143; // rdx
  void *v144; // rcx
  void *v145; // r9
  int v146; // eax
  int v147; // ecx
  _QWORD *v148; // rax
  void *v149; // r8
  void *v150; // rdx
  void *v151; // rcx
  void *v152; // r9
  unsigned int v153; // eax
  unsigned int v154; // ecx
  int *v155; // r13
  PVOID v156; // rbx
  __int64 v157; // rcx
  __int64 v158; // rcx
  PVOID *Object; // [rsp+20h] [rbp-2F8h]
  unsigned int v160; // [rsp+40h] [rbp-2D8h]
  unsigned __int8 v161; // [rsp+A0h] [rbp-278h]
  int v162; // [rsp+A4h] [rbp-274h]
  int Cap; // [rsp+A4h] [rbp-274h]
  unsigned __int8 v164; // [rsp+A8h] [rbp-270h]
  unsigned __int8 v165[8]; // [rsp+B0h] [rbp-268h] BYREF
  unsigned int v166; // [rsp+B8h] [rbp-260h]
  volatile void *v167; // [rsp+C0h] [rbp-258h]
  char v168; // [rsp+C8h] [rbp-250h]
  char v169; // [rsp+C9h] [rbp-24Fh] BYREF
  char v170; // [rsp+CAh] [rbp-24Eh]
  unsigned int v171; // [rsp+D0h] [rbp-248h]
  PVOID v172; // [rsp+D8h] [rbp-240h] BYREF
  char v173; // [rsp+E0h] [rbp-238h] BYREF
  char v174[7]; // [rsp+E1h] [rbp-237h] BYREF
  unsigned int v175; // [rsp+E8h] [rbp-230h]
  int v176; // [rsp+F0h] [rbp-228h]
  int v177; // [rsp+F4h] [rbp-224h]
  char v178; // [rsp+F8h] [rbp-220h] BYREF
  char v179[3]; // [rsp+F9h] [rbp-21Fh] BYREF
  unsigned int v180; // [rsp+FCh] [rbp-21Ch]
  ULONGLONG v181; // [rsp+100h] [rbp-218h] BYREF
  int v182; // [rsp+108h] [rbp-210h]
  char v183; // [rsp+10Eh] [rbp-20Ah]
  volatile void *v184; // [rsp+110h] [rbp-208h]
  __int16 *v185; // [rsp+118h] [rbp-200h]
  int v186; // [rsp+120h] [rbp-1F8h]
  PVOID Src; // [rsp+128h] [rbp-1F0h]
  PVOID v188; // [rsp+130h] [rbp-1E8h]
  PVOID v189; // [rsp+138h] [rbp-1E0h]
  PVOID P; // [rsp+140h] [rbp-1D8h] BYREF
  unsigned int v191; // [rsp+148h] [rbp-1D0h]
  int v192; // [rsp+14Ch] [rbp-1CCh] BYREF
  __int64 v193; // [rsp+150h] [rbp-1C8h]
  char *v194; // [rsp+158h] [rbp-1C0h]
  PVOID v195; // [rsp+160h] [rbp-1B8h] BYREF
  __int64 v196; // [rsp+168h] [rbp-1B0h] BYREF
  __int64 v197; // [rsp+170h] [rbp-1A8h]
  volatile void *Address; // [rsp+178h] [rbp-1A0h]
  __int64 v199; // [rsp+180h] [rbp-198h] BYREF
  __int64 v200; // [rsp+188h] [rbp-190h]
  __int64 v201; // [rsp+190h] [rbp-188h]
  int v202; // [rsp+198h] [rbp-180h]
  unsigned int *v203; // [rsp+1A0h] [rbp-178h]
  int v204[2]; // [rsp+1A8h] [rbp-170h] BYREF
  ULONGLONG v205; // [rsp+1B0h] [rbp-168h] BYREF
  PVOID v206; // [rsp+1B8h] [rbp-160h] BYREF
  __int64 v207; // [rsp+1C0h] [rbp-158h] BYREF
  __int64 v208; // [rsp+1C8h] [rbp-150h]
  void *v209; // [rsp+1D0h] [rbp-148h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+1D8h] [rbp-140h] BYREF
  _QWORD v211[3]; // [rsp+1F8h] [rbp-120h] BYREF
  _BYTE v212[4]; // [rsp+210h] [rbp-108h] BYREF
  char v213; // [rsp+214h] [rbp-104h] BYREF
  char v214; // [rsp+218h] [rbp-100h] BYREF
  __int64 v215; // [rsp+220h] [rbp-F8h]
  __int64 v216; // [rsp+238h] [rbp-E0h]
  void *v217; // [rsp+240h] [rbp-D8h]
  void *v218; // [rsp+248h] [rbp-D0h]
  __int64 v219; // [rsp+250h] [rbp-C8h]
  PVOID v220; // [rsp+258h] [rbp-C0h] BYREF
  __int128 v221; // [rsp+260h] [rbp-B8h] BYREF
  char v222; // [rsp+270h] [rbp-A8h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+278h] [rbp-A0h] BYREF
  __int64 v224; // [rsp+2A0h] [rbp-78h] BYREF
  int v225; // [rsp+2A8h] [rbp-70h]
  LUID v226; // [rsp+2B0h] [rbp-68h] BYREF
  int v227; // [rsp+2B8h] [rbp-60h]
  LUID v228; // [rsp+2C0h] [rbp-58h] BYREF
  int v229; // [rsp+2C8h] [rbp-50h]

  v166 = a4;
  v209 = a2;
  v14 = a1;
  v215 = a1;
  v216 = a1;
  v217 = a2;
  v218 = a3;
  v175 = a4;
  v219 = a5;
  v171 = a6;
  Address = a8;
  v203 = a9;
  v184 = a10;
  v167 = a11;
  v188 = 0LL;
  v189 = 0LL;
  v194 = 0LL;
  v172 = 0LL;
  v181 = 0LL;
  v196 = 0LL;
  v176 = 0;
  v177 = 0;
  v195 = 0LL;
  Src = 0LL;
  v191 = 0;
  v180 = 0;
  v207 = 0LL;
  v208 = 0LL;
  v164 = 0;
  P = 0LL;
  v199 = 0LL;
  v200 = 0LL;
  v201 = 0LL;
  v202 = 0;
  v193 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v197 = 0LL;
  v170 = 0;
  LOBYTE(v15) = 0;
  v168 = 0;
  LOBYTE(v16) = 0;
  v182 = v16;
  v183 = 0;
  v206 = 0LL;
  v169 = 0;
  v173 = 0;
  v174[0] = 0;
  v205 = 0LL;
  v204[1] = 0;
  v17 = -1;
  v186 = -1;
  v204[0] = -1;
  v18 = (unsigned __int8)KeGetCurrentThread()->gap0[10];
  v161 = v18;
  if ( !(_BYTE)v18 )
  {
    *(_DWORD *)v167 = 0;
    *(_DWORD *)v184 = a4;
    return 0LL;
  }
  if ( a12 )
  {
    if ( !v171 )
    {
      result = 3221225485LL;
      goto LABEL_21;
    }
    ProbeForWrite(v167, 4LL * v171, 4u);
    ProbeForWrite(v184, 4LL * v171, 4u);
  }
  else
  {
    v19 = (__int64)v167;
    if ( (unsigned __int64)v167 >= 0x7FFFFFFF0000LL )
      v19 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v19 = *(_DWORD *)v19;
    v20 = (__int64)v184;
    if ( (unsigned __int64)v184 >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v20 = *(_DWORD *)v20;
  }
  v21 = (__int64)v203;
  if ( (unsigned __int64)v203 >= 0x7FFFFFFF0000LL )
    v21 = 0x7FFFFFFF0000LL;
  v22 = *(unsigned int *)v21;
  v191 = *(_DWORD *)v21;
  v23 = (__int64)v203;
  if ( (unsigned __int64)v203 >= 0x7FFFFFFF0000LL )
    v23 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v23 = *(_DWORD *)v23;
  ProbeForWrite(Address, v22, 4u);
  if ( Address && (unsigned int)v22 >= 0x14 )
    *(_DWORD *)Address = 0;
  if ( ((unsigned __int8)a7 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v221 = *a7;
  result = 0LL;
  v14 = v215;
  v18 = v161;
LABEL_21:
  LOBYTE(v25) = v166;
  if ( (int)result < 0 )
    return result;
  if ( (v166 & 0xF0000000) != 0 )
  {
    v26 = -1073741594;
    goto LABEL_235;
  }
  v169 = 0;
  v205 = 0LL;
  if ( (unsigned __int64)a3 + 6 > 2 )
  {
    v26 = ObReferenceObjectByHandle(a3, 8u, (POBJECT_TYPE)SeTokenObjectType, v18, &v220, 0LL);
    v172 = v220;
LABEL_25:
    v162 = v26;
    goto LABEL_26;
  }
  v90 = SepReferenceTokenUsingPseudoHandle((__int64)a3, &v172, &v169, &v205);
  v26 = v90;
  if ( v90 >= 0 )
    goto LABEL_25;
  v162 = v90;
LABEL_26:
  if ( v26 < 0 )
  {
    v172 = 0LL;
    goto LABEL_236;
  }
  if ( (unsigned __int64)a3 + 6 > 2 )
  {
    if ( *((_DWORD *)v172 + 48) == 2 )
    {
      if ( *((int *)v172 + 49) >= 1 )
        goto LABEL_30;
      v26 = -1073741659;
    }
    else
    {
      v26 = -1073741732;
    }
LABEL_235:
    v162 = v26;
    goto LABEL_236;
  }
LABEL_30:
  v27 = v161;
  v26 = SeCaptureObjectTypeList(a5, v171, v161, &v195);
  v162 = v26;
  if ( v26 < 0 )
  {
LABEL_237:
    v28 = 1;
    goto LABEL_238;
  }
  Object = (PVOID *)&v181;
  v28 = 1;
  v26 = SeCaptureSecurityDescriptor(v14, v161, 1LL, 0LL);
  v162 = v26;
  if ( v26 < 0 )
  {
LABEL_238:
    v76 = (int *)v167;
    goto LABEL_219;
  }
  if ( !v181 )
    goto LABEL_250;
  v185 = (__int16 *)(v181 + 2);
  v18 = *(unsigned __int16 *)(v181 + 2);
  if ( (v18 & 0x8000u) == 0LL )
  {
    v30 = *(_QWORD *)(v181 + 8);
  }
  else
  {
    v29 = *(unsigned int *)(v181 + 4);
    if ( !(_DWORD)v29 )
      goto LABEL_250;
    v30 = v181 + v29;
  }
  if ( !v30 )
    goto LABEL_250;
  if ( (v18 & 0x8000u) != 0LL )
  {
    v31 = *(unsigned int *)(v181 + 8);
    if ( (_DWORD)v31 )
    {
      v32 = v181 + v31;
      goto LABEL_40;
    }
LABEL_250:
    v26 = -1073741703;
    v162 = -1073741703;
    goto LABEL_238;
  }
  v32 = *(_QWORD *)(v181 + 16);
LABEL_40:
  if ( !v32 )
    goto LABEL_250;
  if ( v169 )
    v33 = v205;
  else
    v33 = *((_QWORD *)v172 + 138);
  v26 = 0;
  v179[0] = 0;
  v178 = 0;
  v34 = 0;
  v35 = 0LL;
  v36 = -1;
  TrustLabelAce = SeGetTrustLabelAce(v181);
  if ( TrustLabelAce )
  {
    v36 = *(_DWORD *)(TrustLabelAce + 4);
    v35 = TrustLabelAce + 8;
  }
  if ( !v35 )
  {
    v186 = -1;
LABEL_47:
    v38 = 0x1000000;
    goto LABEL_48;
  }
  if ( v172 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)v172 + 6), 1u);
  }
  else
  {
    SeLockSubjectContext(0LL);
  }
  v34 = 1;
  if ( !v172 )
  {
    v109 = MEMORY[0];
    if ( MEMORY[0] )
      v26 = RtlSidDominatesForTrust(*(_QWORD *)(MEMORY[0x10] + 1104LL), *(_QWORD *)(MEMORY[0] + 1104LL), &v178);
    if ( v26 < 0 )
      goto LABEL_276;
    if ( v178 && v109 )
      v33 = *(_QWORD *)(v109 + 1104);
    else
      v33 = *(_QWORD *)(MEMORY[0x10] + 1104LL);
  }
  v26 = RtlSidDominatesForTrust(v33, v35, v179);
  if ( v26 < 0 )
  {
LABEL_276:
    v17 = v186;
    goto LABEL_47;
  }
  v38 = 0x1000000;
  if ( v179[0] )
  {
    v186 = -1;
  }
  else
  {
    v17 = v36 | 0x1000000;
    v186 = v36 | 0x1000000;
  }
LABEL_48:
  if ( v34 )
  {
    if ( v172 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v172 + 6));
      KeLeaveCriticalRegion();
    }
    else
    {
      SeUnlockSubjectContext(0LL);
    }
  }
  v162 = v26;
  LOBYTE(v25) = v166;
  if ( v26 < 0 )
    goto LABEL_236;
  v39 = v166 & 0xFDFFFFFF;
  if ( (v17 & v166 & 0xFDFFFFFF) != (v166 & 0xFDFFFFFF) )
  {
    v18 = 3221225506LL;
    v173 = 1;
LABEL_298:
    v46 = (int *)Src;
    goto LABEL_65;
  }
  v26 = SepFilterCheck(v181, &P, v172, 1, v204);
  v162 = v26;
  if ( v26 < 0 )
  {
LABEL_236:
    v27 = v161;
    goto LABEL_237;
  }
  if ( (v204[0] & v39) != v39 )
  {
    v18 = 3221225506LL;
    v174[0] = 1;
    goto LABEL_298;
  }
  v26 = SepMandatoryIntegrityCheck(&v221, v181, 0, (__int64)v172, 1, (__int64)&v207);
  v162 = v26;
  if ( v26 < 0 )
    goto LABEL_236;
  v40 = 0;
  v164 = 0;
  if ( (_DWORD)v208 && ((unsigned int)v207 & v39) != v39 )
  {
    v18 = 3221225506LL;
  }
  else
  {
    v18 = 0LL;
    if ( (v166 & 0x2000000) == 0 )
      goto LABEL_57;
  }
  if ( (*((_DWORD *)v172 + 50) & 0x4000) != 0 && HIDWORD(v208) <= 0x2000 )
  {
    v40 = 1;
    v164 = 1;
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
  v165[0] = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = v166;
  if ( (v166 & 0x1000000) != 0 )
  {
    v228 = SeSecurityPrivilege;
    v229 = 0;
    if ( !(unsigned __int8)SepPrivilegeCheck((_DWORD)v172, (unsigned int)&v228, 1, 1, v161) )
    {
      v18 = 3221225569LL;
      v38 = v176;
      v46 = (int *)Src;
      goto LABEL_64;
    }
    v44 = v110;
    v42 = v110;
    v45 = v166 & 0xFEFFFFFF;
    v166 = v45;
    v175 = v45;
    v176 = 0x1000000;
  }
  else
  {
    v38 = v176;
  }
  if ( (v45 & 0x80000) != 0 )
  {
    v224 = SeTakeOwnershipPrivilege;
    v225 = 0;
    if ( (unsigned __int8)SepPrivilegeCheck((_DWORD)v172, (unsigned int)&v224, 1, 1, v161) )
    {
      v41 = v101;
    }
    else
    {
      v226 = SeRelabelPrivilege;
      v227 = 0;
      if ( !(unsigned __int8)SepPrivilegeCheck((_DWORD)v172, (unsigned int)&v226, v101, v101, v161) )
        goto LABEL_61;
      v165[0] = v102;
    }
    ++v44;
    v38 |= 0x80000u;
    v176 = v38;
    v175 = v45 & 0xFFF7FFFF;
    v166 = v45 & 0xFFF7FFFF;
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
      v112 = 3LL * v43;
      *(LUID *)&PoolWithTag[v112 + 2] = SeSecurityPrivilege;
      PoolWithTag[v112 + 4] = 0x80000000;
      ++v43;
    }
    if ( v165[0] )
    {
      v113 = 3LL * v43;
      *(LUID *)&PoolWithTag[v113 + 2] = SeRelabelPrivilege;
      PoolWithTag[v113 + 4] = 0x80000000;
    }
    goto LABEL_63;
  }
  v18 = 3221225626LL;
LABEL_64:
  LOBYTE(v25) = v166;
  if ( v166 )
  {
LABEL_65:
    v40 = v164;
LABEL_66:
    v28 = 1;
    goto LABEL_67;
  }
  v114 = (unsigned __int8)v182;
  v115 = v38 == 0;
  v28 = 1;
  if ( !v115 )
    v114 = 1;
  v182 = v114;
  v40 = v164;
LABEL_67:
  if ( (int)v18 < 0 && !v40 )
  {
    v75 = a12;
    if ( a12 )
    {
      v106 = 0;
      v107 = v184;
      v15 = (int *)v167;
      while ( 1 )
      {
        v180 = v106;
        if ( v106 >= v171 )
          break;
        v15[v106] = v18;
        v107[v106++] = 0;
      }
      v76 = v15;
    }
    else
    {
      v76 = (int *)v167;
      *(_DWORD *)v167 = v18;
      *(_DWORD *)v184 = 0;
    }
    v26 = 0;
    v162 = 0;
    v27 = v161;
    goto LABEL_129;
  }
  if ( v46 )
  {
    v116 = *v46;
    v117 = 8;
    if ( *v46 )
      v118 = 12 * v116 + 8;
    else
      v118 = 8;
    if ( v118 > v191 )
    {
      if ( v116 )
        v117 = 12 * v116 + 8;
      *v203 = v117;
      v26 = -1073741789;
      v162 = -1073741789;
      v27 = v161;
      ExFreePoolWithTag(v46, 0);
      goto LABEL_238;
    }
    if ( v116 )
      v117 = 12 * v116 + 8;
    memmove((void *)Address, v46, v117);
    ExFreePoolWithTag(v46, 0);
LABEL_71:
    v27 = v161;
    if ( v209 )
    {
      v26 = SeCaptureSid(v209, (int)Object, 1, (__int64)&v196);
      v162 = v26;
      if ( v26 < 0 )
      {
        v196 = 0LL;
        goto LABEL_238;
      }
    }
    SeCaptureSubjectContext(&SubjectContext);
    v48 = KeGetCurrentThread();
    --v48->KernelApcDisable;
    v25 = (char *)v172;
    v49 = (PERESOURCE *)((char *)v172 + 48);
    v50 = *((_QWORD *)v172 + 6);
    v51 = *(unsigned __int16 *)(v50 + 26);
    if ( (v51 & 0x41) == 1 )
      KeBugCheckEx(0x1C6u, 0xFuLL, v50, 0LL, 0LL);
    LOWORD(v51) = *(_WORD *)(v50 + 26) & 1;
    if ( (_WORD)v51 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v103 = KeGetCurrentThread();
      if ( (unsigned __int8)CurrentIrql > 1u )
        KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)CurrentIrql, 1uLL, 0LL);
      if ( (v103->ApcState.InProgressFlags & 2) != 0 )
        KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
      if ( !(_BYTE)CurrentIrql && (v103->MiscFlags & 0x400) == 0 && !v103->WaitBlock[3].SpareLong )
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      v25 = (char *)v172;
    }
    if ( (_WORD)v51 )
    {
      OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim(v51, CurrentIrql);
      if ( !(unsigned __int8)ExAcquireFastResourceShared(v50, (ULONG_PTR)OwnerEntryForLegacyShim) )
        ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
    }
    else
    {
      ExpAcquireResourceSharedLite(*((_QWORD *)v172 + 6), 1);
    }
    if ( *v185 >= 0 )
    {
      v53 = *(void **)(v181 + 8);
    }
    else
    {
      v52 = *(unsigned int *)(v181 + 4);
      if ( (_DWORD)v52 )
        v53 = (void *)(v181 + v52);
      else
        v53 = 0LL;
    }
    v54 = RtlSidHashLookup(v25 + 232, v53);
    if ( v54 )
      v56 = v54 == *((_QWORD *)v25 + 30) && (*(_DWORD *)(v54 + 8) & 0x10) == 0 || (*(_BYTE *)(v54 + 8) & 4) != 0;
    else
      v56 = 0;
    if ( v56 && *((_DWORD *)v25 + 32) )
      v56 = SepSidInTokenSidHash((__int64)(v25 + 504), 0LL, v53, 0, 1, 0);
    if ( !SepAllowAccessUponLogoff && (*((_DWORD *)v25 + 50) & 0x20) == 0 )
    {
      v120 = *((_QWORD *)v25 + 27);
      if ( v120 )
      {
        if ( (*(_DWORD *)(v120 + 32) & 0x20) != 0 )
        {
          v75 = a12;
          if ( a12 )
          {
            v121 = 0;
            v122 = v184;
            v123 = v167;
            while ( 1 )
            {
              v180 = v121;
              if ( v121 >= v171 )
                break;
              v123[v121] = -1073741790;
              v122[v121++] = 0;
            }
          }
          else
          {
            *(_DWORD *)v167 = -1073741790;
            *(_DWORD *)v184 = 0;
          }
          v162 = 0;
          v28 = 1;
          ExReleaseResourceLite(*((PERESOURCE *)v25 + 6));
          KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
          SeReleaseSubjectContext(&SubjectContext);
          v26 = 0;
          LOBYTE(v25) = v166;
          v76 = (int *)v167;
          goto LABEL_129;
        }
      }
    }
    v57 = v185;
    if ( SepRmEnforceCap )
    {
      v124 = (unsigned __int16)*v185;
      if ( (v124 & 0x10) != 0 )
      {
        if ( KeGetCurrentIrql() < 2u )
        {
          v58 = v181;
          if ( (v124 & 0x10) != 0 )
          {
            if ( (v124 & 0x8000u) == 0LL )
            {
              v126 = *(_QWORD *)(v181 + 24);
              goto LABEL_331;
            }
            v125 = *(unsigned int *)(v181 + 12);
            if ( (_DWORD)v125 )
            {
              v126 = v125 + v181;
LABEL_331:
              v193 = v126;
              if ( v126 )
              {
                ScopedPolicySid = (void *)SepGetScopedPolicySid(v126, v124, v55);
                if ( ScopedPolicySid )
                {
                  Cap = SepRmReferenceFindCap(ScopedPolicySid);
                  v128 = v197;
                  if ( Cap < 0 )
                    v128 = SepRmDefaultCap;
                  v197 = v128;
                  v170 = 1;
                }
              }
              goto LABEL_338;
            }
          }
          v193 = 0LL;
LABEL_338:
          v57 = v185;
LABEL_88:
          LODWORD(v25) = v166;
          if ( (v166 & 0x2060000) != 0
            && v56
            && ((v86 = *v57, (v86 & 4) == 0)
              ? (v88 = 0LL)
              : v86 >= 0
              ? (v88 = *(_QWORD *)(v58 + 32))
              : (v87 = *(unsigned int *)(v58 + 16), !(_DWORD)v87)
              ? (v88 = 0LL)
              : (v88 = v87 + v58),
                !RtlpOwnerAcesPresent(0, v88)) )
          {
            if ( (v166 & 0x2000000) != 0 )
              v89 = 393216;
            else
              v89 = v166 & 0x60000;
            v59 = v89 | v176;
            v176 |= v89;
            v177 = v89;
            LODWORD(v25) = v166 & 0xFFF9FFFF;
            v166 = (unsigned int)v25;
            v175 = (unsigned int)v25;
          }
          else
          {
            v59 = v176;
          }
          if ( (_DWORD)v25 || v170 && !(_BYTE)v182 )
          {
            v60 = (PERESOURCE *)v172;
          }
          else
          {
            v60 = (PERESOURCE *)v172;
            if ( (*((_DWORD *)v172 + 50) & 0x2000) != 0 || !v177 )
            {
              v75 = a12;
              if ( a12 )
              {
                v93 = 0;
                v94 = v184;
                v95 = v167;
                while ( 1 )
                {
                  v180 = v93;
                  if ( v93 >= v171 )
                    break;
                  if ( v59 )
                  {
                    v95[v93] = 0;
                    v94[v93] = v59;
                  }
                  else
                  {
                    v95[v93] = -1073741790;
                    v94[v93] = 0;
                  }
                  ++v93;
                }
              }
              else if ( v59 )
              {
                *(_DWORD *)v167 = 0;
                *(_DWORD *)v184 = v59;
              }
              else
              {
                *(_DWORD *)v167 = -1073741790;
                *(_DWORD *)v184 = 0;
              }
              v162 = 0;
              v27 = v161;
              v28 = 1;
              ExReleaseResourceLite(v60[6]);
              KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
              SeReleaseSubjectContext(&SubjectContext);
              v26 = 0;
              v76 = (int *)v167;
              goto LABEL_129;
            }
          }
          v61 = a12;
          if ( a12 )
          {
            v129 = v171;
            v130 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 8LL * v171, 0x61476553u);
            v62 = v130;
            v188 = v130;
            if ( !v130 )
              goto LABEL_348;
            v63 = (int *)&v130[v129];
            v61 = a12;
          }
          else
          {
            v62 = (unsigned int *)v212;
            v188 = v212;
            v63 = (int *)&v213;
          }
          LODWORD(v199) = v177;
          v160 = v59;
          v64 = v166;
          SepAccessCheck(
            v58,
            v196,
            (__int64)SubjectContext.PrimaryToken,
            (__int64)v60,
            v166,
            v195,
            v171,
            &v221,
            v160,
            v161,
            v62,
            0LL,
            v63,
            v61,
            v56,
            (int *)&v199,
            (__int64)&P,
            0LL,
            0LL);
          if ( !SepRmEnforceCap || *v63 < 0 || !v170 )
          {
            v65 = (char *)v188;
            goto LABEL_96;
          }
          if ( !a12 )
          {
            v189 = &v214;
            v194 = &v222;
            goto LABEL_357;
          }
          v131 = v171;
          v132 = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * v171, 0x61476553u);
          v189 = v132;
          if ( v132 )
          {
            v194 = &v132[4 * v131];
LABEL_357:
            v133 = *v63;
            v134 = *(_DWORD *)v188;
            v177 = *(_DWORD *)v188;
            LOBYTE(v182) = 0;
            if ( !v171 )
              goto LABEL_360;
            v26 = SepCopyObjectTypeList(v195, v171, &v206);
            v162 = v26;
            if ( v26 >= 0 )
            {
              v134 = v177;
LABEL_360:
              v135 = 0;
              v136 = P;
              v137 = v172;
              while ( 1 )
              {
                LODWORD(v185) = v135;
                if ( v135 >= *(_DWORD *)(v197 + 60) )
                  break;
                v138 = *(_QWORD *)(v197 + 8LL * v135 + 64);
                if ( !*(_QWORD *)(v138 + 24) )
                  goto LABEL_399;
                if ( !v136 )
                {
                  v139 = AuthzBasepInitializeResourceClaimsFromSacl(v193, &P);
                  v140 = (unsigned __int8)v182;
                  if ( v139 < 0 )
                    v140 = 1;
                  v182 = v140;
                  v136 = P;
                  v137 = v172;
                }
                v141 = (_QWORD *)*((_QWORD *)v137 + 137);
                v142 = v141 ? (void *)v141[75] : 0LL;
                v143 = v141 ? (void *)v141[73] : 0LL;
                v144 = v141 ? (void *)v141[74] : 0LL;
                v145 = v141 ? (void *)v141[72] : 0LL;
                v146 = AuthzBasepEvaluateAceCondition(
                         v137,
                         *((void **)v137 + 97),
                         v136,
                         v145,
                         v144,
                         v143,
                         v142,
                         *(_DWORD **)(v138 + 24),
                         *(_DWORD *)(v138 + 16),
                         1u,
                         0,
                         &v192);
                v162 = v146;
                v147 = v192;
                if ( v192 == 1 )
                  goto LABEL_399;
                if ( v146 < 0 )
                  goto LABEL_349;
                v137 = v172;
                if ( (*((_DWORD *)v172 + 50) & 0x10) != 0 )
                {
                  v148 = (_QWORD *)*((_QWORD *)v172 + 137);
                  if ( v148 )
                    v149 = (void *)v148[75];
                  else
                    v149 = 0LL;
                  if ( v148 )
                    v150 = (void *)v148[73];
                  else
                    v150 = 0LL;
                  if ( v148 )
                    v151 = (void *)v148[74];
                  else
                    v151 = 0LL;
                  if ( v148 )
                    v152 = (void *)v148[72];
                  else
                    v152 = 0LL;
                  v162 = AuthzBasepEvaluateAceCondition(
                           v172,
                           *((void **)v172 + 97),
                           v136,
                           v152,
                           v151,
                           v150,
                           v149,
                           *(_DWORD **)(v138 + 24),
                           *(_DWORD *)(v138 + 16),
                           1u,
                           1u,
                           &v192);
                  if ( v162 < 0 )
                  {
LABEL_349:
                    ExReleaseResourceLite(*v49);
                    KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
                    SeReleaseSubjectContext(&SubjectContext);
                    v26 = v162;
                    goto LABEL_350;
                  }
                  v147 = v192;
                  v137 = v172;
                }
                if ( (_BYTE)v182 || v147 == 1 )
                {
LABEL_399:
                  v162 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
                  if ( v162 < 0 )
                    goto LABEL_349;
                  v64 = v166;
                  v153 = v166;
                  if ( (*(_DWORD *)(v138 + 48) & 1) != 0 )
                  {
                    if ( (v166 & 0x2000000) == 0 )
                      v153 = v176 | v166;
                    v154 = 0;
                  }
                  else
                  {
                    v154 = v176;
                  }
                  v155 = (int *)v194;
                  v156 = v206;
                  SepAccessCheck(
                    (__int64)SecurityDescriptor,
                    v196,
                    (__int64)SubjectContext.PrimaryToken,
                    (__int64)v172,
                    v153,
                    v206,
                    v171,
                    &v221,
                    v154,
                    v161,
                    (unsigned int *)v189,
                    0LL,
                    (int *)v194,
                    a12,
                    v56,
                    (int *)&v199,
                    (__int64)&P,
                    0LL,
                    0LL);
                  if ( v168 )
                    v134 = *(_DWORD *)v189 & v177;
                  else
                    v134 = *(_DWORD *)v189;
                  v177 = v134;
                  if ( v134 )
                    v133 = *v155;
                  else
                    v133 = -1073741790;
                  v168 = 1;
                  if ( v156 )
                  {
                    SepMergeObjectTypeListAccesses(v195, v156, v171);
                    v134 = v177;
                  }
                  if ( v133 < 0 )
                    goto LABEL_417;
                  v136 = P;
                  v137 = v172;
                }
                else
                {
                  v134 = v177;
                }
                v135 = (_DWORD)v185 + 1;
              }
              v64 = v166;
LABEL_417:
              *v63 = v133;
              v65 = (char *)v188;
              *(_DWORD *)v188 &= v134;
LABEL_96:
              v66 = *v49;
              if ( ((*v49)->Flag & 0x41) == 1 )
                KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v66, 0LL, 0LL);
              v67 = (*v49)->Flag & 1;
              if ( v67 )
              {
                v104 = KeGetCurrentIrql();
                v105 = KeGetCurrentThread();
                if ( v104 > 2u )
                  KeBugCheckEx(0x1C6u, 0LL, v104, 2uLL, 0LL);
                if ( !v104 && (v105->MiscFlags & 0x400) == 0 && !v105->WaitBlock[3].SpareLong )
                  KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
              }
              if ( v67 )
              {
                ExpFastResourceLegacyRelease(*v49);
                v28 = 1;
              }
              else
              {
                v68 = (ULONG_PTR)KeGetCurrentThread();
                v165[0] = 2;
                v211[1] = &v66->SpinLock;
                v211[0] = 0LL;
                _disable();
                if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
                {
                  v69 = KiFastAcquireQueuedSpinLockInstrumented(v211, &v66->SpinLock, v165);
                }
                else
                {
                  v69 = 0;
                  v70 = _InterlockedExchange64((volatile __int64 *)&v66->SpinLock, (__int64)v211);
                  if ( v70 )
                  {
                    KxWaitForLockOwnerShipWithIrql(v211, v70, v165);
                    v69 = 1;
                  }
                }
                if ( v69 )
                {
                  _disable();
                  __writecr8(v165[0]);
                }
                v71 = KeGetCurrentThread();
                Flag = v66->Flag;
                if ( ((Flag & 1) != 0 || ExpResourceEnforceOwnerTransfer)
                  && (v68 & 3) != 3
                  && (struct _KTHREAD *)v68 != v71 )
                {
                  KeBugCheckEx(0x16Eu, (ULONG_PTR)v66, (ULONG_PTR)v71, v68, 0LL);
                }
                v28 = 1;
                if ( (Flag & 0x80u) != 0 )
                  ExpReleaseResourceExclusiveForThreadLite((ULONG_PTR)v66, v68);
                else
                  ExpReleaseResourceSharedForThreadLite((ULONG_PTR)v66, v68);
                v64 = v166;
              }
              v73 = KeGetCurrentThread();
              v74 = v73->KernelApcDisable + 1;
              v73->KernelApcDisable = v74;
              if ( !v74
                && ($69CD3F157F9F39B6F7113F2231989901 *)v73->ApcState.ApcListHead[0].Flink != &v73->152
                && !v73->SpecialApcDisable )
              {
                KiCheckForKernelApcDelivery();
              }
              SeReleaseSubjectContext(&SubjectContext);
              v18 = v164;
              if ( (v64 & 0x2000000) != 0 )
              {
                if ( !v164 || !*(_WORD *)((char *)&v201 + 1) )
                {
                  v75 = a12;
                  if ( a12 )
                    v82 = v171;
                  else
                    v82 = 0;
                  SepConstrainByMandatory((__int64)&v207, v64, v65, (char *)v63, 0LL, v82);
                  goto LABEL_114;
                }
              }
              else if ( v164 && !*(_WORD *)((char *)&v201 + 1) )
              {
                v75 = a12;
                if ( a12 )
                {
                  v91 = 0;
                  v92 = v184;
                  v15 = (int *)v167;
                  while ( 1 )
                  {
                    v180 = v91;
                    if ( v91 >= v171 )
                      break;
                    v15[v91] = -1073741790;
                    v92[v91++] = 0;
                  }
                  v76 = v15;
                }
                else
                {
                  v76 = (int *)v167;
                  *(_DWORD *)v167 = -1073741790;
                  *(_DWORD *)v184 = 0;
                }
                v26 = 0;
                v162 = 0;
                LOBYTE(v25) = v166;
                v27 = v161;
                goto LABEL_129;
              }
              v75 = a12;
LABEL_114:
              if ( (v64 & 0x2000000) != 0 )
              {
                v83 = v171;
                if ( v75 )
                  v84 = v171;
                else
                  v84 = 0;
                SepConstrainByConstraintMask(v186, v64, v65, (char *)v63, 0LL, v84, &v173);
                if ( v75 )
                  v85 = v83;
                else
                  v85 = 0;
                SepConstrainByConstraintMask(v204[0], v64, v65, (char *)v63, 0LL, v85, v174);
              }
              v76 = (int *)v167;
              if ( v75 )
              {
                v78 = 0LL;
                v18 = (__int64)v184;
                v15 = (int *)v194;
                v79 = v168;
                while ( 1 )
                {
                  v180 = v78;
                  if ( (unsigned int)v78 >= v171 )
                    break;
                  v80 = v78;
                  v76[v80] = v63[v78];
                  *(_DWORD *)(v18 + v80 * 4) = *(_DWORD *)&v65[4 * v78];
                  if ( SepRmEnforceCap && v79 && v76[v78] >= 0 )
                  {
                    v76[v78] = v15[v78];
                    *(_DWORD *)(v18 + 4 * v78) &= *((_DWORD *)v189 + v78);
                  }
                  v78 = v180 + 1;
                }
              }
              else
              {
                *(_DWORD *)v167 = *v63;
                v77 = v184;
                *(_DWORD *)v184 = *(_DWORD *)v65;
                if ( SepRmEnforceCap && v168 && *v76 >= 0 )
                {
                  v15 = (int *)v194;
                  *v76 = *(_DWORD *)v194;
                  *v77 &= *(_DWORD *)v189;
                }
              }
              v26 = 0;
              v162 = 0;
              LOBYTE(v25) = v166;
              v27 = v161;
              goto LABEL_129;
            }
            goto LABEL_350;
          }
LABEL_348:
          ExReleaseResourceLite(*v49);
          KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
          SeReleaseSubjectContext(&SubjectContext);
          v26 = -1073741670;
          v162 = -1073741670;
LABEL_350:
          LOBYTE(v25) = v166;
          goto LABEL_236;
        }
        v57 = v185;
      }
    }
    v58 = v181;
    goto LABEL_88;
  }
  if ( v191 >= 0x14 )
  {
    *(_QWORD *)Address = 0LL;
    goto LABEL_71;
  }
  *v203 = 20;
  v26 = -1073741789;
  v162 = -1073741789;
  v27 = v161;
  v76 = (int *)v167;
LABEL_219:
  v75 = a12;
LABEL_129:
  if ( v181 && v172 )
  {
    if ( v173
      || v174[0]
      || (v18 = HIDWORD(v200), !HIDWORD(v200))
      && (*((_DWORD *)v172 + 50) & 0x4000) != 0
      && v26 >= 0
      && (*v76 < 0 || BYTE3(v201)) )
    {
      v96 = KeGetCurrentThread();
      --v96->KernelApcDisable;
      v97 = v172;
      ExAcquireResourceSharedLite(*((PERESOURCE *)v172 + 6), 1u);
      if ( *(int *)v167 < 0 )
        v28 = 0;
      if ( v169 )
        v100 = v205;
      else
        v100 = *((_QWORD *)v97 + 138);
      SeLogAccessFailure((__int64)v97, v98, v99, v100, v181, v176 | (unsigned __int8)v25, v28);
      ExReleaseResourceLite(*((PERESOURCE *)v97 + 6));
      KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
      v26 = v162;
      v18 = HIDWORD(v200);
    }
    if ( BYTE4(v201) )
    {
      if ( !(_DWORD)v18
        && (*((_DWORD *)v172 + 50) & 0x4000) != 0
        && (v202 & (HIDWORD(v199) | (unsigned int)v200)) != v202 )
      {
        v157 = (unsigned int)~v202;
        if ( ((unsigned int)v157 & (unsigned int)v199) == 0 && v26 >= 0 && *(int *)v167 < 0 )
          SepLogLpacAccessFailure(v157, v18, v76, v15);
      }
    }
  }
  if ( v75 )
  {
    if ( v188 )
      ExFreePoolWithTag(v188, 0);
    if ( v189 )
      ExFreePoolWithTag(v189, 0);
  }
  if ( v172 )
    ObfDereferenceObjectWithTag(v172, 0x746C6644u);
  if ( v195 )
    ExFreePoolWithTag(v195, 0);
  if ( v196 )
  {
    LOBYTE(v76) = 1;
    SeReleaseSid(v196, v27, v76);
  }
  if ( v181 )
    SeReleaseSecurityDescriptor(v181, v27, 0LL);
  if ( v170 )
  {
    v158 = *(_QWORD *)(v197 + 32);
    if ( v158 )
      SepRmDereferenceCapTable(v158, v18, v76, v15);
  }
  if ( v206 )
    ExFreePoolWithTag(v206, 0);
  v81 = P;
  if ( P )
  {
    AuthzBasepFreeSecurityAttributesList(P);
    ExFreePoolWithTag(v81, 0);
  }
  return (unsigned int)v26;
}
