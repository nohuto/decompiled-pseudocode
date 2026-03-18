/*
 * XREFs of SepInitializationPhase1 @ 0x140641CF0
 * Callers:
 *     SeInitServerSilo @ 0x14078C4BC (SeInitServerSilo.c)
 *     SeInitSystem @ 0x1408BC6C0 (SeInitSystem.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14006E2C0 (PsIsCurrentThreadInServerSilo.c)
 *     RtlInitString @ 0x140076840 (RtlInitString.c)
 *     SddlBaseInitialize @ 0x140180398 (SddlBaseInitialize.c)
 *     SepInitProcessAuditSd @ 0x140180424 (SepInitProcessAuditSd.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwCreateEvent @ 0x1401A7DC0 (ZwCreateEvent.c)
 *     ZwCreateDirectoryObject @ 0x1401A88E0 (ZwCreateDirectoryObject.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404C07E0 (RtlSetDaclSecurityDescriptor.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     RtlpAddKnownAce @ 0x1404C76D0 (RtlpAddKnownAce.c)
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 *     RtlCreateSecurityDescriptor @ 0x140541DF0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140541E30 (RtlCreateAcl.c)
 *     SepInitializeCodeIntegrity @ 0x140642884 (SepInitializeCodeIntegrity.c)
 *     SepInitializeSingletonAttributesStructures @ 0x1408BC7D0 (SepInitializeSingletonAttributesStructures.c)
 *     SepInitializeAuthorizationCallbacks @ 0x1408BCB04 (SepInitializeAuthorizationCallbacks.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x1408BD0F0 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x1408BD32C (SeMakeAnonymousLogonToken.c)
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
  RtlFreeAnsiString(&UnicodeString);
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
  RtlFreeAnsiString(&UnicodeString);
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
