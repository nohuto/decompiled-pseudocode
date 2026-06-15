/*
 * XREFs of ?OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z @ 0x180091160
 * Callers:
 *     <none>
 * Callees:
 *     ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x180090CE4 (-OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 *     ?OnVolumeLimitCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x180091180 (-OnVolumeLimitCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 */

__int64 __fastcall CKsSoftwareNotificationsMonitor::OnNotify(
        CKsSoftwareNotificationsMonitor *this,
        __int64 a2,
        const struct _GUID *a3)
{
  if ( *((_DWORD *)this + 7) == 3 )
    CKsSoftwareNotificationsMonitor::OnFormatCapsChange(this);
  else
    CKsSoftwareNotificationsMonitor::OnVolumeLimitCapsChange(this);
  return 0LL;
}
