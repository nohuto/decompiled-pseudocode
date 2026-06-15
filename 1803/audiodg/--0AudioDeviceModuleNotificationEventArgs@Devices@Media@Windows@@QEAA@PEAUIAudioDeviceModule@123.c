/*
 * XREFs of ??0AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@QEAA@PEAUIAudioDeviceModule@123@PEAUIBuffer@Streams@Storage@3@@Z @ 0x140048CC8
 * Callers:
 *     ??$Make@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@PEAUIAudioDeviceModule@234@PEAUIBuffer@Streams@Storage@4@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@@12@$$QEAPEAUIAudioDeviceModule@Devices@Media@Windows@@$$QEAPEAUIBuffer@Streams@Storage@7@@Z @ 0x140048114 (--$Make@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@PEAUIAudioDeviceModule@23.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x140019730 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0IAudioDeviceModule@Devices@Media@Windows@@QEAA@XZ @ 0x1400197C8 (--0IAudioDeviceModule@Devices@Media@Windows@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14002F07C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIBuffer@Streams@Storage@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x1400491B8 (--4-$ComPtr@UIBuffer@Streams@Storage@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIBuffer@Streams@St.c)
 *     ?InternalAddRef@?$ComPtr@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x14004C838 (-InternalAddRef@-$ComPtr@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Medi.c)
 */

IUnknown *__fastcall Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::AudioDeviceModuleNotificationEventArgs(
        IUnknown *this,
        struct Windows::Media::Devices::IAudioDeviceModule *a2,
        struct Windows::Storage::Streams::IBuffer *a3)
{
  struct Microsoft::WRL::Details::ModuleBase *v6; // rcx
  struct Windows::Media::Devices::IAudioDeviceModule *lpVtbl; // [rsp+30h] [rbp+8h] BYREF

  Windows::Media::Devices::IAudioDeviceModule::IAudioDeviceModule(this);
  Windows::Media::Devices::IAudioDeviceModule::IAudioDeviceModule(this + 1);
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)&this[2]);
  v6 = Microsoft::WRL::Details::ModuleBase::module_;
  this->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs,Microsoft::WRL::FtmBase>::`vftable';
  this[1].lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  this[2].lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  this[7].lpVtbl = (struct IUnknownVtbl *)1;
  if ( v6 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v6 + 8LL))(v6);
  this->lpVtbl = (struct IUnknownVtbl *)&Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::`vftable';
  this[1].lpVtbl = (struct IUnknownVtbl *)&Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::`vftable'{for `IWeakReferenceSource'};
  this[2].lpVtbl = (struct IUnknownVtbl *)&Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  this[8].lpVtbl = 0LL;
  this[9].lpVtbl = 0LL;
  if ( (struct Windows::Media::Devices::IAudioDeviceModule *)this[8].lpVtbl != a2 )
  {
    lpVtbl = a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>>::InternalAddRef(&lpVtbl);
    lpVtbl = (struct Windows::Media::Devices::IAudioDeviceModule *)this[8].lpVtbl;
    this[8].lpVtbl = (struct IUnknownVtbl *)a2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&lpVtbl);
  }
  Microsoft::WRL::ComPtr<Windows::Storage::Streams::IBuffer>::operator=(&this[9], a3);
  return this;
}
