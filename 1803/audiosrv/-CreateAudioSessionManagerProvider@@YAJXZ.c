/*
 * XREFs of ?CreateAudioSessionManagerProvider@@YAJXZ @ 0x180059AB8
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18005C0D8 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?AddRef@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180008D50 (-AddRef@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CreateInstance@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z @ 0x180059B34 (-CreateInstance@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 CreateAudioSessionManagerProvider(void)
{
  __int64 v0; // rcx
  int Instance; // ebx
  unsigned int (__fastcall *v2)(__int64, volatile int *); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v5; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)&g_SessionManagerProviderLock;
  v5 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  Instance = ATL::CComObject<CAudioSessionManagerProvider>::CreateInstance(v0);
  if ( Instance >= 0 )
  {
    v2 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)g_SingletonAudioSessionManagerProvider + 8LL);
    if ( v2 == ATL::CComObject<CAudioSessionManagerProvider>::AddRef )
      ATL::CComObject<CAudioSessionManagerProvider>::AddRef(
        (__int64)g_SingletonAudioSessionManagerProvider,
        (volatile int *)ATL::CComObject<CAudioSessionManagerProvider>::AddRef);
    else
      ((void (__fastcall *)(CAudioSessionManagerProvider *))v2)(g_SingletonAudioSessionManagerProvider);
  }
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)Instance;
}
