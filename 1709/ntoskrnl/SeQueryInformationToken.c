/*
 * XREFs of SeQueryInformationToken @ 0x1404A6E30
 * Callers:
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14000DEA8 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     RtlpQueryLowBoxId @ 0x1400A63EC (RtlpQueryLowBoxId.c)
 *     IopIsProcessAppContainer @ 0x14012BDD8 (IopIsProcessAppContainer.c)
 *     SepCheckCapabilities @ 0x140447668 (SepCheckCapabilities.c)
 *     PiDqOpenUserObjectRegKey @ 0x140447AF4 (PiDqOpenUserObjectRegKey.c)
 *     AlpcpCheckConnectionSecurity @ 0x140467994 (AlpcpCheckConnectionSecurity.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1404893EC (ObpCaptureBoundaryDescriptor.c)
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404A8000 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObpLookupObjectName @ 0x1404B2490 (ObpLookupObjectName.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     RtlIsSandboxedToken @ 0x1404C69F0 (RtlIsSandboxedToken.c)
 *     EtwpBuildProcessEvent @ 0x1404DBDC0 (EtwpBuildProcessEvent.c)
 *     EtwpPsProvTraceProcess @ 0x1404DCB5C (EtwpPsProvTraceProcess.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14050E064 (PspAllocateAndQueryNotificationChannel.c)
 *     NtCompareTokens @ 0x140512FAC (NtCompareTokens.c)
 *     SeQuerySigningPolicyWorker @ 0x14053A578 (SeQuerySigningPolicyWorker.c)
 *     ObpVerifyCreatorAccessCheck @ 0x14054903C (ObpVerifyCreatorAccessCheck.c)
 *     CmpIsVirtEnabled @ 0x140569DE8 (CmpIsVirtEnabled.c)
 *     SeTokenIsElevated @ 0x14057D434 (SeTokenIsElevated.c)
 *     EtwpAcquireTokenAccessInformation @ 0x1405E34FC (EtwpAcquireTokenAccessInformation.c)
 *     CmpBuildAdminInformation @ 0x140690E6C (CmpBuildAdminInformation.c)
 * Callees:
 *     SepConvertTokenPrivileges @ 0x140014280 (SepConvertTokenPrivileges.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x1400142A0 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SepTokenPrivilegeCount @ 0x140014400 (SepTokenPrivilegeCount.c)
 *     RtlSubAuthorityCountSid @ 0x140019310 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x140019320 (RtlSubAuthoritySid.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     SepCopyTokenIntegrity @ 0x1400E4A04 (SepCopyTokenIntegrity.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SepCopyTokenAccessInformation @ 0x14045C51C (SepCopyTokenAccessInformation.c)
 *     RtlCopySidAndAttributesArray @ 0x14045C7B0 (RtlCopySidAndAttributesArray.c)
 *     SepGetTokenAccessInformationBufferSize @ 0x14045C878 (SepGetTokenAccessInformationBufferSize.c)
 *     RtlIsElevatedRid @ 0x140486B30 (RtlIsElevatedRid.c)
 *     RtlCopySid @ 0x14049CB70 (RtlCopySid.c)
 *     SeQuerySessionIdToken @ 0x140577340 (SeQuerySessionIdToken.c)
 *     AuthzBasepQueryClaimAttributesToken @ 0x14057D2F0 (AuthzBasepQueryClaimAttributesToken.c)
 */

NTSTATUS __stdcall SeQueryInformationToken(
        PACCESS_TOKEN Token,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID *TokenInformation)
{
  ULONG v3; // edi
  int v7; // ebx
  NTSTATUS result; // eax
  struct _KTHREAD *v9; // rax
  __int64 v10; // rax
  _DWORD *v11; // r12
  struct _KTHREAD *v12; // rax
  ULONG v13; // r15d
  bool v14; // bl
  BOOLEAN IsElevatedRid; // al
  int v16; // eax
  struct _KTHREAD *v17; // rax
  UCHAR v18; // cl
  char *v19; // rax
  char *v20; // rbx
  struct _KTHREAD *v21; // rax
  __int64 v22; // rax
  int v23; // edx
  struct _KTHREAD *CurrentThread; // rax
  ULONG v25; // r15d
  _SID_AND_ATTRIBUTES *PoolWithTag; // rax
  _SID_AND_ATTRIBUTES *v27; // rdi
  _DWORD *v28; // rax
  int v29; // edx
  struct _KTHREAD *v30; // rax
  char *v31; // rdi
  unsigned int v32; // r15d
  char *v33; // rax
  struct _KTHREAD *v34; // rax
  unsigned int v35; // eax
  ULONG v36; // edi
  __int64 *v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rax
  char *v40; // rax
  _DWORD *v41; // rcx
  struct _KTHREAD *v42; // rax
  unsigned int v43; // edi
  char *v44; // rax
  struct _KTHREAD *v45; // rax
  unsigned int TokenAccessInformationBufferSize; // r15d
  char *v47; // rax
  struct _KTHREAD *v48; // rax
  unsigned int v49; // edi
  char *v50; // rax
  struct _KTHREAD *v51; // rax
  unsigned int v52; // eax
  ULONG v53; // edi
  __int64 v54; // r8
  __int64 *v55; // rdx
  __int64 v56; // rax
  char *v57; // rax
  struct _KTHREAD *v58; // rax
  unsigned int v59; // eax
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
  PVOID v76; // rbx
  _SID_AND_ATTRIBUTES *v77; // r9
  struct _KTHREAD *v78; // rax
  __int64 v79; // rax
  unsigned int v80; // eax
  char *v81; // rax
  void *v82; // rcx
  _OWORD *v83; // rax
  _DWORD *v84; // rcx
  struct _KTHREAD *v85; // rax
  __int64 v86; // r12
  int *v87; // rax
  int *v88; // r12
  unsigned int v89; // r15d
  PVOID v90; // rax
  void *v91; // rbx
  NTSTATUS v92; // edi
  struct _KTHREAD *v93; // rax
  unsigned int *v94; // rdx
  unsigned int v95; // r15d
  ULONG v96; // edi
  __int64 *v97; // rdx
  __int64 v98; // r8
  __int64 v99; // rax
  struct _KTHREAD *v100; // rax
  unsigned int v101; // r15d
  char *v102; // rax
  char *v103; // rdi
  struct _KTHREAD *v104; // rax
  __int64 v105; // rax
  unsigned int v106; // r15d
  PSID RemainingSidArea; // [rsp+80h] [rbp-49h] BYREF
  unsigned int v108; // [rsp+88h] [rbp-41h] BYREF
  unsigned int v109; // [rsp+8Ch] [rbp-3Dh] BYREF
  int v110; // [rsp+90h] [rbp-39h] BYREF
  unsigned int v111; // [rsp+94h] [rbp-35h] BYREF
  unsigned int v112; // [rsp+98h] [rbp-31h] BYREF
  unsigned int v113; // [rsp+9Ch] [rbp-2Dh] BYREF
  unsigned int v114; // [rsp+A0h] [rbp-29h] BYREF
  int v115; // [rsp+A4h] [rbp-25h] BYREF
  int v116; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v117; // [rsp+B0h] [rbp-19h] BYREF
  __int64 *v118; // [rsp+B8h] [rbp-11h]
  __int64 v119; // [rsp+C0h] [rbp-9h]
  __int64 v120; // [rsp+C8h] [rbp-1h] BYREF
  __int64 *v121; // [rsp+D0h] [rbp+7h]
  PSID Sid; // [rsp+D8h] [rbp+Fh]
  int v123; // [rsp+130h] [rbp+67h] BYREF
  SIZE_T NumberOfBytes; // [rsp+138h] [rbp+6Fh] BYREF
  int v125; // [rsp+148h] [rbp+7Fh] BYREF

  v3 = 0;
  v116 = 0;
  v117 = 0LL;
  v118 = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  v121 = 0LL;
  if ( TokenInformationClass == TokenVirtualizationEnabled )
  {
LABEL_2:
    if ( TokenInformationClass == TokenVirtualizationAllowed )
    {
      if ( (*((_DWORD *)Token + 50) & 0x200) != 0 )
      {
        v7 = 1;
        goto LABEL_6;
      }
LABEL_5:
      v7 = 0;
LABEL_6:
      *(_DWORD *)TokenInformation = v7;
      return 0;
    }
    if ( TokenInformationClass == TokenVirtualizationEnabled )
    {
      if ( (*((_DWORD *)Token + 50) & 0x400) != 0 )
      {
        v7 = 1;
        goto LABEL_6;
      }
      goto LABEL_5;
    }
    if ( TokenInformationClass == TokenUIAccess )
    {
      *(_DWORD *)TokenInformation = (*((_DWORD *)Token + 50) >> 12) & 1;
    }
    else
    {
      if ( TokenInformationClass == TokenIsAppContainer )
      {
        v16 = *((_DWORD *)Token + 50) >> 14;
      }
      else
      {
        if ( TokenInformationClass == TokenHasRestrictions )
        {
          *(_BYTE *)TokenInformation = (*((_DWORD *)Token + 50) & 0x810) != 0;
          return 0;
        }
        LOWORD(v16) = *((_WORD *)Token + 101);
      }
      *(_DWORD *)TokenInformation = v16 & 1;
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
        v25 = 4 * *(unsigned __int8 *)(**((_QWORD **)Token + 19) + 1LL) + 24;
        PoolWithTag = (_SID_AND_ATTRIBUTES *)ExAllocatePoolWithTag(PagedPool, v25, 0x20206553u);
        v27 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_62;
        RtlCopySidAndAttributesArray(
          1u,
          *((PSID_AND_ATTRIBUTES *)Token + 19),
          v25,
          PoolWithTag,
          &PoolWithTag[1],
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        result = 0;
        *TokenInformation = v27;
        return result;
      case TokenGroups:
        v51 = KeGetCurrentThread();
        --v51->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v52 = *((_DWORD *)Token + 31);
        v53 = 16 * v52 - 8;
        if ( v52 > 1 )
        {
          v54 = v52 - 1;
          v55 = (__int64 *)(*((_QWORD *)Token + 19) + 16LL);
          do
          {
            v56 = *v55;
            v55 += 2;
            v53 += 4 * *(unsigned __int8 *)(v56 + 1) + 8;
            --v54;
          }
          while ( v54 );
        }
        v57 = (char *)ExAllocatePoolWithTag(PagedPool, v53, 0x20206553u);
        v20 = v57;
        if ( !v57 )
          goto LABEL_62;
        *(_DWORD *)v57 = *((_DWORD *)Token + 31) - 1;
        RtlCopySidAndAttributesArray(
          *((_DWORD *)Token + 31) - 1,
          (PSID_AND_ATTRIBUTES)(*((_QWORD *)Token + 19) + 16LL),
          v53,
          (PSID_AND_ATTRIBUTES)(v57 + 8),
          &v57[16 * *((_DWORD *)Token + 31) - 32 + 24],
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_29;
      case TokenPrivileges:
        v58 = KeGetCurrentThread();
        --v58->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v59 = SepTokenPrivilegeCount((__int64)Token);
        if ( v59 > 1 )
          v3 = 12 * (v59 - 1);
        v60 = (char *)ExAllocatePoolWithTag(PagedPool, v3 + 16, 0x20206553u);
        v20 = v60;
        if ( !v60 )
          goto LABEL_62;
        SepConvertTokenPrivileges((__int64)Token, v60);
        goto LABEL_29;
      case TokenOwner:
        v48 = KeGetCurrentThread();
        --v48->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v49 = 4
            * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)Token + 19) + 16LL * *((unsigned int *)Token + 36)) + 1LL)
            + 16;
        v50 = (char *)ExAllocatePoolWithTag(PagedPool, v49, 0x20206553u);
        v20 = v50;
        if ( !v50 )
          goto LABEL_62;
        *(_QWORD *)v50 = v50 + 8;
        RtlCopySid(v49 - 8, v50 + 8, *(PSID *)(*((_QWORD *)Token + 19) + 16LL * *((unsigned int *)Token + 36)));
        goto LABEL_29;
      case TokenPrimaryGroup:
        v42 = KeGetCurrentThread();
        --v42->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v43 = 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL) + 16;
        v44 = (char *)ExAllocatePoolWithTag(PagedPool, v43, 0x20206553u);
        v20 = v44;
        if ( !v44 )
          goto LABEL_62;
        *(_QWORD *)v44 = v44 + 8;
        RtlCopySid(v43 - 8, v44 + 8, *((PSID *)Token + 21));
        goto LABEL_29;
      case TokenDefaultDacl:
        v78 = KeGetCurrentThread();
        LODWORD(NumberOfBytes) = 8;
        --v78->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v79 = *((_QWORD *)Token + 23);
        if ( v79 )
          v80 = *(unsigned __int16 *)(v79 + 2) + 8;
        else
          v80 = NumberOfBytes;
        v81 = (char *)ExAllocatePoolWithTag(PagedPool, v80, 0x20206553u);
        v20 = v81;
        if ( !v81 )
          goto LABEL_62;
        v82 = v81 + 8;
        if ( !*((_QWORD *)Token + 23) )
          goto LABEL_133;
        *(_QWORD *)v81 = v82;
        memmove(v82, *((const void **)Token + 23), *(unsigned __int16 *)(*((_QWORD *)Token + 23) + 2LL));
        goto LABEL_29;
      case TokenSource:
        v83 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x20206553u);
        if ( !v83 )
          return -1073741670;
        *v83 = *(_OWORD *)Token;
        *TokenInformation = v83;
        return 0;
      case TokenType:
        v84 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        if ( !v84 )
          return -1073741670;
        *v84 = *((_DWORD *)Token + 48);
        *TokenInformation = v84;
        return 0;
      case TokenImpersonationLevel:
        if ( *((_DWORD *)Token + 48) != 2 )
          return -1073741821;
        v41 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        if ( !v41 )
          return -1073741670;
        *v41 = *((_DWORD *)Token + 49);
        *TokenInformation = v41;
        return 0;
      case TokenStatistics:
        v19 = (char *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x20206553u);
        v20 = v19;
        if ( !v19 )
          return -1073741670;
        *(_QWORD *)v19 = *((_QWORD *)Token + 2);
        *((_QWORD *)v19 + 1) = *((_QWORD *)Token + 3);
        *((_DWORD *)v19 + 6) = *((_DWORD *)Token + 48);
        *((_DWORD *)v19 + 7) = *((_DWORD *)Token + 49);
        *((_QWORD *)v19 + 2) = *((_QWORD *)Token + 5);
        v21 = KeGetCurrentThread();
        --v21->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        *((_DWORD *)v20 + 8) = *((_DWORD *)Token + 34);
        v22 = *((_QWORD *)Token + 23);
        v23 = *((_DWORD *)Token + 34) - 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL) - 8;
        if ( v22 )
          v23 -= *(unsigned __int16 *)(v22 + 2);
        *((_DWORD *)v20 + 9) = v23;
        *((_DWORD *)v20 + 9) = *((_DWORD *)Token + 35);
        *((_DWORD *)v20 + 10) = *((_DWORD *)Token + 31) - 1;
        *((_DWORD *)v20 + 11) = SepTokenPrivilegeCount((__int64)Token);
        *((_QWORD *)v20 + 6) = *((_QWORD *)Token + 7);
        goto LABEL_29;
      case TokenSessionId:
        SeQuerySessionIdToken(Token, (PULONG)TokenInformation);
        return 0;
      case TokenGroupsAndPrivileges:
        v61 = KeGetCurrentThread();
        --v61->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v62 = SepTokenPrivilegeCount((__int64)Token);
        v63 = *((_DWORD *)Token + 31);
        v123 = v62;
        v64 = 12 * v62;
        v65 = 16 * v63;
        LODWORD(NumberOfBytes) = 12 * v62;
        v125 = 16 * v63;
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
          v77 = (_SID_AND_ATTRIBUTES *)(v75 + 56);
          *((_QWORD *)v75 + 6) = *((_QWORD *)Token + 3);
          *((_DWORD *)v75 + 1) = v65;
          *(_DWORD *)v75 = *((_DWORD *)Token + 31);
          *((_QWORD *)v75 + 1) = v75 + 56;
          *((_DWORD *)v75 + 5) = v71;
          *((_DWORD *)v75 + 4) = *((_DWORD *)Token + 32);
          if ( *((_DWORD *)Token + 32) )
            *((_QWORD *)v75 + 3) = (char *)v77 + ((v65 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
          else
            *((_QWORD *)v75 + 3) = 0LL;
          *((_DWORD *)v75 + 9) = NumberOfBytes;
          *((_DWORD *)v75 + 8) = v123;
          *((_QWORD *)v75 + 5) = (char *)v77 + v71 + v65;
          RtlCopySidAndAttributesArray(
            *((_DWORD *)Token + 31),
            *((PSID_AND_ATTRIBUTES *)Token + 19),
            v65 - v125,
            v77,
            (char *)v77 + (unsigned int)v125,
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
        v28 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        if ( !v28 )
          return -1073741670;
        v29 = *(_DWORD *)(*((_QWORD *)Token + 27) + 32LL);
        if ( (v29 & 4) != 0 )
        {
          *v28 = 3;
        }
        else
        {
          LOBYTE(v3) = (v29 & 2) != 0;
          *v28 = v3 + 1;
        }
        *TokenInformation = v28;
        return 0;
      case TokenElevation:
        v11 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        if ( !v11 )
          return -1073741670;
        v12 = KeGetCurrentThread();
        --v12->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v13 = *((_DWORD *)Token + 31);
        v14 = (*((_QWORD *)Token + 8) & 0x1120160684LL) != 0;
        if ( v13 )
        {
          do
          {
            if ( v14 )
              break;
            IsElevatedRid = RtlIsElevatedRid((PSID_AND_ATTRIBUTES)(*((_QWORD *)Token + 19) + 16LL * v3++));
            v14 = IsElevatedRid;
          }
          while ( v3 < v13 );
        }
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        *v11 = v14;
        *TokenInformation = v11;
        return 0;
      case TokenHasRestrictions:
      case TokenVirtualizationAllowed:
      case TokenUIAccess:
      case TokenIsAppContainer:
      case TokenPrivateNameSpace:
        goto LABEL_2;
      case TokenAccessInformation:
        v45 = KeGetCurrentThread();
        --v45->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        TokenAccessInformationBufferSize = SepGetTokenAccessInformationBufferSize(
                                             (__int64)Token,
                                             0,
                                             0LL,
                                             &v115,
                                             (int *)&v114,
                                             (int *)&v113,
                                             (int *)&v112,
                                             (int *)&v111,
                                             (unsigned int *)&v110,
                                             (int *)&v109,
                                             (int *)&v108,
                                             (unsigned int *)&v125,
                                             &v123);
        v47 = (char *)ExAllocatePoolWithTag(PagedPool, TokenAccessInformationBufferSize, 0x20206553u);
        v20 = v47;
        if ( !v47 )
          goto LABEL_62;
        SepCopyTokenAccessInformation(
          (__int64)Token,
          (__int64)v47,
          TokenAccessInformationBufferSize,
          v115,
          v114,
          v113,
          v112,
          v111,
          v110,
          v109,
          v108,
          v125,
          v123,
          0,
          0LL);
        goto LABEL_29;
      case TokenIntegrityLevel:
        v17 = KeGetCurrentThread();
        --v17->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        SepCopyTokenIntegrity((__int64)Token);
        v18 = *RtlSubAuthorityCountSid(Sid);
        if ( v18 )
          v3 = *RtlSubAuthoritySid(Sid, (unsigned int)v18 - 1);
        *(_DWORD *)TokenInformation = v3;
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        return 0;
      case TokenCapabilities:
        v34 = KeGetCurrentThread();
        --v34->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v35 = *((_DWORD *)Token + 200);
        v36 = 16 * v35 + 24;
        if ( v35 )
        {
          v37 = (__int64 *)*((_QWORD *)Token + 99);
          v38 = v35;
          do
          {
            v39 = *v37;
            v37 += 2;
            v36 += 4 * *(unsigned __int8 *)(v39 + 1) + 8;
            --v38;
          }
          while ( v38 );
        }
        v40 = (char *)ExAllocatePoolWithTag(PagedPool, v36, 0x20206553u);
        v20 = v40;
        if ( !v40 )
          goto LABEL_62;
        *(_DWORD *)v40 = *((_DWORD *)Token + 200);
        RtlCopySidAndAttributesArray(
          *((_DWORD *)Token + 200),
          *((PSID_AND_ATTRIBUTES *)Token + 99),
          v36,
          (PSID_AND_ATTRIBUTES)(v40 + 8),
          &v40[16 * *((_DWORD *)Token + 200) + 24],
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_29;
      case TokenAppContainerSid:
        v30 = KeGetCurrentThread();
        --v30->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v31 = (char *)*((_QWORD *)Token + 98);
        if ( v31 )
          v32 = 4 * (unsigned __int8)v31[1] + 16;
        else
          v32 = 8;
        v33 = (char *)ExAllocatePoolWithTag(PagedPool, v32, 0x20206553u);
        v20 = v33;
        if ( !v33 )
          goto LABEL_62;
        if ( v31 )
        {
          v31 = v33 + 8;
          RtlCopySid(v32 - 8, v33 + 8, *((PSID *)Token + 98));
        }
        goto LABEL_43;
      case TokenAppContainerNumber:
        v9 = KeGetCurrentThread();
        --v9->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v10 = *((_QWORD *)Token + 135);
        if ( v10 )
          v3 = *(_DWORD *)(v10 + 40);
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        *(_DWORD *)TokenInformation = v3;
        return 0;
      case TokenUserClaimAttributes:
      case TokenDeviceClaimAttributes:
        *TokenInformation = 0LL;
        v85 = KeGetCurrentThread();
        --v85->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v86 = *((_QWORD *)Token + 137);
        if ( v86
          && ((v87 = *(int **)(v86 + 576)) != 0LL || TokenInformationClass != TokenUserClaimAttributes)
          && ((v88 = *(int **)(v86 + 584)) != 0LL || TokenInformationClass != TokenDeviceClaimAttributes) )
        {
          if ( TokenInformationClass == TokenUserClaimAttributes )
            v88 = v87;
          AuthzBasepQueryClaimAttributesToken(v88, 0LL, 0LL, &NumberOfBytes);
          v89 = NumberOfBytes;
        }
        else
        {
          v116 = 0;
          v118 = &v117;
          v88 = &v116;
          LODWORD(v119) = 0;
          v117 = (__int64)&v117;
          v89 = 16;
          v121 = &v120;
          v120 = (__int64)&v120;
        }
        v90 = ExAllocatePoolWithTag(PagedPool, v89, 0x20206553u);
        v91 = v90;
        if ( !v90 )
          goto LABEL_62;
        v92 = AuthzBasepQueryClaimAttributesToken(v88, v90, v89, &NumberOfBytes);
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        if ( v92 >= 0 )
          *TokenInformation = v91;
        else
          ExFreePoolWithTag(v91, 0);
        return v92;
      case TokenDeviceGroups:
        v93 = KeGetCurrentThread();
        --v93->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v94 = (unsigned int *)*((_QWORD *)Token + 137);
        if ( v94 && (v95 = *v94) != 0 )
        {
          v96 = 16 * v95 + 8;
        }
        else
        {
          v95 = 0;
          v96 = 24;
        }
        if ( v95 )
        {
          v97 = (__int64 *)*((_QWORD *)v94 + 1);
          v98 = v95;
          do
          {
            v99 = *v97;
            v97 += 2;
            v96 += 4 * *(unsigned __int8 *)(v99 + 1) + 8;
            --v98;
          }
          while ( v98 );
        }
        v20 = (char *)ExAllocatePoolWithTag(PagedPool, v96, 0x20206553u);
        if ( !v20 )
          goto LABEL_62;
        *(_QWORD *)v20 = 0LL;
        *((_QWORD *)v20 + 1) = 0LL;
        *((_QWORD *)v20 + 2) = 0LL;
        *(_DWORD *)v20 = v95;
        if ( v95 )
          RtlCopySidAndAttributesArray(
            **((_DWORD **)Token + 137),
            *(PSID_AND_ATTRIBUTES *)(*((_QWORD *)Token + 137) + 8LL),
            v96,
            (PSID_AND_ATTRIBUTES)(v20 + 8),
            &v20[16 * v95 + 8],
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
        goto LABEL_29;
      case TokenProcessTrustLevel:
        v100 = KeGetCurrentThread();
        --v100->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v31 = (char *)*((_QWORD *)Token + 138);
        if ( v31 )
          v101 = 4 * (unsigned __int8)v31[1] + 16;
        else
          v101 = 8;
        v102 = (char *)ExAllocatePoolWithTag(PagedPool, v101, 0x20206553u);
        v20 = v102;
        if ( !v102 )
          goto LABEL_62;
        if ( v31 )
        {
          v103 = v102 + 8;
          RtlCopySid(v101 - 8, v102 + 8, *((PSID *)Token + 138));
          *(_QWORD *)v20 = v103;
        }
        else
        {
LABEL_43:
          *(_QWORD *)v20 = v31;
        }
        goto LABEL_29;
      case TokenBnoIsolation:
        v104 = KeGetCurrentThread();
        --v104->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v105 = *((_QWORD *)Token + 144);
        v106 = 16;
        if ( v105 )
          v106 = *(unsigned __int16 *)(v105 + 42) + 16;
        v81 = (char *)ExAllocatePoolWithTag(PagedPool, v106, 0x20206553u);
        v20 = v81;
        if ( !v81 )
        {
LABEL_62:
          ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
          KeLeaveCriticalRegion();
          return -1073741670;
        }
        if ( *((_QWORD *)Token + 144) )
        {
          v81[8] = 1;
          *(_QWORD *)v81 = v81 + 16;
          memmove(
            v81 + 16,
            *(const void **)(*((_QWORD *)Token + 144) + 48LL),
            *(unsigned __int16 *)(*((_QWORD *)Token + 144) + 42LL));
        }
        else
        {
          v81[8] = 0;
LABEL_133:
          *(_QWORD *)v81 = 0LL;
        }
LABEL_29:
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        *TokenInformation = v20;
        break;
      default:
        return -1073741821;
    }
  }
  return 0;
}
