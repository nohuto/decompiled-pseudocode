/*
 * XREFs of _CKsSoftwareNotificationsMonitor::OnFormatCapsChange_::_1_::dtor$3 @ 0x1800A404B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CKsSoftwareNotificationsMonitor::OnFormatCapsChange_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)(a2 + 56));
}
