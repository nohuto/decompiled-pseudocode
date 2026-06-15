/*
 * XREFs of ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800644F4
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x180063EA0 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ @ 0x180009D18 (-RemoveAll@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSrv::VAD_AudiosrvServiceStop(CAudioSrv *this)
{
  CAudioDGProcess *v2; // rcx
  unsigned int v3; // eax
  void *v4; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 39LL, &WPP_1222a022b1c335ea5b3b60739ad81026_Traceguids);
    v2 = WPP_GLOBAL_Control;
  }
  if ( *((_DWORD *)this + 25) )
  {
    if ( v2 != (CAudioDGProcess *)&WPP_GLOBAL_Control && (*((_BYTE *)v2 + 28) & 4) != 0 && *((_BYTE *)v2 + 25) >= 4u )
      WPP_SF_(*((_QWORD *)v2 + 2), 40LL, &WPP_1222a022b1c335ea5b3b60739ad81026_Traceguids);
    v3 = RpcServerUnregisterIfEx(&unk_1800FB0D0, 0LL, 1);
    if ( v3
      && WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_1222a022b1c335ea5b3b60739ad81026_Traceguids, v3);
    }
    *((_DWORD *)this + 25) = 0;
  }
  if ( g_DuckingManager )
    (*(void (__fastcall **)(struct IAudioDuckingManager *))(*(_QWORD *)g_DuckingManager + 24LL))(g_DuckingManager);
  lpCriticalSection = &g_csVadList;
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll((__int64)&g_VADServerList);
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  if ( g_SpatialAudioResourceManager )
  {
    (*(void (__fastcall **)(Sarm::CSpatialAudioResourceManager *))(*(_QWORD *)g_SpatialAudioResourceManager + 40LL))(g_SpatialAudioResourceManager);
    if ( g_SpatialAudioResourceManager )
    {
      (*(void (__fastcall **)(Sarm::CSpatialAudioResourceManager *))(*(_QWORD *)g_SpatialAudioResourceManager + 16LL))(g_SpatialAudioResourceManager);
      g_SpatialAudioResourceManager = 0LL;
    }
  }
  lpCriticalSection = &g_SessionManagerProviderLock;
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( g_SingletonAudioSessionManagerProvider )
  {
    (*(void (__fastcall **)(CMonitor *))(*(_QWORD *)g_SingletonAudioSessionManagerProvider + 16LL))(g_SingletonAudioSessionManagerProvider);
    g_SingletonAudioSessionManagerProvider = 0LL;
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  if ( g_AudioResourceManager )
  {
    (*(void (__fastcall **)(CAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 40LL))(g_AudioResourceManager);
    if ( g_AudioResourceManager )
    {
      (*(void (__fastcall **)(CAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 16LL))(g_AudioResourceManager);
      g_AudioResourceManager = 0LL;
    }
  }
  if ( g_ProcessSubmixManager )
  {
    (*(void (__fastcall **)(CProcessSubmixManager *))(*(_QWORD *)g_ProcessSubmixManager + 16LL))(g_ProcessSubmixManager);
    g_ProcessSubmixManager = 0LL;
  }
  if ( g_DeviceGraphManager )
  {
    (*(void (__fastcall **)(CDeviceGraphManager *))(*(_QWORD *)g_DeviceGraphManager + 16LL))(g_DeviceGraphManager);
    g_DeviceGraphManager = 0LL;
  }
  if ( g_DeviceGraphStore )
  {
    (*(void (__fastcall **)(CDeviceGraphStore *))(*(_QWORD *)g_DeviceGraphStore + 16LL))(g_DeviceGraphStore);
    g_DeviceGraphStore = 0LL;
  }
  v4 = g_AudioHealthMonitor;
  if ( g_AudioHealthMonitor )
  {
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)g_AudioHealthMonitor + 24));
    operator delete(v4, (const struct std::nothrow_t *)0x48);
  }
  g_AudioHealthMonitor = 0LL;
  if ( g_PolicyConfig )
  {
    (*(void (__fastcall **)(CPolicyConfig *))(*(_QWORD *)g_PolicyConfig + 16LL))(g_PolicyConfig);
    g_PolicyConfig = 0LL;
  }
  if ( g_pEndpointCharacteristicsCache )
  {
    (*(void (__fastcall **)(CEndpointCharacteristicsCache *))(*(_QWORD *)g_pEndpointCharacteristicsCache + 32LL))(g_pEndpointCharacteristicsCache);
    if ( g_pEndpointCharacteristicsCache )
    {
      (*(void (__fastcall **)(CEndpointCharacteristicsCache *))(*(_QWORD *)g_pEndpointCharacteristicsCache + 16LL))(g_pEndpointCharacteristicsCache);
      g_pEndpointCharacteristicsCache = 0LL;
    }
  }
  if ( g_pVolumeProvider )
  {
    (*(void (__fastcall **)(CVolumeProvider *))(*(_QWORD *)g_pVolumeProvider + 16LL))(g_pVolumeProvider);
    g_pVolumeProvider = 0LL;
  }
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 42LL, &WPP_1222a022b1c335ea5b3b60739ad81026_Traceguids, 0LL);
  }
  return 0LL;
}
