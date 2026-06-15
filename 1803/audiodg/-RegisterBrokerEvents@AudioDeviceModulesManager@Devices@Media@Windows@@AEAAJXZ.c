/*
 * XREFs of ?RegisterBrokerEvents@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJXZ @ 0x1400162EC
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x140019804 (--$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManag.c)
 * Callees:
 *     ?add_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x140018AB0 (-add_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAU-$ITy.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14001A5B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$I_ea_14001A5B0.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x14001A614 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHandler@P.c)
 *     ??3@YAXPEAX@Z @ 0x14001B954 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::RegisterBrokerEvents(
        Windows::Media::Devices::AudioDeviceModulesManager *this)
{
  _OWORD *v2; // rax
  _OWORD *v3; // rdi
  _OWORD *v4; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v5; // rcx
  __int64 v6; // rcx
  char *v7; // r8
  __int64 (__fastcall *v8)(__int64, _OWORD *, char *); // rax
  int v9; // eax
  unsigned int v10; // ebx
  void (__fastcall *v11)(_OWORD *); // rax
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int128 v14; // [rsp+30h] [rbp-28h]

  *(_QWORD *)&v14 = this;
  LODWORD(v13) = 0;
  *((_QWORD *)&v14 + 1) = Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged;
  v2 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = 0LL;
  v4 = v2;
  if ( v2 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>(v2);
    v5 = Microsoft::WRL::Details::ModuleBase::module_;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>::`vftable';
    if ( v5 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v5 + 8LL))(v5);
    v3 = v4;
    v4[1] = v14;
    *(_QWORD *)v4 = off_140063640;
    *((_QWORD *)v4 + 4) = v13;
    v4 = 0LL;
  }
  if ( v4 )
    operator delete(v4);
  v6 = *((_QWORD *)this + 12);
  v7 = (char *)this + 112;
  v8 = *(__int64 (__fastcall **)(__int64, _OWORD *, char *))(*(_QWORD *)v6 + 64LL);
  if ( (char *)v8 == (char *)Windows::Media::Devices::Internal::AudioDeviceBroker::add_ModuleNotificationReceived )
    v9 = Windows::Media::Devices::Internal::AudioDeviceBroker::add_ModuleNotificationReceived(v6, v3, v7);
  else
    v9 = v8(v6, v3, v7);
  v10 = v9;
  if ( v9 >= 0 )
    *((_BYTE *)this + 120) = 1;
  if ( v3 )
  {
    v11 = *(void (__fastcall **)(_OWORD *))(*(_QWORD *)v3 + 16LL);
    if ( (char *)v11 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>::Release(v3);
    else
      v11(v3);
  }
  return v10;
}
