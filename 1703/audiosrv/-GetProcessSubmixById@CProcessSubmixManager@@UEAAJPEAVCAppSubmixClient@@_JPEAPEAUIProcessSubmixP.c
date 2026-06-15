/*
 * XREFs of ?GetProcessSubmixById@CProcessSubmixManager@@UEAAJPEAVCAppSubmixClient@@_JPEAPEAUIProcessSubmixProxy@@@Z @ 0x1800AF5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x18004B7E0 (-HasTooManyReferences@@YA_NPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18007B29C (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800B10A8 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 */

__int64 __fastcall CProcessSubmixManager::GetProcessSubmixById(
        CProcessSubmixManager *this,
        struct CAppSubmixClient *a2,
        __int64 a3,
        struct IProcessSubmixProxy **a4)
{
  __int64 v6; // rbp
  struct IUnknown **v7; // rbx
  struct IUnknown **i; // rdi
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  struct IProcessSubmixProxy *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IProcessSubmixProxy *v15; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+58h] [rbp+10h] BYREF
  __int64 v17; // [rsp+60h] [rbp+18h]

  v17 = a3;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 16, (__int64)&v16);
  v6 = *((_QWORD *)a2 + 1);
  v7 = *(struct IUnknown ***)(v6 + 24);
  for ( i = *(struct IUnknown ***)(v6 + 16); i != v7; ++i )
  {
    v9 = ((__int64 (__fastcall *)(struct IUnknown *))(*i)->lpVtbl[7].QueryInterface)(*i);
    if ( v9 == v17 )
      break;
  }
  if ( i == *(struct IUnknown ***)(v6 + 24) )
  {
    v10 = -2147023728;
    v11 = 391LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
      (const char *)v10);
    goto LABEL_14;
  }
  v10 = 0;
  if ( HasTooManyReferences(*i) )
  {
    v10 = -2147024882;
    v11 = 394LL;
    goto LABEL_9;
  }
  ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v15, *i);
  v12 = v15;
  if ( v15 )
  {
    *a4 = v15;
    (*(void (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v12 + 8LL))(v12);
  }
  else
  {
    *a4 = 0LL;
  }
  wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)&v15);
LABEL_14:
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(&v16);
  return v10;
}
