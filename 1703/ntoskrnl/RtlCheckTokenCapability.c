/*
 * XREFs of RtlCheckTokenCapability @ 0x14023BE40
 * Callers:
 *     RtlCapabilityCheck @ 0x1406E9770 (RtlCapabilityCheck.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x14008D7C0 (SeAccessCheckWithHint.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x14017E360 (ZwQueryInformationToken.c)
 *     ZwOpenThreadTokenEx @ 0x14017E520 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x14017E540 (ZwOpenProcessTokenEx.c)
 *     ZwDuplicateToken @ 0x14017E780 (ZwDuplicateToken.c)
 *     memset @ 0x140192D80 (memset.c)
 *     RtlCreateSecurityDescriptor @ 0x1404A1C80 (RtlCreateSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1404A4790 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlIsCapabilitySid @ 0x1404A4EC8 (RtlIsCapabilitySid.c)
 *     RtlAddAccessAllowedAce @ 0x1404A57B0 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1404A57E0 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404F5D90 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1404F5DF0 (RtlCreateAcl.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl RtlCheckTokenCapability(HANDLE TokenHandle, PSID CapabilitySidToCheck, PBOOLEAN HasCapability)
{
  int v6; // ebx
  bool v7; // al
  NTSTATUS v8; // edi
  HANDLE TokenHandlea; // [rsp+60h] [rbp-A0h] BYREF
  ULONG ReturnLength; // [rsp+68h] [rbp-98h] BYREF
  NTSTATUS v12; // [rsp+6Ch] [rbp-94h] BYREF
  int v13; // [rsp+70h] [rbp-90h] BYREF
  HANDLE ExistingTokenHandle; // [rsp+78h] [rbp-88h] BYREF
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  char *v17; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v18[4]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE SecurityDescriptor[48]; // [rsp+E0h] [rbp-20h] BYREF
  PSID TokenInformation[12]; // [rsp+110h] [rbp+10h] BYREF
  int v21; // [rsp+170h] [rbp+70h] BYREF
  int v22; // [rsp+174h] [rbp+74h]
  __int16 v23; // [rsp+178h] [rbp+78h]
  ACL Acl; // [rsp+180h] [rbp+80h] BYREF
  char v25; // [rsp+220h] [rbp+120h] BYREF

  TokenHandlea = 0LL;
  memset(v18, 0, sizeof(v18));
  *HasCapability = 0;
  if ( !RtlIsCapabilitySid(CapabilitySidToCheck) )
  {
    v6 = -1073741811;
    goto LABEL_18;
  }
  if ( TokenHandle )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.SecurityQualityOfService = &v21;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    v21 = 12;
    v22 = 2;
    v23 = 1;
    v6 = ZwDuplicateToken(TokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &TokenHandlea);
    if ( v6 < 0 )
      goto LABEL_18;
    TokenHandle = 0LL;
LABEL_10:
    ReturnLength = 88;
    ZwQueryInformationToken(TokenHandlea, TokenUser, TokenInformation, 0x58u, &ReturnLength);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, TokenInformation[0], 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, TokenInformation[0], 0);
    RtlCreateAcl(&Acl, 0xA0u, 2u);
    RtlAddAccessAllowedAce(&Acl, 2u, 0x10001u, TokenInformation[0]);
    RtlAddAccessAllowedAce(&Acl, 2u, 0x10001u, CapabilitySidToCheck);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    v17 = &v25;
    v18[3] = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    v6 = ObReferenceObjectByHandle(TokenHandlea, 8u, (POBJECT_TYPE)SeTokenObjectType, 0, &Object, 0LL);
    v18[2] = Object;
    if ( v6 >= 0 )
    {
      v7 = SeAccessCheckWithHint(
             (ULONGLONG)SecurityDescriptor,
             0,
             (int *)v18,
             0,
             0x10001u,
             0,
             &v17,
             (__int64)&RtlpCheckTokenCapabilityGenericMapping,
             KeGetCurrentThread()->PreviousMode,
             &v13,
             &v12);
      v8 = v12;
      v6 = v12;
      if ( !v7 )
        v6 = -1073741790;
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      if ( v6 >= 0 )
      {
        if ( !v8 && v13 == 65537 )
          *HasCapability = 1;
        v6 = 0;
LABEL_18:
        if ( TokenHandle )
          return v6;
        goto LABEL_19;
      }
    }
    goto LABEL_19;
  }
  v6 = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 1u, 0x200u, &TokenHandlea);
  if ( v6 == -1073741700 )
  {
    v6 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0xAu, 0x200u, &ExistingTokenHandle);
    if ( v6 < 0 )
      goto LABEL_19;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.SecurityQualityOfService = &v21;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    v21 = 12;
    v22 = 2;
    v23 = 1;
    v6 = ZwDuplicateToken(ExistingTokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &TokenHandlea);
    ZwClose(ExistingTokenHandle);
  }
  if ( v6 >= 0 )
    goto LABEL_10;
LABEL_19:
  if ( TokenHandlea )
    ZwClose(TokenHandlea);
  return v6;
}
