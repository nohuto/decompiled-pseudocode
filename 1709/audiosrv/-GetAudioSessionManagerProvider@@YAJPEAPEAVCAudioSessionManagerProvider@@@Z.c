/*
 * XREFs of ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x180013188
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000FEB0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEnd.c)
 *     GetAudioSessionManager @ 0x180012FF0 (GetAudioSessionManager.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x1800276C4 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x18002C878 (-VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x1800628EC (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     VADServerUserSessionChanged @ 0x180064984 (VADServerUserSessionChanged.c)
 *     ?HandleDeviceAccess@@YAJPEAXPEBG1_N@Z @ 0x18007BF08 (-HandleDeviceAccess@@YAJPEAXPEBG1_N@Z.c)
 *     ?DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z @ 0x180083730 (-DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z.c)
 *     ?DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z @ 0x1800837A8 (-DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z.c)
 *     ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x1800884A0 (-SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180098B30 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 * Callees:
 *     ?AddRef@CMonitor@@UEAAKXZ @ 0x180013250 (-AddRef@CMonitor@@UEAAKXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetAudioSessionManagerProvider(struct CAudioSessionManagerProvider **a1)
{
  unsigned int (__fastcall *v2)(CMonitor *__hidden); // rax
  unsigned int v3; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)&g_SessionManagerProviderLock;
  v6 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( g_SingletonAudioSessionManagerProvider )
  {
    *a1 = g_SingletonAudioSessionManagerProvider;
    v2 = *(unsigned int (__fastcall **)(CMonitor *__hidden))(*(_QWORD *)g_SingletonAudioSessionManagerProvider + 8LL);
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
