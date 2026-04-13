/*
 * XREFs of _CreativeFramework::Actions::SwapStartTileService::EnumerateAliasMap_::_1_::dtor$2 @ 0x1800BA1E1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreativeFramework::Actions::SwapStartTileService::EnumerateAliasMap_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  return wil::IterableRange<Windows::Foundation::Collections::IKeyValuePair<_GUID,WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTile *> *,wil::err_exception_policy>::IterableIterator::~IterableIterator((__int64 *)(a2 + 32));
}
