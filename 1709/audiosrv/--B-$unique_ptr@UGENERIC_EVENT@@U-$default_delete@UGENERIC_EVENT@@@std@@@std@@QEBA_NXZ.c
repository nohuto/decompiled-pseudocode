/*
 * XREFs of ??B?$unique_ptr@UGENERIC_EVENT@@U?$default_delete@UGENERIC_EVENT@@@std@@@std@@QEBA_NXZ @ 0x18005C398
 * Callers:
 *     ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x180090CE4 (-OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::unique_ptr<GENERIC_EVENT>::operator bool(_QWORD *a1)
{
  return *a1 != 0LL;
}
