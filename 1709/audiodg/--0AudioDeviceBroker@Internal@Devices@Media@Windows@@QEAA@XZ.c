/*
 * XREFs of ??0AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAA@XZ @ 0x1400188B0
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x1400193D0 (--$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x140019340 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

RTL_SRWLOCK *__fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::AudioDeviceBroker(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v3; // rcx
  RTL_SRWLOCK *result; // rax

  v1 = this + 2;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)&this[2]);
  v3 = Microsoft::WRL::Details::ModuleBase::module_;
  this->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>::`vftable';
  this[8].Ptr = (PVOID)1;
  this[1].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  v1->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
  if ( v3 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v3 + 8LL))(v3);
  this[9].Ptr = 0LL;
  this->Ptr = &Windows::Media::Devices::Internal::AudioDeviceBroker::`vftable';
  this[10].Ptr = 0LL;
  this[1].Ptr = &Windows::Media::Devices::Internal::AudioDeviceBroker::`vftable'{for `IWeakReferenceSource'};
  v1->Ptr = &Windows::Media::Devices::Internal::AudioDeviceBroker::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
  this[11].Ptr = 0LL;
  this[12].Ptr = 0LL;
  this[13].Ptr = 0LL;
  this[14].Ptr = 0LL;
  this[17].Ptr = 0LL;
  InitializeSRWLock(this + 18);
  InitializeSRWLock(this + 19);
  this[20].Ptr = 0LL;
  result = this;
  LOBYTE(this[21].Ptr) = 0;
  this[22].Ptr = 0LL;
  this[23].Ptr = 0LL;
  this[24].Ptr = 0LL;
  LOBYTE(this[25].Ptr) = 0;
  this[26].Ptr = 0LL;
  LOBYTE(this[27].Ptr) = 0;
  return result;
}
