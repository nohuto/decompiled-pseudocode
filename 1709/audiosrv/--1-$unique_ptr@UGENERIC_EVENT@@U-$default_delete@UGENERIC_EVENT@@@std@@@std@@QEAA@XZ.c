/*
 * XREFs of ??1?$unique_ptr@UGENERIC_EVENT@@U?$default_delete@UGENERIC_EVENT@@@std@@@std@@QEAA@XZ @ 0x18005C37C
 * Callers:
 *     ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x180090CE4 (-OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 * Callees:
 *     ??_EGENERIC_EVENT@@UEAAPEAXI@Z @ 0x18000C6F0 (--_EGENERIC_EVENT@@UEAAPEAXI@Z.c)
 */

GENERIC_EVENT *__fastcall std::unique_ptr<GENERIC_EVENT>::~unique_ptr<GENERIC_EVENT>(GENERIC_EVENT **a1)
{
  GENERIC_EVENT *v1; // rcx
  GENERIC_EVENT *result; // rax

  v1 = *a1;
  if ( v1 )
    return GENERIC_EVENT::`vector deleting destructor'(v1, 1);
  return result;
}
