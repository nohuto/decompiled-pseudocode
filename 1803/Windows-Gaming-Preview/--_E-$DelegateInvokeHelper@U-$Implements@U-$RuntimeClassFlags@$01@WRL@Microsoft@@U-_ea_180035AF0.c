/*
 * XREFs of ??_E?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVUnifiedTile@1Shell@WindowsInternal@@PEAVTileChangedEventArgs@123@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_6fb12e8f7c4d1643d81b86d5cb603526_@@$0?0PEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUITileChangedEventArgs@678@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVUnifiedTile@1Shell@WindowsInternal@@PEAUIUnifiedTile@123@@Internal@Foundation@Windows@@U?$AggregateType@PEAVTileChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@PEAUITileChangedEventArgs@234@@234@@Foundation@Windows@@EAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUITileChangedEventArgs@567@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180035AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042948 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<WindowsInternal::Shell::UnifiedTile::UnifiedTile *,WindowsInternal::Shell::UnifiedTile::IUnifiedTile *>,Windows::Foundation::Internal::AggregateType<WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs *,WindowsInternal::Shell::UnifiedTile::ITileChangedEventArgs *>>::*)(WindowsInternal::Shell::UnifiedTile::IUnifiedTile *,WindowsInternal::Shell::UnifiedTile::ITileChangedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<WindowsInternal::Shell::UnifiedTile::UnifiedTile *,WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_6fb12e8f7c4d1643d81b86d5cb603526_,-1,WindowsInternal::Shell::UnifiedTile::IUnifiedTile *,WindowsInternal::Shell::UnifiedTile::ITileChangedEventArgs *>::`vector deleting destructor'(
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
