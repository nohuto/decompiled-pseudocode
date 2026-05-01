/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180025600
 * Callers:
 *     ??1GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x180018C44 (--1GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ.c)
 *     ?UnmergeEntryAsync@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEntry@2345@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18001AC00 (-UnmergeEntryAsync@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUI.c)
 *     ??$MakeAndInitialize@VGameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VGameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@012@@Z @ 0x18001BAF4 (--$MakeAndInitialize@VGameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@V12345.c)
 *     ??_G?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_e55ccab858df802f1f19496ef6f8fbee_@@@Internal@Windows@@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@23@@Internal@Windows@@UEAAPEAXI@Z @ 0x18001CC40 (--_G-$COperationLambda0@V-$CCallAsyncLambda@V_lambda_e55ccab858df802f1f19496ef6f8fbee_@@@Interna.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800224D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListChangedE.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800224F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_1800224F0.c)
 *     ?Release@GameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ @ 0x180025670 (-Release@GameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>::Release(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  unsigned __int32 v2; // ebx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)a1 + 4);
  while ( v1 >= 0 )
  {
    v2 = v1 - 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64(a1 + 4, v1 - 1, v1);
    if ( v3 == v1 )
      goto LABEL_5;
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 16));
LABEL_5:
  if ( !v2 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 48))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  }
  return v2;
}
