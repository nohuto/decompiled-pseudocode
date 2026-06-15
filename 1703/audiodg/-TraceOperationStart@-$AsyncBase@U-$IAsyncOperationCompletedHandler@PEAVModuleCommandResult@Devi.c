/*
 * XREFs of ?TraceOperationStart@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXXZ @ 0x14004F274
 * Callers:
 *     ?Start@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x14004EED0 (-Start@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Wind.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x140047D0C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 */

void __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TraceOperationStart(
        __int64 a1)
{
  HSTRING_HEADER *v2; // rax
  const WCHAR *v3; // [rsp+40h] [rbp-58h] BYREF
  GUID v4; // [rsp+50h] [rbp-48h] BYREF
  HSTRING_HEADER v5; // [rsp+60h] [rbp-38h] BYREF

  if ( Microsoft::WRL::gCausality )
  {
    v3 = L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Devices.ModuleCommandResult>";
    v4 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
    v2 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v5, &v3);
    (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, PVOID, _QWORD))(*(_QWORD *)Microsoft::WRL::gCausality + 48LL))(
      Microsoft::WRL::gCausality,
      0LL,
      2LL,
      &v4,
      a1,
      v2[1].Reserved.Reserved1,
      *(unsigned int *)(a1 + 48));
  }
}
