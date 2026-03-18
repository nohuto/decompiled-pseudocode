/*
 * XREFs of PopCreateNotificationName @ 0x140582AF8
 * Callers:
 *     PopGetSettingNotificationName @ 0x14052389C (PopGetSettingNotificationName.c)
 * Callees:
 *     RtlDeriveCapabilitySidsFromName @ 0x14009FD90 (RtlDeriveCapabilitySidsFromName.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x1401A8D60 (ZwCreateWnfStateName.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404C07E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1404C76D0 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x140541DF0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140541E30 (RtlCreateAcl.c)
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
