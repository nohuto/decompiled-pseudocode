/*
 * XREFs of ??1IterableIterator@?$IterableRange@PEAU?$IKeyValuePair@U_GUID@@PEAUICuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180075D1C
 * Callers:
 *     _CreativeFramework::Actions::SwapStartTileService::EnumerateAliasMap_::_1_::dtor$2 @ 0x1800BA1E1 (_CreativeFramework--Actions--SwapStartTileService--EnumerateAliasMap_--_1_--dtor$2.c)
 *     _CreativeFramework::Actions::SwapStartTileService::EnumerateAliasMap_::_1_::dtor$3 @ 0x1800BA1ED (_CreativeFramework--Actions--SwapStartTileService--EnumerateAliasMap_--_1_--dtor$3.c)
 *     _CreativeFramework::EnumerateTargetedContentTiles_::_1_::dtor$5 @ 0x1800BBD76 (_CreativeFramework--EnumerateTargetedContentTiles_--_1_--dtor$5.c)
 *     _CreativeFramework::EnumerateTargetedContentTiles_::_1_::dtor$6 @ 0x1800BBD82 (_CreativeFramework--EnumerateTargetedContentTiles_--_1_--dtor$6.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::IterableRange<Windows::Foundation::Collections::IKeyValuePair<_GUID,WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTile *> *,wil::err_exception_policy>::IterableIterator::~IterableIterator(
        __int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = a1[2];
  if ( v2 )
  {
    a1[2] = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v4 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
