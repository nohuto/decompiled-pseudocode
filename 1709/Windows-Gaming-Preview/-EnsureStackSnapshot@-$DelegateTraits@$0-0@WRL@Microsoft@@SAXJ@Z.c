/*
 * XREFs of ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1800142F0
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler::_)(Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler_Microsoft::WRL::FtmBase___lambda_b1a7fbe60b38f5be1a597c9f5fbfe299___1_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_____ptr64_::Invoke @ 0x18001C870 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Gaming--Preview--GamesEnumerat.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler::_)(HSTRING_______ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler_Microsoft::WRL::FtmBase___lambda_a57fb545b47b4946c77e6266cbb1f432___1_HSTRING_______ptr64_::Invoke @ 0x18001C9A0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Gaming--Preview--_ea_18001C9A0.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer_____ptr64__Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs_____ptr64_WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____ptr64___::_)(WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_49b7637f1ae8579193cef770f2c52568___1_WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____ptr64_::Invoke @ 0x18001D2E0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--ITypedEventHandler.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::UnifiedTile_____ptr64_WindowsInternal::Shell::UnifiedTile::IUnifiedTile_____ptr64__Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs_____ptr64_WindowsInternal::Shell::UnifiedTile::ITileChangedEventArgs_____ptr64___::_)(WindowsInternal::Shell::UnifiedTile::IUnifiedTile_____ptr64_WindowsInternal::Shell::UnifiedTile::ITileChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::UnifiedTile_____ptr64_WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_aef633c7e7a39241655d515b2f17cdcc___1_WindowsInternal::Shell::UnifiedTile::IUnifiedTile_____ptr64_WindowsInternal::Shell::UnifiedTile::ITileChangedEventArgs_____ptr64_::Invoke @ 0x180032680 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180032680.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  result = RoGetMatchingRestrictedErrorInfo(a1, &v3);
  if ( (int)result >= 0 )
    result = SetRestrictedErrorInfo(v3);
  v2 = v3;
  if ( v3 )
  {
    v3 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
