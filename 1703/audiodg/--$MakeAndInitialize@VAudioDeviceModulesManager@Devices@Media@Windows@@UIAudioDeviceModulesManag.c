/*
 * XREFs of ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@AEAVCHandle@ATL@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@AEAVCHandle@ATL@@@Z @ 0x140017750
 * Callers:
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14001A900 (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 * Callees:
 *     ?QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140011BD0 (-QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ @ 0x140011C70 (-Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ.c)
 *     ?add_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x140016EC0 (-add_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAU-$ITy.c)
 *     ?GetAudioModules@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAPEAU?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@5@@Z @ 0x140017050 (-GetAudioModules@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAPEAU-$IVector@PEAVAud.c)
 *     ??$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x14001A480 (--$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14001A7C0 (-Release@-$RuntimeClass@U-$InterfaceList@U-$ITypedEventHandler@PEAVAudioDeviceBroke_ea_14001A7C0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D508 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::AudioDeviceModulesManager,Windows::Media::Devices::IAudioDeviceModulesManager,ATL::CHandle &>(
        void **a1,
        _QWORD *a2)
{
  Windows::Media::Devices::AudioDeviceModulesManager *v4; // rsi
  RTL_SRWLOCK *v5; // rax
  __int64 v6; // rdx
  RTL_SRWLOCK *v7; // rbx
  PVOID Ptr; // rcx
  LPUNKNOWN v9; // rcx
  PVOID v10; // rcx
  int v11; // ebx
  __int64 v12; // rdi
  _DWORD *v13; // rax
  _OWORD *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 (__fastcall *v17)(__int64, __int64, __int64); // rax
  int v18; // eax
  void (__fastcall *v19)(__int64); // rax
  Windows::Media::Devices::Internal::AudioDeviceBroker *v20; // rdi
  __int64 v21; // rcx
  __int64 (__fastcall *v22)(Windows::Media::Devices::Internal::AudioDeviceBroker *, _QWORD *); // rax
  _QWORD *v23; // rdx
  int AudioModules; // eax
  __int64 (__fastcall *v25)(Windows::Media::Devices::AudioDeviceModulesManager *, const struct _GUID *, void **); // rax
  int Interface; // eax
  __int64 (__fastcall *v27)(Windows::Media::Devices::AudioDeviceModulesManager *, __int64); // rax
  _QWORD v29[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v30; // [rsp+30h] [rbp-30h]
  _BYTE v31[24]; // [rsp+40h] [rbp-20h]
  LPUNKNOWN ppunkMarshal; // [rsp+A0h] [rbp+40h] BYREF
  RTL_SRWLOCK *v33; // [rsp+B0h] [rbp+50h]
  RTL_SRWLOCK *v34; // [rsp+B8h] [rbp+58h]

  v29[1] = -2LL;
  *a1 = 0LL;
  v4 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  v5 = (RTL_SRWLOCK *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v5;
  v33 = v5;
  v29[0] = v5;
  if ( v5 )
  {
    *(_QWORD *)&v30 = v5;
    v5[2].Ptr = &Microsoft::WRL::FtmBase::`vftable';
    v5[4].Ptr = 0LL;
    ppunkMarshal = 0LL;
    if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
    {
      Ptr = v7[4].Ptr;
      if ( Ptr )
      {
        v7[4].Ptr = 0LL;
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
      }
      ((void (__fastcall *)(LPUNKNOWN, GUID *, RTL_SRWLOCK *))ppunkMarshal->lpVtbl->QueryInterface)(
        ppunkMarshal,
        &GUID_00000003_0000_0000_c000_000000000046,
        &v7[4]);
    }
    v9 = ppunkMarshal;
    if ( ppunkMarshal )
    {
      ppunkMarshal = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v9->lpVtbl->Release)(v9);
    }
    v7[6].Ptr = (PVOID)1;
    v7->Ptr = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    v7[1].Ptr = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
    v7[2].Ptr = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v7->Ptr = &Windows::Media::Devices::AudioDeviceModulesManager::`vftable';
    v7[1].Ptr = &Windows::Media::Devices::AudioDeviceModulesManager::`vftable'{for `IWeakReferenceSource'};
    v7[2].Ptr = &Windows::Media::Devices::AudioDeviceModulesManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    v7[7].Ptr = 0LL;
    v7[8].Ptr = 0LL;
    InitializeSRWLock(v7 + 9);
    InitializeSRWLock(v7 + 10);
    v7[11].Ptr = 0LL;
    v7[12].Ptr = 0LL;
    LOBYTE(v7[14].Ptr) = 0;
    v4 = (Windows::Media::Devices::AudioDeviceModulesManager *)v7;
    v34 = v7;
    v33 = 0LL;
    v29[0] = *a2;
    v10 = v7[11].Ptr;
    if ( v10 )
    {
      v7[11].Ptr = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v11 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::Internal::AudioDeviceBroker,Windows::Media::Devices::Internal::IAudioDeviceBroker,void * &>(
            &v7[11],
            v29);
    if ( v11 >= 0 )
    {
      *(_QWORD *)&v30 = Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged;
      DWORD2(v30) = 0;
      *(_QWORD *)v31 = v4;
      *(_OWORD *)&v31[8] = v30;
      v12 = 0LL;
      *(_QWORD *)&v30 = 0LL;
      v13 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      v14 = v13;
      if ( v13 )
      {
        *(_QWORD *)v13 = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioClock2'};
        v13[3] = 1;
        *(_QWORD *)v13 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        v14[1] = *(_OWORD *)v31;
        *((_QWORD *)v14 + 4) = *(_QWORD *)&v31[16];
        *(_QWORD *)v14 = off_140063320;
        v12 = (__int64)v14;
      }
      v15 = *((_QWORD *)v4 + 11);
      v16 = (__int64)v4 + 104;
      v17 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v15 + 64LL);
      if ( v17 == Windows::Media::Devices::Internal::AudioDeviceBroker::add_ModuleNotificationReceived )
        v18 = Windows::Media::Devices::Internal::AudioDeviceBroker::add_ModuleNotificationReceived(v15, v12, v16);
      else
        v18 = v17(v15, v12, v16);
      v11 = v18;
      if ( v18 >= 0 )
        *((_BYTE *)v4 + 112) = 1;
      if ( v12 )
      {
        v19 = *(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL);
        if ( (char *)v19 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v12);
        else
          v19(v12);
      }
      if ( v11 >= 0 )
      {
        v20 = (Windows::Media::Devices::Internal::AudioDeviceBroker *)*((_QWORD *)v4 + 11);
        v21 = *((_QWORD *)v4 + 12);
        if ( v21 )
        {
          *((_QWORD *)v4 + 12) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        }
        v22 = *(__int64 (__fastcall **)(Windows::Media::Devices::Internal::AudioDeviceBroker *, _QWORD *))(*(_QWORD *)v20 + 48LL);
        v23 = (_QWORD *)((char *)v4 + 96);
        if ( v22 == Windows::Media::Devices::Internal::AudioDeviceBroker::GetAudioModules )
          AudioModules = Windows::Media::Devices::Internal::AudioDeviceBroker::GetAudioModules(v20, v23);
        else
          AudioModules = v22(v20, v23);
        v11 = AudioModules;
        if ( AudioModules >= 0 )
        {
          v25 = **(__int64 (__fastcall ***)(Windows::Media::Devices::AudioDeviceModulesManager *, const struct _GUID *, void **))v4;
          if ( v25 == Windows::Media::Devices::AudioDeviceModulesManager::QueryInterface )
            Interface = Windows::Media::Devices::AudioDeviceModulesManager::QueryInterface(
                          v4,
                          &GUID_6aa40c4d_960a_4d1c_b318_0022604547ed,
                          a1);
          else
            Interface = v25(v4, &GUID_6aa40c4d_960a_4d1c_b318_0022604547ed, a1);
          v11 = Interface;
        }
      }
    }
  }
  else
  {
    v11 = -2147024882;
  }
  if ( v4 )
  {
    v34 = 0LL;
    v27 = *(__int64 (__fastcall **)(Windows::Media::Devices::AudioDeviceModulesManager *, __int64))(*(_QWORD *)v4 + 16LL);
    if ( v27 == Windows::Media::Devices::AudioDeviceModulesManager::Release )
      Windows::Media::Devices::AudioDeviceModulesManager::Release(v4, v6);
    else
      ((void (__fastcall *)(Windows::Media::Devices::AudioDeviceModulesManager *))v27)(v4);
  }
  return (unsigned int)v11;
}
