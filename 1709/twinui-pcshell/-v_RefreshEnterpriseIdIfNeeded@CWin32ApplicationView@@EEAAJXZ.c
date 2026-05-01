/*
 * XREFs of ?v_RefreshEnterpriseIdIfNeeded@CWin32ApplicationView@@EEAAJXZ @ 0x18007ED60
 * Callers:
 *     <none>
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??1CGlobals@ApplicationViewManagement@@UEAA@XZ @ 0x180079394 (--1CGlobals@ApplicationViewManagement@@UEAA@XZ.c)
 *     ?GetViewManager@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@XZ @ 0x18007D3E0 (-GetViewManager@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@VCApplicationViewManager@@@WRL.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CWin32ApplicationView::v_RefreshEnterpriseIdIfNeeded(CWin32ApplicationView *this)
{
  int v2; // r14d
  IUnknown *v3; // rdi
  IUnknown *v4; // rax
  IUnknown *v5; // rbx
  int v6; // ebx
  __int64 v7; // rcx
  _QWORD v9[15]; // [rsp+48h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  __int64 v11; // [rsp+D8h] [rbp+6Fh] BYREF
  IUnknown *v12; // [rsp+E0h] [rbp+77h]
  CWin32ApplicationView *v13; // [rsp+E8h] [rbp+7Fh]

  if ( !*((_BYTE *)this + 48) )
    return 0LL;
  v13 = this;
  _InterlockedAdd((volatile signed __int32 *)this + 47, 1u);
  _InterlockedAdd((volatile signed __int32 *)this + 47, 1u);
  memset(v9, 0, 0x40uLL);
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)v9);
  HIDWORD(v9[5]) = 1;
  v9[0] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  v9[6] = 0LL;
  v9[0] = &ApplicationViewManagement::CGlobals::`vftable';
  v9[7] = 0LL;
  v2 = *(_DWORD *)(*ApplicationViewManagement::CGlobals::GetViewManager(&v11) + 272);
  v3 = 0LL;
  v12 = 0LL;
  v4 = (IUnknown *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v4->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
    HIDWORD(v4[1].lpVtbl) = 1;
    v4->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v5->lpVtbl = (struct IUnknownVtbl *)off_180200130;
    v5[2].lpVtbl = (struct IUnknownVtbl *)this;
    _InterlockedAdd((volatile signed __int32 *)this + 47, 1u);
    v3 = v5;
    v12 = v5;
  }
  v6 = Windows::Internal::ComTaskPool::RunTask(3, 2u, v2, 0, v3, 0LL);
  if ( v3 )
    ((void (__fastcall *)(IUnknown *))v3->lpVtbl->Release)(v3);
  v7 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 228), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v7 + 80) + 64LL))(v7 + 80, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  ApplicationViewManagement::CGlobals::~CGlobals((ApplicationViewManagement::CGlobals *)v9);
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17F,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)v6);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 47, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(CWin32ApplicationView *, __int64))(*(_QWORD *)this + 416LL))(this, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 47, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(CWin32ApplicationView *, __int64))(*(_QWORD *)this + 416LL))(this, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return (unsigned int)v6;
}
