/*
 * XREFs of ?HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z @ 0x1800B2C28
 * Callers:
 *     ?ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ @ 0x1800B4138 (-ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800029E4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800B10A8 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x1800B2928 (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z @ 0x1800B48BC (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitorManager::HandleDeviceRemoved(CMonitorManager *this, const unsigned __int16 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r12
  struct IUnknown *v5; // rbx
  __int64 v6; // rcx
  char v7; // r14
  _QWORD *v8; // rax
  __int64 *Next; // rax
  struct IUnknown *v10; // rdi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-18h] BYREF
  char v12; // [rsp+30h] [rbp-10h]
  _QWORD *v13; // [rsp+80h] [rbp+40h] BYREF
  struct IUnknown *v14; // [rsp+90h] [rbp+50h] BYREF
  struct IUnknown *v15; // [rsp+98h] [rbp+58h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  do
  {
    v5 = 0LL;
    v14 = 0LL;
    lpCriticalSection = v4;
    v12 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v7 = 0;
    v8 = (_QWORD *)*((_QWORD *)this + 14);
    v13 = v8;
    while ( v8 )
    {
      Next = ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
               v6,
               &v13);
      ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v15, *Next);
      v10 = v15;
      if ( !_wcsicoll((const wchar_t *)v15[9].lpVtbl, a2) || !_wcsicoll((const wchar_t *)v10[10].lpVtbl, a2) )
      {
        ATL::AtlComPtrAssign(&v14, v10);
        ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl->Release)(v10);
        v5 = v14;
        if ( v14 )
        {
          CMonitorManager::RemoveMonitor(this, (const struct CMonitorManager::CaptureMonitor *const)v14);
          v7 = 1;
        }
        break;
      }
      ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl->Release)(v10);
      v8 = v13;
    }
    if ( v12 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v12 = 0;
    }
    if ( v5 )
      ((void (__fastcall *)(struct IUnknown *))v5->lpVtbl->Release)(v5);
  }
  while ( v7 );
}
