/*
 * XREFs of ?RuntimeClassInitialize@SendCommandAsyncOperation@Devices@Media@Windows@@QEAAJPEAVAudioDeviceModule@234@PEAUIBuffer@Streams@Storage@4@@Z @ 0x14004E8D8
 * Callers:
 *     ??$MakeAndInitialize@VSendCommandAsyncOperation@Devices@Media@Windows@@V1234@QEAVAudioDeviceModule@234@AEAPEAUIBuffer@Streams@Storage@4@@Details@WRL@Microsoft@@YAJPEAPEAVSendCommandAsyncOperation@Devices@Media@Windows@@$$QEBQEAVAudioDeviceModule@456@AEAPEAUIBuffer@Streams@Storage@6@@Z @ 0x140048BB8 (--$MakeAndInitialize@VSendCommandAsyncOperation@Devices@Media@Windows@@V1234@QEAVAudioDeviceModu.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIBuffer@Streams@Storage@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x1400499B4 (--4-$ComPtr@UIBuffer@Streams@Storage@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIBuffer@Streams@St.c)
 *     ?Start@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x14004EED0 (-Start@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Wind.c)
 */

__int64 __fastcall Windows::Media::Devices::SendCommandAsyncOperation::RuntimeClassInitialize(
        Windows::Media::Devices::SendCommandAsyncOperation *this,
        struct Windows::Media::Devices::AudioDeviceModule *a2,
        struct Windows::Storage::Streams::IBuffer *a3)
{
  __int64 v6; // rcx

  if ( *((struct Windows::Media::Devices::AudioDeviceModule **)this + 19) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Media::Devices::AudioDeviceModule *))(*(_QWORD *)a2 + 8LL))(a2);
    v6 = *((_QWORD *)this + 19);
    *((_QWORD *)this + 19) = a2;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  Microsoft::WRL::ComPtr<Windows::Storage::Streams::IBuffer>::operator=((__int64 *)this + 20, (__int64)a3);
  return Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::Start((char *)this + 16);
}
