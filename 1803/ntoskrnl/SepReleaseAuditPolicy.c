/*
 * XREFs of SepReleaseAuditPolicy @ 0x140790B0C
 * Callers:
 *     NtSetInformationToken @ 0x140544C00 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall SepReleaseAuditPolicy(void *a1, unsigned __int8 a2)
{
  if ( a1 )
  {
    if ( a2 <= 1u )
      ExFreePoolWithTag(a1, 0);
  }
}
