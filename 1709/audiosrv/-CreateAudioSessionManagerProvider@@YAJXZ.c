/*
 * XREFs of ?CreateAudioSessionManagerProvider@@YAJXZ @ 0x18007B694
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x180063FBC (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?CreateInstance@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z @ 0x18007B708 (-CreateInstance@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 CreateAudioSessionManagerProvider(void)
{
  __int64 v0; // rcx
  int Instance; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v4; // [rsp+30h] [rbp-18h]

  lpCriticalSection = &g_SessionManagerProviderLock;
  v4 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  Instance = ATL::CComObject<CAudioSessionManagerProvider>::CreateInstance(v0);
  if ( Instance >= 0 )
    (*(void (__fastcall **)(CMonitor *))(*(_QWORD *)g_SingletonAudioSessionManagerProvider + 8LL))(g_SingletonAudioSessionManagerProvider);
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)Instance;
}
