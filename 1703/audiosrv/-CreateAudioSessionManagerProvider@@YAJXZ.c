/*
 * XREFs of ?CreateAudioSessionManagerProvider@@YAJXZ @ 0x18003772C
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18003543C (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddRef@CMonitor@@UEAAKXZ @ 0x180020350 (-AddRef@CMonitor@@UEAAKXZ.c)
 *     ?CreateInstance@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z @ 0x1800377A8 (-CreateInstance@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 CreateAudioSessionManagerProvider(void)
{
  __int64 v0; // rcx
  int Instance; // ebx
  __int64 (__fastcall *v2)(CMonitor *); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v5; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)&g_SessionManagerProviderLock;
  v5 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  Instance = ATL::CComObject<CAudioSessionManagerProvider>::CreateInstance(v0);
  if ( Instance >= 0 )
  {
    v2 = *(__int64 (__fastcall **)(CMonitor *))(*(_QWORD *)g_SingletonAudioSessionManagerProvider + 8LL);
    if ( v2 == CMonitor::AddRef )
      CMonitor::AddRef(g_SingletonAudioSessionManagerProvider);
    else
      v2(g_SingletonAudioSessionManagerProvider);
  }
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)Instance;
}
