/*
 * XREFs of ExpWnfSpecializeSecurityDescriptor @ 0x1404F7A40
 * Callers:
 *     NtCreateWnfStateName @ 0x1404F47EC (NtCreateWnfStateName.c)
 *     ExpWnfLookupPermanentName @ 0x1405178D4 (ExpWnfLookupPermanentName.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x14006CDC0 (RtlGetDaclSecurityDescriptor.c)
 *     RtlpApplyAclToObject @ 0x1404C5F80 (RtlpApplyAclToObject.c)
 *     RtlGetSaclSecurityDescriptor @ 0x1404F7AD0 (RtlGetSaclSecurityDescriptor.c)
 */

void __fastcall ExpWnfSpecializeSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  BOOLEAN SaclPresent; // [rsp+38h] [rbp+10h] BYREF
  BOOLEAN SaclDefaulted; // [rsp+40h] [rbp+18h] BYREF
  PACL Sacl; // [rsp+48h] [rbp+20h] BYREF

  Sacl = 0LL;
  if ( RtlGetDaclSecurityDescriptor(SecurityDescriptor, &SaclPresent, &Sacl, &SaclDefaulted) >= 0 && SaclPresent && Sacl )
    RtlpApplyAclToObject((__int64)Sacl, &ExpWnfNotificationMapping);
  if ( RtlGetSaclSecurityDescriptor(SecurityDescriptor, &SaclPresent, &Sacl, &SaclDefaulted) >= 0 && SaclPresent )
  {
    if ( Sacl )
      RtlpApplyAclToObject((__int64)Sacl, &ExpWnfNotificationMapping);
  }
}
