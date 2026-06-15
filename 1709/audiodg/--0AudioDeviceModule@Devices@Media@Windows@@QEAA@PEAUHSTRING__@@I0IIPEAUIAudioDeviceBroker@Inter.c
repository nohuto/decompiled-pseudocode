/*
 * XREFs of ??0AudioDeviceModule@Devices@Media@Windows@@QEAA@PEAUHSTRING__@@I0IIPEAUIAudioDeviceBroker@Internal@123@@Z @ 0x14004AC44
 * Callers:
 *     ??$Make@VAudioDeviceModule@Devices@Media@Windows@@AEAPEAUHSTRING__@@AEAKAEAPEAU5@AEAKAEAKPEAVAudioDeviceBroker@Internal@234@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAudioDeviceModule@Devices@Media@Windows@@@12@AEAPEAUHSTRING__@@AEAK011$$QEAPEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@@Z @ 0x14004A1CC (--$Make@VAudioDeviceModule@Devices@Media@Windows@@AEAPEAUHSTRING__@@AEAKAEAPEAU5@AEAKAEAKPEAVAud.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x140019340 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x14004FF80 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ??4?$ComPtr@UISpatialAudioResourceTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@PEAUISpatialAudioResourceTaskCompletion@@@Z @ 0x14006174C (--4-$ComPtr@UISpatialAudioResourceTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@PEAUISpatialAudioR.c)
 */

Windows::Media::Devices::AudioDeviceModule *__fastcall Windows::Media::Devices::AudioDeviceModule::AudioDeviceModule(
        Windows::Media::Devices::AudioDeviceModule *this,
        HSTRING a2,
        int a3,
        HSTRING a4,
        unsigned int a5,
        unsigned int a6,
        struct Windows::Media::Devices::Internal::IAudioDeviceBroker *a7)
{
  _QWORD *v7; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v10; // rcx
  struct Windows::Media::Devices::Internal::IAudioDeviceBroker *v11; // rdx
  HSTRING v13; // [rsp+48h] [rbp+10h] BYREF
  HSTRING v14; // [rsp+58h] [rbp+20h] BYREF

  v14 = a4;
  v13 = a2;
  v7 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((Windows::Media::Devices::AudioDeviceModule *)((char *)this + 16));
  v10 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModule,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModule,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v7 = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModule,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 8) = 1LL;
  if ( v10 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v10 + 8LL))(v10);
  *(_QWORD *)this = &Windows::Media::Devices::AudioDeviceModule::`vftable';
  *((_QWORD *)this + 1) = &Windows::Media::Devices::AudioDeviceModule::`vftable'{for `IWeakReferenceSource'};
  *v7 = &Windows::Media::Devices::AudioDeviceModule::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 11, &v13);
  *((_DWORD *)this + 20) = a3;
  Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 12, &v14);
  v11 = a7;
  *((_DWORD *)this + 18) = a5;
  *((_DWORD *)this + 19) = a6;
  Microsoft::WRL::ComPtr<ISpatialAudioResourceTaskCompletion>::operator=((char *)this + 104, v11);
  return this;
}
