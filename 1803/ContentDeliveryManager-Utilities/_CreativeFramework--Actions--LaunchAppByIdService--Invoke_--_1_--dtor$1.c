/*
 * XREFs of _CreativeFramework::Actions::LaunchAppByIdService::Invoke_::_1_::dtor$1 @ 0x1800C7D21
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreativeFramework::Actions::LaunchAppByIdService::Invoke_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 32));
}
