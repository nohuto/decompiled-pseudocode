/*
 * XREFs of ?_Delete_this@?$_Func_impl@V?$_Binder@U_Unforced@std@@P8GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@EAAJPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@ZPEAV34567@AEBU?$_Ph@$00@2@@std@@V?$allocator@H@2@JPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@std@@EEAAX_N@Z @ 0x18001D1B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180041618 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::_Func_impl<std::_Binder<std::_Unforced,long (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::*)(WindowsInternal::Shell::UnifiedTile::ICollectionTile *),Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *,std::_Ph<1> const &>,std::allocator<int>,long,WindowsInternal::Shell::UnifiedTile::ICollectionTile *>::_Delete_this(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Func_base<long,WindowsInternal::Shell::UnifiedTile::ICollectionTile *>::`vftable';
  if ( a2 )
    operator delete(a1);
}
