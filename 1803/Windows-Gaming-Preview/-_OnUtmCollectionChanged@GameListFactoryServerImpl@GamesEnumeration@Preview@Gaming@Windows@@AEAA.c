/*
 * XREFs of ?_OnUtmCollectionChanged@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIContentsChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@_N@Z @ 0x18001A114
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer_____ptr64__Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs_____ptr64_WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____ptr64___::_)(WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_6b9194c3216f761a386d947d38e63e72___1_WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____ptr64_::Invoke @ 0x18001E260 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--ITypedEventHandler.c)
 * Callees:
 *     ?_ProcessAddedOrRemovedTiles@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@PEAVCollectionTile@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@5@V?$function@$$A6AJPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@Z@std@@_N@Z @ 0x18001A2F4 (-_ProcessAddedOrRemovedTiles@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@.c)
 *     __security_check_cookie @ 0x180041F40 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x180042938 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnUtmCollectionChanged(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *this,
        struct WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs *a2,
        char a3)
{
  __int64 v6; // rcx
  __int64 v7; // r9
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-A9h] BYREF
  _BYTE v15[40]; // [rsp+28h] [rbp-A1h] BYREF
  _BYTE *v16; // [rsp+60h] [rbp-69h]
  __int64 v17; // [rsp+68h] [rbp-61h]
  void **v18; // [rsp+70h] [rbp-59h] BYREF
  __int128 v19; // [rsp+78h] [rbp-51h]
  __int128 v20; // [rsp+88h] [rbp-41h]
  void *Block; // [rsp+A8h] [rbp-21h]
  void **v22; // [rsp+B0h] [rbp-19h] BYREF
  __int128 v23; // [rsp+B8h] [rbp-11h]
  __int128 v24; // [rsp+C8h] [rbp-1h]
  void *v25; // [rsp+E8h] [rbp+1Fh]

  v17 = -2LL;
  v14 = 0LL;
  if ( (*(int (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs *, __int64 *))(*(_QWORD *)a2 + 64LL))(
         a2,
         &v14) >= 0 )
  {
    *(_QWORD *)v15 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnTileAdded;
    *(_DWORD *)&v15[8] = 0;
    v8 = *(_OWORD *)v15;
    *(_QWORD *)&v15[24] = this;
    v18 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,long (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::*)(WindowsInternal::Shell::UnifiedTile::ICollectionTile *),Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *,std::_Ph<1> const &>,long,WindowsInternal::Shell::UnifiedTile::ICollectionTile *>::`vftable';
    v19 = *(_OWORD *)v15;
    v9 = *(_OWORD *)&v15[16];
    v20 = *(_OWORD *)&v15[16];
    Block = &v18;
    *(_QWORD *)v15 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,long (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::*)(WindowsInternal::Shell::UnifiedTile::ICollectionTile *),Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *,std::_Ph<1> const &>,long,WindowsInternal::Shell::UnifiedTile::ICollectionTile *>::`vftable';
    *(_OWORD *)&v15[8] = v8;
    *(_OWORD *)&v15[24] = v9;
    v16 = v15;
    LOBYTE(v7) = a3;
    Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_ProcessAddedOrRemovedTiles(v6, v14, v15, v7);
    if ( Block )
    {
      if ( Block != &v18 )
        operator delete(Block);
    }
  }
  if ( a3 )
  {
    v10 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    if ( (*(int (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs *, __int64 *))(*(_QWORD *)a2 + 72LL))(
           a2,
           &v14) >= 0 )
    {
      *(_QWORD *)v15 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnTileRemoved;
      *(_DWORD *)&v15[8] = 0;
      *(_QWORD *)&v15[24] = this;
      v22 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,long (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::*)(WindowsInternal::Shell::UnifiedTile::ICollectionTile *),Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *,std::_Ph<1> const &>,long,WindowsInternal::Shell::UnifiedTile::ICollectionTile *>::`vftable';
      v23 = *(_OWORD *)v15;
      v24 = *(_OWORD *)&v15[16];
      v25 = &v22;
      v18 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,long (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::*)(WindowsInternal::Shell::UnifiedTile::ICollectionTile *),Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *,std::_Ph<1> const &>,long,WindowsInternal::Shell::UnifiedTile::ICollectionTile *>::`vftable';
      v19 = *(_OWORD *)v15;
      v20 = *(_OWORD *)&v15[16];
      Block = &v18;
      Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_ProcessAddedOrRemovedTiles(
        v11,
        v14,
        &v18,
        0LL);
      if ( v25 )
      {
        if ( v25 != &v22 )
          operator delete(v25);
      }
    }
  }
  v12 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return 0LL;
}
