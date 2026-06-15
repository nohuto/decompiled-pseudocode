/*
 * XREFs of ?CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z @ 0x1800C7B7C
 * Callers:
 *     ?FinalConstruct@CAudioSessionManagerProvider@@QEAAJXZ @ 0x18007B884 (-FinalConstruct@CAudioSessionManagerProvider@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180030BA4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0PhoneCallAudio@@IEAA@XZ @ 0x1800C7818 (--0PhoneCallAudio@@IEAA@XZ.c)
 *     ?CreateInstance@PhoneCallEndTimer@@SAJPEAVPhoneCallAudio@@PEAVCComAutoCriticalSection@ATL@@PEAPEAV1@@Z @ 0x1800C7CA0 (-CreateInstance@PhoneCallEndTimer@@SAJPEAVPhoneCallAudio@@PEAVCComAutoCriticalSection@ATL@@PEAPE.c)
 *     ?InitPhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x1800C83F4 (-InitPhoneTopology@PhoneCallAudio@@AEAAJXZ.c)
 *     ?UpdatePhoneCallAudioState@PhoneCallAudio@@AEAAJXZ @ 0x1800C8F88 (-UpdatePhoneCallAudioState@PhoneCallAudio@@AEAAJXZ.c)
 *     ?CreateInstance@AudioDeviceMgr@@SAJPEAUIEndpointNotificationCallback@@PEAPEAUIAudioDeviceMgr@@@Z @ 0x1800E6C28 (-CreateInstance@AudioDeviceMgr@@SAJPEAUIEndpointNotificationCallback@@PEAPEAUIAudioDeviceMgr@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PhoneCallAudio::CreateInstance(struct ITelephonyControl **a1)
{
  unsigned int v2; // esi
  PhoneCallAudio *v3; // rbx
  struct ITelephonyControl *v4; // rdi
  PhoneCallAudio *v5; // rax
  int Instance; // eax
  struct IUnknown *v8; // [rsp+50h] [rbp+8h] BYREF
  PhoneCallAudio *v9; // [rsp+58h] [rbp+10h]
  PhoneCallAudio *v10; // [rsp+60h] [rbp+18h]

  v2 = 0;
  v3 = 0LL;
  v9 = 0LL;
  v4 = 0LL;
  v8 = 0LL;
  if ( a1 )
  {
    *a1 = 0LL;
    v5 = (PhoneCallAudio *)operator new(0xA8uLL);
    v10 = v5;
    if ( v5 )
      v3 = PhoneCallAudio::PhoneCallAudio(v5);
    else
      v3 = 0LL;
    v9 = v3;
    if ( v3 )
    {
      Instance = AudioDeviceMgr::CreateInstance(v3, (struct IAudioDeviceMgr **)v3 + 7);
      if ( Instance >= 0
        && (Instance = PhoneCallEndTimer::CreateInstance(
                         v3,
                         (PhoneCallAudio *)((char *)v3 + 128),
                         (struct PhoneCallEndTimer **)v3 + 8),
            Instance >= 0)
        && (PhoneCallAudio::InitPhoneTopology(v3),
            Instance = PhoneCallAudio::UpdatePhoneCallAudioState(v3),
            Instance >= 0) )
      {
        if ( v3 != (PhoneCallAudio *)-8LL )
        {
          ATL::AtlComPtrAssign(&v8, (struct IUnknown *)v3 + 1);
          v4 = (struct ITelephonyControl *)v8;
        }
        *a1 = v4;
      }
      else
      {
        v2 = Instance;
      }
    }
    else
    {
      v2 = -2147024882;
    }
  }
  else
  {
    v2 = -2147467261;
  }
  if ( v3 )
    (*(void (__fastcall **)(PhoneCallAudio *))(*(_QWORD *)v3 + 16LL))(v3);
  return v2;
}
