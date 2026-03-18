/*
 * XREFs of SeReleaseImageValidationContext @ 0x1405F1480
 * Callers:
 *     MiDeleteControlArea @ 0x14001F4A4 (MiDeleteControlArea.c)
 *     MiValidateSectionCreate @ 0x1404F6218 (MiValidateSectionCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseImageValidationContext(void *a1)
{
  if ( qword_140362688 )
    qword_140362688();
  else
    ExFreePoolWithTag(a1, 0);
}
