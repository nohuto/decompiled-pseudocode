/*
 * XREFs of ??0AudioDeviceModulesManager@Devices@Media@Windows@@QEAA@XZ @ 0x140016514
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x140019804 (--$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManag.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x140019730 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0IAudioDeviceModule@Devices@Media@Windows@@QEAA@XZ @ 0x1400197C8 (--0IAudioDeviceModule@Devices@Media@Windows@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

RTL_SRWLOCK *__fastcall Windows::Media::Devices::AudioDeviceModulesManager::AudioDeviceModulesManager(
        RTL_SRWLOCK *this)
{
  struct Microsoft::WRL::Details::ModuleBase *v2; // rcx
  RTL_SRWLOCK *result; // rax

  Windows::Media::Devices::IAudioDeviceModule::IAudioDeviceModule((Windows::Media::Devices::IAudioDeviceModule *)this);
  Windows::Media::Devices::IAudioDeviceModule::IAudioDeviceModule((Windows::Media::Devices::IAudioDeviceModule *)&this[1]);
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)&this[2]);
  v2 = Microsoft::WRL::Details::ModuleBase::module_;
  this->Ptr = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>::`vftable';
  this[1].Ptr = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  this[2].Ptr = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  this[7].Ptr = (PVOID)1;
  if ( v2 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v2 + 8LL))(v2);
  this->Ptr = &Windows::Media::Devices::AudioDeviceModulesManager::`vftable';
  this[1].Ptr = &Windows::Media::Devices::AudioDeviceModulesManager::`vftable'{for `IWeakReferenceSource'};
  this[2].Ptr = &Windows::Media::Devices::AudioDeviceModulesManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  this[8].Ptr = 0LL;
  this[9].Ptr = 0LL;
  InitializeSRWLock(this + 10);
  InitializeSRWLock(this + 11);
  this[12].Ptr = 0LL;
  result = this;
  this[13].Ptr = 0LL;
  LOBYTE(this[15].Ptr) = 0;
  return result;
}
