/*
 * XREFs of ??1CAudioDeviceGraph@@QEAA@XZ @ 0x14000F300
 * Callers:
 *     ??_G?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z @ 0x140012F40 (--_G-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z.c)
 *     _ATL::CComCreator_ATL::CComObject_CAudioDeviceGraph___::CreateInstance_::_1_::dtor$1 @ 0x1400208B0 (_ATL--CComCreator_ATL--CComObject_CAudioDeviceGraph___--CreateInstance_--_1_--dtor$1.c)
 *     ??1?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x140030A04 (--1-$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCAudioDeviceGraph@@@ATL@@QEAA@XZ @ 0x140030A50 (--1-$CComContainedObject@VCAudioDeviceGraph@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140001970 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140002EE8 (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x14000F8F0 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     ?Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ @ 0x140016480 (-Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x140034B74 (WPP_SF_.c)
 *     _TlgWrite @ 0x140034DB0 (_TlgWrite.c)
 */

void __fastcall CAudioDeviceGraph::~CAudioDeviceGraph(CAudioDeviceGraph *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  const GUID *v4; // r9
  Windows::Media::Devices::AudioDeviceModulesManager *v5; // rcx
  void (*v6)(void); // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-30h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_3dcabf6e46fe37d8e2cf6f9c2f959793_Traceguids);
  }
  CAudioDeviceGraph::Cleanup(this);
  v3 = wil::details::static_lazy<AudioDgTelemetryProvider>::get(
         v2,
         lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v3 > 4u && (*(_BYTE *)(v3 + 16) & 1) != 0 && (*(_QWORD *)(v3 + 24) & 1LL) == *(_QWORD *)(v3 + 24) )
    TlgWrite((TraceLoggingHProvider)v3, &unk_14006FF2B, (LPCGUID)this + 23, v4, 2u, &pData);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_3dcabf6e46fe37d8e2cf6f9c2f959793_Traceguids);
  }
  v5 = (Windows::Media::Devices::AudioDeviceModulesManager *)*((_QWORD *)this + 52);
  if ( v5 )
  {
    v6 = *(void (**)(void))(*(_QWORD *)v5 + 16LL);
    if ( (char *)v6 == (char *)Windows::Media::Devices::AudioDeviceModulesManager::Release )
      Windows::Media::Devices::AudioDeviceModulesManager::Release(v5);
    else
      v6();
  }
  v7 = *((_QWORD *)this + 50);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 45);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = (void *)*((_QWORD *)this + 42);
  if ( v9 )
  {
    free(v9);
    *((_QWORD *)this + 42) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 43);
  if ( v10 )
  {
    free(v10);
    *((_QWORD *)this + 43) = 0LL;
  }
  *((_DWORD *)this + 88) = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((__int64)this + 168);
  v11 = *((_QWORD *)this + 19);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = *((_QWORD *)this + 18);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( *((_BYTE *)this + 72) )
  {
    *((_BYTE *)this + 72) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  }
}
