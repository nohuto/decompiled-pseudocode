/*
 * XREFs of SepReleaseAuditPolicy @ 0x14072C760
 * Callers:
 *     NtSetInformationToken @ 0x1404690B0 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall SepReleaseAuditPolicy(void *a1, unsigned __int8 a2)
{
  if ( a1 )
  {
    if ( a2 <= 1u )
      ExFreePoolWithTag(a1, 0);
  }
}
