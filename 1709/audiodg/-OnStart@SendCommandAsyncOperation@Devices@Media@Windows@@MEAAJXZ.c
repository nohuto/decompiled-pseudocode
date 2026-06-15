/*
 * XREFs of ?OnStart@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAJXZ @ 0x14004EDA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1400300A8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Make@VModuleCommandResult@Devices@Media@Windows@@W4SendCommandStatus@234@PEAUIBuffer@Streams@Storage@4@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VModuleCommandResult@Devices@Media@Windows@@@12@$$QEAW4SendCommandStatus@Devices@Media@Windows@@$$QEAPEAUIBuffer@Streams@Storage@7@@Z @ 0x14004A2DC (--$Make@VModuleCommandResult@Devices@Media@Windows@@W4SendCommandStatus@234@PEAUIBuffer@Streams@.c)
 *     ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x14004C670 (-FireCompletion@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Device.c)
 *     ??4?$ComPtr@UISpatialAudioResourceTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@PEAUISpatialAudioResourceTaskCompletion@@@Z @ 0x14006174C (--4-$ComPtr@UISpatialAudioResourceTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@PEAUISpatialAudioR.c)
 */

__int64 __fastcall Windows::Media::Devices::SendCommandAsyncOperation::OnStart(
        Windows::Media::Devices::SendCommandAsyncOperation *this)
{
  __int64 v1; // rdx
  __int64 v3; // rbx
  int v4; // ebx
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v11; // [rsp+60h] [rbp+20h] BYREF
  __int64 v12; // [rsp+68h] [rbp+28h] BYREF
  __int64 v13; // [rsp+70h] [rbp+30h] BYREF
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF

  v1 = *((_QWORD *)this + 21);
  v12 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioResourceTaskCompletion>::operator=(&v13, *(_QWORD *)(v1 + 104));
  v3 = v13;
  if ( v13 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v3 + 56LL))(
           v3,
           *((_QWORD *)this + 21),
           *((_QWORD *)this + 22),
           &v12);
    if ( v4 >= 0 )
    {
      v11 = 0;
      v10 = v12;
      v5 = Microsoft::WRL::Details::Make<Windows::Media::Devices::ModuleCommandResult,enum Windows::Media::Devices::SendCommandStatus,Windows::Storage::Streams::IBuffer *>(
             &v14,
             &v11,
             &v10);
      v6 = *v5;
      *v5 = 0LL;
      v7 = *((_QWORD *)this + 19);
      *((_QWORD *)this + 19) = v6;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      v8 = v14;
      if ( v14 )
      {
        v14 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      v4 = Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion((__int64)this);
    }
  }
  else
  {
    v4 = -2147467261;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  return (unsigned int)v4;
}
