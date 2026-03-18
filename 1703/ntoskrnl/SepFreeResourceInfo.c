/*
 * XREFs of SepFreeResourceInfo @ 0x14003E044
 * Callers:
 *     SeAccessCheckWithHint @ 0x14008D7C0 (SeAccessCheckWithHint.c)
 *     SepFilterCheck @ 0x14008E7E0 (SepFilterCheck.c)
 *     SepCommonAccessCheckEx @ 0x1401326AC (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046B2C0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x14000DBA0 (AuthzBasepFreeSecurityAttributesList.c)
 */

void __fastcall SepFreeResourceInfo(_DWORD *a1)
{
  if ( a1 )
  {
    AuthzBasepFreeSecurityAttributesList(a1);
    ExFreePoolWithTag(a1, 0);
  }
}
