/*
 * XREFs of SeQueryInformationToken @ 0x1404FE620
 * Callers:
 *     IopIsProcessAppContainer @ 0x140005C2C (IopIsProcessAppContainer.c)
 *     RtlpQueryLowBoxId @ 0x14008B7C4 (RtlpQueryLowBoxId.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1401DF718 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     SepCheckCapabilities @ 0x14041E774 (SepCheckCapabilities.c)
 *     SeTokenIsElevated @ 0x140444250 (SeTokenIsElevated.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140469540 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1404699E4 (ObpCaptureBoundaryDescriptor.c)
 *     AlpcpCheckConnectionSecurity @ 0x140472F48 (AlpcpCheckConnectionSecurity.c)
 *     RtlIsSandboxedToken @ 0x1404767C0 (RtlIsSandboxedToken.c)
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 *     PiDqOpenUserObjectRegKey @ 0x1404BE304 (PiDqOpenUserObjectRegKey.c)
 *     CmpIsVirtEnabled @ 0x1404D430C (CmpIsVirtEnabled.c)
 *     EtwpBuildProcessEvent @ 0x1404ED1D0 (EtwpBuildProcessEvent.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404FE030 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObpLookupObjectName @ 0x14052F630 (ObpLookupObjectName.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     SeQuerySigningPolicyWorker @ 0x140545960 (SeQuerySigningPolicyWorker.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140560A90 (PspAllocateAndQueryNotificationChannel.c)
 *     NtCompareTokens @ 0x1405614B4 (NtCompareTokens.c)
 *     CmpBuildAdminInformation @ 0x14056AEC0 (CmpBuildAdminInformation.c)
 *     EtwpPsProvTraceProcess @ 0x140595350 (EtwpPsProvTraceProcess.c)
 *     EtwpAcquireTokenAccessInformation @ 0x1405CBEF4 (EtwpAcquireTokenAccessInformation.c)
 * Callees:
 *     SepConvertTokenPrivileges @ 0x14003EFF0 (SepConvertTokenPrivileges.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x14003F010 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SepTokenPrivilegeCount @ 0x14003F170 (SepTokenPrivilegeCount.c)
 *     SepCopyTokenIntegrity @ 0x140064158 (SepCopyTokenIntegrity.c)
 *     RtlSubAuthorityCountSid @ 0x14008C0B0 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x14008C0C0 (RtlSubAuthoritySid.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SeQuerySessionIdToken @ 0x140442230 (SeQuerySessionIdToken.c)
 *     AuthzBasepQueryClaimAttributesToken @ 0x14044266C (AuthzBasepQueryClaimAttributesToken.c)
 *     SepCopyTokenAccessInformation @ 0x14046EA9C (SepCopyTokenAccessInformation.c)
 *     RtlCopySidAndAttributesArray @ 0x14046ED30 (RtlCopySidAndAttributesArray.c)
 *     SepGetTokenAccessInformationBufferSize @ 0x14046EE08 (SepGetTokenAccessInformationBufferSize.c)
 *     RtlCopySid @ 0x1404F1BD0 (RtlCopySid.c)
 *     RtlIsElevatedRid @ 0x1404FF1F0 (RtlIsElevatedRid.c)
 */

NTSTATUS __stdcall SeQueryInformationToken(
        PACCESS_TOKEN Token,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID *TokenInformation)
{
  ULONG v3; // r14d
  int v7; // eax
  NTSTATUS result; // eax
  struct _KTHREAD *v9; // rax
  __int64 v10; // rax
  _DWORD *v11; // r12
  struct _KTHREAD *v12; // rax
  ULONG v13; // r15d
  bool v14; // bl
  BOOLEAN IsElevatedRid; // al
  struct _KTHREAD *v16; // rax
  UCHAR v17; // cl
  char *v18; // rax
  char *v19; // rbx
  struct _KTHREAD *v20; // rax
  __int64 v21; // rax
  int v22; // edx
  struct _KTHREAD *CurrentThread; // rax
  ULONG v24; // r15d
  _SID_AND_ATTRIBUTES *PoolWithTag; // rax
  _SID_AND_ATTRIBUTES *v26; // r14
  _DWORD *v27; // rax
  int v28; // edx
  struct _KTHREAD *v29; // rax
  char *v30; // r14
  unsigned int v31; // r15d
  char *v32; // rax
  _DWORD *v33; // rcx
  struct _KTHREAD *v34; // rax
  unsigned int TokenAccessInformationBufferSize; // r15d
  char *v36; // rax
  struct _KTHREAD *v37; // rax
  unsigned int v38; // eax
  ULONG v39; // r14d
  __int64 *v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rax
  char *v43; // rax
  struct _KTHREAD *v44; // rax
  unsigned int v45; // r14d
  char *v46; // rax
  struct _KTHREAD *v47; // rax
  unsigned int v48; // ecx
  ULONG v49; // r14d
  __int64 v50; // r8
  __int64 *v51; // rdx
  __int64 v52; // rax
  char *v53; // rax
  struct _KTHREAD *v54; // rax
  unsigned int v55; // eax
  char *v56; // rax
  struct _KTHREAD *v57; // rax
  int v58; // eax
  unsigned int v59; // ecx
  int v60; // r9d
  unsigned int v61; // r12d
  __int64 *v62; // rdx
  __int64 v63; // r8
  __int64 v64; // rax
  unsigned int v65; // eax
  unsigned int v66; // r13d
  unsigned int v67; // r15d
  __int64 *v68; // rdx
  __int64 v69; // r8
  __int64 v70; // rax
  char *v71; // rax
  PVOID v72; // rbx
  _SID_AND_ATTRIBUTES *v73; // r9
  struct _KTHREAD *v74; // rax
  unsigned int v75; // r14d
  char *v76; // rax
  struct _KTHREAD *v77; // rax
  __int64 v78; // rax
  unsigned int v79; // eax
  char *v80; // rax
  void *v81; // rcx
  _OWORD *v82; // rax
  _DWORD *v83; // rcx
  struct _KTHREAD *v84; // rax
  __int64 v85; // r12
  int *v86; // rax
  int *v87; // r12
  unsigned int v88; // r15d
  _QWORD *v89; // rax
  void *v90; // rbx
  NTSTATUS v91; // r14d
  struct _KTHREAD *v92; // rax
  unsigned int *v93; // rdx
  unsigned int v94; // r15d
  ULONG v95; // r14d
  __int64 *v96; // rdx
  __int64 v97; // r8
  __int64 v98; // rax
  struct _KTHREAD *v99; // rax
  unsigned int v100; // r15d
  char *v101; // rax
  char *v102; // r14
  struct _KTHREAD *v103; // rax
  __int64 v104; // rax
  unsigned int v105; // r15d
  PSID RemainingSidArea; // [rsp+80h] [rbp-49h] BYREF
  unsigned int v107; // [rsp+88h] [rbp-41h] BYREF
  unsigned int v108; // [rsp+8Ch] [rbp-3Dh] BYREF
  int v109; // [rsp+90h] [rbp-39h] BYREF
  unsigned int v110; // [rsp+94h] [rbp-35h] BYREF
  unsigned int v111; // [rsp+98h] [rbp-31h] BYREF
  unsigned int v112; // [rsp+9Ch] [rbp-2Dh] BYREF
  unsigned int v113; // [rsp+A0h] [rbp-29h] BYREF
  int v114; // [rsp+A4h] [rbp-25h] BYREF
  int v115; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v116; // [rsp+B0h] [rbp-19h] BYREF
  __int64 *v117; // [rsp+B8h] [rbp-11h]
  __int64 v118; // [rsp+C0h] [rbp-9h]
  __int64 v119; // [rsp+C8h] [rbp-1h] BYREF
  __int64 *v120; // [rsp+D0h] [rbp+7h]
  PSID Sid; // [rsp+D8h] [rbp+Fh]
  int v122; // [rsp+130h] [rbp+67h] BYREF
  SIZE_T NumberOfBytes; // [rsp+138h] [rbp+6Fh] BYREF
  int v124; // [rsp+148h] [rbp+7Fh] BYREF

  v3 = 0;
  v115 = 0;
  v116 = 0LL;
  v117 = 0LL;
  v118 = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  if ( TokenInformationClass == TokenVirtualizationEnabled )
  {
LABEL_2:
    if ( TokenInformationClass == TokenVirtualizationAllowed )
    {
      *(_DWORD *)TokenInformation = (*((_DWORD *)Token + 50) & 0x200) != 0;
    }
    else
    {
      switch ( TokenInformationClass )
      {
        case TokenVirtualizationEnabled:
          v7 = *((_DWORD *)Token + 50) >> 10;
          break;
        case TokenUIAccess:
          v7 = *((_DWORD *)Token + 50) >> 12;
          break;
        case TokenIsAppContainer:
          v7 = *((_DWORD *)Token + 50) >> 14;
          break;
        case TokenHasRestrictions:
          *(_BYTE *)TokenInformation = (*((_DWORD *)Token + 50) & 0x810) != 0;
          return 0;
        default:
          LOWORD(v7) = *((_WORD *)Token + 101);
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
          goto LABEL_57;
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
        v47 = KeGetCurrentThread();
        --v47->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v48 = *((_DWORD *)Token + 31);
        v49 = 16 * v48 - 8;
        if ( v48 > 1 )
        {
          v50 = v48 - 1;
          v51 = (__int64 *)(*((_QWORD *)Token + 19) + 16LL);
          do
          {
            v52 = *v51;
            v51 += 2;
            v49 += 4 * *(unsigned __int8 *)(v52 + 1) + 8;
            --v50;
          }
          while ( v50 );
        }
        v53 = (char *)ExAllocatePoolWithTag(PagedPool, v49, 0x20206553u);
        v19 = v53;
        if ( !v53 )
          goto LABEL_57;
        *(_DWORD *)v53 = *((_DWORD *)Token + 31) - 1;
        RtlCopySidAndAttributesArray(
          *((_DWORD *)Token + 31) - 1,
          (PSID_AND_ATTRIBUTES)(*((_QWORD *)Token + 19) + 16LL),
          v49,
          (PSID_AND_ATTRIBUTES)(v53 + 8),
          &v53[16 * *((_DWORD *)Token + 31) - 32 + 24],
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_27;
      case TokenPrivileges:
        v54 = KeGetCurrentThread();
        --v54->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v55 = SepTokenPrivilegeCount((__int64)Token);
        if ( v55 > 1 )
          v3 = 12 * (v55 - 1);
        v56 = (char *)ExAllocatePoolWithTag(PagedPool, v3 + 16, 0x20206553u);
        v19 = v56;
        if ( !v56 )
          goto LABEL_57;
        SepConvertTokenPrivileges((__int64)Token, v56);
        goto LABEL_27;
      case TokenOwner:
        v74 = KeGetCurrentThread();
        --v74->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v75 = 4
            * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)Token + 19) + 16LL * *((unsigned int *)Token + 36)) + 1LL)
            + 16;
        v76 = (char *)ExAllocatePoolWithTag(PagedPool, v75, 0x20206553u);
        v19 = v76;
        if ( !v76 )
          goto LABEL_57;
        *(_QWORD *)v76 = v76 + 8;
        RtlCopySid(v75 - 8, v76 + 8, *(PSID *)(*((_QWORD *)Token + 19) + 16LL * *((unsigned int *)Token + 36)));
        goto LABEL_27;
      case TokenPrimaryGroup:
        v44 = KeGetCurrentThread();
        --v44->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v45 = 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL) + 16;
        v46 = (char *)ExAllocatePoolWithTag(PagedPool, v45, 0x20206553u);
        v19 = v46;
        if ( !v46 )
          goto LABEL_57;
        *(_QWORD *)v46 = v46 + 8;
        RtlCopySid(v45 - 8, v46 + 8, *((PSID *)Token + 21));
        goto LABEL_27;
      case TokenDefaultDacl:
        v77 = KeGetCurrentThread();
        LODWORD(NumberOfBytes) = 8;
        --v77->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v78 = *((_QWORD *)Token + 23);
        if ( v78 )
          v79 = *(unsigned __int16 *)(v78 + 2) + 8;
        else
          v79 = NumberOfBytes;
        v80 = (char *)ExAllocatePoolWithTag(PagedPool, v79, 0x20206553u);
        v19 = v80;
        if ( !v80 )
          goto LABEL_57;
        v81 = v80 + 8;
        if ( !*((_QWORD *)Token + 23) )
          goto LABEL_130;
        *(_QWORD *)v80 = v81;
        memmove(v81, *((const void **)Token + 23), *(unsigned __int16 *)(*((_QWORD *)Token + 23) + 2LL));
        goto LABEL_27;
      case TokenSource:
        v82 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x20206553u);
        if ( !v82 )
          return -1073741670;
        *v82 = *(_OWORD *)Token;
        *TokenInformation = v82;
        return 0;
      case TokenType:
        v83 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        if ( !v83 )
          return -1073741670;
        *v83 = *((_DWORD *)Token + 48);
        *TokenInformation = v83;
        return 0;
      case TokenImpersonationLevel:
        if ( *((_DWORD *)Token + 48) != 2 )
          return -1073741821;
        v33 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        if ( !v33 )
          return -1073741670;
        *v33 = *((_DWORD *)Token + 49);
        *TokenInformation = v33;
        return 0;
      case TokenStatistics:
        v18 = (char *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x20206553u);
        v19 = v18;
        if ( !v18 )
          return -1073741670;
        *(_QWORD *)v18 = *((_QWORD *)Token + 2);
        *((_QWORD *)v18 + 1) = *((_QWORD *)Token + 3);
        *((_DWORD *)v18 + 6) = *((_DWORD *)Token + 48);
        *((_DWORD *)v18 + 7) = *((_DWORD *)Token + 49);
        *((_QWORD *)v18 + 2) = *((_QWORD *)Token + 5);
        v20 = KeGetCurrentThread();
        --v20->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        *((_DWORD *)v19 + 8) = *((_DWORD *)Token + 34);
        v21 = *((_QWORD *)Token + 23);
        v22 = *((_DWORD *)Token + 34) - 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL) - 8;
        if ( v21 )
          v22 -= *(unsigned __int16 *)(v21 + 2);
        *((_DWORD *)v19 + 9) = v22;
        *((_DWORD *)v19 + 9) = *((_DWORD *)Token + 35);
        *((_DWORD *)v19 + 10) = *((_DWORD *)Token + 31) - 1;
        *((_DWORD *)v19 + 11) = SepTokenPrivilegeCount((__int64)Token);
        *((_QWORD *)v19 + 6) = *((_QWORD *)Token + 7);
        goto LABEL_27;
      case TokenSessionId:
        SeQuerySessionIdToken(Token, (PULONG)TokenInformation);
        return 0;
      case TokenGroupsAndPrivileges:
        v57 = KeGetCurrentThread();
        --v57->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v58 = SepTokenPrivilegeCount((__int64)Token);
        v59 = *((_DWORD *)Token + 31);
        v122 = v58;
        v60 = 12 * v58;
        v61 = 16 * v59;
        LODWORD(NumberOfBytes) = 12 * v58;
        v124 = 16 * v59;
        if ( v59 )
        {
          v62 = (__int64 *)*((_QWORD *)Token + 19);
          v63 = v59;
          do
          {
            v64 = *v62;
            v62 += 2;
            v61 += (4 * *(unsigned __int8 *)(v64 + 1) + 15) & 0xFFFFFFF8;
            --v63;
          }
          while ( v63 );
        }
        v65 = *((_DWORD *)Token + 32);
        v66 = 16 * v65;
        v67 = 16 * v65;
        if ( v65 )
        {
          v68 = (__int64 *)*((_QWORD *)Token + 20);
          v69 = v65;
          do
          {
            v70 = *v68;
            v68 += 2;
            v67 += (4 * *(unsigned __int8 *)(v70 + 1) + 15) & 0xFFFFFFF8;
            --v69;
          }
          while ( v69 );
        }
        v71 = (char *)ExAllocatePoolWithTag(PagedPool, v67 + v61 + v60 + 56, 0x20206553u);
        v72 = v71;
        if ( v71 )
        {
          v73 = (_SID_AND_ATTRIBUTES *)(v71 + 56);
          *((_QWORD *)v71 + 6) = *((_QWORD *)Token + 3);
          *((_DWORD *)v71 + 1) = v61;
          *(_DWORD *)v71 = *((_DWORD *)Token + 31);
          *((_QWORD *)v71 + 1) = v71 + 56;
          *((_DWORD *)v71 + 5) = v67;
          *((_DWORD *)v71 + 4) = *((_DWORD *)Token + 32);
          if ( *((_DWORD *)Token + 32) )
            *((_QWORD *)v71 + 3) = (char *)v73 + ((v61 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
          else
            *((_QWORD *)v71 + 3) = 0LL;
          *((_DWORD *)v71 + 9) = NumberOfBytes;
          *((_DWORD *)v71 + 8) = v122;
          *((_QWORD *)v71 + 5) = (char *)v73 + v67 + v61;
          RtlCopySidAndAttributesArray(
            *((_DWORD *)Token + 31),
            *((PSID_AND_ATTRIBUTES *)Token + 19),
            v61 - v124,
            v73,
            (char *)v73 + (unsigned int)v124,
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
          if ( *((_DWORD *)v72 + 4) )
            RtlCopySidAndAttributesArray(
              *((_DWORD *)Token + 32),
              *((PSID_AND_ATTRIBUTES *)Token + 20),
              v67 - v66,
              *((PSID_AND_ATTRIBUTES *)v72 + 3),
              (PSID)(*((_QWORD *)v72 + 3) + v66),
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
          SepConvertTokenPrivilegesToLuidAndAttributes(Token, *((_QWORD *)v72 + 5));
          ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
          KeLeaveCriticalRegion();
          result = 0;
          *TokenInformation = v72;
        }
        else
        {
          ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
          KeLeaveCriticalRegion();
          return -1073741670;
        }
        return result;
      case TokenElevationType:
        v27 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        if ( !v27 )
          return -1073741670;
        v28 = *(_DWORD *)(*((_QWORD *)Token + 27) + 32LL);
        if ( (v28 & 4) != 0 )
        {
          *v27 = 3;
        }
        else
        {
          LOBYTE(v3) = (v28 & 2) != 0;
          *v27 = v3 + 1;
        }
        *TokenInformation = v27;
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
        v34 = KeGetCurrentThread();
        --v34->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        TokenAccessInformationBufferSize = SepGetTokenAccessInformationBufferSize(
                                             (__int64)Token,
                                             0,
                                             0LL,
                                             &v114,
                                             (int *)&v113,
                                             (int *)&v112,
                                             (int *)&v111,
                                             (int *)&v110,
                                             (unsigned int *)&v109,
                                             (int *)&v108,
                                             (int *)&v107,
                                             (unsigned int *)&v124,
                                             &v122);
        v36 = (char *)ExAllocatePoolWithTag(PagedPool, TokenAccessInformationBufferSize, 0x20206553u);
        v19 = v36;
        if ( !v36 )
          goto LABEL_57;
        SepCopyTokenAccessInformation(
          (__int64)Token,
          (__int64)v36,
          TokenAccessInformationBufferSize,
          v114,
          v113,
          v112,
          v111,
          v110,
          v109,
          v108,
          v107,
          v124,
          v122,
          0,
          0LL);
        goto LABEL_27;
      case TokenIntegrityLevel:
        v16 = KeGetCurrentThread();
        --v16->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        SepCopyTokenIntegrity();
        v17 = *RtlSubAuthorityCountSid(Sid);
        if ( v17 )
          v3 = *RtlSubAuthoritySid(Sid, (unsigned int)v17 - 1);
        *(_DWORD *)TokenInformation = v3;
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        return 0;
      case TokenCapabilities:
        v37 = KeGetCurrentThread();
        --v37->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v38 = *((_DWORD *)Token + 200);
        v39 = 16 * v38 + 24;
        if ( v38 )
        {
          v40 = (__int64 *)*((_QWORD *)Token + 99);
          v41 = v38;
          do
          {
            v42 = *v40;
            v40 += 2;
            v39 += 4 * *(unsigned __int8 *)(v42 + 1) + 8;
            --v41;
          }
          while ( v41 );
        }
        v43 = (char *)ExAllocatePoolWithTag(PagedPool, v39, 0x20206553u);
        v19 = v43;
        if ( !v43 )
          goto LABEL_57;
        *(_DWORD *)v43 = *((_DWORD *)Token + 200);
        RtlCopySidAndAttributesArray(
          *((_DWORD *)Token + 200),
          *((PSID_AND_ATTRIBUTES *)Token + 99),
          v39,
          (PSID_AND_ATTRIBUTES)(v43 + 8),
          &v43[16 * *((_DWORD *)Token + 200) + 24],
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_27;
      case TokenAppContainerSid:
        v29 = KeGetCurrentThread();
        --v29->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v30 = (char *)*((_QWORD *)Token + 98);
        if ( v30 )
          v31 = 4 * (unsigned __int8)v30[1] + 16;
        else
          v31 = 8;
        v32 = (char *)ExAllocatePoolWithTag(PagedPool, v31, 0x20206553u);
        v19 = v32;
        if ( !v32 )
          goto LABEL_57;
        if ( v30 )
        {
          v30 = v32 + 8;
          RtlCopySid(v31 - 8, v32 + 8, *((PSID *)Token + 98));
        }
        goto LABEL_41;
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
        v84 = KeGetCurrentThread();
        --v84->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v85 = *((_QWORD *)Token + 137);
        if ( v85
          && ((v86 = *(int **)(v85 + 576)) != 0LL || TokenInformationClass != TokenUserClaimAttributes)
          && ((v87 = *(int **)(v85 + 584)) != 0LL || TokenInformationClass != TokenDeviceClaimAttributes) )
        {
          if ( TokenInformationClass == TokenUserClaimAttributes )
            v87 = v86;
          AuthzBasepQueryClaimAttributesToken(v87, 0LL, 0, &NumberOfBytes);
          v88 = NumberOfBytes;
        }
        else
        {
          v115 = 0;
          v117 = &v116;
          v87 = &v115;
          LODWORD(v118) = 0;
          v116 = (__int64)&v116;
          v88 = 16;
          v120 = &v119;
          v119 = (__int64)&v119;
        }
        v89 = ExAllocatePoolWithTag(PagedPool, v88, 0x20206553u);
        v90 = v89;
        if ( !v89 )
          goto LABEL_57;
        v91 = AuthzBasepQueryClaimAttributesToken(v87, v89, v88, &NumberOfBytes);
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        if ( v91 >= 0 )
          *TokenInformation = v90;
        else
          ExFreePoolWithTag(v90, 0);
        return v91;
      case TokenDeviceGroups:
        v92 = KeGetCurrentThread();
        --v92->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v93 = (unsigned int *)*((_QWORD *)Token + 137);
        if ( v93 && (v94 = *v93) != 0 )
        {
          v95 = 16 * v94 + 8;
        }
        else
        {
          v94 = 0;
          v95 = 24;
        }
        if ( v94 )
        {
          v96 = (__int64 *)*((_QWORD *)v93 + 1);
          v97 = v94;
          do
          {
            v98 = *v96;
            v96 += 2;
            v95 += 4 * *(unsigned __int8 *)(v98 + 1) + 8;
            --v97;
          }
          while ( v97 );
        }
        v19 = (char *)ExAllocatePoolWithTag(PagedPool, v95, 0x20206553u);
        if ( !v19 )
          goto LABEL_57;
        *(_QWORD *)v19 = 0LL;
        *((_QWORD *)v19 + 1) = 0LL;
        *((_QWORD *)v19 + 2) = 0LL;
        *(_DWORD *)v19 = v94;
        if ( v94 )
          RtlCopySidAndAttributesArray(
            **((_DWORD **)Token + 137),
            *(PSID_AND_ATTRIBUTES *)(*((_QWORD *)Token + 137) + 8LL),
            v95,
            (PSID_AND_ATTRIBUTES)(v19 + 8),
            &v19[16 * v94 + 8],
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
        goto LABEL_27;
      case TokenProcessTrustLevel:
        v99 = KeGetCurrentThread();
        --v99->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v30 = (char *)*((_QWORD *)Token + 138);
        if ( v30 )
          v100 = 4 * (unsigned __int8)v30[1] + 16;
        else
          v100 = 8;
        v101 = (char *)ExAllocatePoolWithTag(PagedPool, v100, 0x20206553u);
        v19 = v101;
        if ( !v101 )
          goto LABEL_57;
        if ( v30 )
        {
          v102 = v101 + 8;
          RtlCopySid(v100 - 8, v101 + 8, *((PSID *)Token + 138));
          *(_QWORD *)v19 = v102;
        }
        else
        {
LABEL_41:
          *(_QWORD *)v19 = v30;
        }
        goto LABEL_27;
      case TokenBnoIsolation:
        v103 = KeGetCurrentThread();
        --v103->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v104 = *((_QWORD *)Token + 144);
        v105 = 16;
        if ( v104 )
          v105 = *(unsigned __int16 *)(v104 + 42) + 16;
        v80 = (char *)ExAllocatePoolWithTag(PagedPool, v105, 0x20206553u);
        v19 = v80;
        if ( !v80 )
        {
LABEL_57:
          ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
          KeLeaveCriticalRegion();
          return -1073741670;
        }
        if ( *((_QWORD *)Token + 144) )
        {
          v80[8] = 1;
          *(_QWORD *)v80 = v80 + 16;
          memmove(
            v80 + 16,
            *(const void **)(*((_QWORD *)Token + 144) + 48LL),
            *(unsigned __int16 *)(*((_QWORD *)Token + 144) + 42LL));
        }
        else
        {
          v80[8] = 0;
LABEL_130:
          *(_QWORD *)v80 = 0LL;
        }
LABEL_27:
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        *TokenInformation = v19;
        break;
      default:
        return -1073741821;
    }
  }
  return 0;
}
