/*
 * XREFs of ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x1400194B8
 * Callers:
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140019610 (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 * Callees:
 *     ?RegisterBrokerEvents@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJXZ @ 0x14000EA34 (-RegisterBrokerEvents@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJXZ.c)
 *     ?QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14000EB80 (-QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ @ 0x14000EC10 (-Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ.c)
 *     ??0AudioDeviceModulesManager@Devices@Media@Windows@@QEAA@XZ @ 0x14000EC7C (--0AudioDeviceModulesManager@Devices@Media@Windows@@QEAA@XZ.c)
 *     ?GetAudioModules@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAPEAU?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@5@@Z @ 0x140018500 (-GetAudioModules@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAPEAU-$IVector@PEAVAud.c)
 *     ??$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x1400193D0 (--$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D278 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::AudioDeviceModulesManager,Windows::Media::Devices::IAudioDeviceModulesManager,void *>(
        void **a1,
        HANDLE *a2)
{
  RTL_SRWLOCK *v4; // rax
  RTL_SRWLOCK *v5; // rdi
  void **p_Ptr; // rsi
  PVOID Ptr; // rcx
  __int64 v8; // rdx
  int v9; // ebx
  Windows::Media::Devices::Internal::AudioDeviceBroker *v10; // rsi
  PVOID v11; // rcx
  __int64 (__fastcall *v12)(Windows::Media::Devices::Internal::AudioDeviceBroker *, RTL_SRWLOCK *); // rax
  RTL_SRWLOCK *v13; // rdx
  int AudioModules; // eax
  __int64 (__fastcall *v15)(Windows::Media::Devices::AudioDeviceModulesManager *, const struct _GUID *, void **); // rax
  int Interface; // eax
  __int64 (__fastcall *v17)(Windows::Media::Devices::AudioDeviceModulesManager *, __int64); // rax
  HANDLE v19; // [rsp+68h] [rbp+20h] BYREF

  *a1 = 0LL;
  v4 = (RTL_SRWLOCK *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v19 = v4;
    v5 = Windows::Media::Devices::AudioDeviceModulesManager::AudioDeviceModulesManager(v4);
    v19 = *a2;
    p_Ptr = &v5[13].Ptr;
    Ptr = v5[13].Ptr;
    if ( Ptr )
    {
      *p_Ptr = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    }
    v9 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::Internal::AudioDeviceBroker,Windows::Media::Devices::Internal::IAudioDeviceBroker,void * &>(
           p_Ptr,
           &v19);
    if ( v9 >= 0 )
    {
      v9 = Windows::Media::Devices::AudioDeviceModulesManager::RegisterBrokerEvents((Windows::Media::Devices::AudioDeviceModulesManager *)v5);
      if ( v9 >= 0 )
      {
        v10 = (Windows::Media::Devices::Internal::AudioDeviceBroker *)*p_Ptr;
        v11 = v5[14].Ptr;
        if ( v11 )
        {
          v5[14].Ptr = 0LL;
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v11 + 16LL))(v11);
        }
        v12 = *(__int64 (__fastcall **)(Windows::Media::Devices::Internal::AudioDeviceBroker *, RTL_SRWLOCK *))(*(_QWORD *)v10 + 48LL);
        v13 = v5 + 14;
        if ( (char *)v12 == (char *)Windows::Media::Devices::Internal::AudioDeviceBroker::GetAudioModules )
          AudioModules = Windows::Media::Devices::Internal::AudioDeviceBroker::GetAudioModules(v10, v13);
        else
          AudioModules = v12(v10, v13);
        v9 = AudioModules;
        if ( AudioModules >= 0 )
        {
          v15 = *(__int64 (__fastcall **)(Windows::Media::Devices::AudioDeviceModulesManager *, const struct _GUID *, void **))v5->Ptr;
          if ( v15 == Windows::Media::Devices::AudioDeviceModulesManager::QueryInterface )
            Interface = Windows::Media::Devices::AudioDeviceModulesManager::QueryInterface(
                          (Windows::Media::Devices::AudioDeviceModulesManager *)v5,
                          &GUID_6aa40c4d_960a_4d1c_b318_0022604547ed,
                          a1);
          else
            Interface = v15(
                          (Windows::Media::Devices::AudioDeviceModulesManager *)v5,
                          &GUID_6aa40c4d_960a_4d1c_b318_0022604547ed,
                          a1);
          v9 = Interface;
        }
      }
    }
    if ( v5 )
    {
      v17 = (__int64 (__fastcall *)(Windows::Media::Devices::AudioDeviceModulesManager *, __int64))*((_QWORD *)v5->Ptr + 2);
      if ( v17 == Windows::Media::Devices::AudioDeviceModulesManager::Release )
        Windows::Media::Devices::AudioDeviceModulesManager::Release(
          (Windows::Media::Devices::AudioDeviceModulesManager *)v5,
          v8);
      else
        ((void (__fastcall *)(RTL_SRWLOCK *))v17)(v5);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
