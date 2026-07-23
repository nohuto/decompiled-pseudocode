/*
 * XREFs of RtlCheckTokenMembershipEx @ 0x180044060
 * Callers:
 *     RtlCapabilityCheck @ 0x180047640 (RtlCapabilityCheck.c)
 *     RtlCheckTokenMembership @ 0x180089760 (RtlCheckTokenMembership.c)
 * Callees:
 *     sub_180044698 @ 0x180044698 (sub_180044698.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180046440 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1800464A0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlInitializeSidEx @ 0x1800475B0 (RtlInitializeSidEx.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwAccessCheck @ 0x1800A5300 (ZwAccessCheck.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenThreadTokenEx @ 0x1800A58E0 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x1800A5900 (ZwOpenProcessTokenEx.c)
 *     ZwDuplicateToken @ 0x1800A5B40 (ZwDuplicateToken.c)
 *     memset @ 0x1800ABDC0 (memset.c)
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
  _QWORD SecurityDescriptor[5]; // [rsp+60h] [rbp-A0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v18[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int16 v19; // [rsp+C0h] [rbp-40h]
  _BYTE Sid[80]; // [rsp+D0h] [rbp-30h] BYREF
  ACL Acl; // [rsp+120h] [rbp+20h] BYREF
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
          goto LABEL_22;
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
LABEL_22:
        if ( ClientToken )
          ZwClose(ClientToken);
        return v8;
      }
    }
    memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
    LOBYTE(SecurityDescriptor[0]) = 1;
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, SidToCheck, 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, SidToCheck, 0);
    Acl = (ACL)15466498LL;
    sub_180044698(&Acl, SidToCheck, 0);
    if ( (v5 & 3) != 0 )
    {
      LODWORD(PrivilegeSet) = 1;
      RtlInitializeSidEx(Sid, (PSID_IDENTIFIER_AUTHORITY)&Source2, 2u, 2LL, PrivilegeSet);
      sub_180044698(&Acl, Sid, 0);
    }
    if ( (v5 & 2) != 0 )
    {
      LODWORD(PrivilegeSet) = 2;
      RtlInitializeSidEx(Sid, (PSID_IDENTIFIER_AUTHORITY)&Source2, 2u, 2LL, PrivilegeSet);
      sub_180044698(&Acl, Sid, 0);
    }
    if ( LOBYTE(SecurityDescriptor[0]) == 1 && (SecurityDescriptor[0] & 0x80000000LL) == 0 )
    {
      SecurityDescriptor[4] = &Acl;
      WORD1(SecurityDescriptor[0]) = WORD1(SecurityDescriptor[0]) & 0xFFF3 | 4;
    }
    PrivilegeSetLength = 56;
    v8 = ZwAccessCheck(
           SecurityDescriptor,
           ClientToken,
           1u,
           (PGENERIC_MAPPING)&GenericMapping,
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
          goto LABEL_14;
      }
      else if ( GrantedAccess == 1 )
      {
        *IsMember = 1;
        goto LABEL_14;
      }
      v8 = AccessStatus;
    }
LABEL_14:
    if ( TokenHandle )
      return v8;
    goto LABEL_22;
  }
  return -1073741811;
}
