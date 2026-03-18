/*
 * XREFs of SeReleaseLuidAndAttributesArray @ 0x14046FF24
 * Callers:
 *     NtFilterToken @ 0x14045464C (NtFilterToken.c)
 *     NtAdjustGroupsToken @ 0x14046D64C (NtAdjustGroupsToken.c)
 *     NtSetInformationToken @ 0x14046DB70 (NtSetInformationToken.c)
 *     NtCreateTokenEx @ 0x14046F5F4 (NtCreateTokenEx.c)
 *     NtAdjustPrivilegesToken @ 0x14049CF30 (NtAdjustPrivilegesToken.c)
 *     NtPrivilegeCheck @ 0x14049D7B0 (NtPrivilegeCheck.c)
 *     NtCreateLowBoxToken @ 0x1404A48A0 (NtCreateLowBoxToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseLuidAndAttributesArray(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
