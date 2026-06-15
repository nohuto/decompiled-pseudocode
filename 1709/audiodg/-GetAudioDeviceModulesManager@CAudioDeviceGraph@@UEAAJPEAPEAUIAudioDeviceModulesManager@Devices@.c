/*
 * XREFs of ?GetAudioDeviceModulesManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x14000BAC0
 * Callers:
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000BDA0 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000CC90 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ?AddRef@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAKXZ @ 0x14000E910 (-AddRef@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031DE4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetAudioDeviceModulesManager(
        CAudioDeviceGraph *this,
        struct Windows::Media::Devices::IAudioDeviceModulesManager **a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  Windows::Media::Devices::Internal::AudioDeviceBroker *v4; // rcx
  void (*v5)(void); // rax

  v2 = *(_QWORD *)(*((_QWORD *)this + 14) + 24LL);
  if ( !v2 )
    ATL::AtlThrowImpl(-2147467259);
  if ( a2 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(v2 + 16) + 32LL);
    *a2 = *(struct Windows::Media::Devices::IAudioDeviceModulesManager **)(v3 + 24);
    v4 = *(Windows::Media::Devices::Internal::AudioDeviceBroker **)(v3 + 24);
    if ( v4 )
    {
      v5 = *(void (**)(void))(*(_QWORD *)v4 + 8LL);
      if ( (char *)v5 == (char *)Windows::Media::Devices::Internal::AudioDeviceBroker::AddRef )
        Windows::Media::Devices::Internal::AudioDeviceBroker::AddRef(v4);
      else
        v5();
    }
  }
  return 0LL;
}
