/*
 * XREFs of NtQueryInformationToken @ 0x1404A40D0
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x140251A40 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140722598 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     SepConvertTokenPrivileges @ 0x140014280 (SepConvertTokenPrivileges.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x1400142A0 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SepTokenPrivilegeCount @ 0x140014400 (SepTokenPrivilegeCount.c)
 *     SeQueryMandatoryPolicyToken @ 0x14001457C (SeQueryMandatoryPolicyToken.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140017800 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1400178A0 (AuthzBasepQuerySecurityAttributesToken.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     SepReferenceTokenByHandle @ 0x140076550 (SepReferenceTokenByHandle.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     SepCopyTokenIntegrity @ 0x1400E4A04 (SepCopyTokenIntegrity.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     SepDeReferenceLogonSessionDirect @ 0x14012BB1C (SepDeReferenceLogonSessionDirect.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SepCopyTokenAccessInformation @ 0x14045C51C (SepCopyTokenAccessInformation.c)
 *     RtlCopySidAndAttributesArray @ 0x14045C7B0 (RtlCopySidAndAttributesArray.c)
 *     SepGetTokenAccessInformationBufferSize @ 0x14045C878 (SepGetTokenAccessInformationBufferSize.c)
 *     SepReferenceLogonSessionSilo @ 0x14045CEFC (SepReferenceLogonSessionSilo.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     RtlIsElevatedRid @ 0x140486B30 (RtlIsElevatedRid.c)
 *     RtlCopySid @ 0x14049CB70 (RtlCopySid.c)
 *     NtClose @ 0x1404AE620 (NtClose.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     SepDuplicateToken @ 0x1404C6BB0 (SepDuplicateToken.c)
 *     AuthzBasepQueryClaimAttributesToken @ 0x14057D2F0 (AuthzBasepQueryClaimAttributesToken.c)
 *     ExRaiseAccessViolation @ 0x14075EBA0 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength,
        PULONG ReturnLength)
{
  __int64 v5; // rsi
  __int64 v9; // rdi
  KPROCESSOR_MODE PreviousMode; // r12
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  PULONG v14; // rbx
  __int64 v15; // rcx
  NTSTATUS result; // eax
  _DWORD *v17; // rcx
  struct _KTHREAD *v18; // rax
  PVOID v19; // r13
  unsigned int v20; // r15d
  char *v21; // rbx
  const void **v22; // r12
  unsigned int v23; // ecx
  unsigned int v24; // esi
  unsigned int v25; // eax
  struct _KTHREAD *v26; // rcx
  bool v27; // zf
  unsigned int v28; // r13d
  struct _KTHREAD *v29; // rax
  unsigned int *v30; // rdi
  unsigned __int8 *v31; // rdx
  struct _ERESOURCE *v32; // rcx
  struct _KTHREAD *v33; // rax
  PVOID v34; // rdi
  int v35; // esi
  struct _KTHREAD *v36; // rax
  unsigned __int8 *Sid; // rdx
  unsigned int v38; // eax
  struct _KTHREAD *v39; // rax
  char *v40; // rbx
  int v41; // edx
  __int64 v42; // rax
  struct _KTHREAD *v43; // rax
  unsigned int v44; // ecx
  struct _ERESOURCE *v45; // rcx
  struct _KTHREAD *v46; // rax
  unsigned int *v47; // r15
  __int64 v48; // rax
  unsigned int v49; // eax
  char *v50; // rcx
  unsigned int v51; // r13d
  struct _KTHREAD *v52; // rax
  char v53; // r8
  PSID v54; // r9
  unsigned __int8 *v55; // rcx
  char *v56; // rdx
  struct _KTHREAD *v57; // rax
  unsigned int v58; // ecx
  struct _KTHREAD *v59; // rax
  __int64 v60; // rax
  unsigned int v61; // r15d
  int *v62; // r12
  struct _ERESOURCE *v63; // rcx
  int v64; // edx
  struct _KTHREAD *v65; // rax
  PVOID v66; // rsi
  unsigned __int8 IsElevatedRid; // bl
  unsigned int v68; // r15d
  struct _KTHREAD *v69; // rax
  ULONG v70; // r8d
  struct _KTHREAD *v71; // rax
  _DWORD *v72; // rcx
  unsigned int v73; // r15d
  struct _KTHREAD *v74; // rax
  __int64 v75; // rax
  ULONG v76; // r11d
  ULONG v77; // r8d
  struct _KTHREAD *v78; // rax
  int v79; // r10d
  unsigned int v80; // ecx
  unsigned int v81; // r11d
  unsigned int v82; // r8d
  __int64 v83; // rdx
  __int64 v84; // r9
  unsigned int v85; // r12d
  unsigned int v86; // r13d
  unsigned int v87; // ecx
  _SID_AND_ATTRIBUTES *v88; // r9
  _SID_AND_ATTRIBUTES *v89; // rdi
  __int64 v90; // rbx
  struct _KTHREAD *v91; // rax
  unsigned int v92; // eax
  struct _KTHREAD *v93; // rax
  unsigned int v94; // r15d
  __int64 v95; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v97; // eax
  ULONG v98; // r8d
  __int64 v99; // rdx
  __int64 v100; // r9
  struct _KTHREAD *v101; // rax
  unsigned __int8 *v102; // r15
  char v103; // r12
  unsigned int TokenAccessInformationBufferSize; // eax
  struct _KTHREAD *v105; // rax
  unsigned int v106; // eax
  ULONG v107; // r8d
  __int64 v108; // rdx
  __int64 v109; // r9
  int v110; // r15d
  PVOID v111; // rsi
  NTSTATUS inserted; // ebx
  void *v113; // rcx
  _QWORD *v114; // rbx
  NTSTATUS v115; // r15d
  struct _KTHREAD *v116; // rax
  unsigned int v117; // edx
  unsigned int v118; // r9d
  __int64 v119; // r10
  __int64 v120; // r8
  unsigned int v121; // eax
  __int64 v122; // rdx
  __int64 v123; // r9
  __int64 v124; // rdx
  __int64 v125; // r9
  struct _KTHREAD *v126; // rax
  int v127; // eax
  struct _KTHREAD *v128; // rax
  PVOID v129; // rbx
  __int64 v130; // rax
  __int64 v131; // rdx
  __int64 v132; // r9
  struct _KTHREAD *v133; // rax
  PVOID v134; // rdi
  __int64 v135; // rdx
  PSID SidArea; // [rsp+20h] [rbp-188h]
  char v137[8]; // [rsp+80h] [rbp-128h] BYREF
  PVOID Object; // [rsp+88h] [rbp-120h] BYREF
  PSID SourceSid; // [rsp+90h] [rbp-118h] BYREF
  PSID RemainingSidArea; // [rsp+98h] [rbp-110h] BYREF
  int v141; // [rsp+A0h] [rbp-108h] BYREF
  NTSTATUS SecurityAttributesToken; // [rsp+A4h] [rbp-104h]
  int v143; // [rsp+A8h] [rbp-100h] BYREF
  int v144; // [rsp+ACh] [rbp-FCh]
  int v145; // [rsp+B0h] [rbp-F8h] BYREF
  int v146; // [rsp+B4h] [rbp-F4h] BYREF
  unsigned int v147; // [rsp+B8h] [rbp-F0h] BYREF
  unsigned int v148; // [rsp+BCh] [rbp-ECh] BYREF
  int v149; // [rsp+C0h] [rbp-E8h] BYREF
  unsigned int v150; // [rsp+C4h] [rbp-E4h] BYREF
  unsigned int v151; // [rsp+C8h] [rbp-E0h] BYREF
  unsigned int v152; // [rsp+CCh] [rbp-DCh] BYREF
  unsigned int v153; // [rsp+D0h] [rbp-D8h] BYREF
  unsigned int v154; // [rsp+D4h] [rbp-D4h]
  int v155; // [rsp+D8h] [rbp-D0h]
  PVOID v156; // [rsp+E0h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp-C0h] BYREF
  int v158; // [rsp+F0h] [rbp-B8h] BYREF
  _QWORD v159[5]; // [rsp+F8h] [rbp-B0h] BYREF
  PSID_AND_ATTRIBUTES Dest; // [rsp+120h] [rbp-88h]
  _QWORD *v161; // [rsp+128h] [rbp-80h] BYREF
  char *v162; // [rsp+130h] [rbp-78h]
  _SID_AND_ATTRIBUTES Src; // [rsp+138h] [rbp-70h] BYREF
  int v164; // [rsp+148h] [rbp-60h] BYREF
  __int64 v165; // [rsp+150h] [rbp-58h]
  __int64 v166; // [rsp+158h] [rbp-50h]
  int v167; // [rsp+160h] [rbp-48h]
  __int128 v168; // [rsp+168h] [rbp-40h]

  v5 = TokenInformationLength;
  v9 = 0LL;
  Dest = 0LL;
  v143 = 0;
  v158 = 0;
  memset(v159, 0, sizeof(v159));
  v137[0] = 0;
  SourceSid = 0LL;
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
        if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) == 0 )
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
  if ( TokenInformationClass != TokenUser )
  {
    switch ( TokenInformationClass )
    {
      case TokenGroups:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result >= 0 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v30 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v97 = v30[31];
          v98 = 16 * v97 - 8;
          if ( v97 > 1 )
          {
            v99 = *((_QWORD *)v30 + 19) + 16LL;
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
            *(_DWORD *)TokenInformation = v30[31] - 1;
            RtlCopySidAndAttributesArray(
              v30[31] - 1,
              (PSID_AND_ATTRIBUTES)(*((_QWORD *)v30 + 19) + 16LL),
              v98,
              (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
              (char *)TokenInformation + 16 * v30[31] - 8,
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
            goto LABEL_41;
          }
          goto LABEL_63;
        }
        return result;
      case TokenPrivileges:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result >= 0 )
        {
          v91 = KeGetCurrentThread();
          --v91->KernelApcDisable;
          v47 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v92 = SepTokenPrivilegeCount((__int64)v47);
          if ( v92 > 1 )
            LODWORD(v9) = 12 * (v92 - 1);
          *v14 = v9 + 16;
          if ( (unsigned int)v5 >= (int)v9 + 16 )
          {
            SepConvertTokenPrivileges((__int64)v47, TokenInformation);
            goto LABEL_75;
          }
          goto LABEL_101;
        }
        return result;
      case TokenOwner:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result >= 0 )
        {
          v57 = KeGetCurrentThread();
          --v57->KernelApcDisable;
          v30 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v58 = 4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)v30 + 19) + 16LL * v30[36]) + 1LL) + 16;
          *v14 = v58;
          if ( (unsigned int)v5 < v58 )
            goto LABEL_63;
          *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
          RtlCopySid(v58 - 8, (char *)TokenInformation + 8, *(PSID *)(*((_QWORD *)v30 + 19) + 16LL * v30[36]));
          goto LABEL_41;
        }
        return result;
      case TokenPrimaryGroup:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result >= 0 )
        {
          v43 = KeGetCurrentThread();
          --v43->KernelApcDisable;
          v30 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v44 = 4 * *(unsigned __int8 *)(*((_QWORD *)v30 + 21) + 1LL) + 16;
          *v14 = v44;
          if ( (unsigned int)v5 < v44 )
            goto LABEL_63;
          *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
          RtlCopySid(v44 - 8, (char *)TokenInformation + 8, *((PSID *)v30 + 21));
          goto LABEL_41;
        }
        return result;
      case TokenDefaultDacl:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result >= 0 )
        {
          v141 = 8;
          v46 = KeGetCurrentThread();
          --v46->KernelApcDisable;
          v47 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v48 = *((_QWORD *)v47 + 23);
          if ( v48 )
            v49 = *(unsigned __int16 *)(v48 + 2) + 8;
          else
            v49 = v141;
          *v14 = v49;
          if ( (unsigned int)v5 >= v49 )
          {
            v50 = (char *)TokenInformation + 8;
            if ( *((_QWORD *)v47 + 23) )
            {
              *(_QWORD *)TokenInformation = v50;
              memmove(v50, *((const void **)v47 + 23), *(unsigned __int16 *)(*((_QWORD *)v47 + 23) + 2LL));
            }
            else
            {
              *(_QWORD *)TokenInformation = 0LL;
            }
            goto LABEL_75;
          }
          goto LABEL_101;
        }
        return result;
      case TokenSource:
        result = SepReferenceTokenByHandle(TokenHandle, 0x10u, PreviousMode, &Object, v137, &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 16;
          if ( (unsigned int)v5 < 0x10 )
            goto LABEL_65;
          v17 = Object;
          *(_OWORD *)TokenInformation = *(_OWORD *)Object;
          goto LABEL_44;
        }
        return result;
      case TokenType:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            goto LABEL_65;
          v17 = Object;
          *(_DWORD *)TokenInformation = *((_DWORD *)Object + 48);
          goto LABEL_44;
        }
        return result;
      case TokenImpersonationLevel:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result >= 0 )
        {
          v17 = Object;
          if ( *((_DWORD *)Object + 48) != 2 )
          {
            ObfDereferenceObject(Object);
            return -1073741821;
          }
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            goto LABEL_66;
          *(_DWORD *)TokenInformation = v17[49];
          goto LABEL_44;
        }
        return result;
      case TokenStatistics:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 56;
          if ( (unsigned int)v5 < 0x38 )
            goto LABEL_65;
          v39 = KeGetCurrentThread();
          --v39->KernelApcDisable;
          v40 = (char *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          *(_QWORD *)TokenInformation = *((_QWORD *)v40 + 2);
          *((_QWORD *)TokenInformation + 1) = *((_QWORD *)v40 + 3);
          *((_QWORD *)TokenInformation + 2) = *((_QWORD *)v40 + 5);
          *((_DWORD *)TokenInformation + 6) = *((_DWORD *)v40 + 48);
          *((_DWORD *)TokenInformation + 7) = *((_DWORD *)v40 + 49);
          *((_DWORD *)TokenInformation + 8) = *((_DWORD *)v40 + 34);
          v41 = *((_DWORD *)v40 + 34) - 4 * *(unsigned __int8 *)(*((_QWORD *)v40 + 21) + 1LL) - 8;
          v144 = v41;
          v42 = *((_QWORD *)v40 + 23);
          if ( v42 )
          {
            v41 -= *(unsigned __int16 *)(v42 + 2);
            v144 = v41;
          }
          *((_DWORD *)TokenInformation + 9) = v41;
          *((_DWORD *)TokenInformation + 10) = *((_DWORD *)v40 + 31) - 1;
          *((_DWORD *)TokenInformation + 11) = SepTokenPrivilegeCount((__int64)v40);
          *((_QWORD *)TokenInformation + 6) = *((_QWORD *)v40 + 7);
          goto LABEL_60;
        }
        return result;
      case TokenRestrictedSids:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result >= 0 )
        {
          v69 = KeGetCurrentThread();
          --v69->KernelApcDisable;
          v30 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v70 = 16 * v30[32] + 8;
          if ( v30[32] )
          {
            v124 = *((_QWORD *)v30 + 20);
            v125 = v30[32];
            do
            {
              v70 += 4 * *(unsigned __int8 *)(*(_QWORD *)v124 + 1LL) + 8;
              v124 += 16LL;
              --v125;
            }
            while ( v125 );
          }
          *v14 = v70;
          if ( (unsigned int)v5 >= v70 )
          {
            *(_DWORD *)TokenInformation = v30[32];
            RtlCopySidAndAttributesArray(
              v30[32],
              *((PSID_AND_ATTRIBUTES *)v30 + 20),
              v70,
              (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
              (char *)TokenInformation + 16 * v30[32] + 8,
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
            goto LABEL_41;
          }
          goto LABEL_63;
        }
        return result;
      case TokenSessionId:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            goto LABEL_65;
          v33 = KeGetCurrentThread();
          --v33->KernelApcDisable;
          v34 = Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v35 = *((_DWORD *)v34 + 30);
          ExReleaseResourceLite(*((PERESOURCE *)v34 + 6));
          KeLeaveCriticalRegion();
          *(_DWORD *)TokenInformation = v35;
          *v14 = 4;
          v17 = v34;
          goto LABEL_44;
        }
        return result;
      case TokenGroupsAndPrivileges:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result >= 0 )
        {
          v78 = KeGetCurrentThread();
          --v78->KernelApcDisable;
          v47 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v143 = SepTokenPrivilegeCount((__int64)v47);
          v79 = 12 * v143;
          v80 = v47[31];
          v81 = v80;
          v82 = 16 * v80;
          if ( v80 )
          {
            v83 = *((_QWORD *)v47 + 19);
            v84 = v80;
            do
            {
              v82 += (4 * *(unsigned __int8 *)(*(_QWORD *)v83 + 1LL) + 15) & 0xFFFFFFF8;
              v83 += 16LL;
              --v84;
            }
            while ( v84 );
          }
          v85 = 16 * v47[32];
          v86 = v85;
          if ( v47[32] )
          {
            v122 = *((_QWORD *)v47 + 20);
            v123 = v47[32];
            do
            {
              v86 += (4 * *(unsigned __int8 *)(*(_QWORD *)v122 + 1LL) + 15) & 0xFFFFFFF8;
              v122 += 16LL;
              --v123;
            }
            while ( v123 );
          }
          v87 = v82 + v86 + v79 + 56;
          *v14 = v87;
          if ( (unsigned int)v5 >= v87 )
          {
            *((_QWORD *)TokenInformation + 6) = *((_QWORD *)v47 + 3);
            *((_DWORD *)TokenInformation + 1) = v82;
            *(_DWORD *)TokenInformation = v47[31];
            v88 = (_SID_AND_ATTRIBUTES *)((char *)TokenInformation + 56);
            *((_QWORD *)TokenInformation + 1) = (char *)TokenInformation + 56;
            *((_DWORD *)TokenInformation + 5) = v86;
            *((_DWORD *)TokenInformation + 4) = v47[32];
            if ( v47[32] )
            {
              v89 = (_SID_AND_ATTRIBUTES *)((char *)v88 + ((v82 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
              *((_QWORD *)TokenInformation + 3) = v89;
            }
            else
            {
              *((_QWORD *)TokenInformation + 3) = 0LL;
              v89 = Dest;
            }
            *((_DWORD *)TokenInformation + 9) = v79;
            *((_DWORD *)TokenInformation + 8) = v143;
            v90 = (__int64)v88 + v86 + v82;
            *((_QWORD *)TokenInformation + 5) = v90;
            RtlCopySidAndAttributesArray(
              v47[31],
              *((PSID_AND_ATTRIBUTES *)v47 + 19),
              v82 - v81 * 16,
              v88,
              &v88[v81],
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
            if ( v89 )
              RtlCopySidAndAttributesArray(
                v47[32],
                *((PSID_AND_ATTRIBUTES *)v47 + 20),
                v86 - v85,
                v89,
                &v89[v85 / 0x10],
                &RemainingSidArea,
                (PULONG)&RemainingSidArea);
            SepConvertTokenPrivilegesToLuidAndAttributes(v47, v90);
            goto LABEL_75;
          }
          goto LABEL_101;
        }
        return result;
      case TokenSandBoxInert:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            return -1073741789;
          v17 = Object;
          *(_DWORD *)TokenInformation = (*((_DWORD *)Object + 50) & 0x40) != 0;
          goto LABEL_44;
        }
        return result;
      case TokenAuditPolicy:
        if ( !SeSinglePrivilegeCheck(SeSecurityPrivilege, PreviousMode) )
          return -1073741727;
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 30;
          if ( (unsigned int)v5 < 0x1E )
            goto LABEL_65;
          v126 = KeGetCurrentThread();
          --v126->KernelApcDisable;
          v40 = (char *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          *(_OWORD *)TokenInformation = *(_OWORD *)(v40 + 88);
          *((_QWORD *)TokenInformation + 2) = *((_QWORD *)v40 + 13);
          *((_DWORD *)TokenInformation + 6) = *((_DWORD *)v40 + 28);
          *((_WORD *)TokenInformation + 14) = *((_WORD *)v40 + 58);
LABEL_60:
          v32 = (struct _ERESOURCE *)*((_QWORD *)v40 + 6);
          goto LABEL_42;
        }
        return result;
      case TokenOrigin:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 8;
          if ( (unsigned int)v5 < 8 )
            goto LABEL_65;
          v17 = Object;
          *(_QWORD *)TokenInformation = *((_QWORD *)Object + 28);
          goto LABEL_44;
        }
        return result;
      case TokenElevationType:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            goto LABEL_65;
          v17 = Object;
          v64 = *(_DWORD *)(*((_QWORD *)Object + 27) + 32LL);
          if ( (v64 & 4) != 0 )
          {
            *(_DWORD *)TokenInformation = 3;
          }
          else
          {
            LOBYTE(v9) = (v64 & 2) != 0;
            *(_DWORD *)TokenInformation = v9 + 1;
          }
          goto LABEL_44;
        }
        return result;
      case TokenLinkedToken:
        v156 = 0LL;
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
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
                     (__int64 *)&v161);
        if ( inserted < 0 )
        {
LABEL_189:
          v113 = v111;
          goto LABEL_190;
        }
        v164 = 48;
        v165 = 0LL;
        if ( PreviousMode )
          v167 = 0;
        else
          v167 = 512;
        v166 = 0LL;
        v168 = 0LL;
        v114 = v161;
        v115 = SepDuplicateToken(v161[6], (unsigned int)&v164, 0, v110 + 2, 1, 0, 0, (__int64)&v156);
        SepDeReferenceLogonSessionDirect(v114);
        if ( v115 < 0 )
        {
          ObfDereferenceObject(v111);
          return v115;
        }
        inserted = ObInsertObjectEx(v156, 0LL, 0, 0LL, (__int64)&Handle);
        if ( inserted < 0 )
          goto LABEL_189;
        *(_QWORD *)TokenInformation = Handle;
        v17 = v111;
        goto LABEL_44;
      case TokenElevation:
        *v14 = 4;
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result < 0 )
          return result;
        v65 = KeGetCurrentThread();
        --v65->KernelApcDisable;
        v66 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        IsElevatedRid = (*((_QWORD *)v66 + 8) & 0x1120160684LL) != 0;
        v68 = *((_DWORD *)v66 + 31);
        if ( v68 )
        {
          do
          {
            if ( IsElevatedRid )
              break;
            IsElevatedRid = RtlIsElevatedRid((PSID_AND_ATTRIBUTES)(*((_QWORD *)v66 + 19) + 16LL * (unsigned int)v9));
            LODWORD(v9) = v9 + 1;
          }
          while ( (unsigned int)v9 < v68 );
        }
        ExReleaseResourceLite(*((PERESOURCE *)v66 + 6));
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        *(_DWORD *)TokenInformation = IsElevatedRid;
        goto LABEL_43;
      case TokenHasRestrictions:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result < 0 )
          return result;
        *v14 = 1;
        if ( !(_DWORD)v5 )
          goto LABEL_65;
        v17 = Object;
        *(_BYTE *)TokenInformation = (*((_DWORD *)Object + 50) & 0x810) != 0;
        goto LABEL_44;
      case TokenAccessInformation:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result < 0 )
          return result;
        v101 = KeGetCurrentThread();
        --v101->KernelApcDisable;
        v30 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v102 = (unsigned __int8 *)SourceSid;
        v103 = v137[0];
        TokenAccessInformationBufferSize = SepGetTokenAccessInformationBufferSize(
                                             (__int64)v30,
                                             v137[0],
                                             (__int64)SourceSid,
                                             &v143,
                                             (int *)&v153,
                                             (int *)&v152,
                                             (int *)&v151,
                                             (int *)&v150,
                                             (unsigned int *)&v149,
                                             (int *)&v148,
                                             (int *)&v147,
                                             (unsigned int *)&v146,
                                             &v145);
        *v14 = TokenAccessInformationBufferSize;
        if ( (unsigned int)v5 < TokenAccessInformationBufferSize )
          goto LABEL_63;
        SepCopyTokenAccessInformation(
          (__int64)v30,
          (__int64)TokenInformation,
          v5,
          v143,
          v153,
          v152,
          v151,
          v150,
          v149,
          v148,
          v147,
          v146,
          v145,
          v103,
          v102);
        goto LABEL_41;
      case TokenVirtualizationAllowed:
      case TokenVirtualizationEnabled:
      case TokenUIAccess:
      case TokenIsRestricted:
      case TokenPrivateNameSpace:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result < 0 )
          return result;
        *v14 = 4;
        if ( (unsigned int)v5 < 4 )
          goto LABEL_65;
        v17 = Object;
        switch ( TokenInformationClass )
        {
          case TokenVirtualizationAllowed:
            LODWORD(v9) = (*((_DWORD *)Object + 50) >> 9) & 1;
            goto LABEL_158;
          case TokenVirtualizationEnabled:
            LODWORD(v9) = (*((_DWORD *)Object + 50) >> 10) & 1;
            goto LABEL_158;
          case TokenUIAccess:
            LODWORD(v9) = (*((_DWORD *)Object + 50) >> 12) & 1;
            goto LABEL_158;
        }
        if ( TokenInformationClass != TokenIsRestricted )
        {
          if ( (*((_DWORD *)Object + 50) & 0x10000) == 0 )
            goto LABEL_158;
          goto LABEL_240;
        }
        v127 = *((_DWORD *)Object + 50);
        if ( (v127 & 0x10) != 0 || (v127 & 8) != 0 )
LABEL_240:
          LODWORD(v9) = 1;
LABEL_158:
        *(_DWORD *)TokenInformation = v9;
        break;
      case TokenIntegrityLevel:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result < 0 )
          return result;
        v36 = KeGetCurrentThread();
        --v36->KernelApcDisable;
        v30 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        SepCopyTokenIntegrity((__int64)v30);
        Sid = (unsigned __int8 *)Src.Sid;
        v38 = 4 * *((unsigned __int8 *)Src.Sid + 1) + 24;
        *v14 = v38;
        if ( (unsigned int)v5 < v38 )
          goto LABEL_63;
        RtlCopySidAndAttributesArray(
          1u,
          &Src,
          4 * Sid[1] + 8,
          (PSID_AND_ATTRIBUTES)TokenInformation,
          (char *)TokenInformation + 16,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_41;
      case TokenMandatoryPolicy:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result < 0 )
          return result;
        *v14 = 4;
        if ( (unsigned int)v5 < 4 )
          goto LABEL_65;
        inserted = SeQueryMandatoryPolicyToken((__int64)Object, TokenInformation);
        SecurityAttributesToken = inserted;
LABEL_190:
        ObfDereferenceObject(v113);
        return inserted;
      case TokenLogonSid:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result < 0 )
          return result;
        v116 = KeGetCurrentThread();
        --v116->KernelApcDisable;
        v47 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v117 = 0;
        v118 = v47[31];
        if ( !v118 )
          goto LABEL_205;
        v119 = *((_QWORD *)v47 + 19);
        while ( (*(_DWORD *)(v119 + 16LL * v117 + 8) & 0xC0000000) != 0xC0000000 )
        {
          if ( ++v117 >= v118 )
            goto LABEL_205;
        }
        v9 = *(_QWORD *)(v119 + 16LL * v117);
LABEL_205:
        if ( !v9 )
        {
          ExReleaseResourceLite(*((PERESOURCE *)v47 + 6));
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          ObfDereferenceObject(Object);
          return -1073741275;
        }
        v120 = 16LL * v117;
        v121 = 4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)v47 + 19) + v120) + 1LL) + 32;
        *v14 = v121;
        if ( (unsigned int)v5 < v121 )
        {
LABEL_101:
          v45 = (struct _ERESOURCE *)*((_QWORD *)v47 + 6);
          goto LABEL_64;
        }
        *(_DWORD *)TokenInformation = 1;
        RtlCopySidAndAttributesArray(
          1u,
          (PSID_AND_ATTRIBUTES)(v120 + *((_QWORD *)v47 + 19)),
          4 * *(unsigned __int8 *)(*(_QWORD *)(v120 + *((_QWORD *)v47 + 19)) + 1LL) + 8,
          (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
          (char *)TokenInformation + 24,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
LABEL_75:
        v32 = (struct _ERESOURCE *)*((_QWORD *)v47 + 6);
LABEL_42:
        ExReleaseResourceLite(v32);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        goto LABEL_43;
      case TokenIsAppContainer:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result < 0 )
          return result;
        *v14 = 4;
        v17 = Object;
        if ( (unsigned int)v5 < 4 )
          goto LABEL_66;
        LOBYTE(v9) = (*((_DWORD *)Object + 50) & 0x4000) != 0;
        *(_DWORD *)TokenInformation = v9;
        goto LABEL_44;
      case TokenCapabilities:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result < 0 )
          return result;
        v105 = KeGetCurrentThread();
        --v105->KernelApcDisable;
        v30 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v106 = v30[200];
        v107 = 16 * v106 + 8;
        if ( v106 )
        {
          v108 = *((_QWORD *)v30 + 99);
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
          goto LABEL_63;
        *(_DWORD *)TokenInformation = v30[200];
        RtlCopySidAndAttributesArray(
          v30[200],
          *((PSID_AND_ATTRIBUTES *)v30 + 99),
          v107,
          (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
          (char *)TokenInformation + 16 * v30[200] + 8,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_41;
      case TokenAppContainerSid:
        v28 = 8;
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result < 0 )
          return result;
        v29 = KeGetCurrentThread();
        --v29->KernelApcDisable;
        v30 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v31 = (unsigned __int8 *)*((_QWORD *)v30 + 98);
        if ( v31 )
          v28 = 4 * v31[1] + 16;
        *v14 = v28;
        if ( (unsigned int)v5 < v28 )
          goto LABEL_63;
        if ( v31 )
          v31 = (unsigned __int8 *)TokenInformation + 8;
        *(_QWORD *)TokenInformation = v31;
        if ( v31 )
          RtlCopySid(v28 - 8, v31, *((PSID *)v30 + 98));
        goto LABEL_41;
      case TokenAppContainerNumber:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result < 0 )
          return result;
        *v14 = 4;
        if ( (unsigned int)v5 < 4 )
          goto LABEL_65;
        v128 = KeGetCurrentThread();
        --v128->KernelApcDisable;
        v129 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v130 = *((_QWORD *)v129 + 135);
        if ( v130 )
          LODWORD(v9) = *(_DWORD *)(v130 + 40);
        ExReleaseResourceLite(*((PERESOURCE *)v129 + 6));
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        *(_DWORD *)TokenInformation = v9;
        goto LABEL_43;
      case TokenUserClaimAttributes:
      case TokenDeviceClaimAttributes:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result < 0 )
          return result;
        v59 = KeGetCurrentThread();
        --v59->KernelApcDisable;
        v19 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v60 = *((_QWORD *)v19 + 137);
        if ( v60
          && (*(_QWORD *)(v60 + 576) || TokenInformationClass != TokenUserClaimAttributes)
          && ((v62 = *(int **)(v60 + 584)) != 0LL || TokenInformationClass != TokenDeviceClaimAttributes) )
        {
          if ( TokenInformationClass == TokenUserClaimAttributes )
            v62 = *(int **)(v60 + 576);
          AuthzBasepQueryClaimAttributesToken(v62, 0LL, 0LL, &v141);
          v61 = v141;
        }
        else
        {
          v61 = 16;
          v158 = 0;
          v159[1] = v159;
          v159[0] = v159;
          LODWORD(v159[2]) = 0;
          v159[4] = &v159[3];
          v159[3] = &v159[3];
          v62 = &v158;
        }
        *v14 = v61;
        if ( (unsigned int)v5 < v61 )
          goto LABEL_92;
        SecurityAttributesToken = AuthzBasepQueryClaimAttributesToken(v62, TokenInformation, (unsigned int)v5, &v141);
        goto LABEL_98;
      case TokenDeviceGroups:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result < 0 )
          return result;
        v74 = KeGetCurrentThread();
        --v74->KernelApcDisable;
        v47 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v75 = *((_QWORD *)v47 + 137);
        if ( v75 && (v76 = *(_DWORD *)v75) != 0 )
        {
          v77 = 16 * v76 + 8;
        }
        else
        {
          v76 = 0;
          v77 = 24;
        }
        if ( v76 )
        {
          v131 = *(_QWORD *)(v75 + 8);
          v132 = v76;
          do
          {
            v77 += 4 * *(unsigned __int8 *)(*(_QWORD *)v131 + 1LL) + 8;
            v131 += 16LL;
            --v132;
          }
          while ( v132 );
        }
        *v14 = v77;
        if ( (unsigned int)v5 < v77 )
          goto LABEL_101;
        *(_QWORD *)TokenInformation = 0LL;
        *((_QWORD *)TokenInformation + 1) = 0LL;
        *((_QWORD *)TokenInformation + 2) = 0LL;
        *(_DWORD *)TokenInformation = v76;
        if ( v76 )
          RtlCopySidAndAttributesArray(
            v76,
            *(PSID_AND_ATTRIBUTES *)(*((_QWORD *)v47 + 137) + 8LL),
            v77,
            (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
            (char *)TokenInformation + 16 * v76 + 8,
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
        goto LABEL_75;
      case TokenSecurityAttributes:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result < 0 )
          return result;
        v71 = KeGetCurrentThread();
        --v71->KernelApcDisable;
        v19 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v72 = (_DWORD *)*((_QWORD *)v19 + 97);
        if ( v72 )
        {
          LODWORD(SidArea) = 0;
          AuthzBasepQuerySecurityAttributesToken(v72, 0LL, 0LL, 0LL, (size_t)SidArea, &v141);
          v73 = v141;
        }
        else
        {
          v73 = 16;
        }
        *v14 = v73;
        if ( (unsigned int)v5 < v73 )
          goto LABEL_92;
        LODWORD(SidArea) = v5;
        SecurityAttributesToken = AuthzBasepQuerySecurityAttributesToken(
                                    *((_DWORD **)v19 + 97),
                                    0LL,
                                    0LL,
                                    TokenInformation,
                                    (size_t)SidArea,
                                    &v141);
LABEL_98:
        v63 = (struct _ERESOURCE *)*((_QWORD *)v19 + 6);
        goto LABEL_99;
      case TokenProcessTrustLevel:
        v51 = 8;
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result < 0 )
          return result;
        v52 = KeGetCurrentThread();
        --v52->KernelApcDisable;
        v30 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v53 = v137[0];
        v54 = SourceSid;
        if ( v137[0] )
          v55 = (unsigned __int8 *)SourceSid;
        else
          v55 = (unsigned __int8 *)*((_QWORD *)v30 + 138);
        if ( v55 )
          v51 = 4 * v55[1] + 16;
        *v14 = v51;
        if ( (unsigned int)v5 < v51 )
        {
LABEL_63:
          v45 = (struct _ERESOURCE *)*((_QWORD *)v30 + 6);
          goto LABEL_64;
        }
        v56 = (char *)TokenInformation + 8;
        if ( !v55 )
          v56 = 0LL;
        *(_QWORD *)TokenInformation = v56;
        if ( v56 )
        {
          if ( !v53 )
            v54 = (PSID)*((_QWORD *)v30 + 138);
          RtlCopySid(v51 - 8, v56, v54);
        }
LABEL_41:
        v32 = (struct _ERESOURCE *)*((_QWORD *)v30 + 6);
        goto LABEL_42;
      case TokenSingletonAttributes:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result < 0 )
          return result;
        v133 = KeGetCurrentThread();
        --v133->KernelApcDisable;
        v134 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(
                                    (__int64)v134,
                                    v135,
                                    0LL,
                                    0,
                                    1,
                                    (__int64)TokenInformation,
                                    v5,
                                    (__int64)v14);
        v63 = (struct _ERESOURCE *)*((_QWORD *)v134 + 6);
LABEL_99:
        ExReleaseResourceLite(v63);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        ObfDereferenceObject(Object);
        return SecurityAttributesToken;
      case TokenBnoIsolation:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
        if ( result < 0 )
          return result;
        v93 = KeGetCurrentThread();
        --v93->KernelApcDisable;
        v19 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v94 = 16;
        v95 = *((_QWORD *)v19 + 144);
        if ( v95 )
          v94 = *(unsigned __int16 *)(v95 + 42) + 16;
        *v14 = v94;
        if ( (unsigned int)v5 < v94 )
          goto LABEL_92;
        if ( *((_QWORD *)v19 + 144) )
        {
          *((_BYTE *)TokenInformation + 8) = 1;
          *(_QWORD *)TokenInformation = (char *)TokenInformation + 16;
          memmove(
            (char *)TokenInformation + 16,
            *(const void **)(*((_QWORD *)v19 + 144) + 48LL),
            *(unsigned __int16 *)(*((_QWORD *)v19 + 144) + 42LL));
        }
        else
        {
          *((_BYTE *)TokenInformation + 8) = 0;
          *(_QWORD *)TokenInformation = 0LL;
        }
        v32 = (struct _ERESOURCE *)*((_QWORD *)v19 + 6);
        goto LABEL_42;
      default:
        return -1073741821;
    }
    goto LABEL_44;
  }
  result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v137, &SourceSid);
  if ( result >= 0 )
  {
    v18 = KeGetCurrentThread();
    --v18->KernelApcDisable;
    v19 = Object;
    ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
    v20 = 4 * *(unsigned __int8 *)(**((_QWORD **)v19 + 19) + 1LL) + 24;
    *v14 = v20;
    if ( (unsigned int)v5 >= v20 )
    {
      v21 = (char *)TokenInformation + 16;
      v22 = (const void **)*((_QWORD *)v19 + 19);
      v155 = 0;
      v162 = (char *)TokenInformation + 16;
      v154 = v20;
      while ( !(_DWORD)v9 )
      {
        v23 = 4 * *((unsigned __int8 *)*v22 + 1) + 8;
        v24 = (4 * *((unsigned __int8 *)*v22 + 1) + 11) & 0xFFFFFFFC;
        if ( v23 > v20 )
          goto LABEL_30;
        v20 -= v24;
        v154 = v20;
        *(_QWORD *)TokenInformation = v21;
        *((_DWORD *)TokenInformation + 2) = *((_DWORD *)v22 + 2);
        v25 = 4 * *((unsigned __int8 *)*v22 + 1) + 8;
        if ( v25 <= v23 )
          memmove(v21, *v22, v25);
        v21 += v24;
        v162 = v21;
        LODWORD(v9) = 1;
        v155 = 1;
      }
      RemainingSidArea = (PSID)__PAIR64__(HIDWORD(v21), v20);
LABEL_30:
      ExReleaseResourceLite(*((PERESOURCE *)v19 + 6));
      v26 = KeGetCurrentThread();
      v27 = v26->KernelApcDisable++ == -1;
      if ( v27
        && ($B476B70DB57F76B110DA5B9238C3E934 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
        && !v26->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v26);
      }
LABEL_43:
      v17 = Object;
LABEL_44:
      ObfDereferenceObject(v17);
      return 0;
    }
LABEL_92:
    v45 = (struct _ERESOURCE *)*((_QWORD *)v19 + 6);
LABEL_64:
    ExReleaseResourceLite(v45);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_65:
    v17 = Object;
LABEL_66:
    ObfDereferenceObject(v17);
    return -1073741789;
  }
  return result;
}
