/*
 * XREFs of ?Initialize@PhoneCallAudio@@AEAAJXZ @ 0x180055AF8
 * Callers:
 *     ?CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z @ 0x18005F664 (-CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z.c)
 * Callees:
 *     ?UpdatePhoneCallAudioState@PhoneCallAudio@@AEAAJXZ @ 0x1800559FC (-UpdatePhoneCallAudioState@PhoneCallAudio@@AEAAJXZ.c)
 *     ?InitPhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x180055A50 (-InitPhoneTopology@PhoneCallAudio@@AEAAJXZ.c)
 *     ?CreateInstance@AudioDeviceMgr@@SAJPEAUIEndpointNotificationCallback@@PEAPEAUIAudioDeviceMgr@@@Z @ 0x18005F730 (-CreateInstance@AudioDeviceMgr@@SAJPEAUIEndpointNotificationCallback@@PEAPEAUIAudioDeviceMgr@@@Z.c)
 *     ?CreateInstance@PhoneCallEndTimer@@SAJPEAVPhoneCallAudio@@PEAVCComAutoCriticalSection@ATL@@PEAPEAV1@@Z @ 0x18005F810 (-CreateInstance@PhoneCallEndTimer@@SAJPEAVPhoneCallAudio@@PEAVCComAutoCriticalSection@ATL@@PEAPE.c)
 */

__int64 __fastcall PhoneCallAudio::Initialize(PhoneCallAudio *this)
{
  HRESULT Instance; // edx
  int v3; // eax

  Instance = CoCreateInstance(
               &GUID_06cca63e_9941_441b_b004_39f999ada412,
               0LL,
               0x17u,
               &GUID_a00ffdbb_aba1_46f4_8225_b7499a6a9949,
               (LPVOID *)this + 15);
  if ( Instance >= 0 )
  {
    Instance = AudioDeviceMgr::CreateInstance(this, (struct IAudioDeviceMgr **)this + 8);
    if ( Instance >= 0 )
    {
      Instance = PhoneCallEndTimer::CreateInstance(
                   this,
                   (PhoneCallAudio *)((char *)this + 208),
                   (struct PhoneCallEndTimer **)this + 9);
      if ( Instance >= 0 )
      {
        PhoneCallAudio::InitPhoneTopology(this);
        v3 = PhoneCallAudio::UpdatePhoneCallAudioState(this);
        Instance = 0;
        if ( v3 < 0 )
          return (unsigned int)v3;
      }
    }
  }
  return (unsigned int)Instance;
}
