/*
 * XREFs of _CreativeFramework::Actions::AddTileToCollectionService::GetHashedTileAlias_::_1_::dtor$9 @ 0x1800C75D1
 * Callers:
 *     <none>
 * Callees:
 *     ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800043A0 (--1HString@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::Actions::AddTileToCollectionService::GetHashedTileAlias_::_1_::dtor_9(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 64) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 64) &= ~1u;
    Microsoft::WRL::Wrappers::HString::~HString(*(HSTRING **)(a2 + 128));
  }
}
