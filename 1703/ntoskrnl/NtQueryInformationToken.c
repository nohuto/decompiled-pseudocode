/*
 * XREFs of NtQueryInformationToken @ 0x140508720
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x14023C1C0 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1406EA6A0 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     SepDeReferenceLogonSessionDirect @ 0x140036550 (SepDeReferenceLogonSessionDirect.c)
 *     SepConvertTokenPrivileges @ 0x14003EFF0 (SepConvertTokenPrivileges.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x14003F010 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SepTokenPrivilegeCount @ 0x14003F170 (SepTokenPrivilegeCount.c)
 *     SeQueryMandatoryPolicyToken @ 0x14003F2EC (SeQueryMandatoryPolicyToken.c)
 *     SepCopyTokenIntegrity @ 0x140064158 (SepCopyTokenIntegrity.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140089FD0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x14008A070 (AuthzBasepQuerySecurityAttributesToken.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     SepReferenceTokenByHandle @ 0x1400911E0 (SepReferenceTokenByHandle.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     AuthzBasepQueryClaimAttributesToken @ 0x14044266C (AuthzBasepQueryClaimAttributesToken.c)
 *     SepCopyTokenAccessInformation @ 0x14046EA9C (SepCopyTokenAccessInformation.c)
 *     RtlCopySidAndAttributesArray @ 0x14046ED30 (RtlCopySidAndAttributesArray.c)
 *     SepGetTokenAccessInformationBufferSize @ 0x14046EE08 (SepGetTokenAccessInformationBufferSize.c)
 *     SepReferenceLogonSessionSilo @ 0x14046F47C (SepReferenceLogonSessionSilo.c)
 *     RtlCopySid @ 0x1404F1BD0 (RtlCopySid.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     RtlIsElevatedRid @ 0x1404FF1F0 (RtlIsElevatedRid.c)
 *     SepDuplicateToken @ 0x14050CF30 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     NtClose @ 0x14052EB10 (NtClose.c)
 *     ExRaiseAccessViolation @ 0x14071ED40 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength,
        PULONG ReturnLength)
{
  __int64 v5; // r15
  __int64 v9; // rdi
  KPROCESSOR_MODE PreviousMode; // r12
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  PULONG v14; // rbx
  __int64 v15; // rcx
  NTSTATUS result; // eax
  struct _KTHREAD *v17; // rax
  PVOID v18; // rdi
  int v19; // r14d
  _DWORD *v20; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v22; // r13
  unsigned int v23; // r14d
  char *v24; // rbx
  const void **v25; // r12
  unsigned int v26; // ecx
  unsigned int v27; // r15d
  unsigned int v28; // eax
  struct _KTHREAD *v29; // rcx
  __int16 v30; // ax
  unsigned int v31; // r13d
  struct _KTHREAD *v32; // rax
  unsigned int *v33; // rdi
  unsigned __int8 *v34; // rdx
  __int16 v35; // ax
  struct _KTHREAD *v36; // rax
  char *v37; // rbx
  int v38; // edx
  __int64 v39; // rax
  struct _ERESOURCE *v40; // rcx
  struct _KTHREAD *v41; // rax
  unsigned __int8 *Sid; // rdx
  unsigned int v43; // eax
  struct _KTHREAD *v44; // rax
  unsigned int v45; // ecx
  struct _ERESOURCE *v46; // rcx
  struct _KTHREAD *v47; // rax
  PVOID v48; // r14
  __int64 v49; // rax
  unsigned int v50; // eax
  char *v51; // rcx
  unsigned int v52; // r13d
  struct _KTHREAD *v53; // rax
  char v54; // cl
  unsigned __int8 *v55; // r8
  unsigned __int8 *v56; // rdx
  struct _KTHREAD *v57; // rax
  __int64 v58; // rax
  unsigned int v59; // r14d
  int *v60; // r12
  struct _ERESOURCE *v61; // rcx
  struct _KTHREAD *v62; // rax
  unsigned int v63; // ecx
  struct _KTHREAD *v64; // rax
  _DWORD *v65; // rcx
  unsigned int v66; // r14d
  int v67; // edx
  struct _KTHREAD *v68; // rax
  PVOID v69; // r14
  unsigned __int8 IsElevatedRid; // bl
  unsigned int v71; // r15d
  struct _KTHREAD *v72; // rax
  __int64 v73; // rax
  ULONG v74; // r11d
  ULONG v75; // r8d
  struct _KTHREAD *v76; // rax
  int v77; // r10d
  unsigned int v78; // ecx
  unsigned int v79; // r11d
  unsigned int v80; // r8d
  __int64 v81; // rdx
  __int64 v82; // r9
  unsigned int v83; // r14d
  unsigned int v84; // r12d
  unsigned int v85; // ecx
  _SID_AND_ATTRIBUTES *v86; // r9
  _SID_AND_ATTRIBUTES *v87; // rdi
  __int64 v88; // rbx
  struct _KTHREAD *v89; // rax
  ULONG v90; // r8d
  struct _KTHREAD *v91; // rax
  unsigned int v92; // eax
  struct _KTHREAD *v93; // rax
  unsigned int v94; // r14d
  __int64 v95; // rax
  struct _KTHREAD *v96; // rax
  unsigned int v97; // eax
  ULONG v98; // r8d
  __int64 v99; // rdx
  __int64 v100; // r9
  struct _KTHREAD *v101; // rax
  unsigned __int8 *v102; // r14
  char v103; // r12
  unsigned int TokenAccessInformationBufferSize; // eax
  struct _KTHREAD *v105; // rax
  unsigned int v106; // eax
  ULONG v107; // r8d
  __int64 v108; // rdx
  __int64 v109; // r9
  int v110; // r15d
  PVOID v111; // r14
  NTSTATUS inserted; // ebx
  void *v113; // rcx
  _QWORD *v114; // rbx
  NTSTATUS v115; // r15d
  struct _KTHREAD *v116; // rax
  unsigned int v117; // edx
  unsigned int v118; // r9d
  __int64 v119; // r8
  __int64 v120; // r8
  unsigned int v121; // eax
  __int64 v122; // rdx
  __int64 v123; // r9
  __int64 v124; // rdx
  __int64 v125; // r9
  struct _KTHREAD *v126; // rax
  struct _KTHREAD *v127; // rax
  PVOID v128; // rbx
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // r9
  struct _KTHREAD *v132; // rax
  PVOID v133; // rdi
  char v134; // dl
  PSID SidArea; // [rsp+20h] [rbp-188h]
  char v136[8]; // [rsp+80h] [rbp-128h] BYREF
  PVOID Object; // [rsp+88h] [rbp-120h] BYREF
  unsigned __int8 *v138; // [rsp+90h] [rbp-118h] BYREF
  PSID RemainingSidArea; // [rsp+98h] [rbp-110h] BYREF
  int v140; // [rsp+A0h] [rbp-108h] BYREF
  NTSTATUS SecurityAttributesToken; // [rsp+A4h] [rbp-104h]
  int v142; // [rsp+A8h] [rbp-100h] BYREF
  int v143; // [rsp+ACh] [rbp-FCh]
  int v144; // [rsp+B0h] [rbp-F8h] BYREF
  int v145; // [rsp+B4h] [rbp-F4h] BYREF
  unsigned int v146; // [rsp+B8h] [rbp-F0h] BYREF
  unsigned int v147; // [rsp+BCh] [rbp-ECh] BYREF
  int v148; // [rsp+C0h] [rbp-E8h] BYREF
  unsigned int v149; // [rsp+C4h] [rbp-E4h] BYREF
  unsigned int v150; // [rsp+C8h] [rbp-E0h] BYREF
  unsigned int v151; // [rsp+CCh] [rbp-DCh] BYREF
  unsigned int v152; // [rsp+D0h] [rbp-D8h] BYREF
  unsigned int v153; // [rsp+D4h] [rbp-D4h]
  int v154; // [rsp+D8h] [rbp-D0h]
  PVOID v155; // [rsp+E0h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp-C0h] BYREF
  int v157; // [rsp+F0h] [rbp-B8h] BYREF
  _QWORD v158[5]; // [rsp+F8h] [rbp-B0h] BYREF
  PSID_AND_ATTRIBUTES Dest; // [rsp+120h] [rbp-88h]
  _QWORD *v160; // [rsp+128h] [rbp-80h] BYREF
  char *v161; // [rsp+130h] [rbp-78h]
  _SID_AND_ATTRIBUTES Src; // [rsp+138h] [rbp-70h] BYREF
  int v163; // [rsp+148h] [rbp-60h] BYREF
  __int64 v164; // [rsp+150h] [rbp-58h]
  __int64 v165; // [rsp+158h] [rbp-50h]
  int v166; // [rsp+160h] [rbp-48h]
  __int128 v167; // [rsp+168h] [rbp-40h]
  __int64 v168; // [rsp+178h] [rbp-30h]

  v5 = TokenInformationLength;
  v9 = 0LL;
  v168 = 0LL;
  Dest = 0LL;
  v142 = 0;
  v157 = 0;
  memset(v158, 0, sizeof(v158));
  v136[0] = 0;
  v138 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (_DWORD)v5 )
    {
      v11 = (unsigned __int64)TokenInformation;
      if ( ((unsigned __int8)TokenInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = (unsigned __int64)TokenInformation + v5 - 1;
      if ( (unsigned __int64)TokenInformation > v12 || v12 >= 0x7FFFFFFF0000LL )
      {
        if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
          ExRaiseAccessViolation();
      }
      else
      {
        v13 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          *(_BYTE *)v11 = *(_BYTE *)v11;
          v11 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v11 != v13 );
      }
    }
    v14 = ReturnLength;
    v15 = (__int64)ReturnLength;
    if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
  }
  else
  {
    v14 = ReturnLength;
  }
  if ( TokenInformationClass == TokenUser )
  {
    result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
    if ( result < 0 )
      return result;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v22 = (unsigned int *)Object;
    ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
    v23 = 4 * *(unsigned __int8 *)(**((_QWORD **)v22 + 19) + 1LL) + 24;
    *v14 = v23;
    if ( (unsigned int)v5 >= v23 )
    {
      v24 = (char *)TokenInformation + 16;
      v25 = (const void **)*((_QWORD *)v22 + 19);
      v154 = 0;
      v161 = (char *)TokenInformation + 16;
      v153 = v23;
      while ( !(_DWORD)v9 )
      {
        v26 = 4 * *((unsigned __int8 *)*v25 + 1) + 8;
        v27 = (4 * *((unsigned __int8 *)*v25 + 1) + 11) & 0xFFFFFFFC;
        if ( v26 > v23 )
          goto LABEL_31;
        v23 -= v27;
        v153 = v23;
        *(_QWORD *)TokenInformation = v24;
        *((_DWORD *)TokenInformation + 2) = *((_DWORD *)v25 + 2);
        v28 = 4 * *((unsigned __int8 *)*v25 + 1) + 8;
        if ( v28 <= v26 )
          memmove(v24, *v25, v28);
        v24 += v27;
        v161 = v24;
        LODWORD(v9) = 1;
        v154 = 1;
      }
      RemainingSidArea = (PSID)__PAIR64__(HIDWORD(v24), v23);
LABEL_31:
      ExReleaseResourceLite(*((PERESOURCE *)v22 + 6));
      v29 = KeGetCurrentThread();
      v30 = v29->KernelApcDisable + 1;
      v29->KernelApcDisable = v30;
      if ( v30 || ($69CD3F157F9F39B6F7113F2231989901 *)v29->ApcState.ApcListHead[0].Flink == &v29->152 )
        goto LABEL_33;
LABEL_201:
      if ( !v29->SpecialApcDisable )
        KiCheckForKernelApcDelivery((__int64)v29);
LABEL_33:
      v20 = Object;
LABEL_34:
      ObfDereferenceObject(v20);
      return 0;
    }
LABEL_65:
    v46 = (struct _ERESOURCE *)*((_QWORD *)v22 + 6);
    goto LABEL_66;
  }
  if ( TokenInformationClass != TokenAppContainerSid )
  {
    switch ( TokenInformationClass )
    {
      case TokenGroups:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result >= 0 )
        {
          v96 = KeGetCurrentThread();
          --v96->KernelApcDisable;
          v33 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v97 = v33[31];
          v98 = 16 * v97 - 8;
          if ( v97 > 1 )
          {
            v99 = *((_QWORD *)v33 + 19) + 16LL;
            v100 = v97 - 1;
            do
            {
              v98 += 4 * *(unsigned __int8 *)(*(_QWORD *)v99 + 1LL) + 8;
              v99 += 16LL;
              --v100;
            }
            while ( v100 );
          }
          *v14 = v98;
          if ( (unsigned int)v5 >= v98 )
          {
            *(_DWORD *)TokenInformation = v33[31] - 1;
            RtlCopySidAndAttributesArray(
              v33[31] - 1,
              (PSID_AND_ATTRIBUTES)(*((_QWORD *)v33 + 19) + 16LL),
              v98,
              (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
              (char *)TokenInformation + 16 * v33[31] - 8,
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
            goto LABEL_60;
          }
          goto LABEL_64;
        }
        return result;
      case TokenPrivileges:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result >= 0 )
        {
          v91 = KeGetCurrentThread();
          --v91->KernelApcDisable;
          v48 = Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v92 = SepTokenPrivilegeCount((__int64)v48);
          if ( v92 > 1 )
            LODWORD(v9) = 12 * (v92 - 1);
          *v14 = v9 + 16;
          if ( (unsigned int)v5 >= (int)v9 + 16 )
          {
            SepConvertTokenPrivileges((__int64)v48, TokenInformation);
            goto LABEL_77;
          }
          goto LABEL_121;
        }
        return result;
      case TokenOwner:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result >= 0 )
        {
          v62 = KeGetCurrentThread();
          --v62->KernelApcDisable;
          v33 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v63 = 4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)v33 + 19) + 16LL * v33[36]) + 1LL) + 16;
          *v14 = v63;
          if ( (unsigned int)v5 < v63 )
            goto LABEL_64;
          *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
          RtlCopySid(v63 - 8, (char *)TokenInformation + 8, *(PSID *)(*((_QWORD *)v33 + 19) + 16LL * v33[36]));
          goto LABEL_60;
        }
        return result;
      case TokenPrimaryGroup:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result >= 0 )
        {
          v44 = KeGetCurrentThread();
          --v44->KernelApcDisable;
          v33 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v45 = 4 * *(unsigned __int8 *)(*((_QWORD *)v33 + 21) + 1LL) + 16;
          *v14 = v45;
          if ( (unsigned int)v5 < v45 )
            goto LABEL_64;
          *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
          RtlCopySid(v45 - 8, (char *)TokenInformation + 8, *((PSID *)v33 + 21));
          goto LABEL_60;
        }
        return result;
      case TokenDefaultDacl:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result >= 0 )
        {
          v140 = 8;
          v47 = KeGetCurrentThread();
          --v47->KernelApcDisable;
          v48 = Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v49 = *((_QWORD *)v48 + 23);
          if ( v49 )
            v50 = *(unsigned __int16 *)(v49 + 2) + 8;
          else
            v50 = v140;
          *v14 = v50;
          if ( (unsigned int)v5 >= v50 )
          {
            v51 = (char *)TokenInformation + 8;
            if ( *((_QWORD *)v48 + 23) )
            {
              *(_QWORD *)TokenInformation = v51;
              memmove(v51, *((const void **)v48 + 23), *(unsigned __int16 *)(*((_QWORD *)v48 + 23) + 2LL));
            }
            else
            {
              *(_QWORD *)TokenInformation = 0LL;
            }
            goto LABEL_77;
          }
          goto LABEL_121;
        }
        return result;
      case TokenSource:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 0x10u, PreviousMode, &Object, v136, &v138);
        if ( result >= 0 )
        {
          *v14 = 16;
          if ( (unsigned int)v5 < 0x10 )
            goto LABEL_67;
          v20 = Object;
          *(_OWORD *)TokenInformation = *(_OWORD *)Object;
          goto LABEL_34;
        }
        return result;
      case TokenType:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result >= 0 )
        {
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            goto LABEL_67;
          v20 = Object;
          *(_DWORD *)TokenInformation = *((_DWORD *)Object + 48);
          goto LABEL_34;
        }
        return result;
      case TokenImpersonationLevel:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result >= 0 )
        {
          v20 = Object;
          if ( *((_DWORD *)Object + 48) != 2 )
          {
            ObfDereferenceObject(Object);
            return -1073741821;
          }
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            goto LABEL_68;
          *(_DWORD *)TokenInformation = v20[49];
          goto LABEL_34;
        }
        return result;
      case TokenStatistics:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result >= 0 )
        {
          *v14 = 56;
          if ( (unsigned int)v5 < 0x38 )
            goto LABEL_67;
          v36 = KeGetCurrentThread();
          --v36->KernelApcDisable;
          v37 = (char *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          *(_QWORD *)TokenInformation = *((_QWORD *)v37 + 2);
          *((_QWORD *)TokenInformation + 1) = *((_QWORD *)v37 + 3);
          *((_QWORD *)TokenInformation + 2) = *((_QWORD *)v37 + 5);
          *((_DWORD *)TokenInformation + 6) = *((_DWORD *)v37 + 48);
          *((_DWORD *)TokenInformation + 7) = *((_DWORD *)v37 + 49);
          *((_DWORD *)TokenInformation + 8) = *((_DWORD *)v37 + 34);
          v38 = *((_DWORD *)v37 + 34) - 4 * *(unsigned __int8 *)(*((_QWORD *)v37 + 21) + 1LL) - 8;
          v143 = v38;
          v39 = *((_QWORD *)v37 + 23);
          if ( v39 )
          {
            v38 -= *(unsigned __int16 *)(v39 + 2);
            v143 = v38;
          }
          *((_DWORD *)TokenInformation + 9) = v38;
          *((_DWORD *)TokenInformation + 10) = *((_DWORD *)v37 + 31) - 1;
          *((_DWORD *)TokenInformation + 11) = SepTokenPrivilegeCount((__int64)v37);
          *((_QWORD *)TokenInformation + 6) = *((_QWORD *)v37 + 7);
          goto LABEL_56;
        }
        return result;
      case TokenRestrictedSids:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result >= 0 )
        {
          v89 = KeGetCurrentThread();
          --v89->KernelApcDisable;
          v33 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v90 = 16 * v33[32] + 8;
          if ( v33[32] )
          {
            v124 = *((_QWORD *)v33 + 20);
            v125 = v33[32];
            do
            {
              v90 += 4 * *(unsigned __int8 *)(*(_QWORD *)v124 + 1LL) + 8;
              v124 += 16LL;
              --v125;
            }
            while ( v125 );
          }
          *v14 = v90;
          if ( (unsigned int)v5 >= v90 )
          {
            *(_DWORD *)TokenInformation = v33[32];
            RtlCopySidAndAttributesArray(
              v33[32],
              *((PSID_AND_ATTRIBUTES *)v33 + 20),
              v90,
              (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
              (char *)TokenInformation + 16 * v33[32] + 8,
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
            goto LABEL_60;
          }
          goto LABEL_64;
        }
        return result;
      case TokenSessionId:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result >= 0 )
        {
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            goto LABEL_67;
          v17 = KeGetCurrentThread();
          --v17->KernelApcDisable;
          v18 = Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v19 = *((_DWORD *)v18 + 30);
          ExReleaseResourceLite(*((PERESOURCE *)v18 + 6));
          KeLeaveCriticalRegion();
          *(_DWORD *)TokenInformation = v19;
          *v14 = 4;
          v20 = v18;
          goto LABEL_34;
        }
        return result;
      case TokenGroupsAndPrivileges:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result >= 0 )
        {
          v76 = KeGetCurrentThread();
          --v76->KernelApcDisable;
          v22 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v142 = SepTokenPrivilegeCount((__int64)v22);
          v77 = 12 * v142;
          v78 = v22[31];
          v79 = v78;
          v80 = 16 * v78;
          if ( v78 )
          {
            v81 = *((_QWORD *)v22 + 19);
            v82 = v78;
            do
            {
              v80 += (4 * *(unsigned __int8 *)(*(_QWORD *)v81 + 1LL) + 15) & 0xFFFFFFF8;
              v81 += 16LL;
              --v82;
            }
            while ( v82 );
          }
          v83 = 16 * v22[32];
          v84 = v83;
          if ( v22[32] )
          {
            v122 = *((_QWORD *)v22 + 20);
            v123 = v22[32];
            do
            {
              v84 += (4 * *(unsigned __int8 *)(*(_QWORD *)v122 + 1LL) + 15) & 0xFFFFFFF8;
              v122 += 16LL;
              --v123;
            }
            while ( v123 );
          }
          v85 = v84 + v80 + v77 + 56;
          *v14 = v85;
          if ( (unsigned int)v5 >= v85 )
          {
            *((_QWORD *)TokenInformation + 6) = *((_QWORD *)v22 + 3);
            *((_DWORD *)TokenInformation + 1) = v80;
            *(_DWORD *)TokenInformation = v22[31];
            v86 = (_SID_AND_ATTRIBUTES *)((char *)TokenInformation + 56);
            *((_QWORD *)TokenInformation + 1) = (char *)TokenInformation + 56;
            *((_DWORD *)TokenInformation + 5) = v84;
            *((_DWORD *)TokenInformation + 4) = v22[32];
            if ( v22[32] )
            {
              v87 = (_SID_AND_ATTRIBUTES *)((char *)v86 + ((v80 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
              *((_QWORD *)TokenInformation + 3) = v87;
            }
            else
            {
              *((_QWORD *)TokenInformation + 3) = 0LL;
              v87 = Dest;
            }
            *((_DWORD *)TokenInformation + 9) = v77;
            *((_DWORD *)TokenInformation + 8) = v142;
            v88 = (__int64)v86 + v84 + v80;
            *((_QWORD *)TokenInformation + 5) = v88;
            RtlCopySidAndAttributesArray(
              v22[31],
              *((PSID_AND_ATTRIBUTES *)v22 + 19),
              v80 - v79 * 16,
              v86,
              &v86[v79],
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
            if ( v87 )
              RtlCopySidAndAttributesArray(
                v22[32],
                *((PSID_AND_ATTRIBUTES *)v22 + 20),
                v84 - v83,
                v87,
                &v87[v83 / 0x10],
                &RemainingSidArea,
                (PULONG)&RemainingSidArea);
            SepConvertTokenPrivilegesToLuidAndAttributes(v22, v88);
            goto LABEL_142;
          }
          goto LABEL_65;
        }
        return result;
      case TokenSandBoxInert:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result >= 0 )
        {
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            return -1073741789;
          v20 = Object;
          *(_DWORD *)TokenInformation = (*((_DWORD *)Object + 50) & 0x40) != 0;
          goto LABEL_34;
        }
        return result;
      case TokenAuditPolicy:
        if ( !SeSinglePrivilegeCheck(SeSecurityPrivilege, PreviousMode) )
          return -1073741727;
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result >= 0 )
        {
          *v14 = 30;
          if ( (unsigned int)v5 < 0x1E )
            goto LABEL_67;
          v126 = KeGetCurrentThread();
          --v126->KernelApcDisable;
          v37 = (char *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          *(_OWORD *)TokenInformation = *(_OWORD *)(v37 + 88);
          *((_QWORD *)TokenInformation + 2) = *((_QWORD *)v37 + 13);
          *((_DWORD *)TokenInformation + 6) = *((_DWORD *)v37 + 28);
          *((_WORD *)TokenInformation + 14) = *((_WORD *)v37 + 58);
LABEL_56:
          v40 = (struct _ERESOURCE *)*((_QWORD *)v37 + 6);
          goto LABEL_61;
        }
        return result;
      case TokenOrigin:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result >= 0 )
        {
          *v14 = 8;
          if ( (unsigned int)v5 < 8 )
            goto LABEL_67;
          v20 = Object;
          *(_QWORD *)TokenInformation = *((_QWORD *)Object + 28);
          goto LABEL_34;
        }
        return result;
      case TokenElevationType:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result >= 0 )
        {
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            goto LABEL_67;
          v20 = Object;
          v67 = *(_DWORD *)(*((_QWORD *)Object + 27) + 32LL);
          if ( (v67 & 4) != 0 )
          {
            *(_DWORD *)TokenInformation = 3;
          }
          else
          {
            LOBYTE(v9) = (v67 & 2) != 0;
            *(_DWORD *)TokenInformation = v9 + 1;
          }
          goto LABEL_34;
        }
        return result;
      case TokenLinkedToken:
        v155 = 0LL;
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result < 0 )
          return result;
        *v14 = 8;
        if ( (_DWORD)v5 != 8 )
        {
          ObfDereferenceObject(Object);
          return -1073741820;
        }
        v110 = -(SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) != 0);
        v111 = Object;
        inserted = SepReferenceLogonSessionSilo(
                     (_DWORD *)(*((_QWORD *)Object + 27) + 16LL),
                     *(_QWORD *)(*((_QWORD *)Object + 27) + 160LL),
                     (__int64 *)&v160);
        if ( inserted < 0 )
        {
LABEL_194:
          v113 = v111;
          goto LABEL_195;
        }
        v163 = 48;
        v164 = 0LL;
        if ( PreviousMode )
          v166 = 0;
        else
          v166 = 512;
        v165 = 0LL;
        v167 = 0LL;
        v114 = v160;
        v115 = SepDuplicateToken(v160[6], (unsigned int)&v163, 0, v110 + 2, 1, 0, 0, (__int64)&v155);
        SepDeReferenceLogonSessionDirect(v114);
        if ( v115 < 0 )
        {
          ObfDereferenceObject(v111);
          return v115;
        }
        inserted = ObInsertObjectEx(v155, 0LL, 0, 0LL, (__int64)&Handle);
        if ( inserted < 0 )
          goto LABEL_194;
        *(_QWORD *)TokenInformation = Handle;
        v20 = v111;
        break;
      case TokenElevation:
        *v14 = 4;
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result < 0 )
          return result;
        v68 = KeGetCurrentThread();
        --v68->KernelApcDisable;
        v69 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        IsElevatedRid = (*((_QWORD *)v69 + 8) & 0x1120160684LL) != 0;
        v71 = *((_DWORD *)v69 + 31);
        if ( v71 )
        {
          do
          {
            if ( IsElevatedRid )
              break;
            IsElevatedRid = RtlIsElevatedRid((PSID_AND_ATTRIBUTES)(*((_QWORD *)v69 + 19) + 16LL * (unsigned int)v9));
            LODWORD(v9) = v9 + 1;
          }
          while ( (unsigned int)v9 < v71 );
        }
        ExReleaseResourceLite(*((PERESOURCE *)v69 + 6));
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        *(_DWORD *)TokenInformation = IsElevatedRid;
        goto LABEL_33;
      case TokenHasRestrictions:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result < 0 )
          return result;
        *v14 = 1;
        if ( !(_DWORD)v5 )
          goto LABEL_67;
        v20 = Object;
        *(_BYTE *)TokenInformation = (*((_DWORD *)Object + 50) & 0x810) != 0;
        goto LABEL_34;
      case TokenAccessInformation:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result < 0 )
          return result;
        v101 = KeGetCurrentThread();
        --v101->KernelApcDisable;
        v33 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v102 = v138;
        v103 = v136[0];
        TokenAccessInformationBufferSize = SepGetTokenAccessInformationBufferSize(
                                             (__int64)v33,
                                             v136[0],
                                             (__int64)v138,
                                             &v142,
                                             (int *)&v152,
                                             (int *)&v151,
                                             (int *)&v150,
                                             (int *)&v149,
                                             (unsigned int *)&v148,
                                             (int *)&v147,
                                             (int *)&v146,
                                             (unsigned int *)&v145,
                                             &v144);
        *v14 = TokenAccessInformationBufferSize;
        if ( (unsigned int)v5 < TokenAccessInformationBufferSize )
          goto LABEL_64;
        SepCopyTokenAccessInformation(
          (__int64)v33,
          (__int64)TokenInformation,
          v5,
          v142,
          v152,
          v151,
          v150,
          v149,
          v148,
          v147,
          v146,
          v145,
          v144,
          v103,
          v102);
        goto LABEL_60;
      case TokenVirtualizationAllowed:
      case TokenVirtualizationEnabled:
      case TokenUIAccess:
      case TokenIsRestricted:
      case TokenPrivateNameSpace:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result < 0 )
          return result;
        *v14 = 4;
        if ( (unsigned int)v5 < 4 )
          goto LABEL_67;
        v20 = Object;
        switch ( TokenInformationClass )
        {
          case TokenVirtualizationAllowed:
            LODWORD(v9) = (*((_DWORD *)Object + 50) >> 9) & 1;
            break;
          case TokenVirtualizationEnabled:
            LODWORD(v9) = (*((_DWORD *)Object + 50) >> 10) & 1;
            break;
          case TokenUIAccess:
            LODWORD(v9) = (*((_DWORD *)Object + 50) >> 12) & 1;
            break;
          case TokenIsRestricted:
            LOBYTE(v9) = (*((_DWORD *)Object + 50) & 0x18) != 0;
            break;
          default:
            if ( (*((_DWORD *)Object + 50) & 0x10000) != 0 )
              LODWORD(v9) = 1;
            break;
        }
        *(_DWORD *)TokenInformation = v9;
        goto LABEL_34;
      case TokenIntegrityLevel:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result < 0 )
          return result;
        v41 = KeGetCurrentThread();
        --v41->KernelApcDisable;
        v33 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        SepCopyTokenIntegrity();
        Sid = (unsigned __int8 *)Src.Sid;
        v43 = 4 * *((unsigned __int8 *)Src.Sid + 1) + 24;
        *v14 = v43;
        if ( (unsigned int)v5 < v43 )
          goto LABEL_64;
        RtlCopySidAndAttributesArray(
          1u,
          &Src,
          4 * Sid[1] + 8,
          (PSID_AND_ATTRIBUTES)TokenInformation,
          (char *)TokenInformation + 16,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_60;
      case TokenMandatoryPolicy:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result < 0 )
          return result;
        *v14 = 4;
        if ( (unsigned int)v5 < 4 )
          goto LABEL_67;
        inserted = SeQueryMandatoryPolicyToken((__int64)Object, TokenInformation);
        SecurityAttributesToken = inserted;
LABEL_195:
        ObfDereferenceObject(v113);
        return inserted;
      case TokenLogonSid:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result < 0 )
          return result;
        v116 = KeGetCurrentThread();
        --v116->KernelApcDisable;
        v48 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v117 = 0;
        v118 = *((_DWORD *)v48 + 31);
        if ( !v118 )
          goto LABEL_210;
        v119 = *((_QWORD *)v48 + 19);
        while ( (*(_DWORD *)(v119 + 16LL * v117 + 8) & 0xC0000000) != 0xC0000000 )
        {
          if ( ++v117 >= v118 )
            goto LABEL_210;
        }
        v9 = *(_QWORD *)(v119 + 16LL * v117);
LABEL_210:
        if ( !v9 )
        {
          ExReleaseResourceLite(*((PERESOURCE *)v48 + 6));
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          ObfDereferenceObject(Object);
          return -1073741275;
        }
        v120 = 16LL * v117;
        v121 = 4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)v48 + 19) + v120) + 1LL) + 32;
        *v14 = v121;
        if ( (unsigned int)v5 < v121 )
        {
LABEL_121:
          v46 = (struct _ERESOURCE *)*((_QWORD *)v48 + 6);
          goto LABEL_66;
        }
        *(_DWORD *)TokenInformation = 1;
        RtlCopySidAndAttributesArray(
          1u,
          (PSID_AND_ATTRIBUTES)(v120 + *((_QWORD *)v48 + 19)),
          4 * *(unsigned __int8 *)(*(_QWORD *)(v120 + *((_QWORD *)v48 + 19)) + 1LL) + 8,
          (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
          (char *)TokenInformation + 24,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
LABEL_77:
        v40 = (struct _ERESOURCE *)*((_QWORD *)v48 + 6);
LABEL_61:
        ExReleaseResourceLite(v40);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        goto LABEL_33;
      case TokenIsAppContainer:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result < 0 )
          return result;
        *v14 = 4;
        v20 = Object;
        if ( (unsigned int)v5 < 4 )
          goto LABEL_68;
        LOBYTE(v9) = (*((_DWORD *)Object + 50) & 0x4000) != 0;
        *(_DWORD *)TokenInformation = v9;
        goto LABEL_34;
      case TokenCapabilities:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result < 0 )
          return result;
        v105 = KeGetCurrentThread();
        --v105->KernelApcDisable;
        v33 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v106 = v33[200];
        v107 = 16 * v106 + 8;
        if ( v106 )
        {
          v108 = *((_QWORD *)v33 + 99);
          v109 = v106;
          do
          {
            v107 += 4 * *(unsigned __int8 *)(*(_QWORD *)v108 + 1LL) + 8;
            v108 += 16LL;
            --v109;
          }
          while ( v109 );
        }
        *v14 = v107;
        if ( (unsigned int)v5 < v107 )
          goto LABEL_64;
        *(_DWORD *)TokenInformation = v33[200];
        RtlCopySidAndAttributesArray(
          v33[200],
          *((PSID_AND_ATTRIBUTES *)v33 + 99),
          v107,
          (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
          (char *)TokenInformation + 16 * v33[200] + 8,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_60;
      case TokenAppContainerNumber:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result < 0 )
          return result;
        *v14 = 4;
        if ( (unsigned int)v5 < 4 )
          goto LABEL_67;
        v127 = KeGetCurrentThread();
        --v127->KernelApcDisable;
        v128 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v129 = *((_QWORD *)v128 + 135);
        if ( v129 )
          LODWORD(v9) = *(_DWORD *)(v129 + 40);
        ExReleaseResourceLite(*((PERESOURCE *)v128 + 6));
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        *(_DWORD *)TokenInformation = v9;
        goto LABEL_33;
      case TokenUserClaimAttributes:
      case TokenDeviceClaimAttributes:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result < 0 )
          return result;
        v57 = KeGetCurrentThread();
        --v57->KernelApcDisable;
        v22 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v58 = *((_QWORD *)v22 + 137);
        if ( v58
          && (*(_QWORD *)(v58 + 576) || TokenInformationClass != TokenUserClaimAttributes)
          && ((v60 = *(int **)(v58 + 584)) != 0LL || TokenInformationClass != TokenDeviceClaimAttributes) )
        {
          if ( TokenInformationClass == TokenUserClaimAttributes )
            v60 = *(int **)(v58 + 576);
          AuthzBasepQueryClaimAttributesToken(v60, 0LL, 0, &v140);
          v59 = v140;
        }
        else
        {
          v59 = 16;
          v157 = 0;
          v158[1] = v158;
          v158[0] = v158;
          LODWORD(v158[2]) = 0;
          v158[4] = &v158[3];
          v158[3] = &v158[3];
          v60 = &v157;
        }
        *v14 = v59;
        if ( (unsigned int)v5 < v59 )
          goto LABEL_65;
        SecurityAttributesToken = AuthzBasepQueryClaimAttributesToken(v60, TokenInformation, v5, &v140);
        goto LABEL_96;
      case TokenDeviceGroups:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result < 0 )
          return result;
        v72 = KeGetCurrentThread();
        --v72->KernelApcDisable;
        v48 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v73 = *((_QWORD *)v48 + 137);
        if ( v73 && (v74 = *(_DWORD *)v73) != 0 )
        {
          v75 = 16 * v74 + 8;
        }
        else
        {
          v74 = 0;
          v75 = 24;
        }
        if ( v74 )
        {
          v130 = *(_QWORD *)(v73 + 8);
          v131 = v74;
          do
          {
            v75 += 4 * *(unsigned __int8 *)(*(_QWORD *)v130 + 1LL) + 8;
            v130 += 16LL;
            --v131;
          }
          while ( v131 );
        }
        *v14 = v75;
        if ( (unsigned int)v5 < v75 )
          goto LABEL_121;
        *(_QWORD *)TokenInformation = 0LL;
        *((_QWORD *)TokenInformation + 1) = 0LL;
        *((_QWORD *)TokenInformation + 2) = 0LL;
        *(_DWORD *)TokenInformation = v74;
        if ( v74 )
          RtlCopySidAndAttributesArray(
            v74,
            *(PSID_AND_ATTRIBUTES *)(*((_QWORD *)v48 + 137) + 8LL),
            v75,
            (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
            (char *)TokenInformation + 16 * v74 + 8,
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
        goto LABEL_77;
      case TokenSecurityAttributes:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result < 0 )
          return result;
        v64 = KeGetCurrentThread();
        --v64->KernelApcDisable;
        v22 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v65 = (_DWORD *)*((_QWORD *)v22 + 97);
        if ( v65 )
        {
          LODWORD(SidArea) = 0;
          AuthzBasepQuerySecurityAttributesToken(v65, 0LL, 0, 0LL, (size_t)SidArea, &v140);
          v66 = v140;
        }
        else
        {
          v66 = 16;
        }
        *v14 = v66;
        if ( (unsigned int)v5 < v66 )
          goto LABEL_65;
        LODWORD(SidArea) = v5;
        SecurityAttributesToken = AuthzBasepQuerySecurityAttributesToken(
                                    *((_DWORD **)v22 + 97),
                                    0LL,
                                    0,
                                    TokenInformation,
                                    (size_t)SidArea,
                                    &v140);
LABEL_96:
        v61 = (struct _ERESOURCE *)*((_QWORD *)v22 + 6);
LABEL_97:
        ExReleaseResourceLite(v61);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        ObfDereferenceObject(Object);
        return SecurityAttributesToken;
      case TokenProcessTrustLevel:
        v52 = 8;
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result < 0 )
          return result;
        v53 = KeGetCurrentThread();
        --v53->KernelApcDisable;
        v33 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v54 = v136[0];
        v55 = v138;
        if ( v136[0] )
          v56 = v138;
        else
          v56 = (unsigned __int8 *)*((_QWORD *)v33 + 138);
        if ( v56 )
          v52 = 4 * v56[1] + 16;
        *v14 = v52;
        if ( (unsigned int)v5 < v52 )
          goto LABEL_64;
        if ( v56 )
          v56 = (unsigned __int8 *)TokenInformation + 8;
        *(_QWORD *)TokenInformation = v56;
        if ( v56 )
        {
          if ( !v54 )
            v55 = (unsigned __int8 *)*((_QWORD *)v33 + 138);
          RtlCopySid(v52 - 8, v56, v55);
        }
LABEL_60:
        v40 = (struct _ERESOURCE *)*((_QWORD *)v33 + 6);
        goto LABEL_61;
      case TokenSingletonAttributes:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result < 0 )
          return result;
        v132 = KeGetCurrentThread();
        --v132->KernelApcDisable;
        v133 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(
                                    (__int64)v133,
                                    v134,
                                    0LL,
                                    0,
                                    1,
                                    (__int64)TokenInformation,
                                    v5,
                                    (__int64)v14);
        v61 = (struct _ERESOURCE *)*((_QWORD *)v133 + 6);
        goto LABEL_97;
      case TokenBnoIsolation:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
        if ( result < 0 )
          return result;
        v93 = KeGetCurrentThread();
        --v93->KernelApcDisable;
        v22 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v94 = 16;
        v95 = *((_QWORD *)v22 + 144);
        if ( v95 )
          v94 = *(unsigned __int16 *)(v95 + 42) + 16;
        *v14 = v94;
        if ( (unsigned int)v5 < v94 )
          goto LABEL_65;
        if ( *((_QWORD *)v22 + 144) )
        {
          *((_BYTE *)TokenInformation + 8) = 1;
          *(_QWORD *)TokenInformation = (char *)TokenInformation + 16;
          memmove(
            (char *)TokenInformation + 16,
            *(const void **)(*((_QWORD *)v22 + 144) + 48LL),
            *(unsigned __int16 *)(*((_QWORD *)v22 + 144) + 42LL));
        }
        else
        {
          *((_BYTE *)TokenInformation + 8) = 0;
          *(_QWORD *)TokenInformation = 0LL;
        }
LABEL_142:
        v40 = (struct _ERESOURCE *)*((_QWORD *)v22 + 6);
        goto LABEL_61;
      default:
        return -1073741821;
    }
    goto LABEL_34;
  }
  v31 = 8;
  result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v136, &v138);
  if ( result >= 0 )
  {
    v32 = KeGetCurrentThread();
    --v32->KernelApcDisable;
    v33 = (unsigned int *)Object;
    ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
    v34 = (unsigned __int8 *)*((_QWORD *)v33 + 98);
    if ( v34 )
      v31 = 4 * v34[1] + 16;
    *v14 = v31;
    if ( (unsigned int)v5 >= v31 )
    {
      if ( v34 )
        v34 = (unsigned __int8 *)TokenInformation + 8;
      *(_QWORD *)TokenInformation = v34;
      if ( v34 )
        RtlCopySid(v31 - 8, v34, *((PSID *)v33 + 98));
      ExReleaseResourceLite(*((PERESOURCE *)v33 + 6));
      v29 = KeGetCurrentThread();
      v35 = v29->KernelApcDisable + 1;
      v29->KernelApcDisable = v35;
      if ( v35 || ($69CD3F157F9F39B6F7113F2231989901 *)v29->ApcState.ApcListHead[0].Flink == &v29->152 )
        goto LABEL_33;
      goto LABEL_201;
    }
LABEL_64:
    v46 = (struct _ERESOURCE *)*((_QWORD *)v33 + 6);
LABEL_66:
    ExReleaseResourceLite(v46);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_67:
    v20 = Object;
LABEL_68:
    ObfDereferenceObject(v20);
    return -1073741789;
  }
  return result;
}
