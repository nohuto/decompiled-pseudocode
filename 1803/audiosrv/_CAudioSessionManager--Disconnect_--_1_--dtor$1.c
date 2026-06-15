/*
 * XREFs of _CAudioSessionManager::Disconnect_::_1_::dtor$1 @ 0x180067242
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSessionManager::Disconnect_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDeviceGraphObjectsStore,wil::err_returncode_policy>::~com_ptr_t<IDeviceGraphObjectsStore,wil::err_returncode_policy>((__int64 *)(a2 + 248));
}
