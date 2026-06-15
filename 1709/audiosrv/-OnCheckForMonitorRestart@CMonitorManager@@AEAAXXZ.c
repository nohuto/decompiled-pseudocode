/*
 * XREFs of ?OnCheckForMonitorRestart@CMonitorManager@@AEAAXXZ @ 0x1800A544C
 * Callers:
 *     ?OnCheckForMonitorRestartWorker@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800A5580 (-OnCheckForMonitorRestartWorker@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x18005B384 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x1800846D4 (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x1800A6B94 (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitorManager::OnCheckForMonitorRestart(CMonitorManager *this)
{
  CAudioDGProcess *v2; // rcx
  _QWORD *v3; // rax
  __int64 *Next; // rax
  CMonitorManager::CaptureMonitor *v5; // rbx
  __int64 v6; // [rsp+20h] [rbp-28h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v8; // [rsp+30h] [rbp-18h]
  _QWORD *v9; // [rsp+50h] [rbp+8h] BYREF
  CMonitorManager::CaptureMonitor *v10; // [rsp+58h] [rbp+10h] BYREF

  v6 = -2LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 72);
  v8 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x31u, (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids);
  }
  if ( *((_QWORD *)this + 16) )
  {
    v3 = (_QWORD *)*((_QWORD *)this + 14);
    v9 = v3;
    while ( v3 )
    {
      Next = ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
               (__int64)v2,
               &v9);
      ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v10, *Next);
      v5 = v10;
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x32u,
          (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids,
          *((_QWORD *)v10 + 8),
          v6);
      }
      CMonitorManager::CaptureMonitor::RestartMonitorIfAppropriate(v5);
      if ( v5 )
        (*(void (__fastcall **)(CMonitorManager::CaptureMonitor *))(*(_QWORD *)v5 + 16LL))(v5);
      v3 = v9;
    }
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
}
