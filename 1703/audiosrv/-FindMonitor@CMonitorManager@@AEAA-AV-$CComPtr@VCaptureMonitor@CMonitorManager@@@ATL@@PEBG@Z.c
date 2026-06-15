/*
 * XREFs of ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x1800B2760
 * Callers:
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1800B1CD4 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?OnDeviceDescriptionChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x1800B36E0 (-OnDeviceDescriptionChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 *     ?OnDeviceIconChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x1800B3840 (-OnDeviceIconChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x1800B3AE0 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 *     ?OnPauseOnBatteryChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x1800B3E30 (-OnPauseOnBatteryChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800029E4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_SS @ 0x18009273C (WPP_SF_SS.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800B10A8 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x1800B2928 (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 */

// Hidden C++ exception states: #wind=1
struct IUnknown **__fastcall CMonitorManager::FindMonitor(__int64 a1, struct IUnknown **a2, const wchar_t *a3)
{
  CVolumeStrip *v6; // rcx
  __int64 v7; // rax
  __int64 *Next; // rax
  struct IUnknown *v9; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-10h] BYREF
  char v12; // [rsp+48h] [rbp-8h]
  __int64 v13; // [rsp+70h] [rbp+20h] BYREF
  struct IUnknown **v14; // [rsp+78h] [rbp+28h]
  struct IUnknown *v15; // [rsp+88h] [rbp+38h] BYREF

  v14 = a2;
  *a2 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 72);
  v12 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x49u, (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids, a3);
  }
  v7 = *(_QWORD *)(a1 + 112);
  v13 = v7;
  while ( v7 )
  {
    Next = (__int64 *)ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
                        v6,
                        &v13);
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v15, *Next);
    v9 = v15;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x4Au,
        (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids,
        (const wchar_t *)v15[9].lpVtbl,
        (__int64)v15[8].lpVtbl[2].Release);
    }
    if ( !(unsigned int)_o__wcsicmp(v9[9].lpVtbl, a3) )
    {
      if ( *a2 != v9 )
        ATL::AtlComPtrAssign(a2, v9);
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x4Bu,
          (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids,
          *a2);
      }
      ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
      break;
    }
    ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
    v7 = v13;
  }
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return a2;
}
