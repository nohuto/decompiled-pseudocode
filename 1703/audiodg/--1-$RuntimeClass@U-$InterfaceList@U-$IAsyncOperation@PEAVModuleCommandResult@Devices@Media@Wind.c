/*
 * XREFs of ??1?$RuntimeClass@U?$InterfaceList@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@U?$InterfaceList@V?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1400497EC
 * Callers:
 *     ??1SendCommandAsyncOperation@Devices@Media@Windows@@UEAA@XZ @ 0x140049910 (--1SendCommandAsyncOperation@Devices@Media@Windows@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@V?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@3@VNil@Details@WRL@Microsoft@@V6789@V6789@V6789@V6789@V6789@V6789@V6789@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x140049D34 (--_G-$RuntimeClass@U-$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140019728 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14004E2E0 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::~RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>(
        __int64 *a1)
{
  __int64 v2; // rcx

  v2 = a1[16];
  if ( v2 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(2 * v2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 13);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 12);
  return Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::~AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>((__int64)(a1 + 2));
}
