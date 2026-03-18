/*
 * XREFs of SeReleaseImageValidationContext @ 0x140613E10
 * Callers:
 *     MiDeleteControlArea @ 0x14004B068 (MiDeleteControlArea.c)
 *     MiValidateSectionCreate @ 0x14053BB84 (MiValidateSectionCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseImageValidationContext(void *a1)
{
  if ( qword_1403A5CE8 )
    qword_1403A5CE8();
  else
    ExFreePoolWithTag(a1, 0);
}
