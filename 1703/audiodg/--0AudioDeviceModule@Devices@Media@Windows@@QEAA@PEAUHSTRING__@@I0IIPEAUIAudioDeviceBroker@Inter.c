/*
 * XREFs of ??0AudioDeviceModule@Devices@Media@Windows@@QEAA@PEAUHSTRING__@@I0IIPEAUIAudioDeviceBroker@Internal@123@@Z @ 0x14004940C
 * Callers:
 *     ??$Make@VAudioDeviceModule@Devices@Media@Windows@@AEAPEAUHSTRING__@@AEAKAEAPEAU5@AEAKAEAKQEAVAudioDeviceBroker@Internal@234@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAudioDeviceModule@Devices@Media@Windows@@@12@AEAPEAUHSTRING__@@AEAK011$$QEBQEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@@Z @ 0x140048998 (--$Make@VAudioDeviceModule@Devices@Media@Windows@@AEAPEAUHSTRING__@@AEAKAEAPEAU5@AEAKAEAKQEAVAud.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x14002F8BC (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x14004ED10 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ??4?$ComPtr@UISpatialAudioResourceTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@PEAUISpatialAudioResourceTaskCompletion@@@Z @ 0x14005E92C (--4-$ComPtr@UISpatialAudioResourceTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@PEAUISpatialAudioR.c)
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
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModule,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModule,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
  *v7 = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModule,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  *((_QWORD *)this + 6) = 1LL;
  if ( v10 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v10 + 8LL))(v10);
  *(_QWORD *)this = &Windows::Media::Devices::AudioDeviceModule::`vftable';
  *((_QWORD *)this + 1) = &Windows::Media::Devices::AudioDeviceModule::`vftable'{for `IWeakReferenceSource'};
  *v7 = &Windows::Media::Devices::AudioDeviceModule::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 9, &v13);
  *((_DWORD *)this + 16) = a3;
  Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 10, &v14);
  v11 = a7;
  *((_DWORD *)this + 14) = a5;
  *((_DWORD *)this + 15) = a6;
  Microsoft::WRL::ComPtr<ISpatialAudioResourceTaskCompletion>::operator=((char *)this + 88, v11);
  return this;
}
