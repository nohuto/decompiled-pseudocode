/*
 * XREFs of ??0AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@QEAA@PEAUIBuffer@Streams@Storage@4@@Z @ 0x140048B24
 * Callers:
 *     ?ThreadpoolCallback@AudioDeviceBroker@Internal@Devices@Media@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x14004E940 (-ThreadpoolCallback@AudioDeviceBroker@Internal@Devices@Media@Windows@@CAXPEAU_TP_CALLBACK_INSTAN.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x140019730 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0IAudioDeviceModule@Devices@Media@Windows@@QEAA@XZ @ 0x1400197C8 (--0IAudioDeviceModule@Devices@Media@Windows@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIBuffer@Streams@Storage@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x1400491B8 (--4-$ComPtr@UIBuffer@Streams@Storage@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIBuffer@Streams@St.c)
 */

IUnknown *__fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::AudioDeviceBrokerChangedEventArgs(
        IUnknown *this,
        struct Windows::Storage::Streams::IBuffer *a2)
{
  struct Microsoft::WRL::Details::ModuleBase *v4; // rcx

  Windows::Media::Devices::IAudioDeviceModule::IAudioDeviceModule(this);
  Windows::Media::Devices::IAudioDeviceModule::IAudioDeviceModule(this + 1);
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)&this[2]);
  v4 = Microsoft::WRL::Details::ModuleBase::module_;
  this->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable';
  this[1].lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  this[2].lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  this[7].lpVtbl = (struct IUnknownVtbl *)1;
  if ( v4 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v4 + 8LL))(v4);
  this->lpVtbl = (struct IUnknownVtbl *)&Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::`vftable';
  this[1].lpVtbl = (struct IUnknownVtbl *)&Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::`vftable'{for `IWeakReferenceSource'};
  this[2].lpVtbl = (struct IUnknownVtbl *)&Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  this[8].lpVtbl = 0LL;
  Microsoft::WRL::ComPtr<Windows::Storage::Streams::IBuffer>::operator=(&this[8], a2);
  return this;
}
