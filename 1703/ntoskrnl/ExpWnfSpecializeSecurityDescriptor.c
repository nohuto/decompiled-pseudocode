/*
 * XREFs of ExpWnfSpecializeSecurityDescriptor @ 0x1404C2B6C
 * Callers:
 *     ExpWnfLookupPermanentName @ 0x1404C0014 (ExpWnfLookupPermanentName.c)
 *     NtCreateWnfStateName @ 0x1404C2738 (NtCreateWnfStateName.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x14006F530 (RtlGetDaclSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x1404C2C00 (RtlGetSaclSecurityDescriptor.c)
 *     RtlpApplyAclToObject @ 0x14051E030 (RtlpApplyAclToObject.c)
 */

NTSTATUS __fastcall ExpWnfSpecializeSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  NTSTATUS result; // eax
  BOOLEAN SaclPresent; // [rsp+38h] [rbp+10h] BYREF
  BOOLEAN SaclDefaulted; // [rsp+40h] [rbp+18h] BYREF
  PACL Sacl; // [rsp+48h] [rbp+20h] BYREF

  Sacl = 0LL;
  if ( RtlGetDaclSecurityDescriptor(SecurityDescriptor, &SaclPresent, &Sacl, &SaclDefaulted) >= 0 && SaclPresent && Sacl )
    RtlpApplyAclToObject(Sacl, &ExpWnfNotificationMapping);
  result = RtlGetSaclSecurityDescriptor(SecurityDescriptor, &SaclPresent, &Sacl, &SaclDefaulted);
  if ( result >= 0 && SaclPresent )
  {
    if ( Sacl )
      return RtlpApplyAclToObject(Sacl, &ExpWnfNotificationMapping);
  }
  return result;
}
