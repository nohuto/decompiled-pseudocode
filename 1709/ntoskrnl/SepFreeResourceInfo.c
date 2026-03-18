/*
 * XREFs of SepFreeResourceInfo @ 0x1400150FC
 * Callers:
 *     SeAccessCheckWithHint @ 0x14007E4B0 (SeAccessCheckWithHint.c)
 *     SepFilterCheck @ 0x14007F470 (SepFilterCheck.c)
 *     SepCommonAccessCheckEx @ 0x14014204C (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046A8D0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x14001EED0 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall SepFreeResourceInfo(PVOID P)
{
  if ( P )
  {
    AuthzBasepFreeSecurityAttributesList();
    ExFreePoolWithTag(P, 0);
  }
}
