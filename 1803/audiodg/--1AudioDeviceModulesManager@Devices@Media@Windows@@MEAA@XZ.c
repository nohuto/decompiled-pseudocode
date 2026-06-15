/*
 * XREFs of ??1AudioDeviceModulesManager@Devices@Media@Windows@@MEAA@XZ @ 0x1400161F0
 * Callers:
 *     ??_EAudioDeviceModulesManager@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x140016400 (--_EAudioDeviceModulesManager@Devices@Media@Windows@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAKXZ @ 0x140016000 (-Release@-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVA.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140016620 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Release@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAKXZ @ 0x1400189B0 (-Release@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAKXZ.c)
 *     ?remove_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x1400189C0 (-remove_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJUEvent.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14004DBC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

void __fastcall Windows::Media::Devices::AudioDeviceModulesManager::~AudioDeviceModulesManager(
        Windows::Media::Devices::AudioDeviceModulesManager *this)
{
  bool v1; // zf
  Windows::Media::Devices::Internal::AudioDeviceBroker *v3; // rcx
  struct EventRegistrationToken v4; // rdx
  __int64 (__fastcall *v5)(Windows::Media::Devices::Internal::AudioDeviceBroker *__hidden, struct EventRegistrationToken); // rax
  _QWORD *v6; // rcx
  void (*v7)(void); // rax
  Windows::Media::Devices::Internal::AudioDeviceBroker *v8; // rcx
  void (*v9)(void); // rax
  __int64 v10; // rcx

  v1 = *((_BYTE *)this + 120) == 0;
  *(_QWORD *)this = &Windows::Media::Devices::AudioDeviceModulesManager::`vftable';
  *((_QWORD *)this + 1) = &Windows::Media::Devices::AudioDeviceModulesManager::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::Media::Devices::AudioDeviceModulesManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( !v1 )
  {
    v3 = (Windows::Media::Devices::Internal::AudioDeviceBroker *)*((_QWORD *)this + 12);
    v4.value = *((_QWORD *)this + 14);
    v5 = *(__int64 (__fastcall **)(Windows::Media::Devices::Internal::AudioDeviceBroker *__hidden, struct EventRegistrationToken))(*(_QWORD *)v3 + 72LL);
    if ( v5 == Windows::Media::Devices::Internal::AudioDeviceBroker::remove_ModuleNotificationReceived )
      Windows::Media::Devices::Internal::AudioDeviceBroker::remove_ModuleNotificationReceived(v3, v4);
    else
      ((void (__fastcall *)(Windows::Media::Devices::Internal::AudioDeviceBroker *, __int64))v5)(v3, v4.value);
  }
  v6 = (_QWORD *)*((_QWORD *)this + 13);
  if ( v6 )
  {
    *((_QWORD *)this + 13) = 0LL;
    v7 = *(void (**)(void))(*v6 + 16LL);
    if ( (char *)v7 == (char *)Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::Release )
      Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::Release(v6);
    else
      v7();
  }
  v8 = (Windows::Media::Devices::Internal::AudioDeviceBroker *)*((_QWORD *)this + 12);
  if ( v8 )
  {
    *((_QWORD *)this + 12) = 0LL;
    v9 = *(void (**)(void))(*(_QWORD *)v8 + 16LL);
    if ( (char *)v9 == (char *)Windows::Media::Devices::Internal::AudioDeviceBroker::Release )
      Windows::Media::Devices::Internal::AudioDeviceBroker::Release(v8);
    else
      v9();
  }
  if ( *((_QWORD *)this + 9) )
  {
    *((_QWORD *)this + 9) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release();
  }
  WindowsDeleteString(*((HSTRING *)this + 8));
  *((_QWORD *)this + 8) = 0LL;
  if ( *((__int64 *)this + 7) < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(2LL * *((_QWORD *)this + 7));
  v10 = *((_QWORD *)this + 5);
  if ( v10 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
}
