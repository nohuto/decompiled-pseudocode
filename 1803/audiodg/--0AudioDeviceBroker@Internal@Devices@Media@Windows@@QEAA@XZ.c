/*
 * XREFs of ??0AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAA@XZ @ 0x140018EEC
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x1400191FC (--$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x140019730 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0IAudioDeviceModule@Devices@Media@Windows@@QEAA@XZ @ 0x1400197C8 (--0IAudioDeviceModule@Devices@Media@Windows@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

RTL_SRWLOCK *__fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::AudioDeviceBroker(RTL_SRWLOCK *this)
{
  struct Microsoft::WRL::Details::ModuleBase *v2; // rcx
  RTL_SRWLOCK *result; // rax

  Windows::Media::Devices::IAudioDeviceModule::IAudioDeviceModule((Windows::Media::Devices::IAudioDeviceModule *)this);
  Windows::Media::Devices::IAudioDeviceModule::IAudioDeviceModule((Windows::Media::Devices::IAudioDeviceModule *)&this[1]);
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)&this[2]);
  v2 = Microsoft::WRL::Details::ModuleBase::module_;
  this->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>::`vftable';
  this[7].Ptr = (PVOID)1;
  this[1].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  this[2].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( v2 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v2 + 8LL))(v2);
  this[8].Ptr = 0LL;
  this->Ptr = &Windows::Media::Devices::Internal::AudioDeviceBroker::`vftable';
  this[9].Ptr = 0LL;
  this[1].Ptr = &Windows::Media::Devices::Internal::AudioDeviceBroker::`vftable'{for `IWeakReferenceSource'};
  this[2].Ptr = &Windows::Media::Devices::Internal::AudioDeviceBroker::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  this[10].Ptr = 0LL;
  this[11].Ptr = 0LL;
  this[12].Ptr = 0LL;
  this[13].Ptr = 0LL;
  this[16].Ptr = 0LL;
  InitializeSRWLock(this + 17);
  InitializeSRWLock(this + 18);
  this[19].Ptr = 0LL;
  LOBYTE(this[20].Ptr) = 0;
  this[21].Ptr = 0LL;
  result = this;
  this[22].Ptr = 0LL;
  this[23].Ptr = 0LL;
  LOBYTE(this[24].Ptr) = 0;
  this[25].Ptr = 0LL;
  LOBYTE(this[26].Ptr) = 0;
  return result;
}
