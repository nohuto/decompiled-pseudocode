/*
 * XREFs of SepVariableInitialization @ 0x14081B100
 * Callers:
 *     SepInitializationPhase0 @ 0x14081A294 (SepInitializationPhase0.c)
 * Callees:
 *     RtlDeriveCapabilitySidsFromName @ 0x140067040 (RtlDeriveCapabilitySidsFromName.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     RtlLengthRequiredSid @ 0x14046EA80 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x1404A47F0 (RtlInitializeSid.c)
 *     SepInitializeSharedSidMap @ 0x1405C56F0 (SepInitializeSharedSidMap.c)
 *     SepInitSystemDacls @ 0x14081C738 (SepInitSystemDacls.c)
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
  ULONG v12; // ebx
  PVOID v13; // rdx
  _DWORD *v14; // r12
  _DWORD *v15; // r13
  _DWORD *v16; // r15
  _DWORD *v17; // r14
  _QWORD *v18; // rsi
  _DWORD *v19; // rbx
  _DWORD *v20; // rdi
  __int64 v21; // r11
  _DWORD *v22; // r9
  _DWORD *v23; // r8
  _DWORD *v24; // rdx
  __int64 v25; // r10
  _DWORD *v26; // rax
  _DWORD *v27; // rcx
  _DWORD *v28; // rax
  _DWORD *v29; // rax
  PSID v30; // r8
  PSID v31; // rdx
  __int64 v32; // rcx
  char *v33; // rax
  _DWORD *v35; // [rsp+20h] [rbp-E0h]
  _DWORD *v36; // [rsp+20h] [rbp-E0h]
  __int64 v37; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v38; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+40h] [rbp-C0h] BYREF
  __int64 IdentifierAuthority; // [rsp+48h] [rbp-B8h] BYREF
  PSID Sid; // [rsp+50h] [rbp-B0h]
  PSID v43; // [rsp+58h] [rbp-A8h]
  PSID v44; // [rsp+60h] [rbp-A0h]
  PSID v45; // [rsp+68h] [rbp-98h]
  PSID v46; // [rsp+70h] [rbp-90h]
  PSID v47; // [rsp+78h] [rbp-88h]
  PSID v48; // [rsp+80h] [rbp-80h]
  PSID v49; // [rsp+88h] [rbp-78h]
  PSID v50; // [rsp+90h] [rbp-70h]
  PSID v51; // [rsp+98h] [rbp-68h]
  PSID v52; // [rsp+A0h] [rbp-60h]
  PSID v53; // [rsp+A8h] [rbp-58h]
  PSID v54; // [rsp+B0h] [rbp-50h]
  PSID v55; // [rsp+B8h] [rbp-48h]
  PSID v56; // [rsp+C0h] [rbp-40h]
  PSID v57; // [rsp+C8h] [rbp-38h]
  PSID v58; // [rsp+D0h] [rbp-30h]
  PSID v59; // [rsp+D8h] [rbp-28h]
  PSID v60; // [rsp+E0h] [rbp-20h]
  PSID v61; // [rsp+E8h] [rbp-18h]
  PSID v62; // [rsp+F0h] [rbp-10h]
  PSID v63; // [rsp+F8h] [rbp-8h]
  PSID v64; // [rsp+100h] [rbp+0h]
  PSID v65; // [rsp+108h] [rbp+8h]
  PSID v66; // [rsp+110h] [rbp+10h]
  PSID v67; // [rsp+118h] [rbp+18h]
  PSID v68; // [rsp+120h] [rbp+20h]
  PSID CapabilitySid; // [rsp+128h] [rbp+28h]
  PSID CapabilityGroupSid; // [rsp+130h] [rbp+30h]
  UNICODE_STRING UnicodeString; // [rsp+138h] [rbp+38h] BYREF
  UNICODE_STRING v72; // [rsp+148h] [rbp+48h] BYREF
  ULONG NumberOfBytes; // [rsp+1B0h] [rbp+B0h]
  __int64 v74; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v75; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v76; // [rsp+1C8h] [rbp+C8h] BYREF

  *(_DWORD *)&v72.Length = 2752552;
  v72.Buffer = L"sessionImpersonation";
  UnicodeString.Buffer = L"constrainedImpersonation";
  LODWORD(IdentifierAuthority) = 0;
  WORD2(IdentifierAuthority) = 0;
  LODWORD(v38) = 0;
  WORD2(v38) = 256;
  LODWORD(v39) = 0;
  WORD2(v39) = 512;
  LODWORD(v76) = 0;
  WORD2(v76) = 768;
  LODWORD(v74) = 0;
  WORD2(v74) = 1280;
  LODWORD(v37) = 0;
  WORD2(v37) = 4096;
  LODWORD(v40) = 0;
  WORD2(v40) = 3840;
  LODWORD(v75) = 0;
  WORD2(v75) = 4864;
  *(_DWORD *)&UnicodeString.Length = 3276848;
  v0 = *(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 116LL);
  if ( (v0 & 0x40) != 0 || MEMORY[0xFFFFF78000000264] != 1 || MEMORY[0xFFFFF780000002E8] > 0x51400u )
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
  NumberOfBytes = RtlLengthRequiredSid(6u);
  SeNullSid = ExAllocatePoolWithTag((POOL_TYPE)17, v1, 0x69536553u);
  SeCreatorOwnerSid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeCreatorGroupSid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeCreatorOwnerServerSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeCreatorGroupServerSid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeWorldSid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeLocalSid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeOwnerRightsSid = PoolWithTag;
  v35 = SeNullSid;
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
  RtlInitializeSid(v3, (PSID_IDENTIFIER_AUTHORITY)&v38, 1u);
  RtlInitializeSid(v4, (PSID_IDENTIFIER_AUTHORITY)&v39, 1u);
  RtlInitializeSid(v5, (PSID_IDENTIFIER_AUTHORITY)&v76, 1u);
  RtlInitializeSid(v6, (PSID_IDENTIFIER_AUTHORITY)&v76, 1u);
  RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&v76, 1u);
  RtlInitializeSid(v7, (PSID_IDENTIFIER_AUTHORITY)&v76, 1u);
  RtlInitializeSid(PoolWithTag, (PSID_IDENTIFIER_AUTHORITY)&v76, 1u);
  v35[2] = 0;
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
  SeAliasPowerUsersSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)17, v10, 0x69536553u);
  SeAliasAccountOpsSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)17, v10, 0x69536553u);
  SeAliasSystemOpsSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)17, v10, 0x69536553u);
  SeAliasPrintOpsSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)17, v10, 0x69536553u);
  SeAliasBackupOpsSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)17, v10, 0x69536553u);
  SeUntrustedMandatorySid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  *(_QWORD *)&SeLowMandatorySid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeMediumMandatorySid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeHighMandatorySid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeSystemMandatorySid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SePackagePrefixSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeCapabilityPrefixSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeAllAppPackagesSid = ExAllocatePoolWithTag((POOL_TYPE)528, v10, 0x69536553u);
  SeAllRestrictedAppPackagesSid = ExAllocatePoolWithTag((POOL_TYPE)528, v10, 0x69536553u);
  SeUserModeDriversSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeTrustedInstallerSid = ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeProcTrustWinTcbSid = ExAllocatePoolWithTag((POOL_TYPE)528, v10, 0x69536553u);
  SeProcTrustWinSid = ExAllocatePoolWithTag((POOL_TYPE)528, v10, 0x69536553u);
  SeProcTrustLiteWinTcbSid = ExAllocatePoolWithTag((POOL_TYPE)528, v10, 0x69536553u);
  SeProcTrustLiteWinSid = ExAllocatePoolWithTag((POOL_TYPE)528, v10, 0x69536553u);
  SeProcTrustLiteAppSid = ExAllocatePoolWithTag((POOL_TYPE)528, v10, 0x69536553u);
  SeProcTrustNoneSid = ExAllocatePoolWithTag((POOL_TYPE)528, v10, 0x69536553u);
  SeDefaultAccountAliasSid = ExAllocatePoolWithTag((POOL_TYPE)17, v10, 0x69536553u);
  v11 = RtlLengthRequiredSid(9u);
  SeConstrainedImpersonationCapabilityGroupSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)17, v11, 0x69536553u);
  v12 = RtlLengthRequiredSid(0xAu);
  SeConstrainedImpersonationCapabilitySid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)17, v12, 0x69536553u);
  SeSessionImpersonationCapabilityGroupSid = ExAllocatePoolWithTag((POOL_TYPE)17, v11, 0x69536553u);
  v13 = ExAllocatePoolWithTag((POOL_TYPE)17, v12, 0x69536553u);
  SeSessionImpersonationCapabilitySid = v13;
  if ( !SeNtAuthoritySid )
    return 0;
  Sid = (PSID)SeDialupSid;
  if ( !SeDialupSid )
    return 0;
  v54 = (PSID)SeNetworkSid;
  if ( !SeNetworkSid )
    return 0;
  v53 = (PSID)SeBatchSid;
  if ( !SeBatchSid )
    return 0;
  v52 = SeInteractiveSid;
  if ( !SeInteractiveSid )
    return 0;
  v51 = SeServiceSid;
  if ( !SeServiceSid )
    return 0;
  v50 = SePrincipalSelfSid;
  if ( !SePrincipalSelfSid )
    return 0;
  v49 = SeLocalSystemSid;
  if ( !SeLocalSystemSid )
    return 0;
  v48 = (PSID)SeAuthenticatedUsersSid;
  if ( !SeAuthenticatedUsersSid )
    return 0;
  v47 = SeRestrictedSid;
  if ( !SeRestrictedSid )
    return 0;
  v46 = SeAnonymousLogonSid;
  if ( !SeAnonymousLogonSid )
    return 0;
  v45 = SeLocalServiceSid;
  if ( !SeLocalServiceSid )
    return 0;
  v44 = SeNetworkServiceSid;
  if ( !SeNetworkServiceSid )
    return 0;
  v43 = SeIUserSid;
  if ( !SeIUserSid )
    return 0;
  v76 = (__int64)SeAliasAdminsSid;
  if ( !SeAliasAdminsSid )
    return 0;
  v39 = (__int64)SeAliasUsersSid;
  if ( !SeAliasUsersSid )
    return 0;
  IdentifierAuthority = SeAliasGuestsSid;
  if ( !SeAliasGuestsSid )
    return 0;
  v68 = (PSID)SeAliasPowerUsersSid;
  if ( !SeAliasPowerUsersSid )
    return 0;
  v55 = (PSID)SeAliasAccountOpsSid;
  if ( !SeAliasAccountOpsSid )
    return 0;
  v56 = (PSID)SeAliasSystemOpsSid;
  if ( !SeAliasSystemOpsSid )
    return 0;
  v57 = (PSID)SeAliasPrintOpsSid;
  if ( !SeAliasPrintOpsSid )
    return 0;
  v58 = (PSID)SeAliasBackupOpsSid;
  if ( !SeAliasBackupOpsSid )
    return 0;
  v59 = (PSID)SeUntrustedMandatorySid;
  if ( !SeUntrustedMandatorySid )
    return 0;
  v60 = *(PSID *)&SeLowMandatorySid;
  if ( !*(_QWORD *)&SeLowMandatorySid )
    return 0;
  v61 = SeMediumMandatorySid;
  if ( !SeMediumMandatorySid )
    return 0;
  v62 = SeHighMandatorySid;
  if ( !SeHighMandatorySid )
    return 0;
  v63 = (PSID)SeSystemMandatorySid;
  if ( !SeSystemMandatorySid )
    return 0;
  v64 = (PSID)SePackagePrefixSid;
  if ( !SePackagePrefixSid )
    return 0;
  v65 = (PSID)SeCapabilityPrefixSid;
  if ( !SeCapabilityPrefixSid )
    return 0;
  v66 = SeAllAppPackagesSid;
  if ( !SeAllAppPackagesSid )
    return 0;
  v67 = SeAllRestrictedAppPackagesSid;
  if ( !SeAllRestrictedAppPackagesSid )
    return 0;
  v38 = SeUserModeDriversSid;
  if ( !SeUserModeDriversSid )
    return 0;
  v36 = SeProcTrustWinTcbSid;
  if ( !SeProcTrustWinTcbSid )
    return 0;
  v14 = SeProcTrustWinSid;
  if ( !SeProcTrustWinSid )
    return 0;
  v15 = SeProcTrustLiteWinTcbSid;
  if ( !SeProcTrustLiteWinTcbSid )
    return 0;
  v16 = SeProcTrustLiteWinSid;
  if ( !SeProcTrustLiteWinSid )
    return 0;
  v17 = SeProcTrustLiteAppSid;
  if ( !SeProcTrustLiteAppSid )
    return 0;
  v18 = SeProcTrustNoneSid;
  if ( !SeProcTrustNoneSid )
    return 0;
  v19 = SeTrustedInstallerSid;
  if ( !SeTrustedInstallerSid )
    return 0;
  v20 = SeDefaultAccountAliasSid;
  if ( !SeDefaultAccountAliasSid )
    return 0;
  CapabilitySid = (PSID)SeConstrainedImpersonationCapabilitySid;
  if ( !SeConstrainedImpersonationCapabilitySid )
    return 0;
  CapabilityGroupSid = (PSID)SeConstrainedImpersonationCapabilityGroupSid;
  if ( !SeConstrainedImpersonationCapabilityGroupSid )
    return 0;
  if ( !v13 )
    return 0;
  if ( !SeSessionImpersonationCapabilityGroupSid )
    return 0;
  RtlInitializeSid(SeNtAuthoritySid, (PSID_IDENTIFIER_AUTHORITY)&v74, 0);
  RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&v74, 1u);
  RtlInitializeSid(v54, (PSID_IDENTIFIER_AUTHORITY)&v74, 1u);
  RtlInitializeSid(v53, (PSID_IDENTIFIER_AUTHORITY)&v74, 1u);
  RtlInitializeSid(v52, (PSID_IDENTIFIER_AUTHORITY)&v74, 1u);
  RtlInitializeSid(v51, (PSID_IDENTIFIER_AUTHORITY)&v74, 1u);
  RtlInitializeSid(v50, (PSID_IDENTIFIER_AUTHORITY)&v74, 1u);
  RtlInitializeSid(v49, (PSID_IDENTIFIER_AUTHORITY)&v74, 1u);
  RtlInitializeSid(v48, (PSID_IDENTIFIER_AUTHORITY)&v74, 1u);
  RtlInitializeSid(v47, (PSID_IDENTIFIER_AUTHORITY)&v74, 1u);
  RtlInitializeSid(v46, (PSID_IDENTIFIER_AUTHORITY)&v74, 1u);
  RtlInitializeSid(v45, (PSID_IDENTIFIER_AUTHORITY)&v74, 1u);
  RtlInitializeSid(v44, (PSID_IDENTIFIER_AUTHORITY)&v74, 1u);
  RtlInitializeSid(v43, (PSID_IDENTIFIER_AUTHORITY)&v74, 1u);
  RtlInitializeSid((PSID)v76, (PSID_IDENTIFIER_AUTHORITY)&v74, 2u);
  RtlInitializeSid((PSID)v39, (PSID_IDENTIFIER_AUTHORITY)&v74, 2u);
  RtlInitializeSid((PSID)IdentifierAuthority, (PSID_IDENTIFIER_AUTHORITY)&v74, 2u);
  RtlInitializeSid(v68, (PSID_IDENTIFIER_AUTHORITY)&v74, 2u);
  RtlInitializeSid(v55, (PSID_IDENTIFIER_AUTHORITY)&v74, 2u);
  RtlInitializeSid(v56, (PSID_IDENTIFIER_AUTHORITY)&v74, 2u);
  RtlInitializeSid(v57, (PSID_IDENTIFIER_AUTHORITY)&v74, 2u);
  RtlInitializeSid(v58, (PSID_IDENTIFIER_AUTHORITY)&v74, 2u);
  RtlInitializeSid(v19, (PSID_IDENTIFIER_AUTHORITY)&v74, 6u);
  RtlInitializeSid(v59, (PSID_IDENTIFIER_AUTHORITY)&v37, 1u);
  RtlInitializeSid(v60, (PSID_IDENTIFIER_AUTHORITY)&v37, 1u);
  RtlInitializeSid(v61, (PSID_IDENTIFIER_AUTHORITY)&v37, 1u);
  RtlInitializeSid(v62, (PSID_IDENTIFIER_AUTHORITY)&v37, 1u);
  RtlInitializeSid(v63, (PSID_IDENTIFIER_AUTHORITY)&v37, 1u);
  RtlInitializeSid(v64, (PSID_IDENTIFIER_AUTHORITY)&v40, 1u);
  RtlInitializeSid(v65, (PSID_IDENTIFIER_AUTHORITY)&v40, 1u);
  RtlInitializeSid(v66, (PSID_IDENTIFIER_AUTHORITY)&v40, 2u);
  RtlInitializeSid(v67, (PSID_IDENTIFIER_AUTHORITY)&v40, 2u);
  memset((void *)v38, 0, NumberOfBytes);
  RtlInitializeSid((PSID)v38, (PSID_IDENTIFIER_AUTHORITY)&v74, 6u);
  RtlInitializeSid(v18, (PSID_IDENTIFIER_AUTHORITY)&v75, 2u);
  RtlInitializeSid(v36, (PSID_IDENTIFIER_AUTHORITY)&v75, 2u);
  RtlInitializeSid(v14, (PSID_IDENTIFIER_AUTHORITY)&v75, 2u);
  RtlInitializeSid(v15, (PSID_IDENTIFIER_AUTHORITY)&v75, 2u);
  RtlInitializeSid(v16, (PSID_IDENTIFIER_AUTHORITY)&v75, 2u);
  RtlInitializeSid(v17, (PSID_IDENTIFIER_AUTHORITY)&v75, 2u);
  *((_DWORD *)Sid + 2) = 1;
  *((_DWORD *)v54 + 2) = 2;
  v21 = v39;
  v22 = v68;
  v23 = v55;
  *((_DWORD *)v53 + 2) = 3;
  v24 = v56;
  v25 = IdentifierAuthority;
  *((_DWORD *)v52 + 2) = 4;
  *((_DWORD *)v51 + 2) = 6;
  *((_DWORD *)v50 + 2) = 10;
  *((_DWORD *)v49 + 2) = 18;
  *((_DWORD *)v48 + 2) = 11;
  *((_DWORD *)v47 + 2) = 12;
  *((_DWORD *)v46 + 2) = 7;
  *((_DWORD *)v45 + 2) = 19;
  *((_DWORD *)v44 + 2) = 20;
  *((_DWORD *)v43 + 2) = 17;
  *(_DWORD *)(v76 + 8) = 32;
  v26 = v58;
  *(_DWORD *)(v21 + 8) = 32;
  *(_DWORD *)(v25 + 8) = 32;
  v22[2] = 32;
  v23[2] = 32;
  v24[2] = 32;
  v27 = v57;
  *((_DWORD *)v57 + 2) = 32;
  v26[2] = 32;
  *(_DWORD *)(v76 + 12) = 544;
  *(_DWORD *)(v39 + 12) = 545;
  *(_DWORD *)(v25 + 12) = 546;
  v22[3] = 547;
  v23[3] = 548;
  v24[3] = 549;
  v27[3] = 550;
  v26[3] = 551;
  *((_DWORD *)v59 + 2) = 0;
  *((_DWORD *)v60 + 2) = 4096;
  *((_DWORD *)v61 + 2) = 0x2000;
  *((_DWORD *)v62 + 2) = 12288;
  *((_DWORD *)v63 + 2) = 0x4000;
  *((_DWORD *)v64 + 2) = 2;
  *((_DWORD *)v65 + 2) = 3;
  v28 = v66;
  *((_DWORD *)v66 + 2) = 2;
  v28[3] = 1;
  v29 = v67;
  *((_DWORD *)v67 + 2) = 2;
  v29[3] = 2;
  *(_DWORD *)(v38 + 8) = 84;
  v18[1] = 0LL;
  v36[2] = 1024;
  v36[3] = 0x2000;
  v14[2] = 1024;
  v14[3] = 4096;
  v15[2] = 512;
  v15[3] = 0x2000;
  v16[2] = 512;
  v16[3] = 4096;
  v17[2] = 512;
  v17[3] = 2048;
  v19[2] = 80;
  v19[3] = 956008885;
  v19[4] = -876444647;
  v19[5] = 1831038044;
  v19[6] = 1853292631;
  v19[7] = -2023488832;
  RtlInitializeSid(v20, (PSID_IDENTIFIER_AUTHORITY)&v74, 2u);
  v30 = CapabilitySid;
  v31 = CapabilityGroupSid;
  v20[2] = 32;
  v20[3] = 581;
  if ( RtlDeriveCapabilitySidsFromName(&UnicodeString, v31, v30) < 0
    || RtlDeriveCapabilitySidsFromName(
         &v72,
         SeSessionImpersonationCapabilityGroupSid,
         SeSessionImpersonationCapabilitySid) < 0 )
  {
    return 0;
  }
  SepInitSystemDacls();
  SeCreateTokenPrivilege = (LUID)2LL;
  v74 = 3LL;
  SeAssignPrimaryTokenPrivilege = (LUID)3LL;
  v75 = 4LL;
  SeLockMemoryPrivilege = (LUID)4LL;
  v76 = 5LL;
  SeIncreaseQuotaPrivilege = (LUID)5LL;
  v39 = 6LL;
  SeUnsolicitedInputPrivilege = 6LL;
  v38 = 7LL;
  SeTcbPrivilege = (LUID)7LL;
  IdentifierAuthority = 8LL;
  SeSecurityPrivilege = (LUID)8LL;
  v40 = 9LL;
  SeTakeOwnershipPrivilege = 9LL;
  v37 = 10LL;
  SeLoadDriverPrivilege = (LUID)10LL;
  v43 = (PSID)15;
  SeCreatePagefilePrivilege = (LUID)15LL;
  v44 = (PSID)14;
  SeIncreaseBasePriorityPrivilege = (LUID)14LL;
  v45 = (PSID)11;
  SeSystemProfilePrivilege = (LUID)11LL;
  v46 = (PSID)12;
  SeSystemtimePrivilege = (LUID)12LL;
  v47 = (PSID)13;
  SeProfileSingleProcessPrivilege = (LUID)13LL;
  v48 = (PSID)16;
  SeCreatePermanentPrivilege = (LUID)16LL;
  v49 = (PSID)17;
  SeBackupPrivilege = (LUID)17LL;
  v50 = (PSID)18;
  SeRestorePrivilege = (LUID)18LL;
  v51 = (PSID)19;
  SeShutdownPrivilege = (LUID)19LL;
  v52 = (PSID)20;
  SeDebugPrivilege = (LUID)20LL;
  v53 = (PSID)21;
  SeAuditPrivilege = 21LL;
  v54 = (PSID)22;
  Sid = (PSID)23;
  SeSystemEnvironmentPrivilege = (LUID)22LL;
  SeChangeNotifyPrivilege = 23LL;
  SeRemoteShutdownPrivilege = 24LL;
  SeUndockPrivilege = 25LL;
  SeSyncAgentPrivilege = 26LL;
  SeEnableDelegationPrivilege = 27LL;
  qword_1407AD1D8 = (__int64)SeNullSid;
  qword_1407AD1E0 = (__int64)SeWorldSid;
  qword_1407AD1E8 = (__int64)SeLocalSid;
  qword_1407AD1F0 = (__int64)SeCreatorOwnerSid;
  qword_1407AD1F8 = (__int64)SeCreatorGroupSid;
  qword_1407AD320 = (__int64)SeOwnerRightsSid;
  qword_1407AD200 = (__int64)SeNtAuthoritySid;
  qword_1407AD208 = SeDialupSid;
  qword_1407AD210 = SeNetworkSid;
  qword_1407AD218 = SeBatchSid;
  qword_1407AD220 = (__int64)SeInteractiveSid;
  qword_1407AD228 = (__int64)SeLocalSystemSid;
  qword_1407AD270 = SeAuthenticatedUsersSid;
  qword_1407AD278 = (__int64)SeRestrictedSid;
  qword_1407AD280 = (__int64)SeAnonymousLogonSid;
  qword_1407AD2A0 = (__int64)SeLocalServiceSid;
  qword_1407AD2A8 = (__int64)SeNetworkServiceSid;
  qword_1407AD2F0 = (__int64)SeIUserSid;
  qword_1407AD230 = (__int64)SeAliasAdminsSid;
  qword_1407AD238 = (__int64)SeAliasUsersSid;
  qword_1407AD240 = SeAliasGuestsSid;
  qword_1407AD248 = SeAliasPowerUsersSid;
  qword_1407AD250 = SeAliasAccountOpsSid;
  qword_1407AD258 = SeAliasSystemOpsSid;
  qword_1407AD260 = SeAliasPrintOpsSid;
  qword_1407AD268 = SeAliasBackupOpsSid;
  qword_1407AD2F8 = SeUntrustedMandatorySid;
  SeManageVolumePrivilege = 28LL;
  SeImpersonatePrivilege = 29LL;
  SeCreateGlobalPrivilege = (LUID)30LL;
  SeTrustedCredManAccessPrivilege = 31LL;
  SeRelabelPrivilege = (LUID)32LL;
  SeIncreaseWorkingSetPrivilege = 33LL;
  SeTimeZonePrivilege = (LUID)34LL;
  SeCreateSymbolicLinkPrivilege = 35LL;
  SeDelegateSessionUserImpersonatePrivilege = 36LL;
  qword_1407AD300 = *(_QWORD *)&SeLowMandatorySid;
  qword_1407AD308 = (__int64)SeMediumMandatorySid;
  qword_1407AD310 = (__int64)SeHighMandatorySid;
  qword_1407AD318 = SeSystemMandatorySid;
  qword_1407AD328 = (__int64)SeAllAppPackagesSid;
  qword_1407AD330 = SeUserModeDriversSid;
  qword_1407AD338 = (__int64)SeTrustedInstallerSid;
  SepExports = 2LL;
  qword_1407AD128 = 3LL;
  qword_1407AD130 = 4LL;
  qword_1407AD138 = 5LL;
  qword_1407AD140 = 6LL;
  qword_1407AD148 = 7LL;
  qword_1407AD150 = 8LL;
  qword_1407AD158 = 9LL;
  qword_1407AD160 = 10LL;
  qword_1407AD168 = 15LL;
  qword_1407AD170 = 14LL;
  qword_1407AD178 = 11LL;
  qword_1407AD180 = 12LL;
  qword_1407AD188 = 13LL;
  qword_1407AD190 = 16LL;
  qword_1407AD198 = 17LL;
  qword_1407AD1A0 = 18LL;
  qword_1407AD1A8 = 19LL;
  qword_1407AD1B0 = 20LL;
  qword_1407AD1B8 = 21LL;
  qword_1407AD340 = 36LL;
  qword_1407AD1C0 = 22LL;
  qword_1407AD2B8 = 29LL;
  qword_1407AD2E8 = 35LL;
  v32 = 5LL;
  SeExports = (PSE_EXPORTS)&SepExports;
  v33 = (char *)&unk_14034EF38;
  qword_1407AD1C8 = 23LL;
  qword_1407AD1D0 = 24LL;
  qword_1407AD288 = 25LL;
  qword_1407AD290 = 26LL;
  qword_1407AD298 = 27LL;
  qword_1407AD2B0 = 28LL;
  qword_1407AD2C0 = 30LL;
  qword_1407AD2C8 = 31LL;
  qword_1407AD2D0 = 32LL;
  qword_1407AD2D8 = 33LL;
  qword_1407AD2E0 = 34LL;
  do
  {
    v33[8] = 0;
    *(_QWORD *)v33 = 0LL;
    *((_QWORD *)v33 - 3) = 0LL;
    v33 += 40;
    --v32;
  }
  while ( v32 );
  LowboxSessionMapLock = 0LL;
  g_SessionLowboxMap = 0LL;
  return (int)SepInitializeSharedSidMap() >= 0;
}
