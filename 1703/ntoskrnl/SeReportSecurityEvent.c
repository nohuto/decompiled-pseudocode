/*
 * XREFs of SeReportSecurityEvent @ 0x140247440
 * Callers:
 *     <none>
 * Callees:
 *     SeReportSecurityEventWithSubCategory @ 0x1400641B0 (SeReportSecurityEventWithSubCategory.c)
 */

NTSTATUS __stdcall SeReportSecurityEvent(
        ULONG Flags,
        PUNICODE_STRING SourceName,
        PSID UserSid,
        PSE_ADT_PARAMETER_ARRAY AuditParameters)
{
  if ( AuditParameters )
    AuditParameters->CategoryId = 3;
  return SeReportSecurityEventWithSubCategory(Flags, SourceName, UserSid, AuditParameters, 0x7Au);
}
