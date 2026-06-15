/*
 * XREFs of ?OnPowerStateChanged@CMonitorManager@@QEAAXE@Z @ 0x1800B3F8C
 * Callers:
 *     ?PowerSettingChanged@CAudioSrv@@UEAAK_J@Z @ 0x1800352E0 (-PowerSettingChanged@CAudioSrv@@UEAAK_J@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_SS @ 0x18009273C (WPP_SF_SS.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800B10A8 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x1800B2928 (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?OnPowerStateChanged@CMonitor@@IEAAXE@Z @ 0x1800B7164 (-OnPowerStateChanged@CMonitor@@IEAAXE@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitorManager::OnPowerStateChanged(CMonitorManager *this, unsigned __int8 a2)
{
  CMonitorManager *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 *Next; // rax
  CMonitor **v7; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  char v9; // [rsp+40h] [rbp-18h]
  _QWORD *v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v10 = this;
  v3 = _MonitorManager;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Cu, (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids, a2);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v3 + 72);
  v9 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v5 = (_QWORD *)*((_QWORD *)v3 + 14);
  v10 = v5;
  while ( v5 )
  {
    Next = ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
             v4,
             &v10);
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v11, *Next);
    v7 = (CMonitor **)v11;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Du,
        (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids,
        *(const wchar_t **)(v11 + 72),
        *(_QWORD *)(*(_QWORD *)(v11 + 64) + 64LL));
    }
    CMonitor::OnPowerStateChanged(v7[8], a2);
    (*((void (__fastcall **)(CMonitor **))*v7 + 2))(v7);
    v5 = v10;
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
}
