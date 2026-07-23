/*
 * XREFs of RtlCheckTokenCapability @ 0x180046650
 * Callers:
 *     RtlCapabilityCheck @ 0x180047640 (RtlCapabilityCheck.c)
 * Callees:
 *     sub_180044698 @ 0x180044698 (sub_180044698.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180046440 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1800464A0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlIsCapabilitySid @ 0x180047BB0 (RtlIsCapabilitySid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x180047C00 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1800496D0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x18004A330 (RtlCreateSecurityDescriptor.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwAccessCheck @ 0x1800A5300 (ZwAccessCheck.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x1800A5720 (ZwQueryInformationToken.c)
 *     ZwOpenThreadTokenEx @ 0x1800A58E0 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x1800A5900 (ZwOpenProcessTokenEx.c)
 *     ZwDuplicateToken @ 0x1800A5B40 (ZwDuplicateToken.c)
 */

NTSTATUS __cdecl RtlCheckTokenCapability(HANDLE TokenHandle, PSID CapabilitySidToCheck, PBOOLEAN HasCapability)
{
  HANDLE v6; // rcx
  int v7; // ebx
  HANDLE ClientToken; // [rsp+40h] [rbp-C0h] BYREF
  ULONG ReturnLength; // [rsp+48h] [rbp-B8h] BYREF
  ULONG PrivilegeSetLength; // [rsp+4Ch] [rbp-B4h] BYREF
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-B0h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE TokenHandlea; // [rsp+58h] [rbp-A8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE SecurityDescriptor[48]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int8 *TokenInformation; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v18[2]; // [rsp+120h] [rbp+20h] BYREF
  __int16 v19; // [rsp+128h] [rbp+28h]
  ACL Acl; // [rsp+130h] [rbp+30h] BYREF
  _PRIVILEGE_SET PrivilegeSet; // [rsp+1D0h] [rbp+D0h] BYREF

  ClientToken = 0LL;
  *HasCapability = 0;
  if ( !RtlIsCapabilitySid(CapabilitySidToCheck) )
  {
    v7 = -1073741811;
    goto LABEL_9;
  }
  if ( TokenHandle )
  {
    v6 = TokenHandle;
    ClientToken = TokenHandle;
    goto LABEL_4;
  }
  v7 = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 1u, 0, &ClientToken);
  if ( v7 == -1073741700 )
  {
    v7 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0xAu, 0, &TokenHandlea);
    if ( v7 < 0 )
      goto LABEL_16;
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.SecurityQualityOfService = v18;
    ObjectAttributes.Length = 48;
    v18[0] = 12;
    v18[1] = 2;
    v19 = 1;
    v7 = ZwDuplicateToken(TokenHandlea, 8u, &ObjectAttributes, 0, TokenImpersonation, &ClientToken);
    ZwClose(TokenHandlea);
  }
  if ( v7 >= 0 )
  {
    v6 = ClientToken;
LABEL_4:
    ReturnLength = 88;
    ZwQueryInformationToken(v6, 1u, &TokenInformation, 0x58u, &ReturnLength);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, TokenInformation, 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, TokenInformation, 0);
    RtlCreateAcl(&Acl, 0xA0u, 2u);
    sub_180044698(&Acl, 2u, 0, 65537, TokenInformation, 0);
    sub_180044698(&Acl, 2u, 0, 65537, (unsigned __int8 *)CapabilitySidToCheck, 0);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    PrivilegeSetLength = 56;
    v7 = ZwAccessCheck(
           SecurityDescriptor,
           ClientToken,
           0x10001u,
           (PGENERIC_MAPPING)&stru_180114750,
           &PrivilegeSet,
           &PrivilegeSetLength,
           &GrantedAccess,
           &AccessStatus);
    if ( v7 >= 0 )
    {
      if ( !AccessStatus && GrantedAccess == 65537 )
        *HasCapability = 1;
      v7 = 0;
    }
LABEL_9:
    if ( TokenHandle )
      return v7;
  }
LABEL_16:
  if ( ClientToken )
    ZwClose(ClientToken);
  return v7;
}
