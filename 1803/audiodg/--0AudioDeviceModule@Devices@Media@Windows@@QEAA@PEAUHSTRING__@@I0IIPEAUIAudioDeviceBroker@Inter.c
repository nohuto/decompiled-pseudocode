/*
 * XREFs of ??0AudioDeviceModule@Devices@Media@Windows@@QEAA@PEAUHSTRING__@@I0IIPEAUIAudioDeviceBroker@Internal@123@@Z @ 0x140048BD8
 * Callers:
 *     ??$Make@VAudioDeviceModule@Devices@Media@Windows@@AEAPEAUHSTRING__@@AEAKAEAPEAU5@AEAKAEAKPEAVAudioDeviceBroker@Internal@234@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAudioDeviceModule@Devices@Media@Windows@@@12@AEAPEAUHSTRING__@@AEAK011$$QEAPEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@@Z @ 0x14004806C (--$Make@VAudioDeviceModule@Devices@Media@Windows@@AEAPEAUHSTRING__@@AEAKAEAPEAU5@AEAKAEAKPEAVAud.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x140019730 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0IAudioDeviceModule@Devices@Media@Windows@@QEAA@XZ @ 0x1400197C8 (--0IAudioDeviceModule@Devices@Media@Windows@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x14004E700 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ??4?$ComPtr@UISpatialAudioResourceTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@PEAUISpatialAudioResourceTaskCompletion@@@Z @ 0x14005ED30 (--4-$ComPtr@UISpatialAudioResourceTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@PEAUISpatialAudioR.c)
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
  struct Microsoft::WRL::Details::ModuleBase *v9; // rcx
  struct Windows::Media::Devices::Internal::IAudioDeviceBroker *v10; // rdx
  HSTRING v12; // [rsp+48h] [rbp+10h] BYREF
  HSTRING v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = a4;
  v12 = a2;
  Windows::Media::Devices::IAudioDeviceModule::IAudioDeviceModule((IUnknown *)this);
  Windows::Media::Devices::IAudioDeviceModule::IAudioDeviceModule((IUnknown *)this + 1);
  Microsoft::WRL::FtmBase::FtmBase((Windows::Media::Devices::AudioDeviceModule *)((char *)this + 16));
  v9 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModule,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModule,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModule,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 7) = 1LL;
  if ( v9 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v9 + 8LL))(v9);
  *(_QWORD *)this = &Windows::Media::Devices::AudioDeviceModule::`vftable';
  *((_QWORD *)this + 1) = &Windows::Media::Devices::AudioDeviceModule::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::Media::Devices::AudioDeviceModule::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 10, &v12);
  *((_DWORD *)this + 18) = a3;
  Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 11, &v13);
  v10 = a7;
  *((_DWORD *)this + 16) = a5;
  *((_DWORD *)this + 17) = a6;
  Microsoft::WRL::ComPtr<ISpatialAudioResourceTaskCompletion>::operator=((char *)this + 96, v10);
  return this;
}
