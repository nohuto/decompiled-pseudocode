/*
 * XREFs of RtlCheckTokenMembershipEx @ 0x180035010
 * Callers:
 *     RtlCapabilityCheck @ 0x180043D40 (RtlCapabilityCheck.c)
 *     RtlCheckTokenMembership @ 0x1800DFBE0 (RtlCheckTokenMembership.c)
 * Callees:
 *     RtlSetOwnerSecurityDescriptor @ 0x1800320D0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180032130 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x180032190 (RtlSetDaclSecurityDescriptor.c)
 *     sub_180037408 @ 0x180037408 (sub_180037408.c)
 *     RtlInitializeSidEx @ 0x1800442E0 (RtlInitializeSidEx.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x18009AAC0 (ZwAccessCheck.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenThreadTokenEx @ 0x18009B0A0 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x18009B0C0 (ZwOpenProcessTokenEx.c)
 *     ZwDuplicateToken @ 0x18009B300 (ZwDuplicateToken.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

NTSTATUS __cdecl RtlCheckTokenMembershipEx(HANDLE TokenHandle, PSID SidToCheck, ULONG Flags, PBOOLEAN IsMember)
{
  char v5; // si
  int v8; // ebx
  PPRIVILEGE_SET PrivilegeSet; // [rsp+20h] [rbp-E0h]
  HANDLE ClientToken; // [rsp+40h] [rbp-C0h] BYREF
  ULONG PrivilegeSetLength; // [rsp+48h] [rbp-B8h] BYREF
  NTSTATUS AccessStatus; // [rsp+4Ch] [rbp-B4h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE TokenHandlea; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+60h] [rbp-A0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v18[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int16 v19; // [rsp+C0h] [rbp-40h]
  _BYTE Sid[80]; // [rsp+D0h] [rbp-30h] BYREF
  ACL Dacl; // [rsp+120h] [rbp+20h] BYREF
  _PRIVILEGE_SET v22; // [rsp+210h] [rbp+110h] BYREF

  ClientToken = 0LL;
  v5 = Flags;
  *IsMember = 0;
  if ( (Flags & 0xFFFFFFFC) == 0 )
  {
    if ( TokenHandle )
    {
      ClientToken = TokenHandle;
    }
    else
    {
      v8 = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 0, 0, &ClientToken);
      if ( v8 == -1073741700 )
      {
        v8 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0xAu, 0, &TokenHandlea);
        if ( v8 < 0 )
          goto LABEL_19;
        ObjectAttributes.SecurityQualityOfService = v18;
        ObjectAttributes.Length = 48;
        memset(&ObjectAttributes.RootDirectory, 0, 20);
        ObjectAttributes.SecurityDescriptor = 0LL;
        v18[0] = 12;
        v18[1] = 2;
        v19 = 1;
        v8 = ZwDuplicateToken(TokenHandlea, 0xCu, &ObjectAttributes, 0, TokenImpersonation, &ClientToken);
        ZwClose(TokenHandlea);
      }
      if ( v8 < 0 )
      {
LABEL_19:
        if ( ClientToken )
          ZwClose(ClientToken);
        return v8;
      }
    }
    memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
    SecurityDescriptor[0] = 1;
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, SidToCheck, 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, SidToCheck, 0);
    Dacl = (ACL)15466498LL;
    sub_180037408(&Dacl, SidToCheck, 0);
    if ( (v5 & 3) != 0 )
    {
      LODWORD(PrivilegeSet) = 1;
      RtlInitializeSidEx(Sid, (PSID_IDENTIFIER_AUTHORITY)&Source2, 2u, 2LL, PrivilegeSet);
      sub_180037408(&Dacl, Sid, 0);
    }
    if ( (v5 & 2) != 0 )
    {
      LODWORD(PrivilegeSet) = 2;
      RtlInitializeSidEx(Sid, (PSID_IDENTIFIER_AUTHORITY)&Source2, 2u, 2LL, PrivilegeSet);
      sub_180037408(&Dacl, Sid, 0);
    }
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Dacl, 0);
    PrivilegeSetLength = 56;
    v8 = ZwAccessCheck(
           SecurityDescriptor,
           ClientToken,
           1u,
           (PGENERIC_MAPPING)&stru_180114618,
           &v22,
           &PrivilegeSetLength,
           &GrantedAccess,
           &AccessStatus);
    if ( v8 >= 0 )
    {
      v8 = 0;
      if ( AccessStatus )
      {
        if ( AccessStatus == -1073741790 )
          goto LABEL_11;
      }
      else if ( GrantedAccess == 1 )
      {
        *IsMember = 1;
        goto LABEL_11;
      }
      v8 = AccessStatus;
    }
LABEL_11:
    if ( TokenHandle )
      return v8;
    goto LABEL_19;
  }
  return -1073741811;
}
