/*
 * XREFs of ??0AudioDeviceModulesManager@Devices@Media@Windows@@QEAA@XZ @ 0x14000EC7C
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x1400194B8 (--$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManag.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x140019340 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

RTL_SRWLOCK *__fastcall Windows::Media::Devices::AudioDeviceModulesManager::AudioDeviceModulesManager(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v3; // rcx
  RTL_SRWLOCK *result; // rax

  v1 = this + 2;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)&this[2]);
  v3 = Microsoft::WRL::Details::ModuleBase::module_;
  this->Ptr = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>::`vftable';
  this[1].Ptr = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  v1->Ptr = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
  this[8].Ptr = (PVOID)1;
  if ( v3 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v3 + 8LL))(v3);
  this->Ptr = &Windows::Media::Devices::AudioDeviceModulesManager::`vftable';
  this[1].Ptr = &Windows::Media::Devices::AudioDeviceModulesManager::`vftable'{for `IWeakReferenceSource'};
  v1->Ptr = &Windows::Media::Devices::AudioDeviceModulesManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
  this[9].Ptr = 0LL;
  this[10].Ptr = 0LL;
  InitializeSRWLock(this + 11);
  InitializeSRWLock(this + 12);
  this[13].Ptr = 0LL;
  result = this;
  this[14].Ptr = 0LL;
  LOBYTE(this[16].Ptr) = 0;
  return result;
}
