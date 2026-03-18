/*
 * XREFs of ExpWnfSpecializeSecurityDescriptor @ 0x140504CCC
 * Callers:
 *     ExpWnfLookupPermanentName @ 0x1404E0E80 (ExpWnfLookupPermanentName.c)
 *     NtCreateWnfStateName @ 0x140504994 (NtCreateWnfStateName.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x1400BB9A0 (RtlGetDaclSecurityDescriptor.c)
 *     RtlpApplyAclToObject @ 0x1404BE910 (RtlpApplyAclToObject.c)
 *     RtlGetSaclSecurityDescriptor @ 0x140504D60 (RtlGetSaclSecurityDescriptor.c)
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
