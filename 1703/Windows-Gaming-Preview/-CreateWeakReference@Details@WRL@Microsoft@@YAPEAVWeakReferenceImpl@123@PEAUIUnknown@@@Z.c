/*
 * XREFs of ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z @ 0x18000A40C
 * Callers:
 *     ?GetWeakReference@?$RuntimeClass@U?$InterfaceList@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x180005960 (-GetWeakReference@-$RuntimeClass@U-$InterfaceList@U-$IVectorView@PEAVGameListEntry@GamesEnumerat.c)
 *     ?GetWeakReference@?$RuntimeClass@U?$InterfaceList@U?$IIterator@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x1800075B0 (-GetWeakReference@-$RuntimeClass@U-$InterfaceList@U-$IIterator@PEAVGameListEntry@GamesEnumeratio.c)
 *     ?GetWeakReference@?$RuntimeClass@U?$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$InterfaceList@VCFTMCrossProcServer@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x1800097A0 (-GetWeakReference@-$RuntimeClass@U-$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@Gamin.c)
 *     ?GetWeakReference@?$RuntimeClass@U?$InterfaceList@V?$AsyncBaseWithProgressFTM@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@U?$InterfaceList@U?$IAsyncOperation@_N@Foundation@Windows@@U?$InterfaceList@UIAsyncOperationLocal@Internal@Windows@@U?$InterfaceList@U?$CloakedIid@UIAsyncDeferral@Internal@Windows@@@WRL@Microsoft@@U?$InterfaceList@U?$CloakedIid@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@U?$InterfaceList@U?$CloakedIid@UIAsyncFireCompletion@Internal@Windows@@@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x18000DE10 (-GetWeakReference@-$RuntimeClass@U-$InterfaceList@V-$AsyncBaseWithProgressFTM@U-$IAsyncOperation.c)
 *     ?GetWeakReference@?$RuntimeClass@U?$InterfaceList@UIInspectable@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@VNil@Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@@WRL@Microsoft@@U?$InterfaceList@VCFTMCrossProcClientImpl@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x18001C200 (-GetWeakReference@-$RuntimeClass@U-$InterfaceList@UIInspectable@@U-$InterfaceList@U-$Implements@.c)
 * Callees:
 *     ??$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWeakReferenceImpl@Details@WRL@Microsoft@@@12@AEAPEAUIUnknown@@@Z @ 0x18000A348 (--$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA-AV.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

struct Microsoft::WRL::Details::WeakReferenceImpl *__fastcall Microsoft::WRL::Details::CreateWeakReference(
        Microsoft::WRL::Details *this,
        struct IUnknown *a2)
{
  volatile signed __int32 **v2; // rax
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rcx
  Microsoft::WRL::Details *v6; // [rsp+30h] [rbp+8h] BYREF
  volatile signed __int32 *v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = this;
  v2 = Microsoft::WRL::Details::Make<Microsoft::WRL::Details::WeakReferenceImpl,IUnknown * &>(&v7, (__int64 *)&v6);
  v3 = *v2;
  *v2 = 0LL;
  v4 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 32LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  return (struct Microsoft::WRL::Details::WeakReferenceImpl *)v3;
}
