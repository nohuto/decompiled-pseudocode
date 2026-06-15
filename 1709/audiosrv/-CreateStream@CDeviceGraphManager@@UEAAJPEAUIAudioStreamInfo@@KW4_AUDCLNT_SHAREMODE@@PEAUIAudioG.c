/*
 * XREFs of ?CreateStream@CDeviceGraphManager@@UEAAJPEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUStreamGroupParams@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180092D40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180029A10 (-GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPT.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A250 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDeviceGraphManager::CreateStream(
        CDeviceGraphManager *this,
        struct IAudioStreamInfo *a2,
        int a3,
        enum _AUDCLNT_SHAREMODE a4,
        struct IAudioGraphCallback *a5,
        unsigned int a6,
        struct AUDIO_DEVICE_MODE_DESCRIPTOR *a7,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a8,
        struct StreamGroupParams *a9,
        struct SYSTEM_AUDIO_STREAM *a10)
{
  BOOL v12; // r8d
  signed int StreamGroup; // ebx
  RPC_STATUS v14; // eax
  struct IStreamGroupProxy *v15; // rcx
  struct IStreamGroupProxy *v17[3]; // [rsp+30h] [rbp-18h] BYREF

  v12 = (a3 & 0x1000004) == 0
     && (a3 & 0xFFF8) == 0
     && (a4 != AUDCLNT_SHAREMODE_EXCLUSIVE || a3 >= 0)
     && (a3 & 0x88000000) != 0x8000000;
  StreamGroup = !v12 ? 0x80070057 : 0;
  if ( v12 )
  {
    v14 = RpcImpersonateClient(0LL);
    StreamGroup = v14;
    if ( v14 > 0 )
      StreamGroup = (unsigned __int16)v14 | 0x80070000;
    if ( StreamGroup >= 0 )
    {
      v17[0] = 0LL;
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)v17);
      StreamGroup = CDeviceGraphManager::GetStreamGroup(this, a9, a6, a7, v17);
      if ( StreamGroup >= 0 )
      {
        v15 = v17[0];
        *((_QWORD *)a8 + 13) = *(_QWORD *)a9;
        StreamGroup = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *, struct IAudioStreamInfo *, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *, struct SYSTEM_AUDIO_STREAM *))(*(_QWORD *)v15 + 24LL))(
                        v15,
                        a2,
                        a8,
                        a5,
                        a10);
      }
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)v17);
    }
    RpcRevertToSelf();
  }
  return (unsigned int)StreamGroup;
}
