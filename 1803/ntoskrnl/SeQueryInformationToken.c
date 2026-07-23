/*
 * XREFs of SeQueryInformationToken @ 0x1405ADE00
 * Callers:
 *     RtlpQueryLowBoxId @ 0x140061174 (RtlpQueryLowBoxId.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140221EE4 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     RtlIsSandboxedToken @ 0x1404DD0B0 (RtlIsSandboxedToken.c)
 *     AlpcpCheckConnectionSecurity @ 0x1404DDFAC (AlpcpCheckConnectionSecurity.c)
 *     NtCompareTokens @ 0x1404DFFD0 (NtCompareTokens.c)
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 *     SeQuerySigningPolicyWorker @ 0x1404F7BDC (SeQuerySigningPolicyWorker.c)
 *     EtwpPsProvTraceProcess @ 0x1404F7F94 (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x1404F8968 (EtwpBuildProcessEvent.c)
 *     PiDqOpenUserObjectRegKey @ 0x14051A080 (PiDqOpenUserObjectRegKey.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1405349D0 (PspAllocateAndQueryNotificationChannel.c)
 *     SepCheckCapabilities @ 0x14053EE14 (SepCheckCapabilities.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140540474 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140540674 (ObpCaptureBoundaryDescriptor.c)
 *     CmpIsVirtEnabledForSubject @ 0x140565BA4 (CmpIsVirtEnabledForSubject.c)
 *     SeTokenIsElevated @ 0x14056A4C8 (SeTokenIsElevated.c)
 *     PsIsProcessAppContainer @ 0x14058A3A4 (PsIsProcessAppContainer.c)
 *     ObpLookupObjectName @ 0x1405A5B90 (ObpLookupObjectName.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405AD720 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpCreateRegistryProcessToken @ 0x14062C9C4 (CmpCreateRegistryProcessToken.c)
 *     CmpBuildAdminInformation @ 0x1406F46D0 (CmpBuildAdminInformation.c)
 *     EtwpAcquireTokenAccessInformation @ 0x1407A565C (EtwpAcquireTokenAccessInformation.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x14005C810 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x14005C820 (RtlSubAuthoritySid.c)
 *     SepConvertTokenPrivileges @ 0x14006A1B4 (SepConvertTokenPrivileges.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x14006A1D4 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SepCopyTokenIntegrity @ 0x14006A264 (SepCopyTokenIntegrity.c)
 *     SepTokenPrivilegeCount @ 0x1400A0920 (SepTokenPrivilegeCount.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlIsElevatedRid @ 0x1404C2450 (RtlIsElevatedRid.c)
 *     RtlCopySid @ 0x1404D4480 (RtlCopySid.c)
 *     SepCopyTokenAccessInformation @ 0x14054405C (SepCopyTokenAccessInformation.c)
 *     RtlCopySidAndAttributesArray @ 0x1405442F0 (RtlCopySidAndAttributesArray.c)
 *     SepGetTokenAccessInformationBufferSize @ 0x1405443B8 (SepGetTokenAccessInformationBufferSize.c)
 *     SeQuerySessionIdToken @ 0x140568610 (SeQuerySessionIdToken.c)
 *     AuthzBasepQueryClaimAttributesToken @ 0x140571948 (AuthzBasepQueryClaimAttributesToken.c)
 */

NTSTATUS __stdcall SeQueryInformationToken(
        PACCESS_TOKEN Token,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID *TokenInformation)
{
  unsigned int v6; // eax
  unsigned int v7; // eax
  NTSTATUS result; // eax
  struct _KTHREAD *v9; // rax
  int v10; // r14d
  __int64 v11; // rax
  _DWORD *v12; // r12
  struct _KTHREAD *v13; // rax
  unsigned int v14; // r15d
  bool v15; // bl
  unsigned int i; // r14d
  BOOLEAN IsElevatedRid; // al
  struct _KTHREAD *v18; // rax
  UCHAR v19; // cl
  ULONG v20; // r14d
  _DWORD *v21; // rax
  int v22; // edx
  struct _KTHREAD *CurrentThread; // rax
  ULONG v24; // r15d
  _SID_AND_ATTRIBUTES *PoolWithTag; // rax
  _SID_AND_ATTRIBUTES *v26; // r14
  char *v27; // rax
  char *v28; // rbx
  struct _KTHREAD *v29; // rax
  __int64 v30; // rax
  int v31; // edx
  struct _KTHREAD *v32; // rax
  char *v33; // r14
  unsigned int v34; // r15d
  char *v35; // rax
  struct _KTHREAD *v36; // rax
  unsigned int v37; // ecx
  ULONG v38; // r14d
  ULONG v39; // eax
  __int64 *v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rax
  char *v43; // rax
  ULONG v44; // ecx
  _SID_AND_ATTRIBUTES *v45; // rdx
  struct _KTHREAD *v46; // rax
  unsigned int v47; // r14d
  char *v48; // rax
  _DWORD *v49; // rcx
  struct _KTHREAD *v50; // rax
  unsigned int v51; // ecx
  ULONG v52; // eax
  __int64 v53; // r8
  __int64 *v54; // rdx
  __int64 v55; // rax
  char *v56; // rax
  struct _KTHREAD *v57; // rax
  unsigned int v58; // eax
  unsigned int v59; // r15d
  char *v60; // rax
  struct _KTHREAD *v61; // rax
  int v62; // eax
  unsigned int v63; // ecx
  int v64; // r9d
  unsigned int v65; // r12d
  __int64 *v66; // rdx
  __int64 v67; // r8
  __int64 v68; // rax
  unsigned int v69; // eax
  unsigned int v70; // r13d
  unsigned int v71; // r15d
  __int64 *v72; // rdx
  __int64 v73; // r8
  __int64 v74; // rax
  char *v75; // rax
  char *v76; // rbx
  char *v77; // rcx
  char *v78; // r14
  char *v79; // rax
  __int64 v80; // rcx
  ULONG v81; // r12d
  struct _KTHREAD *v82; // rax
  unsigned int TokenAccessInformationBufferSize; // r15d
  char *v84; // rax
  struct _KTHREAD *v85; // rax
  unsigned int v86; // r14d
  char *v87; // rax
  struct _KTHREAD *v88; // rax
  __int64 v89; // rax
  unsigned int v90; // r15d
  char *v91; // rax
  void *v92; // rcx
  _OWORD *v93; // rax
  _DWORD *v94; // rcx
  struct _KTHREAD *v95; // rax
  __int64 v96; // r12
  __int64 *v97; // rax
  __int64 *v98; // r12
  unsigned int v99; // r15d
  _QWORD *v100; // rax
  void *v101; // rbx
  NTSTATUS v102; // r14d
  struct _KTHREAD *v103; // rax
  unsigned int *v104; // rax
  unsigned int v105; // r14d
  ULONG v106; // r15d
  ULONG v107; // ecx
  __int64 *v108; // rdx
  __int64 v109; // r8
  __int64 v110; // rax
  struct _KTHREAD *v111; // rax
  unsigned int v112; // r15d
  char *v113; // rax
  char *v114; // r14
  struct _KTHREAD *v115; // rax
  __int64 v116; // rax
  unsigned int v117; // r15d
  char *SidArea; // [rsp+20h] [rbp-A9h]
  PSID RemainingSidArea; // [rsp+80h] [rbp-49h] BYREF
  unsigned int v120; // [rsp+88h] [rbp-41h] BYREF
  unsigned int v121; // [rsp+8Ch] [rbp-3Dh] BYREF
  unsigned int v122; // [rsp+90h] [rbp-39h] BYREF
  unsigned int v123; // [rsp+94h] [rbp-35h] BYREF
  unsigned int v124; // [rsp+98h] [rbp-31h] BYREF
  unsigned int v125; // [rsp+9Ch] [rbp-2Dh] BYREF
  unsigned int v126; // [rsp+A0h] [rbp-29h] BYREF
  int v127; // [rsp+A4h] [rbp-25h] BYREF
  __int64 v128; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v129; // [rsp+B0h] [rbp-19h] BYREF
  __int64 *v130; // [rsp+B8h] [rbp-11h]
  __int64 v131; // [rsp+C0h] [rbp-9h]
  __int64 v132; // [rsp+C8h] [rbp-1h] BYREF
  __int64 *v133; // [rsp+D0h] [rbp+7h]
  PSID Sid; // [rsp+D8h] [rbp+Fh]
  int v135; // [rsp+130h] [rbp+67h] BYREF
  SIZE_T NumberOfBytes; // [rsp+138h] [rbp+6Fh] BYREF
  int v137; // [rsp+148h] [rbp+7Fh] BYREF

  v128 = 0LL;
  v129 = 0LL;
  v130 = 0LL;
  v131 = 0LL;
  v132 = 0LL;
  v133 = 0LL;
  if ( TokenInformationClass == TokenVirtualizationEnabled )
  {
LABEL_2:
    v6 = *((_DWORD *)Token + 50);
    if ( TokenInformationClass == TokenVirtualizationAllowed )
    {
      *(_DWORD *)TokenInformation = (*((_DWORD *)Token + 50) & 0x200) != 0;
    }
    else
    {
      switch ( TokenInformationClass )
      {
        case TokenVirtualizationEnabled:
          v7 = v6 >> 10;
          break;
        case TokenUIAccess:
          v7 = v6 >> 12;
          break;
        case TokenIsAppContainer:
          v7 = v6 >> 14;
          break;
        case TokenHasRestrictions:
          *(_BYTE *)TokenInformation = (*((_DWORD *)Token + 50) & 0x810) != 0;
          return 0;
        default:
          v7 = HIWORD(v6);
          break;
      }
      *(_DWORD *)TokenInformation = v7 & 1;
    }
  }
  else
  {
    switch ( TokenInformationClass )
    {
      case TokenUser:
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v24 = 4 * *(unsigned __int8 *)(**((_QWORD **)Token + 19) + 1LL) + 24;
        PoolWithTag = (_SID_AND_ATTRIBUTES *)ExAllocatePoolWithTag(PagedPool, v24, 0x20206553u);
        v26 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_61;
        RtlCopySidAndAttributesArray(
          1u,
          *((PSID_AND_ATTRIBUTES *)Token + 19),
          v24,
          PoolWithTag,
          &PoolWithTag[1],
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        result = 0;
        *TokenInformation = v26;
        return result;
      case TokenGroups:
        v50 = KeGetCurrentThread();
        --v50->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v51 = *((_DWORD *)Token + 31);
        v38 = 16 * v51 - 8;
        v52 = v38;
        if ( v51 > 1 )
        {
          v53 = v51 - 1;
          v54 = (__int64 *)(*((_QWORD *)Token + 19) + 16LL);
          do
          {
            v55 = *v54;
            v54 += 2;
            v38 += 4 * *(unsigned __int8 *)(v55 + 1) + 8;
            v52 = v38;
            --v53;
          }
          while ( v53 );
        }
        v56 = (char *)ExAllocatePoolWithTag(PagedPool, v52, 0x20206553u);
        v28 = v56;
        if ( !v56 )
          goto LABEL_61;
        *(_DWORD *)v56 = *((_DWORD *)Token + 31) - 1;
        v45 = (_SID_AND_ATTRIBUTES *)(*((_QWORD *)Token + 19) + 16LL);
        v44 = *((_DWORD *)Token + 31) - 1;
        SidArea = &v56[16 * *((_DWORD *)Token + 31) - 32 + 24];
        goto LABEL_49;
      case TokenPrivileges:
        v57 = KeGetCurrentThread();
        --v57->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v58 = SepTokenPrivilegeCount((__int64)Token);
        if ( v58 <= 1 )
          v59 = 16;
        else
          v59 = 12 * v58 + 4;
        v60 = (char *)ExAllocatePoolWithTag(PagedPool, v59, 0x20206553u);
        v28 = v60;
        if ( !v60 )
          goto LABEL_61;
        SepConvertTokenPrivileges((__int64)Token, v60);
        goto LABEL_33;
      case TokenOwner:
        v85 = KeGetCurrentThread();
        --v85->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v86 = 4
            * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)Token + 19) + 16LL * *((unsigned int *)Token + 36)) + 1LL)
            + 16;
        v87 = (char *)ExAllocatePoolWithTag(PagedPool, v86, 0x20206553u);
        v28 = v87;
        if ( !v87 )
          goto LABEL_61;
        *(_QWORD *)v87 = v87 + 8;
        RtlCopySid(v86 - 8, v87 + 8, *(PSID *)(*((_QWORD *)Token + 19) + 16LL * *((unsigned int *)Token + 36)));
        goto LABEL_33;
      case TokenPrimaryGroup:
        v46 = KeGetCurrentThread();
        --v46->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v47 = 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL) + 16;
        v48 = (char *)ExAllocatePoolWithTag(PagedPool, v47, 0x20206553u);
        v28 = v48;
        if ( !v48 )
          goto LABEL_61;
        *(_QWORD *)v48 = v48 + 8;
        RtlCopySid(v47 - 8, v48 + 8, *((PSID *)Token + 21));
        goto LABEL_33;
      case TokenDefaultDacl:
        v88 = KeGetCurrentThread();
        --v88->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v89 = *((_QWORD *)Token + 23);
        v90 = 8;
        if ( v89 )
          v90 = *(unsigned __int16 *)(v89 + 2) + 8;
        v91 = (char *)ExAllocatePoolWithTag(PagedPool, v90, 0x20206553u);
        v28 = v91;
        if ( !v91 )
          goto LABEL_61;
        v92 = v91 + 8;
        if ( !*((_QWORD *)Token + 23) )
          goto LABEL_132;
        *(_QWORD *)v91 = v92;
        memmove(v92, *((const void **)Token + 23), *(unsigned __int16 *)(*((_QWORD *)Token + 23) + 2LL));
        goto LABEL_33;
      case TokenSource:
        v93 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x20206553u);
        if ( !v93 )
          return -1073741670;
        *v93 = *(_OWORD *)Token;
        *TokenInformation = v93;
        return 0;
      case TokenType:
        v94 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        if ( !v94 )
          return -1073741670;
        *v94 = *((_DWORD *)Token + 48);
        *TokenInformation = v94;
        return 0;
      case TokenImpersonationLevel:
        if ( *((_DWORD *)Token + 48) != 2 )
          return -1073741821;
        v49 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        if ( !v49 )
          return -1073741670;
        *v49 = *((_DWORD *)Token + 49);
        *TokenInformation = v49;
        return 0;
      case TokenStatistics:
        v27 = (char *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x20206553u);
        v28 = v27;
        if ( !v27 )
          return -1073741670;
        *(_QWORD *)v27 = *((_QWORD *)Token + 2);
        *((_QWORD *)v27 + 1) = *((_QWORD *)Token + 3);
        *((_DWORD *)v27 + 6) = *((_DWORD *)Token + 48);
        *((_DWORD *)v27 + 7) = *((_DWORD *)Token + 49);
        *((_QWORD *)v27 + 2) = *((_QWORD *)Token + 5);
        v29 = KeGetCurrentThread();
        --v29->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        *((_DWORD *)v28 + 8) = *((_DWORD *)Token + 34);
        v30 = *((_QWORD *)Token + 23);
        v31 = *((_DWORD *)Token + 34) - 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL) - 8;
        if ( v30 )
          v31 -= *(unsigned __int16 *)(v30 + 2);
        *((_DWORD *)v28 + 9) = v31;
        *((_DWORD *)v28 + 9) = *((_DWORD *)Token + 35);
        *((_DWORD *)v28 + 10) = *((_DWORD *)Token + 31) - 1;
        *((_DWORD *)v28 + 11) = SepTokenPrivilegeCount((__int64)Token);
        *((_QWORD *)v28 + 6) = *((_QWORD *)Token + 7);
        goto LABEL_33;
      case TokenSessionId:
        SeQuerySessionIdToken(Token, (PULONG)TokenInformation);
        return 0;
      case TokenGroupsAndPrivileges:
        v61 = KeGetCurrentThread();
        --v61->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v62 = SepTokenPrivilegeCount((__int64)Token);
        v63 = *((_DWORD *)Token + 31);
        v135 = v62;
        v64 = 12 * v62;
        v65 = 16 * v63;
        LODWORD(NumberOfBytes) = 12 * v62;
        v137 = 16 * v63;
        if ( v63 )
        {
          v66 = (__int64 *)*((_QWORD *)Token + 19);
          v67 = v63;
          do
          {
            v68 = *v66;
            v66 += 2;
            v65 += (4 * *(unsigned __int8 *)(v68 + 1) + 15) & 0xFFFFFFF8;
            --v67;
          }
          while ( v67 );
        }
        v69 = *((_DWORD *)Token + 32);
        v70 = 16 * v69;
        v71 = 16 * v69;
        if ( v69 )
        {
          v72 = (__int64 *)*((_QWORD *)Token + 20);
          v73 = v69;
          do
          {
            v74 = *v72;
            v72 += 2;
            v71 += (4 * *(unsigned __int8 *)(v74 + 1) + 15) & 0xFFFFFFF8;
            --v73;
          }
          while ( v73 );
        }
        v75 = (char *)ExAllocatePoolWithTag(PagedPool, v71 + v65 + v64 + 56, 0x20206553u);
        v76 = v75;
        if ( v75 )
        {
          v77 = v75 + 56;
          *((_QWORD *)v75 + 6) = *((_QWORD *)Token + 3);
          *((_DWORD *)v75 + 1) = v65;
          *(_DWORD *)v75 = *((_DWORD *)Token + 31);
          *((_QWORD *)v75 + 1) = v75 + 56;
          *((_DWORD *)v75 + 5) = v71;
          *((_DWORD *)v75 + 4) = *((_DWORD *)Token + 32);
          if ( *((_DWORD *)Token + 32) )
            v78 = &v77[(v65 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
          else
            v78 = 0LL;
          *((_QWORD *)v75 + 3) = v78;
          *((_DWORD *)v75 + 9) = NumberOfBytes;
          *((_DWORD *)v75 + 8) = v135;
          v79 = &v77[v65 + (unsigned __int64)v71];
          v80 = (unsigned int)v137;
          v81 = v65 - v137;
          *((_QWORD *)v76 + 5) = v79;
          RtlCopySidAndAttributesArray(
            *((_DWORD *)Token + 31),
            *((PSID_AND_ATTRIBUTES *)Token + 19),
            v81,
            (PSID_AND_ATTRIBUTES)(v76 + 56),
            &v76[v80 + 56],
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
          if ( *((_DWORD *)v76 + 4) )
            RtlCopySidAndAttributesArray(
              *((_DWORD *)Token + 32),
              *((PSID_AND_ATTRIBUTES *)Token + 20),
              v71 - v70,
              *((PSID_AND_ATTRIBUTES *)v76 + 3),
              (PSID)(*((_QWORD *)v76 + 3) + v70),
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
          SepConvertTokenPrivilegesToLuidAndAttributes(Token, *((_QWORD *)v76 + 5));
          ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
          KeLeaveCriticalRegion();
          result = 0;
          *TokenInformation = v76;
        }
        else
        {
          ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
          KeLeaveCriticalRegion();
          return -1073741670;
        }
        return result;
      case TokenElevationType:
        v21 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        if ( !v21 )
          return -1073741670;
        v22 = *(_DWORD *)(*((_QWORD *)Token + 27) + 32LL);
        if ( (v22 & 4) != 0 )
          *v21 = 3;
        else
          *v21 = ((v22 & 2) != 0) + 1;
        *TokenInformation = v21;
        return 0;
      case TokenElevation:
        v12 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        if ( !v12 )
          return -1073741670;
        v13 = KeGetCurrentThread();
        --v13->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v14 = *((_DWORD *)Token + 31);
        v15 = (*((_QWORD *)Token + 8) & 0x1120160684LL) != 0;
        for ( i = 0; i < v14; v15 = IsElevatedRid )
        {
          if ( v15 )
            break;
          IsElevatedRid = RtlIsElevatedRid((PSID_AND_ATTRIBUTES)(*((_QWORD *)Token + 19) + 16LL * i++));
        }
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        *v12 = v15;
        *TokenInformation = v12;
        return 0;
      case TokenHasRestrictions:
      case TokenVirtualizationAllowed:
      case TokenUIAccess:
      case TokenIsAppContainer:
      case TokenPrivateNameSpace:
        goto LABEL_2;
      case TokenAccessInformation:
        v82 = KeGetCurrentThread();
        --v82->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        TokenAccessInformationBufferSize = SepGetTokenAccessInformationBufferSize(
                                             (__int64)Token,
                                             0,
                                             0LL,
                                             &v127,
                                             (int *)&v126,
                                             (int *)&v125,
                                             (int *)&v124,
                                             (int *)&v123,
                                             &v122,
                                             (int *)&v121,
                                             (int *)&v120,
                                             (unsigned int *)&v137,
                                             &v135);
        v84 = (char *)ExAllocatePoolWithTag(PagedPool, TokenAccessInformationBufferSize, 0x20206553u);
        v28 = v84;
        if ( !v84 )
          goto LABEL_61;
        SepCopyTokenAccessInformation(
          (__int64)Token,
          (__int64)v84,
          TokenAccessInformationBufferSize,
          v127,
          v126,
          v125,
          v124,
          v123,
          v122,
          v121,
          v120,
          v137,
          v135,
          0,
          0LL);
        goto LABEL_33;
      case TokenIntegrityLevel:
        v18 = KeGetCurrentThread();
        --v18->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        SepCopyTokenIntegrity((__int64)Token);
        v19 = *RtlSubAuthorityCountSid(Sid);
        if ( v19 )
          v20 = *RtlSubAuthoritySid(Sid, (unsigned int)v19 - 1);
        else
          v20 = 0;
        *(_DWORD *)TokenInformation = v20;
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        return 0;
      case TokenCapabilities:
        v36 = KeGetCurrentThread();
        --v36->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v37 = *((_DWORD *)Token + 200);
        v38 = 16 * v37 + 24;
        v39 = v38;
        if ( v37 )
        {
          v40 = (__int64 *)*((_QWORD *)Token + 99);
          v41 = v37;
          do
          {
            v42 = *v40;
            v40 += 2;
            v38 += 4 * *(unsigned __int8 *)(v42 + 1) + 8;
            v39 = v38;
            --v41;
          }
          while ( v41 );
        }
        v43 = (char *)ExAllocatePoolWithTag(PagedPool, v39, 0x20206553u);
        v28 = v43;
        if ( !v43 )
          goto LABEL_61;
        *(_DWORD *)v43 = *((_DWORD *)Token + 200);
        v44 = *((_DWORD *)Token + 200);
        SidArea = &v43[16 * v44 + 24];
        v45 = (_SID_AND_ATTRIBUTES *)*((_QWORD *)Token + 99);
LABEL_49:
        RtlCopySidAndAttributesArray(
          v44,
          v45,
          v38,
          (PSID_AND_ATTRIBUTES)(v28 + 8),
          SidArea,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_33;
      case TokenAppContainerSid:
        v32 = KeGetCurrentThread();
        --v32->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v33 = (char *)*((_QWORD *)Token + 98);
        if ( v33 )
          v34 = 4 * (unsigned __int8)v33[1] + 16;
        else
          v34 = 8;
        v35 = (char *)ExAllocatePoolWithTag(PagedPool, v34, 0x20206553u);
        v28 = v35;
        if ( !v35 )
          goto LABEL_61;
        if ( v33 )
        {
          v33 = v35 + 8;
          RtlCopySid(v34 - 8, v35 + 8, *((PSID *)Token + 98));
        }
        goto LABEL_39;
      case TokenAppContainerNumber:
        v9 = KeGetCurrentThread();
        v10 = 0;
        --v9->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v11 = *((_QWORD *)Token + 135);
        if ( v11 )
          v10 = *(_DWORD *)(v11 + 40);
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        *(_DWORD *)TokenInformation = v10;
        return 0;
      case TokenUserClaimAttributes:
      case TokenDeviceClaimAttributes:
        *TokenInformation = 0LL;
        v95 = KeGetCurrentThread();
        --v95->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v96 = *((_QWORD *)Token + 137);
        if ( v96
          && ((v97 = *(__int64 **)(v96 + 576)) != 0LL || TokenInformationClass != TokenUserClaimAttributes)
          && ((v98 = *(__int64 **)(v96 + 584)) != 0LL || TokenInformationClass != TokenDeviceClaimAttributes) )
        {
          if ( TokenInformationClass == TokenUserClaimAttributes )
            v98 = v97;
          AuthzBasepQueryClaimAttributesToken(v98, 0LL, 0, &NumberOfBytes);
          v99 = NumberOfBytes;
        }
        else
        {
          LODWORD(v128) = 0;
          v130 = &v129;
          v98 = &v128;
          LODWORD(v131) = 0;
          v129 = (__int64)&v129;
          v99 = 16;
          v133 = &v132;
          v132 = (__int64)&v132;
        }
        v100 = ExAllocatePoolWithTag(PagedPool, v99, 0x20206553u);
        v101 = v100;
        if ( !v100 )
          goto LABEL_61;
        v102 = AuthzBasepQueryClaimAttributesToken(v98, v100, v99, &NumberOfBytes);
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        if ( v102 >= 0 )
          *TokenInformation = v101;
        else
          ExFreePoolWithTag(v101, 0);
        return v102;
      case TokenDeviceGroups:
        v103 = KeGetCurrentThread();
        --v103->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v104 = (unsigned int *)*((_QWORD *)Token + 137);
        if ( v104 && (v105 = *v104) != 0 )
        {
          v106 = 16 * v105 + 8;
        }
        else
        {
          v105 = 0;
          v106 = 24;
        }
        v107 = v106;
        if ( v105 )
        {
          v108 = (__int64 *)*((_QWORD *)v104 + 1);
          v109 = v105;
          do
          {
            v110 = *v108;
            v108 += 2;
            v106 += 4 * *(unsigned __int8 *)(v110 + 1) + 8;
            v107 = v106;
            --v109;
          }
          while ( v109 );
        }
        v28 = (char *)ExAllocatePoolWithTag(PagedPool, v107, 0x20206553u);
        if ( !v28 )
          goto LABEL_61;
        *(_QWORD *)v28 = 0LL;
        *((_QWORD *)v28 + 1) = 0LL;
        *((_QWORD *)v28 + 2) = 0LL;
        *(_DWORD *)v28 = v105;
        if ( v105 )
          RtlCopySidAndAttributesArray(
            **((_DWORD **)Token + 137),
            *(PSID_AND_ATTRIBUTES *)(*((_QWORD *)Token + 137) + 8LL),
            v106,
            (PSID_AND_ATTRIBUTES)(v28 + 8),
            &v28[16 * v105 + 8],
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
        goto LABEL_33;
      case TokenProcessTrustLevel:
        v111 = KeGetCurrentThread();
        --v111->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v33 = (char *)*((_QWORD *)Token + 138);
        if ( v33 )
          v112 = 4 * (unsigned __int8)v33[1] + 16;
        else
          v112 = 8;
        v113 = (char *)ExAllocatePoolWithTag(PagedPool, v112, 0x20206553u);
        v28 = v113;
        if ( !v113 )
          goto LABEL_61;
        if ( v33 )
        {
          v114 = v113 + 8;
          RtlCopySid(v112 - 8, v113 + 8, *((PSID *)Token + 138));
          *(_QWORD *)v28 = v114;
        }
        else
        {
LABEL_39:
          *(_QWORD *)v28 = v33;
        }
        goto LABEL_33;
      case TokenBnoIsolation:
        v115 = KeGetCurrentThread();
        --v115->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v116 = *((_QWORD *)Token + 144);
        v117 = 16;
        if ( v116 )
          v117 = *(unsigned __int16 *)(v116 + 42) + 16;
        v91 = (char *)ExAllocatePoolWithTag(PagedPool, v117, 0x20206553u);
        v28 = v91;
        if ( !v91 )
        {
LABEL_61:
          ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
          KeLeaveCriticalRegion();
          return -1073741670;
        }
        if ( *((_QWORD *)Token + 144) )
        {
          v91[8] = 1;
          *(_QWORD *)v91 = v91 + 16;
          memmove(
            v91 + 16,
            *(const void **)(*((_QWORD *)Token + 144) + 48LL),
            *(unsigned __int16 *)(*((_QWORD *)Token + 144) + 42LL));
        }
        else
        {
          v91[8] = 0;
LABEL_132:
          *(_QWORD *)v91 = 0LL;
        }
LABEL_33:
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        *TokenInformation = v28;
        break;
      default:
        return -1073741821;
    }
  }
  return 0;
}
