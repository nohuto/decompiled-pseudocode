/*
 * XREFs of ?_Do_call@?$_Func_impl_no_alloc@V?$_Binder@U_Unforced@std@@P8GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@EAAJPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@ZPEAV34567@AEBU?$_Ph@$00@2@@std@@JPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@std@@EEAAJ$$QEAPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18001D9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,long (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::*)(WindowsInternal::Shell::UnifiedTile::ICollectionTile *),Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *,std::_Ph<1> const &>,long,WindowsInternal::Shell::UnifiedTile::ICollectionTile *>::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 8))(
           *(_QWORD *)(a1 + 32) + _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(a1 + 8), 8)),
           *a2);
}
