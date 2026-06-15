/*
 * XREFs of ?SendCommandAsync@AudioDeviceModule@Devices@Media@Windows@@UEAAJPEAUIBuffer@Streams@Storage@4@PEAPEAU?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@4@@Z @ 0x14004FED0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1400300A8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@V?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@6@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@V?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@6@@123@AEBU_GUID@@PEAPEAX@Z @ 0x140049068 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IAsyncOperatio.c)
 *     ??$MakeAndInitialize@VSendCommandAsyncOperation@Devices@Media@Windows@@V1234@PEAVAudioDeviceModule@234@AEAPEAUIBuffer@Streams@Storage@4@@Details@WRL@Microsoft@@YAJPEAPEAVSendCommandAsyncOperation@Devices@Media@Windows@@$$QEAPEAVAudioDeviceModule@456@AEAPEAUIBuffer@Streams@Storage@6@@Z @ 0x14004A3EC (--$MakeAndInitialize@VSendCommandAsyncOperation@Devices@Media@Windows@@V1234@PEAVAudioDeviceModu.c)
 *     ?InternalRelease@?$ComPtr@VSendCommandAsyncOperation@Devices@Media@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x14004E698 (-InternalRelease@-$ComPtr@VSendCommandAsyncOperation@Devices@Media@Windows@@@WRL@Microsoft@@IEAA.c)
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModule::SendCommandAsync(
        struct Windows::Media::Devices::AudioDeviceModule *a1,
        struct Windows::Storage::Streams::IBuffer *a2,
        __int64 *a3)
{
  int v4; // ebx
  __int64 v5; // rax
  Windows::Media::Devices::SendCommandAsyncOperation *v7; // [rsp+20h] [rbp-10h] BYREF
  struct Windows::Media::Devices::AudioDeviceModule *v8; // [rsp+28h] [rbp-8h] BYREF
  struct Windows::Storage::Streams::IBuffer *v9; // [rsp+48h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+28h] BYREF

  v9 = a2;
  v7 = 0LL;
  v10 = 0LL;
  if ( a2 && a3 )
  {
    *a3 = 0LL;
    v8 = a1;
    Microsoft::WRL::ComPtr<Windows::Media::Devices::SendCommandAsyncOperation>::InternalRelease((__int64 *)&v7);
    v4 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::SendCommandAsyncOperation,Windows::Media::Devices::SendCommandAsyncOperation,Windows::Media::Devices::AudioDeviceModule *,Windows::Storage::Streams::IBuffer * &>(
           &v7,
           &v8,
           &v9);
    if ( v4 >= 0 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
      v4 = Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>,Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>>(
             (__int64)v7,
             &GUID_2e1f3d72_a58d_5b0a_b42d_3660c04cfeeb,
             &v10);
      if ( v4 >= 0 )
      {
        v5 = v10;
        v10 = 0LL;
        *a3 = v5;
      }
    }
  }
  else
  {
    v4 = -2147467261;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  Microsoft::WRL::ComPtr<Windows::Media::Devices::SendCommandAsyncOperation>::InternalRelease((__int64 *)&v7);
  return (unsigned int)v4;
}
