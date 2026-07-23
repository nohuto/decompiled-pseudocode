/*
 * XREFs of SepVariableInitialization @ 0x14084BA80
 * Callers:
 *     SepInitializationPhase0 @ 0x14084AA68 (SepInitializationPhase0.c)
 * Callees:
 *     RtlDeriveCapabilitySidsFromName @ 0x1400FA7B0 (RtlDeriveCapabilitySidsFromName.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlLengthRequiredSid @ 0x14045C500 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x1405491E0 (RtlInitializeSid.c)
 *     SepInitializeSharedSidMap @ 0x1405D8AC0 (SepInitializeSharedSidMap.c)
 *     SepInitSystemDacls @ 0x14084D144 (SepInitSystemDacls.c)
 */

bool SepVariableInitialization()
{
  int v0; // eax
  ULONG v1; // edi
  _DWORD *PoolWithTag; // rbx
  _DWORD *v3; // r14
  _DWORD *v4; // r15
  _DWORD *v5; // r13
  _DWORD *v6; // r12
  _DWORD *v7; // rsi
  _DWORD *v8; // rax
  ULONG v9; // eax
  ULONG v10; // ebx
  ULONG v11; // edi
  ULONG v12; // esi
  ULONG v13; // ebx
  _DWORD *v14; // r12
  _DWORD *v15; // r13
  _DWORD *v16; // r15
  _DWORD *v17; // r14
  _DWORD *v18; // rsi
  _DWORD *v19; // rdi
  _DWORD *v20; // rbx
  _DWORD *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  PSID v24; // r8
  PSID v25; // rdx
  __int64 v26; // rax
  _DWORD *v27; // rbx
  _DWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  _DWORD *v34; // rax
  PSID v35; // r8
  PSID v36; // rdx
  __int64 v37; // rcx
  char *v38; // rax
  _DWORD *v40; // [rsp+20h] [rbp-E0h]
  _DWORD *v41; // [rsp+20h] [rbp-E0h]
  __int64 v42; // [rsp+28h] [rbp-D8h] BYREF
  __int64 IdentifierAuthority; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v44; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+40h] [rbp-C0h] BYREF
  PSID Sid; // [rsp+48h] [rbp-B8h]
  PSID v47; // [rsp+50h] [rbp-B0h]
  PSID v48; // [rsp+58h] [rbp-A8h]
  PSID v49; // [rsp+60h] [rbp-A0h]
  PSID v50; // [rsp+68h] [rbp-98h]
  PSID v51; // [rsp+70h] [rbp-90h]
  PSID v52; // [rsp+78h] [rbp-88h]
  PSID v53; // [rsp+80h] [rbp-80h]
  PSID v54; // [rsp+88h] [rbp-78h]
  PSID v55; // [rsp+90h] [rbp-70h]
  PSID v56; // [rsp+98h] [rbp-68h]
  PSID v57; // [rsp+A0h] [rbp-60h]
  PSID v58; // [rsp+A8h] [rbp-58h]
  PSID v59; // [rsp+B0h] [rbp-50h]
  PSID v60; // [rsp+B8h] [rbp-48h]
  PSID v61; // [rsp+C0h] [rbp-40h]
  PSID v62; // [rsp+C8h] [rbp-38h]
  PSID v63; // [rsp+D0h] [rbp-30h]
  PSID v64; // [rsp+D8h] [rbp-28h]
  PSID v65; // [rsp+E0h] [rbp-20h]
  size_t Size; // [rsp+E8h] [rbp-18h]
  PSID v67; // [rsp+F0h] [rbp-10h]
  PSID v68; // [rsp+F8h] [rbp-8h]
  PSID v69; // [rsp+100h] [rbp+0h]
  PSID v70; // [rsp+108h] [rbp+8h]
  PSID v71; // [rsp+110h] [rbp+10h]
  PSID v72; // [rsp+118h] [rbp+18h]
  PSID v73; // [rsp+120h] [rbp+20h]
  PSID CapabilitySid; // [rsp+128h] [rbp+28h]
  PSID CapabilityGroupSid; // [rsp+130h] [rbp+30h]
  UNICODE_STRING UnicodeString; // [rsp+138h] [rbp+38h] BYREF
  UNICODE_STRING v77; // [rsp+148h] [rbp+48h] BYREF
  UNICODE_STRING v78; // [rsp+158h] [rbp+58h] BYREF
  __int64 v79; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v80; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v81; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v82; // [rsp+1D8h] [rbp+D8h] BYREF

  *(_DWORD *)&UnicodeString.Length = 1703960;
  UnicodeString.Buffer = L"registryRead";
  v78.Buffer = L"sessionImpersonation";
  v77.Buffer = L"constrainedImpersonation";
  LODWORD(IdentifierAuthority) = 0;
  WORD2(IdentifierAuthority) = 0;
  LODWORD(v44) = 0;
  WORD2(v44) = 256;
  LODWORD(v45) = 0;
  WORD2(v45) = 512;
  LODWORD(v81) = 0;
  WORD2(v81) = 768;
  LODWORD(v79) = 0;
  WORD2(v79) = 1280;
  LODWORD(v82) = 0;
  WORD2(v82) = 4096;
  LODWORD(v42) = 0;
  WORD2(v42) = 3840;
  LODWORD(v80) = 0;
  WORD2(v80) = 4864;
  *(_DWORD *)&v78.Length = 2752552;
  *(_DWORD *)&v77.Length = 3276848;
  v0 = *(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 116LL);
  if ( (v0 & 0x40) != 0 || MEMORY[0xFFFFF78000000264] != 1 || MEMORY[0xFFFFF780000002E8] > 0x83400u )
  {
    SepTokenSidSharingEnabled = 0;
    SepTokenCapabilitySidSharingEnabled = 0;
  }
  else
  {
    SepTokenSidSharingEnabled = 1;
    SepTokenCapabilitySidSharingEnabled = 1;
  }
  SepOsLoaderTpmDriverLoaded = (v0 & 0x80) != 0;
  v1 = RtlLengthRequiredSid(1u);
  SeNullSid = ExAllocatePoolWithTag((POOL_TYPE)17, v1, 0x69536553u);
  SeCreatorOwnerSid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeCreatorGroupSid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeCreatorOwnerServerSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeCreatorGroupServerSid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeWorldSid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeLocalSid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeOwnerRightsSid = PoolWithTag;
  v40 = SeNullSid;
  if ( !SeNullSid )
    return 0;
  v3 = SeWorldSid;
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
  Sid = (PSID)SeCreatorOwnerServerSid;
  if ( !SeCreatorOwnerServerSid )
    return 0;
  if ( !PoolWithTag )
    return 0;
  v7 = SeCreatorGroupServerSid;
  if ( !SeCreatorGroupServerSid )
    return 0;
  RtlInitializeSid(SeNullSid, (PSID_IDENTIFIER_AUTHORITY)&IdentifierAuthority, 1u);
  RtlInitializeSid(v3, (PSID_IDENTIFIER_AUTHORITY)&v44, 1u);
  RtlInitializeSid(v4, (PSID_IDENTIFIER_AUTHORITY)&v45, 1u);
  RtlInitializeSid(v5, (PSID_IDENTIFIER_AUTHORITY)&v81, 1u);
  RtlInitializeSid(v6, (PSID_IDENTIFIER_AUTHORITY)&v81, 1u);
  RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&v81, 1u);
  RtlInitializeSid(v7, (PSID_IDENTIFIER_AUTHORITY)&v81, 1u);
  RtlInitializeSid(PoolWithTag, (PSID_IDENTIFIER_AUTHORITY)&v81, 1u);
  v40[2] = 0;
  v8 = Sid;
  v3[2] = 0;
  v4[2] = 0;
  v5[2] = 0;
  v6[2] = 1;
  v8[2] = 2;
  v7[2] = 3;
  PoolWithTag[2] = 4;
  v9 = RtlLengthRequiredSid(0);
  SeNtAuthoritySid = ExAllocatePoolWithTag((POOL_TYPE)17, v9, 0x69536553u);
  SeDialupSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)17, v1, 0x69536553u);
  SeNetworkSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeBatchSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeInteractiveSid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SePrincipalSelfSid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeServiceSid = ExAllocatePoolWithTag((POOL_TYPE)17, v1, 0x69536553u);
  SeLocalSystemSid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeAuthenticatedUsersSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)17, v1, 0x69536553u);
  SeRestrictedSid = ExAllocatePoolWithTag((POOL_TYPE)17, v1, 0x69536553u);
  SeAnonymousLogonSid = ExAllocatePoolWithTag((POOL_TYPE)17, v1, 0x69536553u);
  SeLocalServiceSid = ExAllocatePoolWithTag((POOL_TYPE)17, v1, 0x69536553u);
  SeNetworkServiceSid = ExAllocatePoolWithTag((POOL_TYPE)17, v1, 0x69536553u);
  SeIUserSid = ExAllocatePoolWithTag((POOL_TYPE)17, v1, 0x69536553u);
  v10 = RtlLengthRequiredSid(2u);
  SeAliasAdminsSid = ExAllocatePoolWithTag((POOL_TYPE)17, v10, 0x69536553u);
  SeAliasUsersSid = ExAllocatePoolWithTag((POOL_TYPE)17, v10, 0x69536553u);
  SeAliasGuestsSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)17, v10, 0x69536553u);
  SeAliasPowerUsersSid = ExAllocatePoolWithTag((POOL_TYPE)17, v10, 0x69536553u);
  SeAliasAccountOpsSid = ExAllocatePoolWithTag((POOL_TYPE)17, v10, 0x69536553u);
  SeAliasSystemOpsSid = ExAllocatePoolWithTag((POOL_TYPE)17, v10, 0x69536553u);
  SeAliasPrintOpsSid = ExAllocatePoolWithTag((POOL_TYPE)17, v10, 0x69536553u);
  SeAliasBackupOpsSid = ExAllocatePoolWithTag((POOL_TYPE)17, v10, 0x69536553u);
  SeUntrustedMandatorySid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  *(_QWORD *)&SeLowMandatorySid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeMediumMandatorySid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeHighMandatorySid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeSystemMandatorySid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SePackagePrefixSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeCapabilityPrefixSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeAllAppPackagesSid = ExAllocatePoolWithTag((POOL_TYPE)528, v10, 0x69536553u);
  SeAllRestrictedAppPackagesSid = ExAllocatePoolWithTag((POOL_TYPE)528, v10, 0x69536553u);
  v11 = RtlLengthRequiredSid(0xAu);
  SeRegistryReadCapabilitySid = ExAllocatePoolWithTag((POOL_TYPE)17, v11, 0x69536553u);
  v12 = RtlLengthRequiredSid(6u);
  Size = v12;
  SeUserModeDriversSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v12, 0x69536553u);
  SeTrustedInstallerSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v12, 0x69536553u);
  SeProcTrustWinTcbSid = ExAllocatePoolWithTag((POOL_TYPE)528, v10, 0x69536553u);
  SeProcTrustWinSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v10, 0x69536553u);
  SeProcTrustAuthenticodeSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v10, 0x69536553u);
  SeProcTrustLiteWinTcbSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v10, 0x69536553u);
  SeProcTrustLiteWinSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v10, 0x69536553u);
  SeProcTrustLiteAppSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v10, 0x69536553u);
  SeProcTrustNoneSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v10, 0x69536553u);
  SeDefaultAccountAliasSid = ExAllocatePoolWithTag((POOL_TYPE)17, v10, 0x69536553u);
  v13 = RtlLengthRequiredSid(9u);
  SeConstrainedImpersonationCapabilityGroupSid = ExAllocatePoolWithTag((POOL_TYPE)17, v13, 0x69536553u);
  SeConstrainedImpersonationCapabilitySid = ExAllocatePoolWithTag((POOL_TYPE)17, v11, 0x69536553u);
  SeSessionImpersonationCapabilityGroupSid = ExAllocatePoolWithTag((POOL_TYPE)17, v13, 0x69536553u);
  SeSessionImpersonationCapabilitySid = ExAllocatePoolWithTag((POOL_TYPE)17, v11, 0x69536553u);
  if ( !SeNtAuthoritySid )
    return 0;
  Sid = (PSID)SeDialupSid;
  if ( !SeDialupSid )
    return 0;
  v59 = (PSID)SeNetworkSid;
  if ( !SeNetworkSid )
    return 0;
  v58 = (PSID)SeBatchSid;
  if ( !SeBatchSid )
    return 0;
  v57 = SeInteractiveSid;
  if ( !SeInteractiveSid )
    return 0;
  v56 = SeServiceSid;
  if ( !SeServiceSid )
    return 0;
  v55 = SePrincipalSelfSid;
  if ( !SePrincipalSelfSid )
    return 0;
  v54 = SeLocalSystemSid;
  if ( !SeLocalSystemSid )
    return 0;
  v53 = (PSID)SeAuthenticatedUsersSid;
  if ( !SeAuthenticatedUsersSid )
    return 0;
  v52 = SeRestrictedSid;
  if ( !SeRestrictedSid )
    return 0;
  v51 = SeAnonymousLogonSid;
  if ( !SeAnonymousLogonSid )
    return 0;
  v50 = SeLocalServiceSid;
  if ( !SeLocalServiceSid )
    return 0;
  v49 = SeNetworkServiceSid;
  if ( !SeNetworkServiceSid )
    return 0;
  v48 = SeIUserSid;
  if ( !SeIUserSid )
    return 0;
  v47 = SeAliasAdminsSid;
  if ( !SeAliasAdminsSid )
    return 0;
  v45 = (__int64)SeAliasUsersSid;
  if ( !SeAliasUsersSid )
    return 0;
  v44 = SeAliasGuestsSid;
  if ( !SeAliasGuestsSid )
    return 0;
  v14 = SeAliasPowerUsersSid;
  if ( !SeAliasPowerUsersSid )
    return 0;
  v15 = SeAliasAccountOpsSid;
  if ( !SeAliasAccountOpsSid )
    return 0;
  v16 = SeAliasSystemOpsSid;
  if ( !SeAliasSystemOpsSid )
    return 0;
  v17 = SeAliasPrintOpsSid;
  if ( !SeAliasPrintOpsSid )
    return 0;
  v18 = SeAliasBackupOpsSid;
  if ( !SeAliasBackupOpsSid )
    return 0;
  IdentifierAuthority = (__int64)SeUntrustedMandatorySid;
  if ( !SeUntrustedMandatorySid )
    return 0;
  v64 = *(PSID *)&SeLowMandatorySid;
  if ( !*(_QWORD *)&SeLowMandatorySid )
    return 0;
  v60 = SeMediumMandatorySid;
  if ( !SeMediumMandatorySid )
    return 0;
  v61 = SeHighMandatorySid;
  if ( !SeHighMandatorySid )
    return 0;
  v62 = (PSID)SeSystemMandatorySid;
  if ( !SeSystemMandatorySid )
    return 0;
  v63 = (PSID)SePackagePrefixSid;
  if ( !SePackagePrefixSid )
    return 0;
  v41 = (_DWORD *)SeCapabilityPrefixSid;
  if ( !SeCapabilityPrefixSid )
    return 0;
  v19 = SeAllAppPackagesSid;
  if ( !SeAllAppPackagesSid )
    return 0;
  v20 = SeAllRestrictedAppPackagesSid;
  if ( !SeAllRestrictedAppPackagesSid )
    return 0;
  CapabilitySid = SeRegistryReadCapabilitySid;
  if ( !SeRegistryReadCapabilitySid )
    return 0;
  v81 = SeUserModeDriversSid;
  if ( !SeUserModeDriversSid )
    return 0;
  v68 = SeProcTrustWinTcbSid;
  if ( !SeProcTrustWinTcbSid )
    return 0;
  v69 = (PSID)SeProcTrustWinSid;
  if ( !SeProcTrustWinSid )
    return 0;
  v70 = (PSID)SeProcTrustAuthenticodeSid;
  if ( !SeProcTrustAuthenticodeSid )
    return 0;
  v71 = (PSID)SeProcTrustLiteWinTcbSid;
  if ( !SeProcTrustLiteWinTcbSid )
    return 0;
  v72 = (PSID)SeProcTrustLiteWinSid;
  if ( !SeProcTrustLiteWinSid )
    return 0;
  v73 = (PSID)SeProcTrustLiteAppSid;
  if ( !SeProcTrustLiteAppSid )
    return 0;
  v67 = (PSID)SeProcTrustNoneSid;
  if ( !SeProcTrustNoneSid )
    return 0;
  v65 = (PSID)SeTrustedInstallerSid;
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
  RtlInitializeSid(SeNtAuthoritySid, (PSID_IDENTIFIER_AUTHORITY)&v79, 0);
  RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&v79, 1u);
  RtlInitializeSid(v59, (PSID_IDENTIFIER_AUTHORITY)&v79, 1u);
  RtlInitializeSid(v58, (PSID_IDENTIFIER_AUTHORITY)&v79, 1u);
  RtlInitializeSid(v57, (PSID_IDENTIFIER_AUTHORITY)&v79, 1u);
  RtlInitializeSid(v56, (PSID_IDENTIFIER_AUTHORITY)&v79, 1u);
  RtlInitializeSid(v55, (PSID_IDENTIFIER_AUTHORITY)&v79, 1u);
  RtlInitializeSid(v54, (PSID_IDENTIFIER_AUTHORITY)&v79, 1u);
  RtlInitializeSid(v53, (PSID_IDENTIFIER_AUTHORITY)&v79, 1u);
  RtlInitializeSid(v52, (PSID_IDENTIFIER_AUTHORITY)&v79, 1u);
  RtlInitializeSid(v51, (PSID_IDENTIFIER_AUTHORITY)&v79, 1u);
  RtlInitializeSid(v50, (PSID_IDENTIFIER_AUTHORITY)&v79, 1u);
  RtlInitializeSid(v49, (PSID_IDENTIFIER_AUTHORITY)&v79, 1u);
  RtlInitializeSid(v48, (PSID_IDENTIFIER_AUTHORITY)&v79, 1u);
  RtlInitializeSid(v47, (PSID_IDENTIFIER_AUTHORITY)&v79, 2u);
  RtlInitializeSid((PSID)v45, (PSID_IDENTIFIER_AUTHORITY)&v79, 2u);
  RtlInitializeSid((PSID)v44, (PSID_IDENTIFIER_AUTHORITY)&v79, 2u);
  RtlInitializeSid(v14, (PSID_IDENTIFIER_AUTHORITY)&v79, 2u);
  RtlInitializeSid(v15, (PSID_IDENTIFIER_AUTHORITY)&v79, 2u);
  RtlInitializeSid(v16, (PSID_IDENTIFIER_AUTHORITY)&v79, 2u);
  RtlInitializeSid(v17, (PSID_IDENTIFIER_AUTHORITY)&v79, 2u);
  RtlInitializeSid(v18, (PSID_IDENTIFIER_AUTHORITY)&v79, 2u);
  RtlInitializeSid(v65, (PSID_IDENTIFIER_AUTHORITY)&v79, 6u);
  RtlInitializeSid((PSID)IdentifierAuthority, (PSID_IDENTIFIER_AUTHORITY)&v82, 1u);
  RtlInitializeSid(v64, (PSID_IDENTIFIER_AUTHORITY)&v82, 1u);
  RtlInitializeSid(v60, (PSID_IDENTIFIER_AUTHORITY)&v82, 1u);
  RtlInitializeSid(v61, (PSID_IDENTIFIER_AUTHORITY)&v82, 1u);
  RtlInitializeSid(v62, (PSID_IDENTIFIER_AUTHORITY)&v82, 1u);
  RtlInitializeSid(v63, (PSID_IDENTIFIER_AUTHORITY)&v42, 1u);
  RtlInitializeSid(v41, (PSID_IDENTIFIER_AUTHORITY)&v42, 1u);
  RtlInitializeSid(v19, (PSID_IDENTIFIER_AUTHORITY)&v42, 2u);
  RtlInitializeSid(v20, (PSID_IDENTIFIER_AUTHORITY)&v42, 2u);
  memset((void *)v81, 0, Size);
  RtlInitializeSid((PSID)v81, (PSID_IDENTIFIER_AUTHORITY)&v79, 6u);
  RtlInitializeSid(v67, (PSID_IDENTIFIER_AUTHORITY)&v80, 2u);
  RtlInitializeSid(v68, (PSID_IDENTIFIER_AUTHORITY)&v80, 2u);
  RtlInitializeSid(v69, (PSID_IDENTIFIER_AUTHORITY)&v80, 2u);
  RtlInitializeSid(v70, (PSID_IDENTIFIER_AUTHORITY)&v80, 2u);
  RtlInitializeSid(v71, (PSID_IDENTIFIER_AUTHORITY)&v80, 2u);
  RtlInitializeSid(v72, (PSID_IDENTIFIER_AUTHORITY)&v80, 2u);
  RtlInitializeSid(v73, (PSID_IDENTIFIER_AUTHORITY)&v80, 2u);
  v21 = v47;
  v22 = v45;
  *((_DWORD *)Sid + 2) = 1;
  *((_DWORD *)v59 + 2) = 2;
  *((_DWORD *)v58 + 2) = 3;
  *((_DWORD *)v57 + 2) = 4;
  *((_DWORD *)v56 + 2) = 6;
  *((_DWORD *)v55 + 2) = 10;
  *((_DWORD *)v54 + 2) = 18;
  *((_DWORD *)v53 + 2) = 11;
  *((_DWORD *)v52 + 2) = 12;
  *((_DWORD *)v51 + 2) = 7;
  *((_DWORD *)v50 + 2) = 19;
  *((_DWORD *)v49 + 2) = 20;
  *((_DWORD *)v48 + 2) = 17;
  v23 = v44;
  v21[2] = 32;
  *(_DWORD *)(v22 + 8) = 32;
  *(_DWORD *)(v23 + 8) = 32;
  v14[2] = 32;
  v15[2] = 32;
  v16[2] = 32;
  v17[2] = 32;
  v18[2] = 32;
  v24 = CapabilitySid;
  v21[3] = 544;
  v25 = CapabilityGroupSid;
  *(_DWORD *)(v22 + 12) = 545;
  *(_DWORD *)(v23 + 12) = 546;
  v26 = IdentifierAuthority;
  v14[3] = 547;
  v15[3] = 548;
  v16[3] = 549;
  v17[3] = 550;
  v18[3] = 551;
  *(_DWORD *)(v26 + 8) = 0;
  *((_DWORD *)v64 + 2) = 4096;
  *((_DWORD *)v60 + 2) = 0x2000;
  *((_DWORD *)v61 + 2) = 12288;
  *((_DWORD *)v62 + 2) = 0x4000;
  *((_DWORD *)v63 + 2) = 2;
  v41[2] = 3;
  v19[2] = 2;
  v19[3] = 1;
  v20[2] = 2;
  v20[3] = 2;
  if ( RtlDeriveCapabilitySidsFromName(&UnicodeString, v25, v24) < 0 )
    return 0;
  v27 = SeDefaultAccountAliasSid;
  *(_DWORD *)(SeUserModeDriversSid + 8) = 84;
  *(_QWORD *)(SeProcTrustNoneSid + 8) = 0LL;
  v28 = SeProcTrustWinTcbSid;
  *((_DWORD *)SeProcTrustWinTcbSid + 2) = 1024;
  v28[3] = 0x2000;
  v29 = SeProcTrustWinSid;
  *(_DWORD *)(SeProcTrustWinSid + 8) = 1024;
  *(_DWORD *)(v29 + 12) = 4096;
  v30 = SeProcTrustAuthenticodeSid;
  *(_DWORD *)(SeProcTrustAuthenticodeSid + 8) = 1024;
  *(_DWORD *)(v30 + 12) = 1024;
  v31 = SeProcTrustLiteWinTcbSid;
  *(_DWORD *)(SeProcTrustLiteWinTcbSid + 8) = 512;
  *(_DWORD *)(v31 + 12) = 0x2000;
  v32 = SeProcTrustLiteWinSid;
  *(_DWORD *)(SeProcTrustLiteWinSid + 8) = 512;
  *(_DWORD *)(v32 + 12) = 4096;
  v33 = SeProcTrustLiteAppSid;
  *(_DWORD *)(SeProcTrustLiteAppSid + 8) = 512;
  *(_DWORD *)(v33 + 12) = 2048;
  v34 = (_DWORD *)SeTrustedInstallerSid;
  *(_DWORD *)(SeTrustedInstallerSid + 8) = 80;
  v34[3] = 956008885;
  v34[4] = -876444647;
  v34[5] = 1831038044;
  v34[6] = 1853292631;
  v34[7] = -2023488832;
  RtlInitializeSid(v27, (PSID_IDENTIFIER_AUTHORITY)&v79, 2u);
  v35 = SeConstrainedImpersonationCapabilitySid;
  v36 = SeConstrainedImpersonationCapabilityGroupSid;
  v27[2] = 32;
  v27[3] = 581;
  if ( RtlDeriveCapabilitySidsFromName(&v77, v36, v35) < 0
    || RtlDeriveCapabilitySidsFromName(
         &v78,
         SeSessionImpersonationCapabilityGroupSid,
         SeSessionImpersonationCapabilitySid) < 0 )
  {
    return 0;
  }
  SepInitSystemDacls();
  v80 = 3LL;
  SeCreateTokenPrivilege = (LUID)2LL;
  SeAssignPrimaryTokenPrivilege = (LUID)3LL;
  v81 = 4LL;
  SeLockMemoryPrivilege = (LUID)4LL;
  v82 = 5LL;
  SeIncreaseQuotaPrivilege = (LUID)5LL;
  v45 = 6LL;
  SeUnsolicitedInputPrivilege = 6LL;
  v44 = 7LL;
  SeTcbPrivilege = (LUID)7LL;
  IdentifierAuthority = 8LL;
  SeSecurityPrivilege = (LUID)8LL;
  v42 = 9LL;
  SeTakeOwnershipPrivilege = 9LL;
  v47 = (PSID)10;
  SeLoadDriverPrivilege = (LUID)10LL;
  v48 = (PSID)15;
  SeCreatePagefilePrivilege = (LUID)15LL;
  v49 = (PSID)14;
  SeIncreaseBasePriorityPrivilege = (LUID)14LL;
  v50 = (PSID)11;
  SeSystemProfilePrivilege = (LUID)11LL;
  v51 = (PSID)12;
  SeSystemtimePrivilege = (LUID)12LL;
  v52 = (PSID)13;
  SeProfileSingleProcessPrivilege = (LUID)13LL;
  v53 = (PSID)16;
  SeCreatePermanentPrivilege = (LUID)16LL;
  v54 = (PSID)17;
  SeBackupPrivilege = (LUID)17LL;
  v55 = (PSID)18;
  SeRestorePrivilege = (LUID)18LL;
  v56 = (PSID)19;
  SeShutdownPrivilege = (LUID)19LL;
  v57 = (PSID)20;
  SeDebugPrivilege = (LUID)20LL;
  v58 = (PSID)21;
  v79 = 2LL;
  SeAuditPrivilege = 21LL;
  v59 = (PSID)22;
  Sid = (PSID)23;
  SeSystemEnvironmentPrivilege = (LUID)22LL;
  SeChangeNotifyPrivilege = 23LL;
  SeRemoteShutdownPrivilege = 24LL;
  SeUndockPrivilege = 25LL;
  SeSyncAgentPrivilege = 26LL;
  SeEnableDelegationPrivilege = 27LL;
  qword_1407F4258 = (__int64)SeNullSid;
  qword_1407F4260 = (__int64)SeWorldSid;
  qword_1407F4268 = (__int64)SeLocalSid;
  qword_1407F4270 = (__int64)SeCreatorOwnerSid;
  qword_1407F4278 = (__int64)SeCreatorGroupSid;
  qword_1407F43A0 = (__int64)SeOwnerRightsSid;
  qword_1407F4280 = (__int64)SeNtAuthoritySid;
  qword_1407F4288 = SeDialupSid;
  qword_1407F4290 = SeNetworkSid;
  qword_1407F4298 = SeBatchSid;
  qword_1407F42A0 = (__int64)SeInteractiveSid;
  qword_1407F42A8 = (__int64)SeLocalSystemSid;
  qword_1407F42F0 = SeAuthenticatedUsersSid;
  qword_1407F42F8 = (__int64)SeRestrictedSid;
  qword_1407F4300 = (__int64)SeAnonymousLogonSid;
  qword_1407F4320 = (__int64)SeLocalServiceSid;
  qword_1407F4328 = (__int64)SeNetworkServiceSid;
  qword_1407F4370 = (__int64)SeIUserSid;
  qword_1407F42B0 = (__int64)SeAliasAdminsSid;
  qword_1407F42B8 = (__int64)SeAliasUsersSid;
  qword_1407F42C0 = SeAliasGuestsSid;
  qword_1407F42C8 = (__int64)SeAliasPowerUsersSid;
  qword_1407F42D0 = (__int64)SeAliasAccountOpsSid;
  qword_1407F42D8 = (__int64)SeAliasSystemOpsSid;
  qword_1407F42E0 = (__int64)SeAliasPrintOpsSid;
  qword_1407F42E8 = (__int64)SeAliasBackupOpsSid;
  qword_1407F4378 = (__int64)SeUntrustedMandatorySid;
  SeManageVolumePrivilege = 28LL;
  SeImpersonatePrivilege = 29LL;
  SeCreateGlobalPrivilege = (LUID)30LL;
  SeTrustedCredManAccessPrivilege = 31LL;
  SeRelabelPrivilege = (LUID)32LL;
  SeIncreaseWorkingSetPrivilege = 33LL;
  SeTimeZonePrivilege = (LUID)34LL;
  SeCreateSymbolicLinkPrivilege = 35LL;
  SeDelegateSessionUserImpersonatePrivilege = 36LL;
  qword_1407F4380 = *(_QWORD *)&SeLowMandatorySid;
  qword_1407F4388 = (__int64)SeMediumMandatorySid;
  qword_1407F4390 = (__int64)SeHighMandatorySid;
  qword_1407F4398 = SeSystemMandatorySid;
  qword_1407F43A8 = (__int64)SeAllAppPackagesSid;
  qword_1407F43B0 = SeUserModeDriversSid;
  qword_1407F43B8 = (__int64)SeProcTrustWinTcbSid;
  qword_1407F43C0 = SeTrustedInstallerSid;
  SepExports = 2LL;
  qword_1407F41A8 = 3LL;
  qword_1407F41B0 = 4LL;
  qword_1407F41B8 = 5LL;
  qword_1407F41C0 = 6LL;
  qword_1407F41C8 = 7LL;
  qword_1407F41D0 = 8LL;
  qword_1407F41D8 = 9LL;
  qword_1407F41E0 = 10LL;
  qword_1407F41E8 = 15LL;
  qword_1407F41F0 = 14LL;
  qword_1407F41F8 = 11LL;
  qword_1407F4200 = 12LL;
  qword_1407F4208 = 13LL;
  qword_1407F4210 = 16LL;
  qword_1407F4218 = 17LL;
  qword_1407F4220 = 18LL;
  qword_1407F4228 = 19LL;
  qword_1407F4230 = 20LL;
  qword_1407F4238 = 21LL;
  qword_1407F43C8 = 36LL;
  qword_1407F4240 = 22LL;
  qword_1407F4338 = 29LL;
  qword_1407F4368 = 35LL;
  v37 = 5LL;
  SeExports = (PSE_EXPORTS)&SepExports;
  v38 = (char *)&unk_1403699F8;
  qword_1407F4248 = 23LL;
  qword_1407F4250 = 24LL;
  qword_1407F4308 = 25LL;
  qword_1407F4310 = 26LL;
  qword_1407F4318 = 27LL;
  qword_1407F4330 = 28LL;
  qword_1407F4340 = 30LL;
  qword_1407F4348 = 31LL;
  qword_1407F4350 = 32LL;
  qword_1407F4358 = 33LL;
  qword_1407F4360 = 34LL;
  do
  {
    v38[8] = 0;
    *(_QWORD *)v38 = 0LL;
    *((_QWORD *)v38 - 3) = 0LL;
    v38 += 40;
    --v37;
  }
  while ( v37 );
  LowboxSessionMapLock = 0LL;
  g_SessionLowboxMap = 0LL;
  return (int)SepInitializeSharedSidMap() >= 0;
}
