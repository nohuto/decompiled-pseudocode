/*
 * XREFs of SepInitSystemDacls @ 0x14084D144
 * Callers:
 *     SepVariableInitialization @ 0x14084BA80 (SepVariableInitialization.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140486330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140486390 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x1405498F0 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140549920 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x140549980 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x14054A4B0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x14054A4F0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x14054A554 (RtlAddMandatoryAce.c)
 */

NTSTATUS SepInitSystemDacls()
{
  int v0; // r9d
  int v1; // r8d
  ULONG v2; // r13d
  int v3; // ecx
  int v4; // r10d
  ULONG v5; // r14d
  int v6; // edx
  ULONG v7; // edi
  ULONG v8; // r15d
  ULONG v9; // r12d
  ULONG v10; // esi
  ULONG v11; // ebp
  ACL *v12; // rbx
  ULONG v13; // edx
  PSID v14; // rbx
  UCHAR v16; // [rsp+20h] [rbp-38h]
  PSID LabelSid; // [rsp+28h] [rbp-30h]

  v0 = *((unsigned __int8 *)SeAliasAdminsSid + 1);
  v1 = *((unsigned __int8 *)SeLocalSystemSid + 1);
  v2 = 4 * (v1 + v0) + 48;
  v3 = *((unsigned __int8 *)SeWorldSid + 1);
  v4 = *((unsigned __int8 *)SeRestrictedSid + 1);
  v5 = v2 + 4 * v3 + 20;
  v6 = *((unsigned __int8 *)SeLocalServiceSid + 1);
  v7 = v5 + 4 * (v4 + 5);
  v8 = 4 * (v0 + v1 + v6 + v3) + 88;
  v9 = 4 * (v0 + v1 + *((unsigned __int8 *)SeOwnerRightsSid + 1)) + 68;
  v10 = v9
      + 4
      * (v4
       + 25
       + *((unsigned __int8 *)SeAllAppPackagesSid + 1)
       + v6
       + *((unsigned __int8 *)SeServiceSid + 1)
       + *((unsigned __int8 *)SeNetworkServiceSid + 1));
  v11 = 4 * *((unsigned __int8 *)SeMediumMandatorySid + 1) + 28;
  SePublicDefaultDacl = (PACL)ExAllocatePoolWithTag((POOL_TYPE)17, v5, 0x63416553u);
  SePublicDefaultUnrestrictedDacl = (PACL)ExAllocatePoolWithTag((POOL_TYPE)17, v7, 0x63416553u);
  SePublicOpenDacl = (PACL)ExAllocatePoolWithTag((POOL_TYPE)17, v5, 0x63416553u);
  SePublicOpenUnrestrictedDacl = (PACL)ExAllocatePoolWithTag((POOL_TYPE)17, v7, 0x63416553u);
  SeSystemDefaultDacl = (PACL)ExAllocatePoolWithTag((POOL_TYPE)17, v2, 0x63416553u);
  SeLocalServicePublicDacl = (PACL)ExAllocatePoolWithTag((POOL_TYPE)17, v8, 0x63416553u);
  SeAtomDacl = (PACL)ExAllocatePoolWithTag((POOL_TYPE)17, v7, 0x63416553u);
  SepDefaultCapeDacl = (PACL)ExAllocatePoolWithTag((POOL_TYPE)17, v9, 0x63416553u);
  SepDefaultRecoveryCapeDacl = (PACL)ExAllocatePoolWithTag((POOL_TYPE)17, v10, 0x63416553u);
  SeMediumSacl = (PACL)ExAllocatePoolWithTag((POOL_TYPE)17, v11, 0x63416553u);
  v12 = SeMediumSacl;
  RtlCreateAcl(SePublicDefaultDacl, v5, 2u);
  RtlCreateAcl(SePublicDefaultUnrestrictedDacl, v7, 2u);
  RtlCreateAcl(SePublicOpenDacl, v5, 2u);
  RtlCreateAcl(SePublicOpenUnrestrictedDacl, v7, 2u);
  RtlCreateAcl(SeSystemDefaultDacl, v2, 2u);
  RtlCreateAcl(SeLocalServicePublicDacl, v8, 2u);
  RtlCreateAcl(SeAtomDacl, v7, 2u);
  RtlCreateAcl(SepDefaultCapeDacl, v9, 2u);
  RtlCreateAcl(SepDefaultRecoveryCapeDacl, v10, 2u);
  RtlCreateAcl(v12, v11, 2u);
  RtlAddAccessAllowedAce(SePublicDefaultDacl, 2u, 0x20000000u, SeWorldSid);
  RtlAddAccessAllowedAce(SePublicDefaultUnrestrictedDacl, 2u, 0x20000000u, SeWorldSid);
  RtlAddAccessAllowedAce(SePublicOpenDacl, 2u, 0xE0000000, SeWorldSid);
  RtlAddAccessAllowedAce(SePublicOpenUnrestrictedDacl, 2u, 0xE0000000, SeWorldSid);
  RtlAddAccessAllowedAce(SeLocalServicePublicDacl, 2u, 0x20000000u, SeWorldSid);
  RtlAddAccessAllowedAce(SeAtomDacl, 2u, 0x20000u, SeWorldSid);
  RtlAddAccessAllowedAce(SePublicDefaultDacl, 2u, 0x10000000u, SeLocalSystemSid);
  RtlAddAccessAllowedAce(SePublicDefaultUnrestrictedDacl, 2u, 0x10000000u, SeLocalSystemSid);
  RtlAddAccessAllowedAce(SePublicOpenDacl, 2u, 0x10000000u, SeLocalSystemSid);
  RtlAddAccessAllowedAce(SePublicOpenUnrestrictedDacl, 2u, 0x10000000u, SeLocalSystemSid);
  RtlAddAccessAllowedAce(SeSystemDefaultDacl, 2u, 0x10000000u, SeLocalSystemSid);
  RtlAddAccessAllowedAce(SeLocalServicePublicDacl, 2u, 0x10000000u, SeLocalSystemSid);
  RtlAddAccessAllowedAce(SeAtomDacl, 2u, 0x1F0000u, SeLocalSystemSid);
  RtlAddAccessAllowedAce(SePublicDefaultDacl, 2u, 0x10000000u, SeAliasAdminsSid);
  RtlAddAccessAllowedAce(SePublicDefaultUnrestrictedDacl, 2u, 0x10000000u, SeAliasAdminsSid);
  RtlAddAccessAllowedAce(SePublicOpenDacl, 2u, 0x10000000u, SeAliasAdminsSid);
  RtlAddAccessAllowedAce(SePublicOpenUnrestrictedDacl, 2u, 0x10000000u, SeAliasAdminsSid);
  RtlAddAccessAllowedAce(SeSystemDefaultDacl, 2u, 0xA0020000, SeAliasAdminsSid);
  RtlAddAccessAllowedAce(SeLocalServicePublicDacl, 2u, 0x10000000u, SeAliasAdminsSid);
  RtlAddAccessAllowedAce(SeAtomDacl, 2u, 0x1F0000u, SeAliasAdminsSid);
  RtlAddAccessAllowedAce(SePublicDefaultUnrestrictedDacl, 2u, 0x20000000u, SeRestrictedSid);
  RtlAddAccessAllowedAce(SePublicOpenUnrestrictedDacl, 2u, 0xA0000000, SeRestrictedSid);
  RtlAddAccessAllowedAce(SeAtomDacl, 2u, 0x20000u, SeRestrictedSid);
  RtlAddAccessAllowedAce(SeLocalServicePublicDacl, 2u, 0x10000000u, SeLocalServiceSid);
  RtlAddAccessAllowedAce(SepDefaultCapeDacl, 2u, 0x1FFFFFu, SeLocalSystemSid);
  RtlAddAccessAllowedAce(SepDefaultCapeDacl, 2u, 0x1FFFFFu, SeAliasAdminsSid);
  RtlAddAccessAllowedAce(SepDefaultCapeDacl, 2u, 0, SeOwnerRightsSid);
  RtlAddAccessAllowedAce(SepDefaultRecoveryCapeDacl, 2u, 0x1FFFFFu, SeLocalSystemSid);
  RtlAddAccessAllowedAce(SepDefaultRecoveryCapeDacl, 2u, 0x1FFFFFu, SeAliasAdminsSid);
  RtlAddAccessAllowedAce(SepDefaultRecoveryCapeDacl, 2u, 0, SeOwnerRightsSid);
  RtlAddAccessAllowedAce(SepDefaultRecoveryCapeDacl, 2u, 0x1FFFFFu, SeLocalServiceSid);
  RtlAddAccessAllowedAce(SepDefaultRecoveryCapeDacl, 2u, 0x1FFFFFu, SeNetworkServiceSid);
  RtlAddAccessAllowedAce(SepDefaultRecoveryCapeDacl, 2u, 0x1FFFFFu, SeRestrictedSid);
  RtlAddAccessAllowedAce(SepDefaultRecoveryCapeDacl, 2u, 0x1FFFFFu, SeServiceSid);
  RtlAddAccessAllowedAce(SepDefaultRecoveryCapeDacl, 2u, 0x1200A9u, SeAllAppPackagesSid);
  LODWORD(LabelSid) = 2;
  RtlAddMandatoryAce(SeMediumSacl, v13, 0, (ULONG)SeMediumMandatorySid, v16, LabelSid);
  SePublicDefaultSd = (__int64)&SepPublicDefaultSd;
  RtlCreateSecurityDescriptor(&SepPublicDefaultSd, 1u);
  RtlSetDaclSecurityDescriptor(&SepPublicDefaultSd, 1u, SePublicDefaultDacl, 0);
  SePublicDefaultUnrestrictedSd = (__int64)&SepPublicDefaultUnrestrictedSd;
  RtlCreateSecurityDescriptor(&SepPublicDefaultUnrestrictedSd, 1u);
  RtlSetDaclSecurityDescriptor(&SepPublicDefaultUnrestrictedSd, 1u, SePublicDefaultUnrestrictedDacl, 0);
  SePublicOpenSd = (__int64)&SepPublicOpenSd;
  RtlCreateSecurityDescriptor(&SepPublicOpenSd, 1u);
  RtlSetDaclSecurityDescriptor(&SepPublicOpenSd, 1u, SePublicOpenDacl, 0);
  SePublicOpenUnrestrictedSd = (__int64)&SepPublicOpenUnrestrictedSd;
  RtlCreateSecurityDescriptor(&SepPublicOpenUnrestrictedSd, 1u);
  RtlSetDaclSecurityDescriptor(&SepPublicOpenUnrestrictedSd, 1u, SePublicOpenUnrestrictedDacl, 0);
  SeSystemDefaultSd = &SepSystemDefaultSd;
  RtlCreateSecurityDescriptor(&SepSystemDefaultSd, 1u);
  RtlSetDaclSecurityDescriptor(SeSystemDefaultSd, 1u, SeSystemDefaultDacl, 0);
  SeLocalServicePublicSd = (__int64)&SepLocalServicePublicSd;
  RtlCreateSecurityDescriptor(&SepLocalServicePublicSd, 1u);
  RtlSetDaclSecurityDescriptor(&SepLocalServicePublicSd, 1u, SeLocalServicePublicDacl, 0);
  SeAtomSd = (__int64)&SepAtomSd;
  RtlCreateSecurityDescriptor(&SepAtomSd, 1u);
  RtlSetDaclSecurityDescriptor(&SepAtomSd, 1u, SeAtomDacl, 0);
  SeDefaultCapeSd = (__int64)&SepDefaultCapeSd;
  RtlCreateSecurityDescriptor(&SepDefaultCapeSd, 1u);
  RtlSetDaclSecurityDescriptor(&SepDefaultCapeSd, 1u, SepDefaultCapeDacl, 0);
  v14 = SeLocalSystemSid;
  RtlSetOwnerSecurityDescriptor(&SepDefaultCapeSd, SeLocalSystemSid, 0);
  RtlSetGroupSecurityDescriptor(&SepDefaultCapeSd, v14, 0);
  SeDefaultRecoveryCapeSd = (__int64)&SepDefaultRecoveryCapeSd;
  RtlCreateSecurityDescriptor(&SepDefaultRecoveryCapeSd, 1u);
  RtlSetDaclSecurityDescriptor(&SepDefaultRecoveryCapeSd, 1u, SepDefaultRecoveryCapeDacl, 0);
  RtlSetOwnerSecurityDescriptor(&SepDefaultRecoveryCapeSd, v14, 0);
  RtlSetGroupSecurityDescriptor(&SepDefaultRecoveryCapeSd, v14, 0);
  SeNullDaclSd = &SepNullDaclSd;
  RtlCreateSecurityDescriptor(&SepNullDaclSd, 1u);
  SeMediumDaclSd = &SepMediumDaclSd;
  RtlCreateSecurityDescriptor(&SepMediumDaclSd, 1u);
  RtlSetSaclSecurityDescriptor(&SepMediumDaclSd, 1u, SeMediumSacl, 0);
  RtlSetOwnerSecurityDescriptor(&SepMediumDaclSd, v14, 0);
  return RtlSetGroupSecurityDescriptor(&SepMediumDaclSd, v14, 0);
}
