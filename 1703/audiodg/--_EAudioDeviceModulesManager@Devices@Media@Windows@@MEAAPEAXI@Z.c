/*
 * XREFs of ??_EAudioDeviceModulesManager@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x140011AB0
 * Callers:
 *     ?Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ @ 0x140011C70 (-Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140001770 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?Release@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAKXZ @ 0x140016E40 (-Release@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAKXZ.c)
 *     ?remove_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x140016EB0 (-remove_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJUEvent.c)
 *     ?Release@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAKXZ @ 0x140019D70 (-Release@-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVA.c)
 *     ??3@YAXPEAX@Z @ 0x14001CB20 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14004E2E0 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 */

Windows::Media::Devices::AudioDeviceModulesManager *__fastcall Windows::Media::Devices::AudioDeviceModulesManager::`vector deleting destructor'(
        Windows::Media::Devices::AudioDeviceModulesManager *this,
        char a2)
{
  bool v2; // zf
  Windows::Media::Devices::Internal::AudioDeviceBroker *v5; // rcx
  struct EventRegistrationToken v6; // rdx
  __int64 (__fastcall *v7)(Windows::Media::Devices::Internal::AudioDeviceBroker *__hidden, struct EventRegistrationToken); // rax
  void *v8; // rcx
  void (*v9)(void); // rax
  Windows::Media::Devices::Internal::AudioDeviceBroker *v10; // rcx
  void (*v11)(void); // rax
  volatile signed __int32 *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx

  v2 = *((_BYTE *)this + 112) == 0;
  *(_QWORD *)this = &Windows::Media::Devices::AudioDeviceModulesManager::`vftable';
  *((_QWORD *)this + 1) = &Windows::Media::Devices::AudioDeviceModulesManager::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::Media::Devices::AudioDeviceModulesManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  if ( !v2 )
  {
    v5 = (Windows::Media::Devices::Internal::AudioDeviceBroker *)*((_QWORD *)this + 11);
    v6.value = *((_QWORD *)this + 13);
    v7 = *(__int64 (__fastcall **)(Windows::Media::Devices::Internal::AudioDeviceBroker *__hidden, struct EventRegistrationToken))(*(_QWORD *)v5 + 72LL);
    if ( v7 == Windows::Media::Devices::Internal::AudioDeviceBroker::remove_ModuleNotificationReceived )
      Windows::Media::Devices::Internal::AudioDeviceBroker::remove_ModuleNotificationReceived(v5, v6);
    else
      ((void (__fastcall *)(Windows::Media::Devices::Internal::AudioDeviceBroker *, __int64))v7)(v5, v6.value);
  }
  v8 = (void *)*((_QWORD *)this + 12);
  if ( v8 )
  {
    *((_QWORD *)this + 12) = 0LL;
    v9 = *(void (**)(void))(*(_QWORD *)v8 + 16LL);
    if ( (char *)v9 == (char *)Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::Release )
      Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::Release(v8);
    else
      v9();
  }
  v10 = (Windows::Media::Devices::Internal::AudioDeviceBroker *)*((_QWORD *)this + 11);
  if ( v10 )
  {
    *((_QWORD *)this + 11) = 0LL;
    v11 = *(void (**)(void))(*(_QWORD *)v10 + 16LL);
    if ( (char *)v11 == (char *)Windows::Media::Devices::Internal::AudioDeviceBroker::Release )
      Windows::Media::Devices::Internal::AudioDeviceBroker::Release(v10);
    else
      v11();
  }
  v12 = (volatile signed __int32 *)*((_QWORD *)this + 8);
  if ( v12 )
  {
    *((_QWORD *)this + 8) = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v12);
  }
  WindowsDeleteString(*((HSTRING *)this + 7));
  *((_QWORD *)this + 7) = 0LL;
  v13 = *((_QWORD *)this + 6);
  if ( v13 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(2 * v13);
  v14 = *((_QWORD *)this + 4);
  if ( v14 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
