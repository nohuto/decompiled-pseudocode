/*
 * XREFs of ??_E?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVTileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@PEAVContentsChangedEventArgs@234@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_6b9194c3216f761a386d947d38e63e72_@@$0?0PEAUITileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@PEAUIContentsChangedEventArgs@678@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVTileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@PEAUITileCollectionContainer@234@@Internal@Foundation@Windows@@U?$AggregateType@PEAVContentsChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@PEAUIContentsChangedEventArgs@234@@234@@Foundation@Windows@@EAAJPEAUITileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@PEAUIContentsChangedEventArgs@567@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180021100
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042948 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<WindowsInternal::Shell::UnifiedTile::TileCollectionContainer *,WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer *>,Windows::Foundation::Internal::AggregateType<WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs *,WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs *>>::*)(WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer *,WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<WindowsInternal::Shell::UnifiedTile::TileCollectionContainer *,WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_6b9194c3216f761a386d947d38e63e72_,-1,WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer *,WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs *>::`vector deleting destructor'(
        _QWORD *Block,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = Block[8];
  if ( v4 )
  {
    Block[8] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)Block + 15) = -1073741823;
  v5 = Block[4];
  if ( v5 )
  {
    Block[4] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
