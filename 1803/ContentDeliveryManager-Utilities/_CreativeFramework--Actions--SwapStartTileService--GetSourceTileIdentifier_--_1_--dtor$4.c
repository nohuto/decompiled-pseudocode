/*
 * XREFs of _CreativeFramework::Actions::SwapStartTileService::GetSourceTileIdentifier_::_1_::dtor$4 @ 0x1800C7355
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreativeFramework::Actions::SwapStartTileService::GetSourceTileIdentifier_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 56));
}
