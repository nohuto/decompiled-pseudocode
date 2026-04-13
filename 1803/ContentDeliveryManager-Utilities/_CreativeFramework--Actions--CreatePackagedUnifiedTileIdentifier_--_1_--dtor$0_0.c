/*
 * XREFs of _CreativeFramework::Actions::CreatePackagedUnifiedTileIdentifier_::_1_::dtor$0_0 @ 0x1800C7135
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreativeFramework::Actions::CreatePackagedUnifiedTileIdentifier_::_1_::dtor_0_0(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 40));
}
