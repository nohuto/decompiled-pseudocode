/*
 * XREFs of SeReleaseLuidAndAttributesArray @ 0x1404ECAE0
 * Callers:
 *     NtAdjustPrivilegesToken @ 0x1404EC040 (NtAdjustPrivilegesToken.c)
 *     NtPrivilegeCheck @ 0x1404EC904 (NtPrivilegeCheck.c)
 *     NtCreateLowBoxToken @ 0x140540EB0 (NtCreateLowBoxToken.c)
 *     NtCreateTokenEx @ 0x140542F04 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x140544C00 (NtSetInformationToken.c)
 *     NtAdjustGroupsToken @ 0x140546920 (NtAdjustGroupsToken.c)
 *     NtFilterToken @ 0x14057C3B8 (NtFilterToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseLuidAndAttributesArray(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
