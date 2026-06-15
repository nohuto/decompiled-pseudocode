/*
 * XREFs of ?CreateInstance@AudioDeviceMgr@@SAJPEAUIEndpointNotificationCallback@@PEAPEAUIAudioDeviceMgr@@@Z @ 0x18005F730
 * Callers:
 *     ?Initialize@PhoneCallAudio@@AEAAJXZ @ 0x180055AF8 (-Initialize@PhoneCallAudio@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000B390 (--2@YAPEAX_K@Z.c)
 *     ?QueryInterface@AudioDeviceMgr@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180055EC0 (-QueryInterface@AudioDeviceMgr@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z @ 0x18005642C (-Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z.c)
 *     ??0AudioDeviceMgr@@IEAA@XZ @ 0x180056530 (--0AudioDeviceMgr@@IEAA@XZ.c)
 *     ?Release@AudioDeviceMgr@@UEAAKXZ @ 0x180056600 (-Release@AudioDeviceMgr@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioDeviceMgr::CreateInstance(struct IUnknown *a1, struct IAudioDeviceMgr **a2)
{
  AudioDeviceMgr *v4; // rbx
  AudioDeviceMgr *v5; // rax
  int v6; // edi
  __int64 (__fastcall *v7)(AudioDeviceMgr *, const struct _GUID *, void **); // rax
  int v8; // eax
  __int64 (__fastcall *v9)(AudioDeviceMgr *); // rax

  v4 = 0LL;
  if ( a2 )
  {
    *a2 = 0LL;
    v5 = (AudioDeviceMgr *)operator new(0xF0uLL);
    if ( v5 )
      v4 = AudioDeviceMgr::AudioDeviceMgr(v5);
    else
      v4 = 0LL;
    if ( v4 )
    {
      v6 = AudioDeviceMgr::Initialize(v4, a1);
      if ( v6 >= 0 )
      {
        v7 = **(__int64 (__fastcall ***)(AudioDeviceMgr *, const struct _GUID *, void **))v4;
        v8 = v7 == AudioDeviceMgr::QueryInterface
           ? AudioDeviceMgr::QueryInterface(v4, &GUID_495a7fca_552f_402a_8e78_78bf3ea87971, (void **)a2)
           : v7(v4, &GUID_495a7fca_552f_402a_8e78_78bf3ea87971, (void **)a2);
        v6 = 0;
        if ( v8 < 0 )
          v6 = v8;
      }
    }
    else
    {
      v6 = -2147024882;
    }
  }
  else
  {
    v6 = -2147467261;
  }
  if ( v4 )
  {
    v9 = *(__int64 (__fastcall **)(AudioDeviceMgr *))(*(_QWORD *)v4 + 16LL);
    if ( v9 == AudioDeviceMgr::Release )
      AudioDeviceMgr::Release(v4);
    else
      v9(v4);
  }
  return (unsigned int)v6;
}
