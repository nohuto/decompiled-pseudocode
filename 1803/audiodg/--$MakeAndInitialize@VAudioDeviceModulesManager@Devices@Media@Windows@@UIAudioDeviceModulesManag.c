/*
 * XREFs of ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x140019804
 * Callers:
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140019960 (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 * Callees:
 *     ?QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140016170 (-QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RegisterBrokerEvents@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJXZ @ 0x1400162EC (-RegisterBrokerEvents@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJXZ.c)
 *     ?Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ @ 0x140016480 (-Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ.c)
 *     ??0AudioDeviceModulesManager@Devices@Media@Windows@@QEAA@XZ @ 0x140016514 (--0AudioDeviceModulesManager@Devices@Media@Windows@@QEAA@XZ.c)
 *     ?GetAudioModules@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAPEAU?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@5@@Z @ 0x140018B60 (-GetAudioModules@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAPEAU-$IVector@PEAVAud.c)
 *     ??$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x1400191FC (--$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::AudioDeviceModulesManager,Windows::Media::Devices::IAudioDeviceModulesManager,void *>(
        void **a1,
        HANDLE *a2)
{
  RTL_SRWLOCK *v4; // rax
  RTL_SRWLOCK *v5; // rdi
  __int64 *v6; // rsi
  PVOID Ptr; // rcx
  int v8; // ebx
  Windows::Media::Devices::Internal::AudioDeviceBroker *v9; // rsi
  PVOID v10; // rcx
  __int64 (__fastcall *v11)(Windows::Media::Devices::Internal::AudioDeviceBroker *, RTL_SRWLOCK *); // rax
  RTL_SRWLOCK *v12; // rdx
  int AudioModules; // eax
  __int64 (__fastcall *v14)(Windows::Media::Devices::AudioDeviceModulesManager *, const struct _GUID *, void **); // rax
  int Interface; // eax
  __int64 (__fastcall *v16)(Windows::Media::Devices::AudioDeviceModulesManager *); // rax
  HANDLE v18; // [rsp+68h] [rbp+20h] BYREF

  *a1 = 0LL;
  v4 = (RTL_SRWLOCK *)operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v18 = v4;
    v5 = Windows::Media::Devices::AudioDeviceModulesManager::AudioDeviceModulesManager(v4);
    v18 = *a2;
    v6 = (__int64 *)&v5[12];
    Ptr = v5[12].Ptr;
    if ( Ptr )
    {
      *v6 = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    }
    v8 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::Internal::AudioDeviceBroker,Windows::Media::Devices::Internal::IAudioDeviceBroker,void * &>(
           v6,
           &v18);
    if ( v8 >= 0 )
    {
      v8 = Windows::Media::Devices::AudioDeviceModulesManager::RegisterBrokerEvents((Windows::Media::Devices::AudioDeviceModulesManager *)v5);
      if ( v8 >= 0 )
      {
        v9 = (Windows::Media::Devices::Internal::AudioDeviceBroker *)*v6;
        v10 = v5[13].Ptr;
        if ( v10 )
        {
          v5[13].Ptr = 0LL;
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v10 + 16LL))(v10);
        }
        v11 = *(__int64 (__fastcall **)(Windows::Media::Devices::Internal::AudioDeviceBroker *, RTL_SRWLOCK *))(*(_QWORD *)v9 + 48LL);
        v12 = v5 + 13;
        if ( (char *)v11 == (char *)Windows::Media::Devices::Internal::AudioDeviceBroker::GetAudioModules )
          AudioModules = Windows::Media::Devices::Internal::AudioDeviceBroker::GetAudioModules(v9, v12);
        else
          AudioModules = v11(v9, v12);
        v8 = AudioModules;
        if ( AudioModules >= 0 )
        {
          v14 = *(__int64 (__fastcall **)(Windows::Media::Devices::AudioDeviceModulesManager *, const struct _GUID *, void **))v5->Ptr;
          if ( v14 == Windows::Media::Devices::AudioDeviceModulesManager::QueryInterface )
            Interface = Windows::Media::Devices::AudioDeviceModulesManager::QueryInterface(
                          (Windows::Media::Devices::AudioDeviceModulesManager *)v5,
                          &GUID_6aa40c4d_960a_4d1c_b318_0022604547ed,
                          a1);
          else
            Interface = v14(
                          (Windows::Media::Devices::AudioDeviceModulesManager *)v5,
                          &GUID_6aa40c4d_960a_4d1c_b318_0022604547ed,
                          a1);
          v8 = Interface;
        }
      }
    }
    if ( v5 )
    {
      v16 = (__int64 (__fastcall *)(Windows::Media::Devices::AudioDeviceModulesManager *))*((_QWORD *)v5->Ptr + 2);
      if ( v16 == Windows::Media::Devices::AudioDeviceModulesManager::Release )
        Windows::Media::Devices::AudioDeviceModulesManager::Release((Windows::Media::Devices::AudioDeviceModulesManager *)v5);
      else
        v16((Windows::Media::Devices::AudioDeviceModulesManager *)v5);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
