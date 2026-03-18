/*
 * XREFs of SepInitializationPhase1 @ 0x1405C48E0
 * Callers:
 *     SeInitServerSilo @ 0x1406F063C (SeInitServerSilo.c)
 *     SeInitSystem @ 0x14081A260 (SeInitSystem.c)
 * Callees:
 *     RtlInitString @ 0x14002A170 (RtlInitString.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400F0FA0 (PsIsCurrentThreadInServerSilo.c)
 *     SddlBaseInitialize @ 0x140162768 (SddlBaseInitialize.c)
 *     SepInitProcessAuditSd @ 0x1401627E4 (SepInitProcessAuditSd.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwCreateEvent @ 0x14017E840 (ZwCreateEvent.c)
 *     ZwCreateDirectoryObject @ 0x14017F320 (ZwCreateDirectoryObject.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlCreateSecurityDescriptor @ 0x1404A1C80 (RtlCreateSecurityDescriptor.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404C0A50 (RtlAnsiStringToUnicodeString.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404F5D90 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1404F5DF0 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x14050C130 (RtlpAddKnownAce.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     SepInitializeCodeIntegrity @ 0x1405C5404 (SepInitializeCodeIntegrity.c)
 *     SepInitializeSingletonAttributesStructures @ 0x14081A37C (SepInitializeSingletonAttributesStructures.c)
 *     SepInitializeAuthorizationCallbacks @ 0x14081A518 (SepInitializeAuthorizationCallbacks.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x14081AB04 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x14081AD40 (SeMakeAnonymousLogonToken.c)
 */

char SepInitializationPhase1()
{
  char IsCurrentThreadInServerSilo; // bl
  ACL *PoolWithTag; // rax
  ACL *v2; // rdi
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-39h] BYREF
  HANDLE DirectoryHandle; // [rsp+58h] [rbp-29h] BYREF
  HANDLE EventHandle; // [rsp+60h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-19h] BYREF
  STRING DestinationString; // [rsp+98h] [rbp+17h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+A8h] [rbp+27h] BYREF

  EventHandle = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  IsCurrentThreadInServerSilo = PsIsCurrentThreadInServerSilo();
  if ( !IsCurrentThreadInServerSilo )
  {
    ObInsertObjectEx(
      (_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5] & 0xFFFFFFFFFFFFFFF0uLL),
      0LL,
      0LL,
      0,
      0,
      0LL,
      0LL);
    SeAnonymousLogonToken = SeMakeAnonymousLogonToken();
    SeAnonymousLogonTokenNoEveryone = SeMakeAnonymousLogonTokenNoEveryone();
  }
  RtlInitString(&DestinationString, "\\Security");
  RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x100uLL, 0x20206553u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  RtlCreateAcl(PoolWithTag, 0x100u, 2u);
  RtlpAddKnownAce(v2, 2u, 0, 983055, (unsigned __int8 *)SeLocalSystemSid, 0);
  RtlpAddKnownAce(v2, 2u, 0, 131075, (unsigned __int8 *)SeAliasAdminsSid, 0);
  RtlpAddKnownAce(v2, 2u, 0, 2, (unsigned __int8 *)SeWorldSid, 0);
  RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v2, 0);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.ObjectName = &UnicodeString;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
  ObjectAttributes.Length = 48;
  ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
  RtlFreeUnicodeString(&UnicodeString);
  ExFreePoolWithTag(v2, 0);
  RtlInitString(&DestinationString, "LSA_AUTHENTICATION_INITIALIZED");
  RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.RootDirectory = DirectoryHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &UnicodeString;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultSd;
  ObjectAttributes.Attributes = 80;
  ZwCreateEvent(&EventHandle, 0x40000000u, &ObjectAttributes, NotificationEvent, 0);
  RtlFreeUnicodeString(&UnicodeString);
  ZwClose(DirectoryHandle);
  ZwClose(EventHandle);
  if ( !IsCurrentThreadInServerSilo )
  {
    SepInitProcessAuditSd();
    SepInitializeCodeIntegrity();
    SepInitializeAuthorizationCallbacks();
    if ( (int)SepInitializeSingletonAttributesStructures() < 0 )
      return 0;
  }
  SddlBaseInitialize();
  return 1;
}
