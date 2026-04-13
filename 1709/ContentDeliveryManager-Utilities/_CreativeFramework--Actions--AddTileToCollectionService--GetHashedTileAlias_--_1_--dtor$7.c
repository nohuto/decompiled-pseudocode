/*
 * XREFs of _CreativeFramework::Actions::AddTileToCollectionService::GetHashedTileAlias_::_1_::dtor$7 @ 0x1800BA573
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreativeFramework::Actions::AddTileToCollectionService::GetHashedTileAlias_::_1_::dtor_7(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Services::TargetedContent::ITargetedContentItemState,wil::err_exception_policy>::~com_ptr_t<Windows::Services::TargetedContent::ITargetedContentItemState,wil::err_exception_policy>((__int64 *)(a2 + 80));
}
