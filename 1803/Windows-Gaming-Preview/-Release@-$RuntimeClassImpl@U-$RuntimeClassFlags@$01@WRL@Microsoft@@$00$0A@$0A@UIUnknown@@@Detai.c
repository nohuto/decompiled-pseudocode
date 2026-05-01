/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180026630
 * Callers:
 *     ??_EGameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x180019780 (--_EGameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z.c)
 *     ?_OnTileAdded@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18001A580 (-_OnTileAdded@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIColle.c)
 *     ?_OnTileRemoved@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18001A710 (-_OnTileRemoved@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUICol.c)
 *     ?Remove@?$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18001C2D0 (-Remove@-$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U-$.c)
 *     ??1?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x18001C53C (--1-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?AddInternal@?$EventSource@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAUIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x18001C5C0 (-AddInternal@-$EventSource@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x18001CE60 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ??_EGameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x18001D320 (--_EGameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_bfab945f95f9db2e18b4a82b65eae1b3__Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler_ @ 0x18001DFF8 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_bfab945f95f9db2e18b4a82b65eae1b3__Wind.c)
 *     ?Invoke@GameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEntry@2345@@Z @ 0x1800378C0 (-Invoke@GameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEn.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        volatile signed __int32 *a1)
{
  signed __int32 i; // r8d
  unsigned __int32 v2; // ebx

  for ( i = *((_DWORD *)a1 + 3);
        i != 0x7FFFFFFF && i != _InterlockedCompareExchange(a1 + 3, i - 1, i);
        i = *((_DWORD *)a1 + 3) )
  {
    ;
  }
  v2 = i - 1;
  if ( i == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 24LL))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  }
  return v2;
}
