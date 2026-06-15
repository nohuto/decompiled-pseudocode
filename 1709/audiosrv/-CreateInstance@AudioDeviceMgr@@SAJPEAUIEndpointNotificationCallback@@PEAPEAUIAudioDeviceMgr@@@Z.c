/*
 * XREFs of ?CreateInstance@AudioDeviceMgr@@SAJPEAUIEndpointNotificationCallback@@PEAPEAUIAudioDeviceMgr@@@Z @ 0x1800E6C28
 * Callers:
 *     ?CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z @ 0x1800C7B7C (-CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0AudioDeviceMgr@@IEAA@XZ @ 0x1800E64EC (--0AudioDeviceMgr@@IEAA@XZ.c)
 *     ?Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z @ 0x1800E74EC (-Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioDeviceMgr::CreateInstance(
        struct IEndpointNotificationCallback *a1,
        struct IAudioDeviceMgr **a2)
{
  AudioDeviceMgr *v4; // rbx
  int v5; // edi
  AudioDeviceMgr *v6; // rax
  int v7; // eax

  v4 = 0LL;
  if ( a2 )
  {
    *a2 = 0LL;
    v6 = (AudioDeviceMgr *)operator new(0x128uLL);
    if ( v6 )
      v4 = AudioDeviceMgr::AudioDeviceMgr(v6);
    else
      v4 = 0LL;
    if ( v4 )
    {
      v5 = AudioDeviceMgr::Initialize(v4, a1);
      if ( v5 >= 0 )
      {
        v7 = (**(__int64 (__fastcall ***)(AudioDeviceMgr *, GUID *, struct IAudioDeviceMgr **))v4)(
               v4,
               &GUID_4bc078b5_341c_4181_9db2_069bb92ffcdf,
               a2);
        v5 = 0;
        if ( v7 < 0 )
          v5 = v7;
      }
    }
    else
    {
      v5 = -2147024882;
    }
  }
  else
  {
    v5 = -2147467261;
  }
  if ( v4 )
    (*(void (__fastcall **)(AudioDeviceMgr *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v5;
}
