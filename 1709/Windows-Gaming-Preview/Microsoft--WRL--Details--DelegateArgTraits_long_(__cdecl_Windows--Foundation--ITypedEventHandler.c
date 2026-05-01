/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer_____ptr64__Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs_____ptr64_WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____ptr64___::_)(WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_49b7637f1ae8579193cef770f2c52568___1_WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____ptr64_::Invoke @ 0x18001D2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1800142F0 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     ?_OnUtmCollectionChanged@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIContentsChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@_N@Z @ 0x180019634 (-_OnUtmCollectionChanged@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAA.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer_____ptr64__Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs_____ptr64_WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____ptr64___::___WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_49b7637f1ae8579193cef770f2c52568___1_WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____ptr64_::Invoke(
        __int64 a1,
        __int64 a2,
        struct WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs *a3)
{
  __int64 v5; // rcx
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  v5 = *(_QWORD *)(a1 + 72);
  if ( !v5 )
    goto LABEL_11;
  v6 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL))(
         v5,
         &GUID_2ddd0f6f_9c66_4b05_945c_d6ed78491b8c,
         &v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 267LL;
    goto LABEL_4;
  }
  if ( !v13 )
  {
LABEL_11:
    v7 = 0;
    goto LABEL_12;
  }
  v6 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnUtmCollectionChanged(
         *(Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl **)(a1 + 80),
         a3,
         *(_BYTE *)(a1 + 88));
  v7 = v6;
  if ( v6 >= 0 )
  {
    v10 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    goto LABEL_11;
  }
  v8 = 272LL;
LABEL_4:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v8,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
    (const char *)(unsigned int)v6);
  v9 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
LABEL_12:
  if ( v7 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v7);
  return (unsigned int)v7;
}
