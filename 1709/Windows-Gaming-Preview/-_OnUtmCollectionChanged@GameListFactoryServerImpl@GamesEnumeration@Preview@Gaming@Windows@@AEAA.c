/*
 * XREFs of ?_OnUtmCollectionChanged@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIContentsChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@_N@Z @ 0x180019634
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer_____ptr64__Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs_____ptr64_WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____ptr64___::_)(WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_49b7637f1ae8579193cef770f2c52568___1_WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____ptr64_::Invoke @ 0x18001D2E0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--ITypedEventHandler.c)
 * Callees:
 *     ?_ProcessAddedOrRemovedTiles@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@PEAVCollectionTile@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@5@V?$function@$$A6AJPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@Z@std@@_N@Z @ 0x180019800 (-_ProcessAddedOrRemovedTiles@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@.c)
 *     __security_check_cookie @ 0x180040F50 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x180041618 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnUtmCollectionChanged(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *this,
        struct WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs *a2,
        char a3)
{
  __int64 v6; // r9
  void ***v7; // rcx
  __int64 v8; // rcx
  void ***v9; // rcx
  __int64 v10; // rcx
  char v12; // [rsp+28h] [rbp-89h]
  __int64 v13; // [rsp+30h] [rbp-81h] BYREF
  __int128 v14; // [rsp+38h] [rbp-79h]
  __int64 v15; // [rsp+48h] [rbp-69h]
  void **v16; // [rsp+58h] [rbp-59h] BYREF
  __int128 v17; // [rsp+60h] [rbp-51h]
  char v18; // [rsp+70h] [rbp-41h]
  Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *v19; // [rsp+78h] [rbp-39h]
  void *v20; // [rsp+90h] [rbp-21h]
  void **v21; // [rsp+98h] [rbp-19h] BYREF
  __int128 v22; // [rsp+A0h] [rbp-11h]
  char v23; // [rsp+B0h] [rbp-1h]
  Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *v24; // [rsp+B8h] [rbp+7h]
  void *Block; // [rsp+D0h] [rbp+1Fh]

  v15 = -2LL;
  v13 = 0LL;
  if ( (*(int (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs *, __int64 *))(*(_QWORD *)a2 + 64LL))(
         a2,
         &v13) >= 0 )
  {
    *(_QWORD *)&v14 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnTileAdded;
    DWORD2(v14) = 0;
    v21 = &std::_Func_impl<std::_Binder<std::_Unforced,long (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::*)(WindowsInternal::Shell::UnifiedTile::ICollectionTile *),Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *,std::_Ph<1> const &>,std::allocator<int>,long,WindowsInternal::Shell::UnifiedTile::ICollectionTile *>::`vftable';
    v22 = v14;
    v23 = v12;
    v24 = this;
    Block = &v21;
    v16 = &std::_Func_impl<std::_Binder<std::_Unforced,long (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::*)(WindowsInternal::Shell::UnifiedTile::ICollectionTile *),Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *,std::_Ph<1> const &>,std::allocator<int>,long,WindowsInternal::Shell::UnifiedTile::ICollectionTile *>::`vftable';
    v17 = v14;
    v18 = v12;
    v19 = this;
    v20 = &v16;
    LOBYTE(v6) = a3;
    Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_ProcessAddedOrRemovedTiles(
      &v21,
      v13,
      &v16,
      v6);
    v7 = (void ***)Block;
    if ( Block )
    {
      *(_QWORD *)Block = &std::_Func_base<long,WindowsInternal::Shell::UnifiedTile::ICollectionTile *>::`vftable';
      if ( v7 != &v21 )
        operator delete(v7);
    }
  }
  if ( a3 )
  {
    v8 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( (*(int (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs *, __int64 *))(*(_QWORD *)a2 + 72LL))(
           a2,
           &v13) >= 0 )
    {
      *(_QWORD *)&v14 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnTileRemoved;
      DWORD2(v14) = 0;
      v16 = &std::_Func_impl<std::_Binder<std::_Unforced,long (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::*)(WindowsInternal::Shell::UnifiedTile::ICollectionTile *),Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *,std::_Ph<1> const &>,std::allocator<int>,long,WindowsInternal::Shell::UnifiedTile::ICollectionTile *>::`vftable';
      v17 = v14;
      v18 = v12;
      v19 = this;
      v20 = &v16;
      v21 = &std::_Func_impl<std::_Binder<std::_Unforced,long (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::*)(WindowsInternal::Shell::UnifiedTile::ICollectionTile *),Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *,std::_Ph<1> const &>,std::allocator<int>,long,WindowsInternal::Shell::UnifiedTile::ICollectionTile *>::`vftable';
      v22 = v14;
      v23 = v12;
      v24 = this;
      Block = &v21;
      Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_ProcessAddedOrRemovedTiles(
        &v16,
        v13,
        &v21,
        0LL);
      v9 = (void ***)v20;
      if ( v20 )
      {
        *(_QWORD *)v20 = &std::_Func_base<long,WindowsInternal::Shell::UnifiedTile::ICollectionTile *>::`vftable';
        if ( v9 != &v16 )
          operator delete(v9);
      }
    }
  }
  v10 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return 0LL;
}
