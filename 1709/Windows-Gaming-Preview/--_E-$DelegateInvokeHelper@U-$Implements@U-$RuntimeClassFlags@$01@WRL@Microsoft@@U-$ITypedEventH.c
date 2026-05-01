/*
 * XREFs of ??_E?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVTileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@PEAVContentsChangedEventArgs@234@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_49b7637f1ae8579193cef770f2c52568_@@$0?0PEAUITileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@PEAUIContentsChangedEventArgs@678@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVTileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@PEAUITileCollectionContainer@234@@Internal@Foundation@Windows@@U?$AggregateType@PEAVContentsChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@PEAUIContentsChangedEventArgs@234@@234@@Foundation@Windows@@EAAJPEAUITileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@PEAUIContentsChangedEventArgs@567@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180020280
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<WindowsInternal::Shell::UnifiedTile::TileCollectionContainer *,WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer *>,Windows::Foundation::Internal::AggregateType<WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs *,WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs *>>::*)(WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer *,WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<WindowsInternal::Shell::UnifiedTile::TileCollectionContainer *,WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_49b7637f1ae8579193cef770f2c52568_,-1,WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer *,WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs *>::`vector deleting destructor'(
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
    operator delete(a1, 0x60uLL);
  return a1;
}
