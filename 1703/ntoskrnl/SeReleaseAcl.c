/*
 * XREFs of SeReleaseAcl @ 0x14046EA50
 * Callers:
 *     NtSetInformationToken @ 0x14046DB70 (NtSetInformationToken.c)
 *     NtCreateTokenEx @ 0x14046F5F4 (NtCreateTokenEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseAcl(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
    ExFreePoolWithTag(a1, 0);
}
