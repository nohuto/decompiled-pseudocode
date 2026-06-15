/*
 * XREFs of ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180035B70
 * Callers:
 *     ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x180035064 (-MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18003543C (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 *     ?KsNotifications_ServiceStart@@YAJXZ @ 0x1800361F8 (-KsNotifications_ServiceStart@@YAJXZ.c)
 *     ?MME_ServiceStart@@YAJXZ @ 0x18003639C (-MME_ServiceStart@@YAJXZ.c)
 *     ??$make_unique@VCPowerReferenceManager@@$$V@std@@YA?AV?$unique_ptr@VCPowerReferenceManager@@U?$default_delete@VCPowerReferenceManager@@@std@@@0@XZ @ 0x180036418 (--$make_unique@VCPowerReferenceManager@@$$V@std@@YA-AV-$unique_ptr@VCPowerReferenceManager@@U-$d.c)
 *     ??0CAudioDGProcess@@QEAA@PEAUIMonitorDGTermination@@@Z @ 0x180036518 (--0CAudioDGProcess@@QEAA@PEAUIMonitorDGTermination@@@Z.c)
 *     ??0?$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ @ 0x180036600 (--0-$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ.c)
 *     Template_zq @ 0x1800467E4 (Template_zq.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180049B8A (memset.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??_GCPowerReferenceManager@@QEAAPEAXI@Z @ 0x1800805FC (--_GCPowerReferenceManager@@QEAAPEAXI@Z.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSrv::Initialize(CAudioSrv *this, int a2)
{
  _BYTE *v4; // rax
  _BYTE *v5; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // rax
  CPowerReferenceManager **v7; // rax
  unsigned int v8; // edx
  CPowerReferenceManager *v9; // rcx
  CPowerReferenceManager *v10; // rax
  HRESULT v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // ebx
  LPVOID ppv; // [rsp+38h] [rbp-59h] BYREF
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+40h] [rbp-51h] BYREF
  __int64 v19; // [rsp+58h] [rbp-39h]
  _SYSTEM_POWER_CAPABILITIES spc; // [rsp+68h] [rbp-29h] BYREF

  v19 = -2LL;
  memset(&spc, 0, sizeof(spc));
  if ( !a2 )
  {
    v4 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
    v5 = v4;
    ppv = v4;
    if ( v4 )
    {
      ATL::CAtlExeModuleT<CAudioServiceModule>::CAtlExeModuleT<CAudioServiceModule>(v4);
      *(_QWORD *)v5 = &CAudioServiceModule::`vftable';
      v5[96] = 0;
    }
    else
    {
      v5 = 0LL;
    }
    *((_QWORD *)this + 11) = v5;
    if ( !v5 )
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_45152eef543736c8acd7716a7d1bb4fd_Traceguids);
      }
      a2 = -2147024882;
    }
  }
  GetPwrCapabilities(&spc);
  if ( !a2 )
  {
    v6 = (struct _RTL_CRITICAL_SECTION *)operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
    ppv = v6;
    if ( v6 )
      v6 = (struct _RTL_CRITICAL_SECTION *)CAudioDGProcess::CAudioDGProcess(
                                             (CAudioDGProcess *)v6,
                                             (struct IMonitorDGTermination *)(((unsigned __int64)this + 80) & -(__int64)(this != 0LL)));
    g_ADGProcess = v6;
    if ( v6 )
    {
      v7 = (CPowerReferenceManager **)std::make_unique<CPowerReferenceManager,>(&ppv);
      if ( &g_powerReferenceManager != v7 )
      {
        v9 = *v7;
        *v7 = 0LL;
        v10 = g_powerReferenceManager;
        g_powerReferenceManager = v9;
        if ( v10 )
          CPowerReferenceManager::`scalar deleting destructor'(v10, v8);
      }
      if ( ppv )
        CPowerReferenceManager::`scalar deleting destructor'((CPowerReferenceManager *)ppv, v8);
    }
    else if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
           && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_45152eef543736c8acd7716a7d1bb4fd_Traceguids);
    }
  }
  ppv = 0LL;
  v11 = CoCreateInstance(&CLSID_GlobalOptions, 0LL, 1u, &GUID_0000015b_0000_0000_c000_000000000046, &ppv);
  v12 = v11;
  if ( v11 < 0 )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        16LL,
        &WPP_45152eef543736c8acd7716a7d1bb4fd_Traceguids,
        (unsigned int)v11);
    }
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64))(*(_QWORD *)ppv + 24LL))(ppv, 5LL, 1LL);
  }
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  if ( !v12 )
  {
    v12 = CAudioSrv::VAD_AudiosrvServiceStart(this);
    if ( !v12 )
    {
      v13 = MME_ServiceStart();
      v15 = v13;
      if ( v13 < 0 && (Microsoft_Windows_AudioEnableBits & 4) != 0 )
        Template_zq(v14, &EVT_AUDIOSRV_FAIL_SUBSYSTEM_STARTUP, L"MME", (unsigned int)v13);
      EventAttributes.nLength = 24;
      EventAttributes.lpSecurityDescriptor = 0LL;
      EventAttributes.bInheritHandle = 0;
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_45152eef543736c8acd7716a7d1bb4fd_Traceguids);
      }
      if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
             L"D:(A;;0x00100003;;;S-1-5-80-2676549577-1911656217-2625096541-4178041876-1366760775)(A;;0x00100000;;;SY)",
             1u,
             &EventAttributes.lpSecurityDescriptor,
             0LL) )
      {
        if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_45152eef543736c8acd7716a7d1bb4fd_Traceguids);
        }
        g_hCanAcceptMMCClientEvent = CreateEventExW(
                                       &EventAttributes,
                                       L"Global\\AudioSrv_CanAcceptMMCClient",
                                       1u,
                                       0x100002u);
        LocalFree(EventAttributes.lpSecurityDescriptor);
      }
      if ( v15 < 0 )
        AudSrvTraceLoggingErrorHelper("CAudioSrv::Initialize", 0x24Bu, v15);
      if ( (char *)MyAtmosCheckCallback::m_pCallback != (char *)CPolicyConfig::UpdateRenderingEndpointsSpatialSettings )
      {
        Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)&CSpatialAudioTech::s_atmosLock, (__int64)&ppv);
        MyAtmosCheckCallback::m_pCallback = (void (*)(void))CPolicyConfig::UpdateRenderingEndpointsSpatialSettings;
        if ( ppv )
          LeaveCriticalSection((LPCRITICAL_SECTION)ppv);
      }
      return (unsigned int)KsNotifications_ServiceStart();
    }
  }
  return v12;
}
