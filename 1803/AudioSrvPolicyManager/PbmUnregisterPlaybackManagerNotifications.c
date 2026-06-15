/*
 * XREFs of PbmUnregisterPlaybackManagerNotifications @ 0x180021BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001515C (-RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001520C (-RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001AF08 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B0A4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmUnregisterPlaybackManagerNotifications(CApplicationManager *a1, int a2, int a3)
{
  unsigned int v3; // esi
  int Process; // eax
  volatile signed __int32 *v7; // rdi
  CApplicationManager *v8; // rbx
  struct _RTL_CRITICAL_SECTION *v9; // rcx
  CApplicationManager *v10; // rbx
  struct CProcess *v11; // rbx
  struct CProcess *v13; // [rsp+20h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+28h] [rbp-28h] BYREF
  char v15; // [rsp+30h] [rbp-20h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-18h] BYREF
  char v17; // [rsp+40h] [rbp-10h]

  v3 = 0;
  v13 = 0LL;
  if ( !g_ApplicationManager )
    return v3;
  Process = CApplicationManager::RpcGetProcess(a1, a1, &v13);
  v7 = (volatile signed __int32 *)v13;
  v3 = Process;
  if ( Process >= 0 )
  {
    if ( !a2 )
    {
      v10 = g_ApplicationManager;
      v17 = 0;
      lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32);
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      CProcess::RegisteredForSoundLevelNotifications((__int64)v7, 0, a3);
      CApplicationManager::Unregister(v10, (struct CProcess *)v7);
      if ( v17 )
      {
        v9 = lpCriticalSection;
        goto LABEL_9;
      }
LABEL_10:
      v3 = 0;
      goto LABEL_11;
    }
    if ( a2 == 1 )
    {
      v8 = g_ApplicationManager;
      v15 = 0;
      v14 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
      ATL::CCritSecLock::Lock(&v14);
      CProcess::RegisteredForTrackStateNotifications((__int64)v7, 0, a3);
      CApplicationManager::Unregister(v8, (struct CProcess *)v7);
      if ( v15 )
      {
        v9 = v14;
LABEL_9:
        LeaveCriticalSection(v9);
        goto LABEL_10;
      }
      goto LABEL_10;
    }
  }
LABEL_11:
  if ( v7 && _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
  {
    v11 = v13;
    (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v13 + 32LL))(v13);
    (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v11 + 24LL))(v11, 1LL);
  }
  return v3;
}
