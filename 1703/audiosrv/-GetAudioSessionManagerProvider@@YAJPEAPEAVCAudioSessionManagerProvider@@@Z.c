/*
 * XREFs of ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x180025D84
 * Callers:
 *     ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x180025884 (-VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z.c)
 *     VADServerUserSessionChanged @ 0x180025C58 (VADServerUserSessionChanged.c)
 *     GetAudioSessionManager @ 0x180026A10 (GetAudioSessionManager.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x18008135C (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ?HandleDeviceAccess@@YAJPEAXPEBG1_N@Z @ 0x1800954DC (-HandleDeviceAccess@@YAJPEAXPEBG1_N@Z.c)
 *     ?DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z @ 0x18009BD44 (-DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z.c)
 *     ?DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z @ 0x18009BDBC (-DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z.c)
 *     ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x18009E7C0 (-SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800AA4D4 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddRef@CMonitor@@UEAAKXZ @ 0x180020350 (-AddRef@CMonitor@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetAudioSessionManagerProvider(struct CAudioSessionManagerProvider **a1)
{
  __int64 (__fastcall *v2)(CMonitor *); // rax
  unsigned int v3; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)&g_SessionManagerProviderLock;
  v6 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( g_SingletonAudioSessionManagerProvider )
  {
    *a1 = g_SingletonAudioSessionManagerProvider;
    v2 = *(__int64 (__fastcall **)(CMonitor *))(*(_QWORD *)g_SingletonAudioSessionManagerProvider + 8LL);
    if ( v2 == CMonitor::AddRef )
      CMonitor::AddRef(g_SingletonAudioSessionManagerProvider);
    else
      v2(g_SingletonAudioSessionManagerProvider);
    v3 = 0;
  }
  else
  {
    v3 = -2147467259;
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
