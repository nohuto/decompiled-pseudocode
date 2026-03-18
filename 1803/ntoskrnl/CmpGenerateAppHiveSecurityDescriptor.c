/*
 * XREFs of CmpGenerateAppHiveSecurityDescriptor @ 0x140221EE4
 * Callers:
 *     CmpCreateHiveRootCell @ 0x14064F024 (CmpCreateHiveRootCell.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404C07E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x1404C72B0 (RtlAddMandatoryAce.c)
 *     RtlCreateSecurityDescriptor @ 0x140541DF0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140541E30 (RtlCreateAcl.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140541EB0 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x140541F10 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140541FE0 (RtlSetSaclSecurityDescriptor.c)
 *     SeQueryInformationToken @ 0x1405ADE00 (SeQueryInformationToken.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1405E1160 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlAddAccessAllowedAceEx @ 0x140605800 (RtlAddAccessAllowedAceEx.c)
 */

PVOID __fastcall CmpGenerateAppHiveSecurityDescriptor(__int64 a1)
{
  void *v1; // rbx
  PVOID v2; // rdi
  NTSTATUS v3; // eax
  void **v4; // r14
  NTSTATUS v5; // eax
  PVOID v6; // rsi
  void *v7; // rbx
  void *v8; // rdi
  ULONG v9; // edx
  PVOID PoolWithTag; // rax
  UCHAR Sid; // [rsp+20h] [rbp-E0h]
  PSID LabelSid; // [rsp+28h] [rbp-D8h]
  PVOID TokenInformation; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE SecurityDescriptor[48]; // [rsp+40h] [rbp-C0h] BYREF
  ACL Sacl; // [rsp+70h] [rbp-90h] BYREF
  ACL Acl; // [rsp+D0h] [rbp-30h] BYREF

  v1 = *(void **)(a1 + 16);
  v2 = 0LL;
  P = 0LL;
  TokenInformation = 0LL;
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  v3 = SeQueryInformationToken(v1, TokenOwner, &TokenInformation);
  v4 = (void **)TokenInformation;
  if ( v3 >= 0 )
  {
    v5 = SeQueryInformationToken(v1, TokenPrimaryGroup, &P);
    v6 = P;
    if ( v5 >= 0 )
    {
      v7 = *v4;
      v8 = *(void **)P;
      RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
      RtlSetOwnerSecurityDescriptor(SecurityDescriptor, v7, 0);
      RtlSetGroupSecurityDescriptor(SecurityDescriptor, v8, 0);
      RtlCreateAcl(&Acl, 0xECu, 2u);
      RtlAddAccessAllowedAceEx(&Acl, 2u, 2u, 0xF003Fu, SeWorldSid);
      RtlAddAccessAllowedAceEx(&Acl, 2u, 2u, 0xF003Fu, SeAllAppPackagesSid);
      RtlAddAccessAllowedAceEx(&Acl, 2u, 2u, 0xF003Fu, SeRestrictedSid);
      RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
      RtlCreateAcl(&Sacl, 0x54u, 2u);
      LODWORD(LabelSid) = 1;
      RtlAddMandatoryAce(&Sacl, v9, 0, SeLowMandatorySid, Sid, LabelSid);
      RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, &Sacl, 0);
      LODWORD(TokenInformation) = 0;
      RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, 0LL, (PULONG)&TokenInformation);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)TokenInformation, 0x65536D43u);
      v2 = PoolWithTag;
      if ( PoolWithTag )
        RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, PoolWithTag, (PULONG)&TokenInformation);
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v2;
}
