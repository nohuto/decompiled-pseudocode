/*
 * XREFs of ??_E?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVUnifiedTile@1Shell@WindowsInternal@@PEAVTileChangedEventArgs@123@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_aef633c7e7a39241655d515b2f17cdcc_@@$0?0PEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUITileChangedEventArgs@678@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVUnifiedTile@1Shell@WindowsInternal@@PEAUIUnifiedTile@123@@Internal@Foundation@Windows@@U?$AggregateType@PEAVTileChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@PEAUITileChangedEventArgs@234@@234@@Foundation@Windows@@EAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUITileChangedEventArgs@567@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180034B10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<WindowsInternal::Shell::UnifiedTile::UnifiedTile *,WindowsInternal::Shell::UnifiedTile::IUnifiedTile *>,Windows::Foundation::Internal::AggregateType<WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs *,WindowsInternal::Shell::UnifiedTile::ITileChangedEventArgs *>>::*)(WindowsInternal::Shell::UnifiedTile::IUnifiedTile *,WindowsInternal::Shell::UnifiedTile::ITileChangedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<WindowsInternal::Shell::UnifiedTile::UnifiedTile *,WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_aef633c7e7a39241655d515b2f17cdcc_,-1,WindowsInternal::Shell::UnifiedTile::IUnifiedTile *,WindowsInternal::Shell::UnifiedTile::ITileChangedEventArgs *>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = a1[9];
  if ( v4 )
  {
    a1[9] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)a1 + 17) = -1073741823;
  v5 = a1[5];
  if ( v5 )
  {
    a1[5] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x58uLL);
  return a1;
}
