/*
 * XREFs of SeAccessCheckByTypeWithAdminlessChecks @ 0x14005CED0
 * Callers:
 *     SeAccessCheckByType @ 0x14005CD40 (SeAccessCheckByType.c)
 * Callees:
 *     AuthzBasepEvaluateAceCondition @ 0x140044F30 (AuthzBasepEvaluateAceCondition.c)
 *     SeCaptureObjectTypeList @ 0x14005E2BC (SeCaptureObjectTypeList.c)
 *     SepTrustLevelCheck @ 0x14005E4CC (SepTrustLevelCheck.c)
 *     SePrivilegePolicyCheck @ 0x14005E5C8 (SePrivilegePolicyCheck.c)
 *     SepSidInTokenSidHash @ 0x14005E750 (SepSidInTokenSidHash.c)
 *     ExpReleaseResourceForThreadLite @ 0x14005E960 (ExpReleaseResourceForThreadLite.c)
 *     SepSidInToken @ 0x140063264 (SepSidInToken.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     RtlpOwnerAcesPresent @ 0x1400AAD70 (RtlpOwnerAcesPresent.c)
 *     SeLogAccessFailure @ 0x1400B1D20 (SeLogAccessFailure.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400BBECC (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepConstrainByConstraintMask @ 0x1400BDC64 (SepConstrainByConstraintMask.c)
 *     SepConstrainByMandatory @ 0x1400BF03C (SepConstrainByMandatory.c)
 *     SepLpacCausedAccessFailure @ 0x1400C9E48 (SepLpacCausedAccessFailure.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1400E2B70 (AuthzBasepFreeSecurityAttributesList.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x1400EF560 (SepReferenceTokenUsingPseudoHandle.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExpAcquireResourceSharedLite @ 0x140100220 (ExpAcquireResourceSharedLite.c)
 *     SepMandatoryIntegrityCheck @ 0x1401018A0 (SepMandatoryIntegrityCheck.c)
 *     SepFilterCheck @ 0x140101D80 (SepFilterCheck.c)
 *     SepAccessCheck @ 0x140101F00 (SepAccessCheck.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ExpFastResourceLegacyRelease @ 0x140157EE0 (ExpFastResourceLegacyRelease.c)
 *     ExAcquireFastResourceShared @ 0x140158E80 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x140159678 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SepBuildCapeSecurityDescriptor @ 0x14029FA3C (SepBuildCapeSecurityDescriptor.c)
 *     SepCopyObjectTypeList @ 0x14029FADC (SepCopyObjectTypeList.c)
 *     SepGetScopedPolicySid @ 0x14029FB94 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x14029FDD4 (SepLogLpacAccessFailure.c)
 *     SepMergeObjectTypeListAccesses @ 0x14029FEE8 (SepMergeObjectTypeListAccesses.c)
 *     SepRmDereferenceCapTable @ 0x14029FF18 (SepRmDereferenceCapTable.c)
 *     SepRmReferenceFindCap @ 0x1402A1BE0 (SepRmReferenceFindCap.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     SeCaptureSecurityDescriptor @ 0x1404C7830 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1404C8E50 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     SeReleaseSid @ 0x140543EF0 (SeReleaseSid.c)
 *     SeCaptureSid @ 0x140543F18 (SeCaptureSid.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeAccessCheckByTypeWithAdminlessChecks(
        int a1,
        void *a2,
        void *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int128 *a7,
        volatile void *Address,
        unsigned __int64 a9,
        volatile void *a10,
        volatile void *a11,
        char a12,
        char a13)
{
  _DWORD *v15; // r12
  _DWORD *v16; // r8
  __int64 v17; // rdx
  int v18; // ecx
  unsigned __int8 v19; // si
  __int64 v20; // rcx
  __int64 v21; // rcx
  _DWORD *v22; // r12
  __int64 v23; // rax
  SIZE_T v24; // rsi
  __int64 v25; // rcx
  _DWORD *v26; // r15
  __int64 result; // rax
  SIZE_T v28; // rbx
  NTSTATUS v29; // ebx
  __int16 *v30; // r13
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  PVOID *v35; // rax
  int v36; // r9d
  unsigned int v37; // esi
  char v38; // r14
  char v39; // cl
  PVOID v40; // rsi
  __int64 CurrentIrql; // rdx
  struct _KTHREAD *CurrentThread; // rax
  char *v43; // rsi
  ULONG_PTR v44; // rbx
  __int16 v45; // cx
  __int64 v46; // rcx
  __int64 v47; // rbx
  char v48; // r12
  __int64 v49; // r13
  unsigned int v50; // ebx
  int v51; // r15d
  PERESOURCE *v52; // r14
  int v53; // eax
  _BYTE *v54; // rcx
  int *v55; // rsi
  char v56; // r15
  _DWORD *v57; // r13
  __int16 v58; // cx
  bool v59; // zf
  PERESOURCE v60; // rcx
  struct _KTHREAD *v61; // rcx
  int v62; // ebx
  int *v63; // r12
  __int64 v64; // rax
  __int64 v65; // rcx
  unsigned __int8 v66; // di
  PVOID v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rdx
  int v70; // eax
  unsigned int v71; // eax
  unsigned int v72; // ebx
  unsigned int v73; // eax
  unsigned int v74; // eax
  struct _KTHREAD *v75; // rax
  PVOID v76; // rbx
  int v77; // edx
  int v78; // r8d
  __int64 v79; // r9
  int v80; // eax
  unsigned int k; // ecx
  _DWORD *v82; // r8
  unsigned int v83; // ecx
  _DWORD *v84; // rdx
  int *v85; // r8
  unsigned int i; // ecx
  struct _KTHREAD *v87; // r8
  unsigned __int8 v88; // al
  struct _KTHREAD *v89; // rdx
  int v90; // eax
  int v91; // ecx
  int v92; // eax
  unsigned int v93; // edx
  int v94; // eax
  unsigned int v95; // eax
  void *OwnerEntryForLegacyShim; // r14
  __int64 v97; // rax
  _DWORD *v98; // r8
  unsigned int j; // ecx
  __int16 v100; // cx
  __int64 v101; // rax
  __int64 v102; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v105; // rdx
  __int64 v106; // rsi
  _BYTE *PoolWithTag; // rax
  int v108; // r14d
  __int64 v109; // rbx
  char *v110; // rax
  __int64 v111; // rax
  _QWORD *v112; // r13
  PVOID v113; // r15
  __int64 v114; // rbx
  int v115; // eax
  int v116; // ecx
  _QWORD *v117; // rax
  __int64 v118; // r8
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r9
  int v122; // eax
  int v123; // ecx
  _QWORD *v124; // rax
  __int64 v125; // r8
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // r9
  int v129; // eax
  int v130; // ecx
  int *v131; // r14
  PVOID v132; // rbx
  int v133; // edx
  PVOID *Object; // [rsp+20h] [rbp-228h]
  int HandleInformation; // [rsp+28h] [rbp-220h]
  int *v136; // [rsp+30h] [rbp-218h]
  char v137; // [rsp+A0h] [rbp-1A8h]
  int v138; // [rsp+A4h] [rbp-1A4h]
  char v139; // [rsp+A8h] [rbp-1A0h]
  char v140; // [rsp+AAh] [rbp-19Eh]
  char v141; // [rsp+ABh] [rbp-19Dh] BYREF
  char v142; // [rsp+ACh] [rbp-19Ch]
  PVOID v143; // [rsp+B0h] [rbp-198h]
  char v144; // [rsp+B8h] [rbp-190h] BYREF
  char v145[7]; // [rsp+B9h] [rbp-18Fh] BYREF
  PVOID v146; // [rsp+C0h] [rbp-188h] BYREF
  int v147; // [rsp+C8h] [rbp-180h]
  int v148; // [rsp+CCh] [rbp-17Ch]
  int v149; // [rsp+D0h] [rbp-178h] BYREF
  int v150; // [rsp+D4h] [rbp-174h]
  __int64 v151; // [rsp+D8h] [rbp-170h] BYREF
  char v152; // [rsp+E2h] [rbp-166h]
  int v153; // [rsp+E4h] [rbp-164h]
  PERESOURCE *v154; // [rsp+E8h] [rbp-160h]
  PVOID P; // [rsp+F0h] [rbp-158h] BYREF
  unsigned int v156; // [rsp+F8h] [rbp-150h]
  int v157; // [rsp+FCh] [rbp-14Ch] BYREF
  PVOID v158; // [rsp+100h] [rbp-148h]
  int v159; // [rsp+108h] [rbp-140h] BYREF
  __int64 v160; // [rsp+110h] [rbp-138h]
  int *v161; // [rsp+118h] [rbp-130h]
  PVOID v162; // [rsp+120h] [rbp-128h] BYREF
  __int64 v163; // [rsp+128h] [rbp-120h] BYREF
  __int64 v164; // [rsp+130h] [rbp-118h]
  PVOID Src; // [rsp+138h] [rbp-110h] BYREF
  __int64 v166; // [rsp+140h] [rbp-108h] BYREF
  PVOID *v167; // [rsp+148h] [rbp-100h] BYREF
  __int64 v168; // [rsp+150h] [rbp-F8h] BYREF
  __int64 v169; // [rsp+158h] [rbp-F0h]
  __int64 v170; // [rsp+160h] [rbp-E8h]
  int v171; // [rsp+168h] [rbp-E0h]
  PVOID v172; // [rsp+170h] [rbp-D8h] BYREF
  __int16 *v173; // [rsp+178h] [rbp-D0h]
  __int64 v174; // [rsp+180h] [rbp-C8h] BYREF
  __int64 v175; // [rsp+188h] [rbp-C0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+190h] [rbp-B8h] BYREF
  _BYTE v177[4]; // [rsp+1B0h] [rbp-98h] BYREF
  char v178; // [rsp+1B4h] [rbp-94h] BYREF
  char v179; // [rsp+1B8h] [rbp-90h] BYREF
  char v180; // [rsp+1BCh] [rbp-8Ch] BYREF
  PVOID v181; // [rsp+1C0h] [rbp-88h] BYREF
  _DWORD *v182; // [rsp+1C8h] [rbp-80h]
  int *v183; // [rsp+1D0h] [rbp-78h]
  __int128 v184; // [rsp+1D8h] [rbp-70h] BYREF
  _BYTE SecurityDescriptor[96]; // [rsp+1E8h] [rbp-60h] BYREF
  unsigned int v187; // [rsp+268h] [rbp+20h] BYREF

  v187 = a4;
  v15 = a10;
  v182 = a10;
  v183 = (int *)a11;
  v143 = 0LL;
  v158 = 0LL;
  v161 = 0LL;
  v146 = 0LL;
  v151 = 0LL;
  v163 = 0LL;
  v149 = 0;
  v148 = 0;
  v162 = 0LL;
  Src = 0LL;
  v156 = 0;
  v174 = 0LL;
  v175 = 0LL;
  v139 = 0;
  P = 0LL;
  v168 = 0LL;
  v169 = 0LL;
  v170 = 0LL;
  v171 = 0;
  v160 = 0LL;
  memset(SecurityDescriptor, 0, 0x28uLL);
  v164 = 0LL;
  v142 = 0;
  LOBYTE(v17) = 0;
  v140 = 0;
  LOBYTE(v18) = 0;
  v150 = v18;
  v152 = 0;
  v172 = 0LL;
  v141 = 0;
  v144 = 0;
  v145[0] = 0;
  v167 = 0LL;
  v159 = -1;
  v166 = 0xFFFFFFFFLL;
  v19 = KeGetCurrentThread()->gap0[10];
  v137 = v19;
  if ( !v19 )
  {
    *(_DWORD *)a11 = 0;
    *v15 = v187;
    return 0LL;
  }
  if ( a12 )
  {
    if ( !a6 )
    {
      result = 3221225485LL;
      v22 = (_DWORD *)a9;
      v26 = Address;
      goto LABEL_21;
    }
    v28 = 4LL * a6;
    ProbeForWrite(a11, v28, 4u);
    ProbeForWrite(v15, v28, 4u);
  }
  else
  {
    v20 = (__int64)a11;
    if ( (unsigned __int64)a11 >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v20 = *(_DWORD *)v20;
    v21 = (__int64)v15;
    if ( (unsigned __int64)v15 >= 0x7FFFFFFF0000LL )
      v21 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v21 = *(_DWORD *)v21;
  }
  v22 = (_DWORD *)a9;
  v23 = a9;
  if ( a9 >= 0x7FFFFFFF0000LL )
    v23 = 0x7FFFFFFF0000LL;
  v24 = *(unsigned int *)v23;
  v156 = *(_DWORD *)v23;
  v25 = a9;
  if ( a9 >= 0x7FFFFFFF0000LL )
    v25 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v25 = *(_DWORD *)v25;
  v26 = Address;
  ProbeForWrite(Address, v24, 4u);
  if ( v26 && (unsigned int)v24 >= 0x14 )
    *v26 = 0;
  if ( ((unsigned __int8)a7 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v184 = *a7;
  result = 0LL;
  v19 = v137;
LABEL_21:
  if ( (int)result < 0 )
    return result;
  if ( (v187 & 0xF0000000) != 0 )
  {
    v29 = -1073741594;
    goto LABEL_195;
  }
  v141 = 0;
  v167 = 0LL;
  if ( (unsigned __int64)a3 + 6 > 2 )
  {
    v29 = ObReferenceObjectByHandle(a3, 8u, (POBJECT_TYPE)SeTokenObjectType, v19, &v181, 0LL);
    v146 = v181;
LABEL_25:
    v138 = v29;
    goto LABEL_26;
  }
  v80 = SepReferenceTokenUsingPseudoHandle(a3, &v146, &v141, &v167);
  v29 = v80;
  if ( v80 >= 0 )
    goto LABEL_25;
  v138 = v80;
LABEL_26:
  if ( v29 < 0 )
  {
    v146 = 0LL;
    v66 = v137;
    v63 = (int *)a11;
    goto LABEL_191;
  }
  if ( (unsigned __int64)a3 + 6 > 2 )
  {
    if ( *((_DWORD *)v146 + 48) != 2 )
    {
      v29 = -1073741732;
      goto LABEL_195;
    }
    if ( *((int *)v146 + 49) < 1 )
    {
      v29 = -1073741659;
      goto LABEL_195;
    }
  }
  v29 = SeCaptureObjectTypeList(a5, a6, v19, &v162);
  v138 = v29;
  if ( v29 < 0 )
    goto LABEL_196;
  v29 = SeCaptureSecurityDescriptor(a1, v19, 1, 0, (__int64)&v151);
  v138 = v29;
  if ( v29 < 0 )
    goto LABEL_196;
  if ( !v151 )
    goto LABEL_219;
  v30 = (__int16 *)(v151 + 2);
  v173 = (__int16 *)(v151 + 2);
  v17 = *(unsigned __int16 *)(v151 + 2);
  if ( (v17 & 0x8000u) == 0LL )
  {
    v32 = *(_QWORD *)(v151 + 8);
  }
  else
  {
    v31 = *(unsigned int *)(v151 + 4);
    if ( !(_DWORD)v31 )
      goto LABEL_219;
    v32 = v151 + v31;
  }
  if ( !v32 )
    goto LABEL_219;
  if ( (v17 & 0x8000u) != 0LL )
  {
    v33 = *(unsigned int *)(v151 + 8);
    if ( (_DWORD)v33 )
    {
      v34 = v151 + v33;
      goto LABEL_40;
    }
LABEL_219:
    v29 = -1073741703;
    goto LABEL_195;
  }
  v34 = *(_QWORD *)(v151 + 16);
LABEL_40:
  if ( !v34 )
    goto LABEL_219;
  if ( v141 )
    v35 = v167;
  else
    v35 = (PVOID *)*((_QWORD *)v146 + 138);
  v136 = &v159;
  Object = v35;
  v29 = SepTrustLevelCheck(&v159, v151, 0LL, v146);
  v138 = v29;
  if ( v29 < 0 )
    goto LABEL_196;
  v37 = v187 & 0xFDFFFFFF;
  if ( (v159 & v187 & 0xFDFFFFFF) != (v187 & 0xFDFFFFFF) )
  {
    v144 = 1;
LABEL_231:
    v17 = 3221225506LL;
    v38 = a13;
LABEL_53:
    v39 = v139;
    goto LABEL_54;
  }
  LOBYTE(v36) = 1;
  v29 = SepFilterCheck(v151, (unsigned int)&P, (_DWORD)v146, v36, (__int64)&v166);
  v138 = v29;
  if ( v29 < 0 )
  {
LABEL_196:
    v66 = v137;
LABEL_197:
    v63 = (int *)a11;
LABEL_191:
    v56 = a12;
LABEL_192:
    v57 = v143;
    goto LABEL_100;
  }
  if ( ((unsigned int)v166 & v37) != v37 )
  {
    v145[0] = 1;
    goto LABEL_231;
  }
  v38 = a13;
  v29 = SepMandatoryIntegrityCheck((unsigned int)&v184, v151, 0, (_DWORD)v146, 1, a13, (__int64)&v174);
  v138 = v29;
  if ( v29 < 0 )
    goto LABEL_196;
  v39 = 0;
  v139 = 0;
  if ( (_DWORD)v175 && (v37 & (unsigned int)v174) != v37 )
  {
    v17 = 3221225506LL;
  }
  else
  {
    v17 = 0LL;
    if ( (v187 & 0x2000000) == 0 )
      goto LABEL_51;
  }
  if ( (*((_DWORD *)v146 + 50) & 0x4000) != 0 && HIDWORD(v175) <= 0x2000 )
  {
    v39 = 1;
    v139 = 1;
  }
  else
  {
    v39 = 0;
  }
LABEL_51:
  if ( (int)v17 >= 0 || v39 )
  {
    v17 = (unsigned int)SePrivilegePolicyCheck(
                          (unsigned int)&v187,
                          (unsigned int)&v149,
                          0,
                          (_DWORD)v146,
                          (__int64)&Src,
                          v137);
    if ( !v187 )
    {
      v90 = (unsigned __int8)v150;
      if ( v149 )
        v90 = 1;
      v150 = v90;
    }
    goto LABEL_53;
  }
LABEL_54:
  if ( (int)v17 < 0 && !v39 )
  {
    v56 = a12;
    v63 = (int *)a11;
    v16 = a10;
    if ( a12 )
    {
      for ( i = 0; ; ++i )
      {
        v147 = i;
        if ( i >= a6 )
          break;
        v63[i] = v17;
        v16[i] = 0;
      }
    }
    else
    {
      *(_DWORD *)a11 = v17;
      *v16 = 0;
    }
    v29 = 0;
    v138 = 0;
    v66 = v137;
    v57 = v143;
    goto LABEL_100;
  }
  v40 = Src;
  if ( Src )
  {
    v91 = *(_DWORD *)Src;
    v92 = 12 * *(_DWORD *)Src;
    v93 = v92 + 8;
    if ( !*(_DWORD *)Src )
      v93 = 8;
    if ( v93 > v156 )
    {
      v94 = v92 + 8;
      if ( !v91 )
        v94 = 8;
      *v22 = v94;
      v29 = -1073741789;
      v138 = -1073741789;
      v66 = v137;
      ExFreePoolWithTag(v40, 0);
      goto LABEL_197;
    }
    v95 = v92 + 8;
    if ( !v91 )
      v95 = 8;
    memmove(v26, Src, v95);
    ExFreePoolWithTag(v40, 0);
  }
  else
  {
    if ( v156 < 0x14 )
    {
      *v22 = 20;
      v29 = -1073741789;
      v138 = -1073741789;
      v66 = v137;
      v56 = a12;
      v63 = (int *)a11;
      v57 = v143;
      goto LABEL_100;
    }
    *(_QWORD *)v26 = Src;
  }
  if ( a2 )
  {
    v29 = SeCaptureSid(a2, (int)Object, 1, (__int64)&v163);
    v138 = v29;
    if ( v29 < 0 )
    {
      v163 = 0LL;
      goto LABEL_196;
    }
  }
  SeCaptureSubjectContext(&SubjectContext);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v43 = (char *)v146;
  v154 = (PERESOURCE *)((char *)v146 + 48);
  v44 = *((_QWORD *)v146 + 6);
  if ( (*(_WORD *)(v44 + 26) & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, v44, 0LL, 0LL);
  v45 = *(_WORD *)(v44 + 26) & 1;
  if ( v45 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v87 = KeGetCurrentThread();
    if ( (unsigned __int8)CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)CurrentIrql, 1uLL, 0LL);
    if ( (v87->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !(_BYTE)CurrentIrql && (v87->MiscFlags & 0x400) == 0 && !v87->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    v43 = (char *)v146;
  }
  if ( v45 )
  {
    OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim();
    if ( !(unsigned __int8)ExAcquireFastResourceShared(v44, (ULONG_PTR)OwnerEntryForLegacyShim) )
      ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
    v38 = a13;
  }
  else
  {
    LOBYTE(CurrentIrql) = 1;
    ExpAcquireResourceSharedLite(*((_QWORD *)v146 + 6), CurrentIrql);
  }
  if ( *v30 >= 0 )
  {
    v47 = *(_QWORD *)(v151 + 8);
  }
  else
  {
    v46 = *(unsigned int *)(v151 + 4);
    if ( (_DWORD)v46 )
      v47 = v151 + v46;
    else
      v47 = 0LL;
  }
  LOBYTE(v136) = v38;
  LOBYTE(HandleInformation) = 0;
  LOBYTE(Object) = 0;
  v48 = SepSidInTokenSidHash(v43 + 232, 0LL, v47, 0LL, Object, HandleInformation, v136);
  if ( v48 && *((_DWORD *)v43 + 32) )
    v48 = SepSidInToken((_DWORD)v43, 0, v47, 0, 1, 0, v38);
  if ( !SepAllowAccessUponLogoff && (*((_DWORD *)v43 + 50) & 0x20) == 0 )
  {
    v97 = *((_QWORD *)v43 + 27);
    if ( v97 )
    {
      if ( (*(_DWORD *)(v97 + 32) & 0x20) != 0 )
      {
        v56 = a12;
        v63 = (int *)a11;
        v98 = a10;
        if ( a12 )
        {
          for ( j = 0; ; ++j )
          {
            v147 = j;
            if ( j >= a6 )
              break;
            v63[j] = -1073741790;
            v98[j] = 0;
          }
        }
        else
        {
          *(_DWORD *)a11 = -1073741790;
          *v98 = 0;
        }
        v138 = 0;
        v66 = v137;
        ExReleaseResourceLite(*((PERESOURCE *)v43 + 6));
        KeLeaveCriticalRegionThread(KeGetCurrentThread());
        SeReleaseSubjectContext(&SubjectContext);
        v29 = 0;
        goto LABEL_192;
      }
    }
  }
  if ( !SepRmEnforceCap || (v100 = *v30, (*v30 & 0x10) == 0) || KeGetCurrentIrql() >= 2u )
  {
    v49 = v151;
    goto LABEL_70;
  }
  v49 = v151;
  if ( v100 >= 0 )
  {
    v102 = *(_QWORD *)(v151 + 24);
  }
  else
  {
    v101 = *(unsigned int *)(v151 + 12);
    if ( !(_DWORD)v101 )
    {
      v160 = 0LL;
      goto LABEL_70;
    }
    v102 = v151 + v101;
  }
  v160 = v102;
  if ( v102 )
  {
    ScopedPolicySid = (void *)SepGetScopedPolicySid(v102);
    if ( ScopedPolicySid )
    {
      Cap = SepRmReferenceFindCap(ScopedPolicySid);
      v105 = v164;
      if ( Cap < 0 )
        v105 = SepRmDefaultCap;
      v164 = v105;
      v142 = 1;
    }
  }
LABEL_70:
  v50 = v187;
  if ( (v187 & 0x2060000) != 0
    && v48
    && ((*v173 & 4) == 0
      ? (v69 = 0LL)
      : *v173 >= 0
      ? (v69 = *(_QWORD *)(v49 + 32))
      : (v68 = *(unsigned int *)(v49 + 16), !(_DWORD)v68)
      ? (v69 = 0LL)
      : (v69 = v68 + v49),
        !(unsigned __int8)RtlpOwnerAcesPresent(0LL, v69)) )
  {
    if ( (v50 & 0x2000000) != 0 )
    {
      v70 = 393216;
      v51 = v149 | 0x60000;
    }
    else
    {
      v70 = v50 & 0x60000;
      v51 = v149 | v50 & 0x60000;
    }
    v148 = v70;
    v149 = v51;
    v50 &= 0xFFF9FFFF;
    v187 = v50;
  }
  else
  {
    v51 = v149;
  }
  if ( v50 || v142 && !(_BYTE)v150 )
  {
    LODWORD(v52) = (_DWORD)v146;
    v53 = v148;
  }
  else
  {
    v52 = (PERESOURCE *)v146;
    if ( (*((_DWORD *)v146 + 50) & 0x2000) != 0 || (v53 = v148) == 0 )
    {
      if ( a12 )
      {
        v83 = 0;
        v84 = v182;
        v85 = v183;
        while ( 1 )
        {
          v147 = v83;
          if ( v83 >= a6 )
            break;
          if ( v51 )
          {
            v85[v83] = 0;
            v84[v83] = v51;
          }
          else
          {
            v85[v83] = -1073741790;
            v84[v83] = 0;
          }
          ++v83;
        }
        v63 = v85;
      }
      else
      {
        v63 = (int *)a11;
        v82 = a10;
        if ( v51 )
        {
          *(_DWORD *)a11 = 0;
          *v82 = v51;
        }
        else
        {
          *(_DWORD *)a11 = -1073741790;
          *v82 = 0;
        }
      }
      v138 = 0;
      v66 = v137;
      ExReleaseResourceLite(v52[6]);
      KeLeaveCriticalRegionThread(KeGetCurrentThread());
      SeReleaseSubjectContext(&SubjectContext);
      v29 = 0;
      goto LABEL_191;
    }
  }
  if ( a12 )
  {
    v106 = a6;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * a6, 0x61476553u);
    v54 = PoolWithTag;
    v143 = PoolWithTag;
    if ( PoolWithTag )
    {
      v55 = (int *)&PoolWithTag[4 * v106];
      v53 = v148;
      goto LABEL_76;
    }
    ExReleaseResourceLite(*v154);
    KeLeaveCriticalRegionThread(KeGetCurrentThread());
    SeReleaseSubjectContext(&SubjectContext);
    v29 = -1073741670;
LABEL_195:
    v138 = v29;
    goto LABEL_196;
  }
  v54 = v177;
  v143 = v177;
  v55 = (int *)&v178;
LABEL_76:
  LODWORD(v168) = v53;
  SepAccessCheck(
    v49,
    v163,
    SubjectContext.PrimaryToken,
    (_DWORD)v52,
    v50,
    (__int64)v162,
    a6,
    (__int64)&v184,
    v51,
    v137,
    (__int64)v54,
    0LL,
    (__int64)v55,
    a12,
    v48,
    (__int64)&v168,
    (__int64)&P,
    0LL,
    0LL,
    a13);
  v56 = a12;
  if ( SepRmEnforceCap && (v108 = *v55, *v55 >= 0) && v142 )
  {
    if ( a12 )
    {
      v109 = a6;
      v110 = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * a6, 0x61476553u);
      v158 = v110;
      if ( !v110 )
      {
        ExReleaseResourceLite(*v154);
        KeLeaveCriticalRegionThread(KeGetCurrentThread());
        SeReleaseSubjectContext(&SubjectContext);
        v29 = -1073741670;
        v138 = -1073741670;
        v66 = v137;
        v63 = (int *)a11;
        goto LABEL_192;
      }
      v161 = (int *)&v110[4 * v109];
      v108 = *v55;
    }
    else
    {
      v158 = &v179;
      v161 = (int *)&v180;
    }
    v57 = v143;
    v148 = *(_DWORD *)v143;
    LOBYTE(v150) = 0;
    if ( a6 )
    {
      v29 = SepCopyObjectTypeList(v162, a6, &v172);
      v138 = v29;
      if ( v29 < 0 )
      {
        v66 = v137;
        v63 = (int *)a11;
        goto LABEL_100;
      }
    }
    v111 = 0LL;
    v112 = v146;
    v113 = P;
    while ( 1 )
    {
      v153 = v111;
      if ( (unsigned int)v111 >= *(_DWORD *)(v164 + 60) )
        break;
      v114 = *(_QWORD *)(v164 + 8 * v111 + 64);
      if ( !*(_QWORD *)(v114 + 24) )
        goto LABEL_330;
      if ( !v113 )
      {
        v115 = AuthzBasepInitializeResourceClaimsFromSacl(v160, &P);
        v116 = (unsigned __int8)v150;
        if ( v115 < 0 )
          v116 = 1;
        v150 = v116;
        v113 = P;
      }
      v117 = (_QWORD *)v112[137];
      v118 = v117 ? v117[75] : 0LL;
      v119 = v117 ? v117[73] : 0LL;
      v120 = v117 ? v117[74] : 0LL;
      v121 = v117 ? v117[72] : 0LL;
      v122 = AuthzBasepEvaluateAceCondition(
               (__int64)v112,
               v112[97],
               (__int64)v113,
               v121,
               v120,
               v119,
               v118,
               *(_DWORD **)(v114 + 24),
               *(_DWORD *)(v114 + 16),
               1u,
               0,
               &v157);
      v138 = v122;
      v123 = v157;
      if ( v157 == 1 )
        goto LABEL_330;
      if ( v122 < 0 )
        goto LABEL_347;
      if ( (v112[25] & 0x10) != 0 )
      {
        v124 = (_QWORD *)v112[137];
        if ( v124 )
          v125 = v124[75];
        else
          v125 = 0LL;
        if ( v124 )
          v126 = v124[73];
        else
          v126 = 0LL;
        if ( v124 )
          v127 = v124[74];
        else
          v127 = 0LL;
        if ( v124 )
          v128 = v124[72];
        else
          v128 = 0LL;
        v138 = AuthzBasepEvaluateAceCondition(
                 (__int64)v112,
                 v112[97],
                 (__int64)v113,
                 v128,
                 v127,
                 v126,
                 v125,
                 *(_DWORD **)(v114 + 24),
                 *(_DWORD *)(v114 + 16),
                 1u,
                 1u,
                 &v157);
        if ( v138 < 0 )
        {
LABEL_347:
          ExReleaseResourceLite(*v154);
          KeLeaveCriticalRegionThread(KeGetCurrentThread());
          SeReleaseSubjectContext(&SubjectContext);
          v29 = v138;
          goto LABEL_196;
        }
        v123 = v157;
      }
      if ( (_BYTE)v150 || v123 == 1 )
      {
LABEL_330:
        v138 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
        if ( v138 < 0 )
          goto LABEL_347;
        if ( (*(_DWORD *)(v114 + 48) & 1) != 0 )
        {
          if ( (v187 & 0x2000000) != 0 )
            v129 = v187;
          else
            v129 = v187 | v149;
          v130 = 0;
        }
        else
        {
          v129 = v187;
          v130 = v149;
        }
        v56 = a12;
        v131 = v161;
        v132 = v172;
        SepAccessCheck(
          (unsigned int)SecurityDescriptor,
          v163,
          SubjectContext.PrimaryToken,
          (_DWORD)v112,
          v129,
          (__int64)v172,
          a6,
          (__int64)&v184,
          v130,
          v137,
          (__int64)v158,
          0LL,
          (__int64)v161,
          a12,
          v48,
          (__int64)&v168,
          (__int64)&P,
          0LL,
          0LL,
          a13);
        v133 = *(_DWORD *)v158;
        if ( v140 )
          v133 = v148 & *(_DWORD *)v158;
        v148 = v133;
        if ( v133 )
          v108 = *v131;
        else
          v108 = -1073741790;
        v140 = 1;
        if ( v132 )
          SepMergeObjectTypeListAccesses(v162, v132, a6);
        if ( v108 < 0 )
          goto LABEL_349;
        v113 = P;
      }
      v111 = (unsigned int)(v153 + 1);
    }
    v56 = a12;
LABEL_349:
    *v55 = v108;
    v57 = v143;
    *(_DWORD *)v143 &= v148;
  }
  else
  {
    v57 = v143;
  }
  if ( ((*v154)->Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)*v154, 0LL, 0LL);
  v58 = (*v154)->Flag & 1;
  if ( v58 )
  {
    v88 = KeGetCurrentIrql();
    v89 = KeGetCurrentThread();
    if ( v88 > 2u )
      KeBugCheckEx(0x1C6u, 0LL, v88, 2uLL, 0LL);
    if ( !v88 && (v89->MiscFlags & 0x400) == 0 && !v89->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  v59 = v58 == 0;
  v60 = *v154;
  if ( v59 )
    ExpReleaseResourceForThreadLite((ULONG_PTR)v60, (ULONG_PTR)KeGetCurrentThread());
  else
    ExpFastResourceLegacyRelease(v60);
  v61 = KeGetCurrentThread();
  v59 = v61->KernelApcDisable++ == -1;
  if ( v59
    && ($005F0E83B22994B61E86C72E0CE43C71 *)v61->ApcState.ApcListHead[0].Flink != &v61->152
    && !v61->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  SeReleaseSubjectContext(&SubjectContext);
  v62 = v187 & 0x2000000;
  if ( (v187 & 0x2000000) != 0 )
  {
    if ( !v139 || !BYTE6(v170) && !BYTE5(v170) )
    {
      if ( v56 )
        v71 = a6;
      else
        v71 = 0;
      SepConstrainByMandatory((unsigned int)&v174, v187, (_DWORD)v57, (_DWORD)v55, 0LL, v71);
    }
  }
  else if ( v139 && !BYTE6(v170) && !BYTE5(v170) )
  {
    v63 = (int *)a11;
    v16 = a10;
    if ( v56 )
    {
      for ( k = 0; ; ++k )
      {
        v147 = k;
        if ( k >= a6 )
          break;
        v63[k] = -1073741790;
        v16[k] = 0;
      }
    }
    else
    {
      *(_DWORD *)a11 = -1073741790;
      *v16 = 0;
    }
    v29 = 0;
    v138 = 0;
    v66 = v137;
    goto LABEL_100;
  }
  if ( v62 )
  {
    v72 = a6;
    if ( v56 )
      v73 = a6;
    else
      v73 = 0;
    SepConstrainByConstraintMask(v159, v187, (_DWORD)v57, (_DWORD)v55, 0LL, v73, (__int64)&v144);
    if ( v56 )
      v74 = v72;
    else
      v74 = 0;
    SepConstrainByConstraintMask(v166, v187, (_DWORD)v57, (_DWORD)v55, 0LL, v74, (__int64)v145);
  }
  v63 = (int *)a11;
  v16 = a10;
  if ( v56 )
  {
    v64 = 0LL;
    v17 = (__int64)v161;
    while ( 1 )
    {
      v147 = v64;
      if ( (unsigned int)v64 >= a6 )
        break;
      v65 = v64;
      v63[v65] = v55[v64];
      v16[v65] = v57[v64];
      if ( SepRmEnforceCap && v140 && v63[v65] >= 0 )
      {
        v63[v65] = *(_DWORD *)(v65 * 4 + v17);
        v16[v65] &= *(_DWORD *)((char *)v158 + v65 * 4);
      }
      v64 = (unsigned int)(v147 + 1);
    }
  }
  else
  {
    *(_DWORD *)a11 = *v55;
    *v16 = *v57;
    if ( SepRmEnforceCap && v140 && *v63 >= 0 )
    {
      v17 = (__int64)v161;
      *v63 = *v161;
      *v16 &= *(_DWORD *)v158;
    }
  }
  v29 = 0;
  v138 = 0;
  v66 = v137;
LABEL_100:
  if ( v151 && v146 )
  {
    if ( v144 || v145[0] )
    {
LABEL_154:
      v75 = KeGetCurrentThread();
      --v75->KernelApcDisable;
      v76 = v146;
      ExAcquireResourceSharedLite(*((PERESOURCE *)v146 + 6), 1u);
      if ( v141 )
        LODWORD(v79) = (_DWORD)v167;
      else
        v79 = *((_QWORD *)v76 + 138);
      SeLogAccessFailure((_DWORD)v76, v77, v78, v79, v151, v187 | v149, *v63 >= 0);
      ExReleaseResourceLite(*((PERESOURCE *)v76 + 6));
      KeLeaveCriticalRegionThread(KeGetCurrentThread());
      v29 = v138;
      v17 = HIDWORD(v169);
LABEL_106:
      if ( v29 >= 0
        && *v63 < 0
        && !(_DWORD)v17
        && (*((_DWORD *)v146 + 50) & 0x4000) != 0
        && (unsigned __int8)SepLpacCausedAccessFailure(&v168, v187) )
      {
        SepLogLpacAccessFailure();
      }
      goto LABEL_108;
    }
    v17 = HIDWORD(v169);
    if ( HIDWORD(v169) || (*((_DWORD *)v146 + 50) & 0x4000) == 0 )
      goto LABEL_106;
    if ( v29 >= 0 )
    {
      if ( *v63 >= 0 && !HIBYTE(v170) )
        goto LABEL_106;
      goto LABEL_154;
    }
  }
LABEL_108:
  if ( v56 )
  {
    if ( v57 )
      ExFreePoolWithTag(v57, 0);
    if ( v158 )
      ExFreePoolWithTag(v158, 0);
  }
  if ( v146 )
    ObfDereferenceObjectWithTag(v146, 0x746C6644u);
  if ( v162 )
    ExFreePoolWithTag(v162, 0);
  if ( v163 )
  {
    LOBYTE(v16) = 1;
    SeReleaseSid(v163, v66, v16);
  }
  if ( v151 )
    SeReleaseSecurityDescriptor(v151, v66, 0LL);
  if ( v142 && *(_QWORD *)(v164 + 32) )
    SepRmDereferenceCapTable();
  if ( v172 )
    ExFreePoolWithTag(v172, 0);
  v67 = P;
  if ( P )
  {
    AuthzBasepFreeSecurityAttributesList(P, v17, v16);
    ExFreePoolWithTag(v67, 0);
  }
  return (unsigned int)v29;
}
