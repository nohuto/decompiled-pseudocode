/*
 * XREFs of ??1?$VectorRangeNoThrow@U?$IVectorView@PEAVCollectionTile@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@wil@@QEAA@XZ @ 0x180009A34
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_Start_::_1_::dtor$4 @ 0x180043C11 (_Windows--Gaming--Preview--GamesEnumeration--FindAllOperation--_Start_--_1_--dtor$4.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_Start_::_1_::dtor$5 @ 0x180043C2D (_Windows--Gaming--Preview--GamesEnumeration--FindAllOperation--_Start_--_1_--dtor$5.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_ProcessAddedOrRemovedTiles_::_1_::dtor$1 @ 0x1800442C7 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServerImpl--_ProcessAdd_ea_1800442C7.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::VectorRangeNoThrow<Windows::Foundation::Collections::IVectorView<WindowsInternal::Shell::UnifiedTile::CollectionTile *>>::~VectorRangeNoThrow<Windows::Foundation::Collections::IVectorView<WindowsInternal::Shell::UnifiedTile::CollectionTile *>>(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    *(_QWORD *)(result + 32) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
