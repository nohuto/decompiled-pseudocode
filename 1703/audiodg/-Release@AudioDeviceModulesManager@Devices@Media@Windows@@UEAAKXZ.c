/*
 * XREFs of ?Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ @ 0x140011C70
 * Callers:
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000EDF0 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000FE20 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@AEAVCHandle@ATL@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@AEAVCHandle@ATL@@@Z @ 0x140017750 (--$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManag.c)
 *     ??_ECDeviceProcessNode@@UEAAPEAXI@Z @ 0x140017D80 (--_ECDeviceProcessNode@@UEAAPEAXI@Z.c)
 *     ?Release@AudioDeviceModulesManager@Devices@Media@Windows@@W7EAAKXZ @ 0x14001FCB0 (-Release@AudioDeviceModulesManager@Devices@Media@Windows@@W7EAAKXZ.c)
 *     ?Release@AudioDeviceModulesManager@Devices@Media@Windows@@WBA@EAAKXZ @ 0x14001FCC0 (-Release@AudioDeviceModulesManager@Devices@Media@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     ??_EAudioDeviceModulesManager@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x140011AB0 (--_EAudioDeviceModulesManager@Devices@Media@Windows@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::Release(
        Windows::Media::Devices::AudioDeviceModulesManager *this,
        __int64 a2)
{
  signed __int64 v2; // rax
  Windows::Media::Devices::AudioDeviceModulesManager *v3; // r8
  unsigned __int32 v4; // ebx
  signed __int64 v5; // rtt
  Windows::Media::Devices::AudioDeviceModulesManager *(__fastcall *v7)(Windows::Media::Devices::AudioDeviceModulesManager *, char); // rax

  v2 = *((_QWORD *)this + 6);
  v3 = this;
  while ( v2 >= 0 )
  {
    v4 = v2 - 1;
    v5 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 6, v2 - 1, v2);
    if ( v5 == v2 )
      goto LABEL_4;
  }
  v4 = _InterlockedDecrement((volatile signed __int32 *)(2 * v2 + 16));
LABEL_4:
  if ( !v4 )
  {
    if ( this )
    {
      v7 = *(Windows::Media::Devices::AudioDeviceModulesManager *(__fastcall **)(Windows::Media::Devices::AudioDeviceModulesManager *, char))(*(_QWORD *)this + 80LL);
      if ( v7 == Windows::Media::Devices::AudioDeviceModulesManager::`vector deleting destructor' )
        Windows::Media::Devices::AudioDeviceModulesManager::`vector deleting destructor'(this, 1);
      else
        ((void (__fastcall *)(Windows::Media::Devices::AudioDeviceModulesManager *, __int64, Windows::Media::Devices::AudioDeviceModulesManager *))v7)(
          this,
          1LL,
          this);
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, __int64, Windows::Media::Devices::AudioDeviceModulesManager *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(
        Microsoft::WRL::Details::ModuleBase::module_,
        a2,
        v3);
  }
  return v4;
}
