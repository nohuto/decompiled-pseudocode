/*
 * XREFs of ?RegisterBrokerEvents@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJXZ @ 0x14000EA34
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x1400194B8 (--$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManag.c)
 * Callees:
 *     ?add_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x140018450 (-add_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAU-$ITy.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14001A4D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$I_ea_14001A4D0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D278 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::RegisterBrokerEvents(
        Windows::Media::Devices::AudioDeviceModulesManager *this)
{
  _DWORD *v1; // rbx
  _DWORD *v3; // rax
  _DWORD *v4; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v5; // rcx
  __int64 v6; // rcx
  char *v7; // r8
  __int64 (__fastcall *v8)(__int64, _DWORD *, char *); // rax
  int v9; // eax
  unsigned int v10; // edi
  void (__fastcall *v11)(_DWORD *); // rax
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int128 v14; // [rsp+30h] [rbp-28h]

  *(_QWORD *)&v14 = this;
  LODWORD(v13) = 0;
  v1 = 0LL;
  *((_QWORD *)&v14 + 1) = Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged;
  v3 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    v5 = Microsoft::WRL::Details::ModuleBase::module_;
    *(_QWORD *)v3 = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioClock2'};
    *(_QWORD *)v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>::`vftable';
    v3[3] = 1;
    if ( v5 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v5 + 8LL))(v5);
    v1 = v4;
    *((_OWORD *)v4 + 1) = v14;
    *(_QWORD *)v4 = off_140066700;
    *((_QWORD *)v4 + 4) = v13;
  }
  v6 = *((_QWORD *)this + 13);
  v7 = (char *)this + 120;
  v8 = *(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v6 + 64LL);
  if ( (char *)v8 == (char *)Windows::Media::Devices::Internal::AudioDeviceBroker::add_ModuleNotificationReceived )
    v9 = Windows::Media::Devices::Internal::AudioDeviceBroker::add_ModuleNotificationReceived(v6, v1, v7);
  else
    v9 = v8(v6, v1, v7);
  v10 = v9;
  if ( v9 >= 0 )
    *((_BYTE *)this + 128) = 1;
  if ( v1 )
  {
    v11 = *(void (__fastcall **)(_DWORD *))(*(_QWORD *)v1 + 16LL);
    if ( (char *)v11 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>::Release(v1);
    else
      v11(v1);
  }
  return v10;
}
