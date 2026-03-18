/*
 * XREFs of SeReleaseAcl @ 0x14045D074
 * Callers:
 *     NtCreateTokenEx @ 0x14045D140 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x1404690B0 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseAcl(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
    ExFreePoolWithTag(a1, 0);
}
