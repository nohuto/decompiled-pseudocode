/*
 * XREFs of _CreativeFramework::Actions::SwapStartTileService::SwapStartTiles_::_1_::dtor$8 @ 0x1800BA1A1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreativeFramework::Actions::SwapStartTileService::SwapStartTiles_::_1_::dtor_8(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Services::TargetedContent::ITargetedContentItemState,wil::err_exception_policy>::~com_ptr_t<Windows::Services::TargetedContent::ITargetedContentItemState,wil::err_exception_policy>((__int64 *)(a2 + 128));
}
