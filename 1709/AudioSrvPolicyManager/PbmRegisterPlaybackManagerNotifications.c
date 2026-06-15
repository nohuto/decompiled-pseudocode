/*
 * XREFs of PbmRegisterPlaybackManagerNotifications @ 0x1800185B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x180012914 (-RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x1800129E8 (-RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180012F34 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmRegisterPlaybackManagerNotifications(CApplicationManager *a1, int a2, int a3)
{
  unsigned int v3; // edi
  int Process; // eax
  __int64 v7; // rcx
  struct CProcess *v8; // rbx
  unsigned int v9; // eax
  struct CProcess *v10; // rbx
  struct CProcess *v12; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v12 = 0LL;
  if ( !g_ApplicationManager )
    return v3;
  Process = CApplicationManager::RpcGetProcess(a1, a1, &v12);
  v8 = v12;
  v3 = Process;
  if ( Process >= 0 )
  {
    if ( !a2 )
    {
      v9 = CApplicationManager::RegisterSoundLevelNotificationClient(v7, v12, a3);
      goto LABEL_7;
    }
    if ( a2 == 1 )
    {
      v9 = CApplicationManager::RegisterTrackStateNotificationClient(v7, v12, a3);
LABEL_7:
      v3 = v9;
    }
  }
  if ( v8 && _InterlockedExchangeAdd((volatile signed __int32 *)v8 + 2, 0xFFFFFFFF) == 1 )
  {
    v10 = v12;
    (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v12 + 32LL))(v12);
    (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v10 + 24LL))(v10, 1LL);
  }
  return v3;
}
