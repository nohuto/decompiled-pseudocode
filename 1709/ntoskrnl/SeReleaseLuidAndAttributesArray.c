/*
 * XREFs of SeReleaseLuidAndAttributesArray @ 0x14045DA2C
 * Callers:
 *     NtFilterToken @ 0x14045ACFC (NtFilterToken.c)
 *     NtAdjustGroupsToken @ 0x14045BE94 (NtAdjustGroupsToken.c)
 *     NtCreateTokenEx @ 0x14045D140 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x1404690B0 (NtSetInformationToken.c)
 *     NtPrivilegeCheck @ 0x1405396C4 (NtPrivilegeCheck.c)
 *     NtAdjustPrivilegesToken @ 0x1405398A0 (NtAdjustPrivilegesToken.c)
 *     NtCreateLowBoxToken @ 0x140549290 (NtCreateLowBoxToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseLuidAndAttributesArray(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
