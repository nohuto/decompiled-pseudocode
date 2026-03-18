/*
 * XREFs of SeReleaseAcl @ 0x140544018
 * Callers:
 *     NtCreateTokenEx @ 0x140542F04 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x140544C00 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseAcl(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
    ExFreePoolWithTag(a1, 0);
}
