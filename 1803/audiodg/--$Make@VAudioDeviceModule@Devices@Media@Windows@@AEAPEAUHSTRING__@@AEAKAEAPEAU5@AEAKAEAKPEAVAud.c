/*
 * XREFs of ??$Make@VAudioDeviceModule@Devices@Media@Windows@@AEAPEAUHSTRING__@@AEAKAEAPEAU5@AEAKAEAKPEAVAudioDeviceBroker@Internal@234@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAudioDeviceModule@Devices@Media@Windows@@@12@AEAPEAUHSTRING__@@AEAK011$$QEAPEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@@Z @ 0x14004806C
 * Callers:
 *     ?GetAudioModules@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAPEAU?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@5@@Z @ 0x140018B60 (-GetAudioModules@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAPEAU-$IVector@PEAVAud.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??0AudioDeviceModule@Devices@Media@Windows@@QEAA@PEAUHSTRING__@@I0IIPEAUIAudioDeviceBroker@Internal@123@@Z @ 0x140048BD8 (--0AudioDeviceModule@Devices@Media@Windows@@QEAA@PEAUHSTRING__@@I0IIPEAUIAudioDeviceBroker@Inter.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make<Windows::Media::Devices::AudioDeviceModule,HSTRING__ * &,unsigned long &,HSTRING__ * &,unsigned long &,unsigned long &,Windows::Media::Devices::Internal::AudioDeviceBroker *>(
        __int64 *a1,
        HSTRING *a2,
        unsigned int *a3,
        HSTRING *a4,
        unsigned int *a5,
        unsigned int *a6,
        struct Windows::Media::Devices::Internal::IAudioDeviceBroker **a7)
{
  Windows::Media::Devices::AudioDeviceModule *v11; // rax
  __int64 v12; // rdi

  *a1 = 0LL;
  v11 = (Windows::Media::Devices::AudioDeviceModule *)operator new(
                                                        0x68uLL,
                                                        (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v12 = Windows::Media::Devices::AudioDeviceModule::AudioDeviceModule(v11, *a2, *a3, *a4, *a5, *a6, *a7);
    if ( *a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v12;
  }
  return a1;
}
