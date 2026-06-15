/*
 * XREFs of ?Cancel@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJXZ @ 0x140049EA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?TransitionToState@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@AEAA_NW4AsyncStatusInternal@Details@23@@Z @ 0x14004ECCC (-TransitionToState@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Device.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::Cancel(
        __int64 a1)
{
  void (__fastcall *v2)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, __int64, int); // rax
  GUID v4; // [rsp+40h] [rbp-18h] BYREF

  if ( (unsigned __int8)Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TransitionToState(
                          a1,
                          2LL) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1);
    if ( Microsoft::WRL::gCausality )
    {
      v2 = *(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, __int64, int))(*(_QWORD *)Microsoft::WRL::gCausality + 64LL);
      v4 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
      v2(Microsoft::WRL::gCausality, 1LL, 2LL, &v4, a1, 3);
    }
  }
  return 0LL;
}
