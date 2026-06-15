/*
 * XREFs of ?HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z @ 0x1800A4648
 * Callers:
 *     ?ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ @ 0x1800A62C8 (-ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180030BA4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x18005B384 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x1800846D4 (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z @ 0x1800A6A24 (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z.c)
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
  char v11; // al
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-18h] BYREF
  char v13; // [rsp+30h] [rbp-10h]
  _QWORD *v14; // [rsp+80h] [rbp+40h] BYREF
  struct IUnknown *v15; // [rsp+90h] [rbp+50h] BYREF
  struct IUnknown *v16; // [rsp+98h] [rbp+58h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  do
  {
    v5 = 0LL;
    v15 = 0LL;
    lpCriticalSection = v4;
    v13 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v7 = 0;
    v8 = (_QWORD *)*((_QWORD *)this + 14);
    v14 = v8;
    while ( v8 )
    {
      Next = ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
               v6,
               &v14);
      ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v16, *Next);
      v10 = v16;
      if ( !_wcsicoll((const wchar_t *)v16[9].lpVtbl, a2) || !_wcsicoll((const wchar_t *)v10[10].lpVtbl, a2) )
      {
        ATL::AtlComPtrAssign(&v15, v10);
        ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl->Release)(v10);
        v5 = v15;
        if ( v15 )
        {
          v11 = 1;
          goto LABEL_11;
        }
        break;
      }
      ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl->Release)(v10);
      v8 = v14;
    }
    v11 = 0;
LABEL_11:
    if ( v11 )
    {
      CMonitorManager::RemoveMonitor(this, (const struct CMonitorManager::CaptureMonitor *const)v5);
      v7 = 1;
    }
    if ( v13 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v13 = 0;
    }
    if ( v5 )
      ((void (__fastcall *)(struct IUnknown *))v5->lpVtbl->Release)(v5);
  }
  while ( v7 );
}
