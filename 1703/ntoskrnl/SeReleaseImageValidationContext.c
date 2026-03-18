/*
 * XREFs of SeReleaseImageValidationContext @ 0x140423C04
 * Callers:
 *     MiDeleteControlArea @ 0x140118FDC (MiDeleteControlArea.c)
 *     MiValidateSectionCreate @ 0x140422CC0 (MiValidateSectionCreate.c)
 * Callees:
 *     <none>
 */

void __fastcall SeReleaseImageValidationContext(void *a1)
{
  if ( qword_140348BE8 )
    guard_dispatch_icall();
  else
    ExFreePoolWithTag(a1, 0);
}
