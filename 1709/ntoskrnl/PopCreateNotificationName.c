/*
 * XREFs of PopCreateNotificationName @ 0x1405994C8
 * Callers:
 *     PopGetSettingNotificationName @ 0x1404EAE58 (PopGetSettingNotificationName.c)
 * Callees:
 *     RtlDeriveCapabilitySidsFromName @ 0x1400FA7B0 (RtlDeriveCapabilitySidsFromName.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x14017F140 (ZwCreateWnfStateName.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140486330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140486390 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x1404BBB70 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x14054A4B0 (RtlCreateSecurityDescriptor.c)
 */

NTSTATUS __fastcall PopCreateNotificationName(__int64 a1)
{
  NTSTATUS result; // eax
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 Src[48]; // [rsp+78h] [rbp-88h] BYREF
  char Sid[56]; // [rsp+A8h] [rbp-58h] BYREF
  ACL Acl; // [rsp+E0h] [rbp-20h] BYREF

  *(_DWORD *)&SourceString.Length = 2752552;
  SourceString.Buffer = L"lpacPnpNotifications";
  RtlCreateAcl(&Acl, 0x148u, 2u);
  RtlpAddKnownAce(&Acl, 2u, 0, 2031619, (unsigned __int8 *)SeLocalSystemSid, 0);
  RtlpAddKnownAce(&Acl, 2u, 0, 1179649, (unsigned __int8 *)SeWorldSid, 0);
  RtlpAddKnownAce(&Acl, 2u, 0, 1179649, (unsigned __int8 *)SeAllAppPackagesSid, 0);
  result = RtlDeriveCapabilitySidsFromName(&SourceString, Sid, Src);
  if ( result >= 0 )
  {
    RtlpAddKnownAce(&Acl, 2u, 0, 1179649, Src, 0);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    return ZwCreateWnfStateName(a1, 3LL, 4LL);
  }
  return result;
}
