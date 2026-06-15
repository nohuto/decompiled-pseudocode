/*
 * XREFs of ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x14004C670
 * Callers:
 *     ?OnStart@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAJXZ @ 0x14004EDA0 (-OnStart@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1400300A8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x14004902C (--$As@U-$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@-$.c)
 *     ?CopyLocal@?$GitPtrSupportsAgile@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@Internal@Windows@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14004C01C (-CopyLocal@-$GitPtrSupportsAgile@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devi.c)
 *     ?FireCompletionErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x14004C840 (-FireCompletionErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@S.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@_NPEAPEAUIRpcOptions@@@Z @ 0x14004D6A0 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@_NPEAPEAUIRpcOptions@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x14004E638 (-InternalAddRef@-$ComPtr@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Medi.c)
 *     ?TraceCompletionNotificationComplete@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXXZ @ 0x14005038C (-TraceCompletionNotificationComplete@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCo.c)
 *     ?TraceCompletionNotificationStart@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXXZ @ 0x1400503B8 (-TraceCompletionNotificationStart@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleComma.c)
 *     ?TraceOperationComplete@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXXZ @ 0x14005044C (-TraceOperationComplete@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@D.c)
 *     ?TransitionToState@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@AEAA_NW4AsyncStatusInternal@Details@23@@Z @ 0x14005054C (-TransitionToState@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Device.c)
 */

__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(
        __int64 a1)
{
  unsigned int v1; // r14d
  unsigned int v3; // edx
  signed __int32 v4; // ecx
  __int64 v5; // rdx
  bool v6; // dl
  IUnknown *v7; // r14
  struct IUnknown *v8; // rcx
  unsigned int v9; // eax
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  LPSTREAM ppstm; // [rsp+38h] [rbp-20h] BYREF
  HRESULT v13; // [rsp+40h] [rbp-18h]
  unsigned int v14; // [rsp+80h] [rbp+28h] BYREF
  struct IUnknown *v15; // [rsp+88h] [rbp+30h] BYREF
  struct IRpcOptions *v16; // [rsp+90h] [rbp+38h] BYREF
  LPUNKNOWN pUnk; // [rsp+98h] [rbp+40h] BYREF

  v1 = 0;
  Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TransitionToState(
    a1,
    1LL);
  if ( *(_QWORD *)(a1 + 120) && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16), v3) + 1 == v3 )
  {
    v11 = a1;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>>::InternalAddRef(&v11);
    pUnk = 0LL;
    Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TraceOperationComplete(a1);
    if ( (int)Microsoft::WRL::ComPtr<IAsyncInfo>::As<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>(
                &v11,
                (__int64 *)&pUnk) >= 0 )
    {
      v4 = *(_DWORD *)(a1 + 48);
      v14 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v14, v4, -2);
      v15 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
      if ( (int)Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>>::CopyLocal(
                  (__int64 *)(a1 + 120),
                  v5,
                  &v15) >= 0 )
      {
        Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TraceCompletionNotificationStart(a1);
        v16 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
        RpcOptionsHelper::GetRpcOptions(v15, v6, &v16);
        ppstm = 0LL;
        v13 = 0;
        v7 = pUnk;
        v8 = v15;
        if ( v16 && v15 )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppstm);
          v13 = CreateStreamOnHGlobal(0LL, 1, &ppstm);
          if ( v13 >= 0 )
            v13 = CoMarshalInterface(ppstm, &IID_IUnknown, v7, 0, 0LL, 1u);
          v8 = v15;
        }
        else
        {
          v13 = -2147467262;
        }
        v9 = ((__int64 (__fastcall *)(struct IUnknown *, LPUNKNOWN, _QWORD))v8->lpVtbl[1].QueryInterface)(v8, pUnk, v14);
        v1 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireCompletionErrorPropagationPolicyFilter(
               v9,
               v15,
               *(_QWORD *)(a1 + 128));
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 120));
        Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TraceCompletionNotificationComplete();
        if ( v13 >= 0 )
        {
          (*(void (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)ppstm + 40LL))(ppstm, 0LL, 0LL, 0LL);
          CoReleaseMarshalData(ppstm);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppstm);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&pUnk);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return v1;
}
