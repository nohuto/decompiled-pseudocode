/*
 * XREFs of ??0AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@QEAA@PEAUIBuffer@Streams@Storage@4@@Z @ 0x14004ABA0
 * Callers:
 *     ?ThreadpoolCallback@AudioDeviceBroker@Internal@Devices@Media@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1400501C0 (-ThreadpoolCallback@AudioDeviceBroker@Internal@Devices@Media@Windows@@CAXPEAU_TP_CALLBACK_INSTAN.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x140019340 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIBuffer@Streams@Storage@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x14004B1F8 (--4-$ComPtr@UIBuffer@Streams@Storage@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIBuffer@Streams@St.c)
 */

Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *__fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::AudioDeviceBrokerChangedEventArgs(
        Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *this,
        struct Windows::Storage::Streams::IBuffer *a2)
{
  _QWORD *v2; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v5; // rcx

  v2 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *)((char *)this + 16));
  v5 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 8) = 1LL;
  if ( v5 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v5 + 8LL))(v5);
  *(_QWORD *)this = &Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::`vftable';
  *((_QWORD *)this + 1) = &Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::`vftable'{for `IWeakReferenceSource'};
  *v2 = &Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 9) = 0LL;
  Microsoft::WRL::ComPtr<Windows::Storage::Streams::IBuffer>::operator=((char *)this + 72, a2);
  return this;
}
