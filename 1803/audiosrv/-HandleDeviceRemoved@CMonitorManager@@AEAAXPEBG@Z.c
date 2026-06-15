/*
 * XREFs of ?HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z @ 0x1800DF96C
 * Callers:
 *     ?ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ @ 0x1800E0EA8 (-ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180018120 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18005587C (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x180060310 (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z @ 0x1800E1644 (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitorManager::HandleDeviceRemoved(CMonitorManager *this, const unsigned __int16 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r15
  struct IUnknown *v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 *Next; // rax
  struct IUnknown *v9; // rdi
  char v10; // di
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-18h] BYREF
  char v12; // [rsp+30h] [rbp-10h]
  _QWORD *i; // [rsp+70h] [rbp+30h] BYREF
  struct IUnknown *v14; // [rsp+80h] [rbp+40h] BYREF
  struct IUnknown *v15; // [rsp+88h] [rbp+48h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  do
  {
    v5 = 0LL;
    v14 = 0LL;
    lpCriticalSection = v4;
    v12 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v7 = (_QWORD *)*((_QWORD *)this + 14);
    for ( i = v7; ; v7 = i )
    {
      if ( !v7 )
        goto LABEL_7;
      Next = ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
               v6,
               &i);
      ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v15, *Next);
      v9 = v15;
      if ( !_wcsicoll((const wchar_t *)v15[9].lpVtbl, a2) || !_wcsicoll((const wchar_t *)v9[10].lpVtbl, a2) )
        break;
      ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
    }
    ATL::AtlComPtrAssign(&v14, v9);
    ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
    v5 = v14;
    if ( !v14 )
    {
LABEL_7:
      v10 = 0;
      goto LABEL_8;
    }
    v10 = 1;
LABEL_8:
    if ( v10 )
      CMonitorManager::RemoveMonitor(this, (const struct CMonitorManager::CaptureMonitor *const)v5);
    if ( v12 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v12 = 0;
    }
    if ( v5 )
      ((void (__fastcall *)(struct IUnknown *))v5->lpVtbl->Release)(v5);
  }
  while ( v10 );
}
