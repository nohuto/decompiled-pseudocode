/*
 * XREFs of SepVariableInitialization @ 0x1408BD6E8
 * Callers:
 *     SepInitializationPhase0 @ 0x1408BC6F0 (SepInitializationPhase0.c)
 * Callees:
 *     RtlDeriveCapabilitySidsFromName @ 0x14009FD90 (RtlDeriveCapabilitySidsFromName.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlInitializeSid @ 0x140541FB0 (RtlInitializeSid.c)
 *     RtlLengthRequiredSid @ 0x140544040 (RtlLengthRequiredSid.c)
 *     SepInitializeSharedSidMap @ 0x140642BAC (SepInitializeSharedSidMap.c)
 *     SepInitSystemDacls @ 0x1408BEDD8 (SepInitSystemDacls.c)
 */

bool SepVariableInitialization()
{
  int v0; // eax
  bool v1; // cl
  ULONG v2; // edi
  _DWORD *PoolWithTag; // rbx
  _DWORD *v4; // r12
  _DWORD *v5; // r13
  _DWORD *v6; // r15
  _DWORD *v7; // r14
  _DWORD *v8; // rsi
  ULONG v9; // eax
  _DWORD *v10; // r12
  _DWORD *v11; // r13
  _DWORD *v12; // r15
  _DWORD *v13; // r14
  _DWORD *v14; // rsi
  _DWORD *v15; // rdi
  _DWORD *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  PSID v20; // r8
  PSID v21; // rdx
  _DWORD *v22; // rax
  _DWORD *v23; // rbx
  _DWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _DWORD *v31; // rax
  PSID v32; // r8
  PSID v33; // rdx
  __int64 v34; // rcx
  char *v35; // rax
  _DWORD *v37; // [rsp+20h] [rbp-E0h]
  _DWORD *v38; // [rsp+20h] [rbp-E0h]
  __int64 v39; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v40; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v41; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v43; // [rsp+48h] [rbp-B8h] BYREF
  __int64 IdentifierAuthority; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v45; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+60h] [rbp-A0h] BYREF
  PSID Sid; // [rsp+68h] [rbp-98h]
  PSID v48; // [rsp+70h] [rbp-90h]
  PSID v49; // [rsp+78h] [rbp-88h]
  PSID v50; // [rsp+80h] [rbp-80h]
  PSID v51; // [rsp+88h] [rbp-78h]
  PSID v52; // [rsp+90h] [rbp-70h]
  PSID v53; // [rsp+98h] [rbp-68h]
  PSID v54; // [rsp+A0h] [rbp-60h]
  PSID v55; // [rsp+A8h] [rbp-58h]
  PSID v56; // [rsp+B0h] [rbp-50h]
  PSID v57; // [rsp+B8h] [rbp-48h]
  PSID v58; // [rsp+C0h] [rbp-40h]
  PSID v59; // [rsp+C8h] [rbp-38h]
  PSID v60; // [rsp+D0h] [rbp-30h]
  PSID v61; // [rsp+D8h] [rbp-28h]
  PSID v62; // [rsp+E0h] [rbp-20h]
  PSID v63; // [rsp+E8h] [rbp-18h]
  PSID v64; // [rsp+F0h] [rbp-10h]
  PSID v65; // [rsp+F8h] [rbp-8h]
  PSID v66; // [rsp+100h] [rbp+0h]
  PSID v67; // [rsp+108h] [rbp+8h]
  PSID v68; // [rsp+110h] [rbp+10h]
  PSID v69; // [rsp+118h] [rbp+18h]
  PSID v70; // [rsp+120h] [rbp+20h]
  PSID v71; // [rsp+128h] [rbp+28h]
  PSID CapabilitySid; // [rsp+130h] [rbp+30h]
  PSID CapabilityGroupSid; // [rsp+138h] [rbp+38h]
  UNICODE_STRING UnicodeString; // [rsp+140h] [rbp+40h] BYREF
  UNICODE_STRING v75; // [rsp+150h] [rbp+50h] BYREF
  UNICODE_STRING v76; // [rsp+160h] [rbp+60h] BYREF
  ULONG Size; // [rsp+1C0h] [rbp+C0h]
  ULONG NumberOfBytes; // [rsp+1C8h] [rbp+C8h]
  void *NumberOfBytesa; // [rsp+1C8h] [rbp+C8h]
  ULONG v80; // [rsp+1D0h] [rbp+D0h]
  _DWORD *v81; // [rsp+1D0h] [rbp+D0h]
  ULONG v82; // [rsp+1D8h] [rbp+D8h]
  _DWORD *v83; // [rsp+1D8h] [rbp+D8h]

  *(_DWORD *)&UnicodeString.Length = 1703960;
  UnicodeString.Buffer = L"registryRead";
  v76.Buffer = L"sessionImpersonation";
  v75.Buffer = L"constrainedImpersonation";
  LODWORD(IdentifierAuthority) = 0;
  WORD2(IdentifierAuthority) = 0;
  LODWORD(v45) = 0;
  WORD2(v45) = 256;
  LODWORD(v46) = 0;
  WORD2(v46) = 512;
  LODWORD(v41) = 0;
  WORD2(v41) = 768;
  LODWORD(v39) = 0;
  WORD2(v39) = 1280;
  LODWORD(v42) = 0;
  WORD2(v42) = 4096;
  LODWORD(v43) = 0;
  WORD2(v43) = 3840;
  LODWORD(v40) = 0;
  WORD2(v40) = 4864;
  *(_DWORD *)&v76.Length = 2752552;
  *(_DWORD *)&v75.Length = 3276848;
  v0 = *(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 116LL);
  v1 = (v0 & 0x40) == 0 && MEMORY[0xFFFFF78000000264] == 1 && MEMORY[0xFFFFF780000002E8] <= 0x83400u;
  SepTokenSidSharingEnabled = v1;
  SepTokenCapabilitySidSharingEnabled = v1;
  SepOsLoaderTpmDriverLoaded = (v0 & 0x80) != 0;
  v2 = RtlLengthRequiredSid(1u);
  NumberOfBytes = RtlLengthRequiredSid(2u);
  Size = RtlLengthRequiredSid(6u);
  v82 = RtlLengthRequiredSid(9u);
  v80 = RtlLengthRequiredSid(0xAu);
  SeNullSid = ExAllocatePoolWithTag((POOL_TYPE)17, v2, 0x69536553u);
  SeCreatorOwnerSid = ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SeCreatorGroupSid = ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SeCreatorOwnerServerSid = ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SeCreatorGroupServerSid = ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SeWorldSid = ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SeLocalSid = ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SeOwnerRightsSid = PoolWithTag;
  v37 = SeNullSid;
  if ( !SeNullSid )
    return 0;
  Sid = SeWorldSid;
  if ( !SeWorldSid )
    return 0;
  v4 = SeLocalSid;
  if ( !SeLocalSid )
    return 0;
  v5 = SeCreatorOwnerSid;
  if ( !SeCreatorOwnerSid )
    return 0;
  v6 = SeCreatorGroupSid;
  if ( !SeCreatorGroupSid )
    return 0;
  v7 = SeCreatorOwnerServerSid;
  if ( !SeCreatorOwnerServerSid )
    return 0;
  if ( !PoolWithTag )
    return 0;
  v8 = SeCreatorGroupServerSid;
  if ( !SeCreatorGroupServerSid )
    return 0;
  RtlInitializeSid(SeNullSid, (PSID_IDENTIFIER_AUTHORITY)&IdentifierAuthority, 1u);
  RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&v45, 1u);
  RtlInitializeSid(v4, (PSID_IDENTIFIER_AUTHORITY)&v46, 1u);
  RtlInitializeSid(v5, (PSID_IDENTIFIER_AUTHORITY)&v41, 1u);
  RtlInitializeSid(v6, (PSID_IDENTIFIER_AUTHORITY)&v41, 1u);
  RtlInitializeSid(v7, (PSID_IDENTIFIER_AUTHORITY)&v41, 1u);
  RtlInitializeSid(v8, (PSID_IDENTIFIER_AUTHORITY)&v41, 1u);
  RtlInitializeSid(PoolWithTag, (PSID_IDENTIFIER_AUTHORITY)&v41, 1u);
  v37[2] = 0;
  *((_DWORD *)Sid + 2) = 0;
  v4[2] = 0;
  v5[2] = 0;
  v6[2] = 1;
  v7[2] = 2;
  v8[2] = 3;
  PoolWithTag[2] = 4;
  v9 = RtlLengthRequiredSid(0);
  SeNtAuthoritySid = ExAllocatePoolWithTag((POOL_TYPE)17, v9, 0x69536553u);
  SeDialupSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)17, v2, 0x69536553u);
  SeNetworkSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SeBatchSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SeInteractiveSid = ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SePrincipalSelfSid = ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SeServiceSid = ExAllocatePoolWithTag((POOL_TYPE)17, v2, 0x69536553u);
  SeLocalSystemSid = ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SeAuthenticatedUsersSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)17, v2, 0x69536553u);
  SeRestrictedSid = ExAllocatePoolWithTag((POOL_TYPE)17, v2, 0x69536553u);
  SeAnonymousLogonSid = ExAllocatePoolWithTag((POOL_TYPE)17, v2, 0x69536553u);
  SeLocalServiceSid = ExAllocatePoolWithTag((POOL_TYPE)17, v2, 0x69536553u);
  SeNetworkServiceSid = ExAllocatePoolWithTag((POOL_TYPE)17, v2, 0x69536553u);
  SeIUserSid = ExAllocatePoolWithTag((POOL_TYPE)17, v2, 0x69536553u);
  SeAliasAdminsSid = ExAllocatePoolWithTag((POOL_TYPE)17, NumberOfBytes, 0x69536553u);
  SeAliasUsersSid = ExAllocatePoolWithTag((POOL_TYPE)17, NumberOfBytes, 0x69536553u);
  SeAliasGuestsSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)17, NumberOfBytes, 0x69536553u);
  SeAliasPowerUsersSid = ExAllocatePoolWithTag((POOL_TYPE)17, NumberOfBytes, 0x69536553u);
  SeAliasAccountOpsSid = ExAllocatePoolWithTag((POOL_TYPE)17, NumberOfBytes, 0x69536553u);
  SeAliasSystemOpsSid = ExAllocatePoolWithTag((POOL_TYPE)17, NumberOfBytes, 0x69536553u);
  SeAliasPrintOpsSid = ExAllocatePoolWithTag((POOL_TYPE)17, NumberOfBytes, 0x69536553u);
  SeAliasBackupOpsSid = ExAllocatePoolWithTag((POOL_TYPE)17, NumberOfBytes, 0x69536553u);
  SeUntrustedMandatorySid = ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  *(_QWORD *)&SeLowMandatorySid = ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SeMediumMandatorySid = ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SeHighMandatorySid = ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SeSystemMandatorySid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SePackagePrefixSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SeCapabilityPrefixSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v2, 0x69536553u);
  SeAllAppPackagesSid = ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeAllRestrictedAppPackagesSid = ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeRegistryReadCapabilitySid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)17, v80, 0x69536553u);
  SeUserModeDriversSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, Size, 0x69536553u);
  SeTrustedInstallerSid = ExAllocatePoolWithTag((POOL_TYPE)528, Size, 0x69536553u);
  SeProcTrustWinTcbSid = ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeProcTrustWinSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeProcTrustAuthenticodeSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeProcTrustLiteAntimalwareSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeProcTrustLiteWinTcbSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeProcTrustLiteWinSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeProcTrustLiteAppSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeProcTrustNoneSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeDefaultAccountAliasSid = ExAllocatePoolWithTag((POOL_TYPE)17, NumberOfBytes, 0x69536553u);
  SeConstrainedImpersonationCapabilityGroupSid = ExAllocatePoolWithTag((POOL_TYPE)17, v82, 0x69536553u);
  SeConstrainedImpersonationCapabilitySid = ExAllocatePoolWithTag((POOL_TYPE)17, v80, 0x69536553u);
  SeSessionImpersonationCapabilityGroupSid = ExAllocatePoolWithTag((POOL_TYPE)17, v82, 0x69536553u);
  SeSessionImpersonationCapabilitySid = ExAllocatePoolWithTag((POOL_TYPE)17, v80, 0x69536553u);
  if ( !SeNtAuthoritySid )
    return 0;
  v81 = (_DWORD *)SeDialupSid;
  if ( !SeDialupSid )
    return 0;
  v83 = (_DWORD *)SeNetworkSid;
  if ( !SeNetworkSid )
    return 0;
  Sid = (PSID)SeBatchSid;
  if ( !SeBatchSid )
    return 0;
  v56 = SeInteractiveSid;
  if ( !SeInteractiveSid )
    return 0;
  v55 = SeServiceSid;
  if ( !SeServiceSid )
    return 0;
  v54 = SePrincipalSelfSid;
  if ( !SePrincipalSelfSid )
    return 0;
  v53 = SeLocalSystemSid;
  if ( !SeLocalSystemSid )
    return 0;
  v52 = (PSID)SeAuthenticatedUsersSid;
  if ( !SeAuthenticatedUsersSid )
    return 0;
  v51 = SeRestrictedSid;
  if ( !SeRestrictedSid )
    return 0;
  v50 = SeAnonymousLogonSid;
  if ( !SeAnonymousLogonSid )
    return 0;
  v49 = SeLocalServiceSid;
  if ( !SeLocalServiceSid )
    return 0;
  v48 = SeNetworkServiceSid;
  if ( !SeNetworkServiceSid )
    return 0;
  v46 = (__int64)SeIUserSid;
  if ( !SeIUserSid )
    return 0;
  v45 = (__int64)SeAliasAdminsSid;
  if ( !SeAliasAdminsSid )
    return 0;
  IdentifierAuthority = (__int64)SeAliasUsersSid;
  if ( !SeAliasUsersSid )
    return 0;
  v41 = SeAliasGuestsSid;
  if ( !SeAliasGuestsSid )
    return 0;
  v10 = SeAliasPowerUsersSid;
  if ( !SeAliasPowerUsersSid )
    return 0;
  v11 = SeAliasAccountOpsSid;
  if ( !SeAliasAccountOpsSid )
    return 0;
  v12 = SeAliasSystemOpsSid;
  if ( !SeAliasSystemOpsSid )
    return 0;
  v13 = SeAliasPrintOpsSid;
  if ( !SeAliasPrintOpsSid )
    return 0;
  v14 = SeAliasBackupOpsSid;
  if ( !SeAliasBackupOpsSid )
    return 0;
  v62 = SeUntrustedMandatorySid;
  if ( !SeUntrustedMandatorySid )
    return 0;
  v57 = *(PSID *)&SeLowMandatorySid;
  if ( !*(_QWORD *)&SeLowMandatorySid )
    return 0;
  v58 = SeMediumMandatorySid;
  if ( !SeMediumMandatorySid )
    return 0;
  v59 = SeHighMandatorySid;
  if ( !SeHighMandatorySid )
    return 0;
  v60 = (PSID)SeSystemMandatorySid;
  if ( !SeSystemMandatorySid )
    return 0;
  v61 = (PSID)SePackagePrefixSid;
  if ( !SePackagePrefixSid )
    return 0;
  v38 = (_DWORD *)SeCapabilityPrefixSid;
  if ( !SeCapabilityPrefixSid )
    return 0;
  v15 = SeAllAppPackagesSid;
  if ( !SeAllAppPackagesSid )
    return 0;
  v16 = SeAllRestrictedAppPackagesSid;
  if ( !SeAllRestrictedAppPackagesSid )
    return 0;
  CapabilitySid = (PSID)SeRegistryReadCapabilitySid;
  if ( !SeRegistryReadCapabilitySid )
    return 0;
  NumberOfBytesa = (void *)SeUserModeDriversSid;
  if ( !SeUserModeDriversSid )
    return 0;
  v65 = SeProcTrustWinTcbSid;
  if ( !SeProcTrustWinTcbSid )
    return 0;
  v66 = (PSID)SeProcTrustWinSid;
  if ( !SeProcTrustWinSid )
    return 0;
  v67 = (PSID)SeProcTrustAuthenticodeSid;
  if ( !SeProcTrustAuthenticodeSid )
    return 0;
  v68 = (PSID)SeProcTrustLiteAntimalwareSid;
  if ( !SeProcTrustLiteAntimalwareSid )
    return 0;
  v69 = (PSID)SeProcTrustLiteWinTcbSid;
  if ( !SeProcTrustLiteWinTcbSid )
    return 0;
  v70 = (PSID)SeProcTrustLiteWinSid;
  if ( !SeProcTrustLiteWinSid )
    return 0;
  v71 = (PSID)SeProcTrustLiteAppSid;
  if ( !SeProcTrustLiteAppSid )
    return 0;
  v64 = (PSID)SeProcTrustNoneSid;
  if ( !SeProcTrustNoneSid )
    return 0;
  v63 = SeTrustedInstallerSid;
  if ( !SeTrustedInstallerSid )
    return 0;
  if ( !SeDefaultAccountAliasSid )
    return 0;
  if ( !SeConstrainedImpersonationCapabilitySid )
    return 0;
  CapabilityGroupSid = SeConstrainedImpersonationCapabilityGroupSid;
  if ( !SeConstrainedImpersonationCapabilityGroupSid )
    return 0;
  if ( !SeSessionImpersonationCapabilitySid )
    return 0;
  if ( !SeSessionImpersonationCapabilityGroupSid )
    return 0;
  RtlInitializeSid(SeNtAuthoritySid, (PSID_IDENTIFIER_AUTHORITY)&v39, 0);
  RtlInitializeSid(v81, (PSID_IDENTIFIER_AUTHORITY)&v39, 1u);
  RtlInitializeSid(v83, (PSID_IDENTIFIER_AUTHORITY)&v39, 1u);
  RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&v39, 1u);
  RtlInitializeSid(v56, (PSID_IDENTIFIER_AUTHORITY)&v39, 1u);
  RtlInitializeSid(v55, (PSID_IDENTIFIER_AUTHORITY)&v39, 1u);
  RtlInitializeSid(v54, (PSID_IDENTIFIER_AUTHORITY)&v39, 1u);
  RtlInitializeSid(v53, (PSID_IDENTIFIER_AUTHORITY)&v39, 1u);
  RtlInitializeSid(v52, (PSID_IDENTIFIER_AUTHORITY)&v39, 1u);
  RtlInitializeSid(v51, (PSID_IDENTIFIER_AUTHORITY)&v39, 1u);
  RtlInitializeSid(v50, (PSID_IDENTIFIER_AUTHORITY)&v39, 1u);
  RtlInitializeSid(v49, (PSID_IDENTIFIER_AUTHORITY)&v39, 1u);
  RtlInitializeSid(v48, (PSID_IDENTIFIER_AUTHORITY)&v39, 1u);
  RtlInitializeSid((PSID)v46, (PSID_IDENTIFIER_AUTHORITY)&v39, 1u);
  RtlInitializeSid((PSID)v45, (PSID_IDENTIFIER_AUTHORITY)&v39, 2u);
  RtlInitializeSid((PSID)IdentifierAuthority, (PSID_IDENTIFIER_AUTHORITY)&v39, 2u);
  RtlInitializeSid((PSID)v41, (PSID_IDENTIFIER_AUTHORITY)&v39, 2u);
  RtlInitializeSid(v10, (PSID_IDENTIFIER_AUTHORITY)&v39, 2u);
  RtlInitializeSid(v11, (PSID_IDENTIFIER_AUTHORITY)&v39, 2u);
  RtlInitializeSid(v12, (PSID_IDENTIFIER_AUTHORITY)&v39, 2u);
  RtlInitializeSid(v13, (PSID_IDENTIFIER_AUTHORITY)&v39, 2u);
  RtlInitializeSid(v14, (PSID_IDENTIFIER_AUTHORITY)&v39, 2u);
  RtlInitializeSid(v63, (PSID_IDENTIFIER_AUTHORITY)&v39, 6u);
  RtlInitializeSid(v62, (PSID_IDENTIFIER_AUTHORITY)&v42, 1u);
  RtlInitializeSid(v57, (PSID_IDENTIFIER_AUTHORITY)&v42, 1u);
  RtlInitializeSid(v58, (PSID_IDENTIFIER_AUTHORITY)&v42, 1u);
  RtlInitializeSid(v59, (PSID_IDENTIFIER_AUTHORITY)&v42, 1u);
  RtlInitializeSid(v60, (PSID_IDENTIFIER_AUTHORITY)&v42, 1u);
  RtlInitializeSid(v61, (PSID_IDENTIFIER_AUTHORITY)&v43, 1u);
  RtlInitializeSid(v38, (PSID_IDENTIFIER_AUTHORITY)&v43, 1u);
  RtlInitializeSid(v15, (PSID_IDENTIFIER_AUTHORITY)&v43, 2u);
  RtlInitializeSid(v16, (PSID_IDENTIFIER_AUTHORITY)&v43, 2u);
  memset(NumberOfBytesa, 0, Size);
  RtlInitializeSid(NumberOfBytesa, (PSID_IDENTIFIER_AUTHORITY)&v39, 6u);
  RtlInitializeSid(v64, (PSID_IDENTIFIER_AUTHORITY)&v40, 2u);
  RtlInitializeSid(v65, (PSID_IDENTIFIER_AUTHORITY)&v40, 2u);
  RtlInitializeSid(v66, (PSID_IDENTIFIER_AUTHORITY)&v40, 2u);
  RtlInitializeSid(v67, (PSID_IDENTIFIER_AUTHORITY)&v40, 2u);
  RtlInitializeSid(v68, (PSID_IDENTIFIER_AUTHORITY)&v40, 2u);
  RtlInitializeSid(v69, (PSID_IDENTIFIER_AUTHORITY)&v40, 2u);
  RtlInitializeSid(v70, (PSID_IDENTIFIER_AUTHORITY)&v40, 2u);
  RtlInitializeSid(v71, (PSID_IDENTIFIER_AUTHORITY)&v40, 2u);
  v17 = v45;
  v18 = IdentifierAuthority;
  v81[2] = 1;
  v83[2] = 2;
  *((_DWORD *)Sid + 2) = 3;
  *((_DWORD *)v56 + 2) = 4;
  *((_DWORD *)v55 + 2) = 6;
  *((_DWORD *)v54 + 2) = 10;
  *((_DWORD *)v53 + 2) = 18;
  *((_DWORD *)v52 + 2) = 11;
  *((_DWORD *)v51 + 2) = 12;
  *((_DWORD *)v50 + 2) = 7;
  *((_DWORD *)v49 + 2) = 19;
  *((_DWORD *)v48 + 2) = 20;
  *(_DWORD *)(v46 + 8) = 17;
  v19 = v41;
  *(_DWORD *)(v17 + 8) = 32;
  *(_DWORD *)(v18 + 8) = 32;
  *(_DWORD *)(v19 + 8) = 32;
  v10[2] = 32;
  v11[2] = 32;
  v12[2] = 32;
  v13[2] = 32;
  v14[2] = 32;
  v20 = CapabilitySid;
  *(_DWORD *)(v17 + 12) = 544;
  v21 = CapabilityGroupSid;
  *(_DWORD *)(v18 + 12) = 545;
  *(_DWORD *)(v19 + 12) = 546;
  v22 = v62;
  v10[3] = 547;
  v11[3] = 548;
  v12[3] = 549;
  v13[3] = 550;
  v14[3] = 551;
  v22[2] = 0;
  *((_DWORD *)v57 + 2) = 4096;
  *((_DWORD *)v58 + 2) = 0x2000;
  *((_DWORD *)v59 + 2) = 12288;
  *((_DWORD *)v60 + 2) = 0x4000;
  *((_DWORD *)v61 + 2) = 2;
  v38[2] = 3;
  v15[2] = 2;
  v15[3] = 1;
  v16[2] = 2;
  v16[3] = 2;
  if ( RtlDeriveCapabilitySidsFromName(&UnicodeString, v21, v20) < 0 )
    return 0;
  v23 = SeDefaultAccountAliasSid;
  *(_DWORD *)(SeUserModeDriversSid + 8) = 84;
  *(_QWORD *)(SeProcTrustNoneSid + 8) = 0LL;
  v24 = SeProcTrustWinTcbSid;
  *((_DWORD *)SeProcTrustWinTcbSid + 2) = 1024;
  v24[3] = 0x2000;
  v25 = SeProcTrustWinSid;
  *(_DWORD *)(SeProcTrustWinSid + 8) = 1024;
  *(_DWORD *)(v25 + 12) = 4096;
  v26 = SeProcTrustAuthenticodeSid;
  *(_DWORD *)(SeProcTrustAuthenticodeSid + 8) = 1024;
  *(_DWORD *)(v26 + 12) = 1024;
  v27 = SeProcTrustLiteAntimalwareSid;
  *(_DWORD *)(SeProcTrustLiteAntimalwareSid + 8) = 512;
  *(_DWORD *)(v27 + 12) = 1536;
  v28 = SeProcTrustLiteWinTcbSid;
  *(_DWORD *)(SeProcTrustLiteWinTcbSid + 8) = 512;
  *(_DWORD *)(v28 + 12) = 0x2000;
  v29 = SeProcTrustLiteWinSid;
  *(_DWORD *)(SeProcTrustLiteWinSid + 8) = 512;
  *(_DWORD *)(v29 + 12) = 4096;
  v30 = SeProcTrustLiteAppSid;
  *(_DWORD *)(SeProcTrustLiteAppSid + 8) = 512;
  *(_DWORD *)(v30 + 12) = 2048;
  v31 = SeTrustedInstallerSid;
  *((_DWORD *)SeTrustedInstallerSid + 2) = 80;
  v31[3] = 956008885;
  v31[4] = -876444647;
  v31[5] = 1831038044;
  v31[6] = 1853292631;
  v31[7] = -2023488832;
  RtlInitializeSid(v23, (PSID_IDENTIFIER_AUTHORITY)&v39, 2u);
  v32 = SeConstrainedImpersonationCapabilitySid;
  v33 = SeConstrainedImpersonationCapabilityGroupSid;
  v23[2] = 32;
  v23[3] = 581;
  if ( RtlDeriveCapabilitySidsFromName(&v75, v33, v32) < 0
    || RtlDeriveCapabilitySidsFromName(
         &v76,
         SeSessionImpersonationCapabilityGroupSid,
         SeSessionImpersonationCapabilitySid) < 0 )
  {
    return 0;
  }
  SepInitSystemDacls();
  SeCreateTokenPrivilege = (LUID)2LL;
  SeAssignPrimaryTokenPrivilege = (LUID)3LL;
  SeLockMemoryPrivilege = (LUID)4LL;
  SeIncreaseQuotaPrivilege = (LUID)5LL;
  v46 = 6LL;
  SeUnsolicitedInputPrivilege = 6LL;
  v45 = 7LL;
  SeTcbPrivilege = (LUID)7LL;
  IdentifierAuthority = 8LL;
  SeSecurityPrivilege = (LUID)8LL;
  v43 = 9LL;
  SeTakeOwnershipPrivilege = 9LL;
  v42 = 10LL;
  SeLoadDriverPrivilege = (LUID)10LL;
  v41 = 15LL;
  SeCreatePagefilePrivilege = (LUID)15LL;
  v40 = 14LL;
  SeIncreaseBasePriorityPrivilege = (LUID)14LL;
  v39 = 11LL;
  SeSystemProfilePrivilege = (LUID)11LL;
  v48 = (PSID)12;
  SeSystemtimePrivilege = (LUID)12LL;
  v49 = (PSID)13;
  SeProfileSingleProcessPrivilege = (LUID)13LL;
  v50 = (PSID)16;
  SeCreatePermanentPrivilege = (LUID)16LL;
  v51 = (PSID)17;
  SeBackupPrivilege = (LUID)17LL;
  v52 = (PSID)18;
  SeRestorePrivilege = (LUID)18LL;
  v53 = (PSID)19;
  SeShutdownPrivilege = (LUID)19LL;
  v54 = (PSID)20;
  SeDebugPrivilege = (LUID)20LL;
  v55 = (PSID)21;
  SeAuditPrivilege = 21LL;
  v56 = (PSID)22;
  Sid = (PSID)23;
  SeSystemEnvironmentPrivilege = (LUID)22LL;
  SeChangeNotifyPrivilege = 23LL;
  SeRemoteShutdownPrivilege = 24LL;
  SeUndockPrivilege = 25LL;
  SeSyncAgentPrivilege = 26LL;
  SeEnableDelegationPrivilege = 27LL;
  qword_140862B98 = (__int64)SeNullSid;
  qword_140862BA0 = (__int64)SeWorldSid;
  qword_140862BA8 = (__int64)SeLocalSid;
  qword_140862BB0 = (__int64)SeCreatorOwnerSid;
  qword_140862BB8 = (__int64)SeCreatorGroupSid;
  qword_140862CE0 = (__int64)SeOwnerRightsSid;
  qword_140862BC0 = (__int64)SeNtAuthoritySid;
  qword_140862BC8 = SeDialupSid;
  qword_140862BD0 = SeNetworkSid;
  qword_140862BD8 = SeBatchSid;
  qword_140862BE0 = (__int64)SeInteractiveSid;
  qword_140862BE8 = (__int64)SeLocalSystemSid;
  qword_140862C30 = SeAuthenticatedUsersSid;
  qword_140862C38 = (__int64)SeRestrictedSid;
  qword_140862C40 = (__int64)SeAnonymousLogonSid;
  qword_140862C60 = (__int64)SeLocalServiceSid;
  qword_140862C68 = (__int64)SeNetworkServiceSid;
  qword_140862CB0 = (__int64)SeIUserSid;
  qword_140862BF0 = (__int64)SeAliasAdminsSid;
  qword_140862BF8 = (__int64)SeAliasUsersSid;
  qword_140862C00 = SeAliasGuestsSid;
  qword_140862C08 = (__int64)SeAliasPowerUsersSid;
  qword_140862C10 = (__int64)SeAliasAccountOpsSid;
  qword_140862C18 = (__int64)SeAliasSystemOpsSid;
  qword_140862C20 = (__int64)SeAliasPrintOpsSid;
  qword_140862C28 = (__int64)SeAliasBackupOpsSid;
  qword_140862CB8 = (__int64)SeUntrustedMandatorySid;
  SeManageVolumePrivilege = 28LL;
  SeImpersonatePrivilege = 29LL;
  SeCreateGlobalPrivilege = (LUID)30LL;
  SeTrustedCredManAccessPrivilege = 31LL;
  SeRelabelPrivilege = 32LL;
  SeIncreaseWorkingSetPrivilege = 33LL;
  SeTimeZonePrivilege = (LUID)34LL;
  SeCreateSymbolicLinkPrivilege = 35LL;
  SeDelegateSessionUserImpersonatePrivilege = 36LL;
  qword_140862CC0 = *(_QWORD *)&SeLowMandatorySid;
  qword_140862CC8 = (__int64)SeMediumMandatorySid;
  qword_140862CD0 = (__int64)SeHighMandatorySid;
  qword_140862CD8 = SeSystemMandatorySid;
  qword_140862CE8 = (__int64)SeAllAppPackagesSid;
  qword_140862CF0 = SeUserModeDriversSid;
  qword_140862CF8 = (__int64)SeProcTrustWinTcbSid;
  qword_140862D00 = (__int64)SeTrustedInstallerSid;
  SepExports = 2LL;
  qword_140862AE8 = 3LL;
  qword_140862AF0 = 4LL;
  qword_140862AF8 = 5LL;
  qword_140862B00 = 6LL;
  qword_140862B08 = 7LL;
  qword_140862B10 = 8LL;
  qword_140862B18 = 9LL;
  qword_140862B20 = 10LL;
  qword_140862B28 = 15LL;
  qword_140862B30 = 14LL;
  qword_140862B38 = 11LL;
  qword_140862B40 = 12LL;
  qword_140862B48 = 13LL;
  qword_140862B50 = 16LL;
  qword_140862B58 = 17LL;
  qword_140862B60 = 18LL;
  qword_140862B68 = 19LL;
  qword_140862B70 = 20LL;
  qword_140862B78 = 21LL;
  qword_140862D08 = 36LL;
  qword_140862B80 = 22LL;
  qword_140862C78 = 29LL;
  qword_140862CA8 = 35LL;
  v34 = 5LL;
  SeExports = (PSE_EXPORTS)&SepExports;
  v35 = (char *)&unk_1403ACA78;
  qword_140862B88 = 23LL;
  qword_140862B90 = 24LL;
  qword_140862C48 = 25LL;
  qword_140862C50 = 26LL;
  qword_140862C58 = 27LL;
  qword_140862C70 = 28LL;
  qword_140862C80 = 30LL;
  qword_140862C88 = 31LL;
  qword_140862C90 = 32LL;
  qword_140862C98 = 33LL;
  qword_140862CA0 = 34LL;
  do
  {
    v35[8] = 0;
    *(_QWORD *)v35 = 0LL;
    *((_QWORD *)v35 - 3) = 0LL;
    v35 += 40;
    --v34;
  }
  while ( v34 );
  LowboxSessionMapLock = 0LL;
  g_SessionLowboxMap = 0LL;
  return (int)SepInitializeSharedSidMap() >= 0;
}
