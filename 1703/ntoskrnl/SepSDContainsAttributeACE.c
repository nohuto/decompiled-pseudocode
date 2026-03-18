/*
 * XREFs of SepSDContainsAttributeACE @ 0x1406FA598
 * Callers:
 *     SepAdtOpenObjectAuditAlarm @ 0x1406F3178 (SepAdtOpenObjectAuditAlarm.c)
 * Callees:
 *     RtlFindAceByType @ 0x1400DBB80 (RtlFindAceByType.c)
 *     RtlGetSaclSecurityDescriptor @ 0x1404C2C00 (RtlGetSaclSecurityDescriptor.c)
 */

bool __fastcall SepSDContainsAttributeACE(void *a1)
{
  char v1; // bl
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  BOOLEAN v4; // [rsp+48h] [rbp+10h] BYREF
  BOOLEAN v5; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v6; // [rsp+58h] [rbp+20h] BYREF

  v1 = 0;
  v3 = 0LL;
  v4 = 0;
  v6 = 0;
  if ( RtlGetSaclSecurityDescriptor(a1, &v4, (PACL *)&v3, &v5) >= 0 && v4 )
    return RtlFindAceByType(v3, 18, &v6) != 0LL;
  return v1;
}
