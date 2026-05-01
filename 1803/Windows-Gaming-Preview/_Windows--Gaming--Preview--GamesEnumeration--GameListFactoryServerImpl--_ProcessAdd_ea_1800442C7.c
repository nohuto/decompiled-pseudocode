/*
 * XREFs of _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_ProcessAddedOrRemovedTiles_::_1_::dtor$1 @ 0x1800442C7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_ProcessAddedOrRemovedTiles_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return wil::VectorRangeNoThrow<Windows::Foundation::Collections::IVectorView<WindowsInternal::Shell::UnifiedTile::CollectionTile *>>::~VectorRangeNoThrow<Windows::Foundation::Collections::IVectorView<WindowsInternal::Shell::UnifiedTile::CollectionTile *>>(a2 + 72);
}
