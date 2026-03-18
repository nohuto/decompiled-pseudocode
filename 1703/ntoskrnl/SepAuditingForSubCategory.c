/*
 * XREFs of SepAuditingForSubCategory @ 0x14006440C
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x1400641B0 (SeReportSecurityEventWithSubCategory.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14049DB70 (SeAuditingWithTokenForSubcategory.c)
 * Callees:
 *     <none>
 */

char __fastcall SepAuditingForSubCategory(int a1, char a2)
{
  __int64 v2; // rcx

  v2 = (unsigned int)(a1 - 100);
  if ( a2 )
    return SeAuditingState[2 * v2];
  else
    return SeAuditingState[2 * v2 + 1];
}
