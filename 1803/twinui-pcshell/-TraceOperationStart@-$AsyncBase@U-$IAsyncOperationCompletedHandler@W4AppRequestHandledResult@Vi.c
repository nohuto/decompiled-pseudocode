/*
 * XREFs of ?TraceOperationStart@?$AsyncBase@U?$IAsyncOperationCompletedHandler@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXXZ @ 0x1801E7088
 * Callers:
 *     ?Start@?$AsyncBase@U?$IAsyncOperationCompletedHandler@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x1801E6640 (-Start@-$AsyncBase@U-$IAsyncOperationCompletedHandler@W4AppRequestHandledResult@ViewManagerInter.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TraceOperationStart(
        __int64 a1)
{
  __int64 v2; // rax
  GUID v3; // [rsp+40h] [rbp-58h] BYREF
  __int64 v4; // [rsp+50h] [rbp-48h]
  __int64 v5; // [rsp+58h] [rbp-40h] BYREF

  v4 = -2LL;
  if ( Microsoft::WRL::gCausality )
  {
    *(_QWORD *)&v3.Data1 = L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Internal.Shell.ViewManagerInterop"
                            ".AppRequestHandledResult>";
    v2 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v5, (const WCHAR **)&v3);
    v3 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
    (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, _QWORD, _QWORD))(*(_QWORD *)Microsoft::WRL::gCausality + 48LL))(
      Microsoft::WRL::gCausality,
      0LL,
      2LL,
      &v3,
      a1,
      *(_QWORD *)(v2 + 24),
      *(unsigned int *)(a1 + 56));
  }
}
