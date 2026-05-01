/*
 * XREFs of ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x180113B94
 * Callers:
 *     ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180112910 (-AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180112D10 (-RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z @ 0x180112E24 (-FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1801134F8 (-HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800398C4 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Instance@CommonPeopleTelemetry@@KAPEAV1@XZ @ 0x18010F9AC (-Instance@CommonPeopleTelemetry@@KAPEAV1@XZ.c)
 *     ?PeoplePaneViewChanged_@CommonPeopleTelemetry@@QEBAXW4PeoplePaneViewChange@@@Z @ 0x18010FFD8 (-PeoplePaneViewChanged_@CommonPeopleTelemetry@@QEBAXW4PeoplePaneViewChange@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall PeoplePaneViewManager::NotifyListeners(__int64 a1, int a2, __int64 a3, int a4)
{
  _DWORD *v8; // r10
  __int64 v9; // rcx
  int v10; // eax
  struct IUnknownVtbl *v11; // r13
  struct IUnknownVtbl *v12; // rsi
  int v13; // r12d
  IUnknown *v14; // rbx
  IUnknown *v15; // rax
  IUnknown *v16; // rdi
  struct IUnknownVtbl *v17; // rax
  LPVOID pv; // [rsp+38h] [rbp-49h] BYREF
  struct IUnknownVtbl *v19; // [rsp+40h] [rbp-41h]
  struct IUnknownVtbl *v20; // [rsp+48h] [rbp-39h]
  char v21; // [rsp+50h] [rbp-31h]
  __int64 v22; // [rsp+58h] [rbp-29h]
  int v23; // [rsp+60h] [rbp-21h]
  struct IUnknownVtbl *v24; // [rsp+68h] [rbp-19h]
  struct IUnknownVtbl *v25; // [rsp+70h] [rbp-11h]
  struct IUnknownVtbl *v26; // [rsp+78h] [rbp-9h]
  char v27; // [rsp+80h] [rbp-1h]
  int v28; // [rsp+88h] [rbp+7h]
  __int64 v29; // [rsp+90h] [rbp+Fh]
  __int64 v30; // [rsp+98h] [rbp+17h]
  IUnknown *v31; // [rsp+A0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  struct IUnknownVtbl *v33; // [rsp+E8h] [rbp+67h]

  v29 = -2LL;
  v8 = (_DWORD *)*((_QWORD *)CommonPeopleTelemetry::Instance() + 1);
  if ( v8 && *v8 )
  {
    CommonPeopleTelemetry::Instance();
    CommonPeopleTelemetry::PeoplePaneViewChanged_(v9, a2);
  }
  pv = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0;
  v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
          (__int64)&pv,
          a3,
          0xFFFFFFFFFFFFFFFFuLL);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x404,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v10);
  v22 = a1;
  v23 = a2;
  v11 = v19;
  v25 = v19;
  v33 = v20;
  v26 = v20;
  v12 = (struct IUnknownVtbl *)pv;
  pv = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v24 = v12;
  v27 = 0;
  v21 = 1;
  v28 = a4;
  v13 = *(_DWORD *)(a1 + 500);
  v14 = 0LL;
  v30 = 0LL;
  v15 = (IUnknown *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v15;
  if ( v15 )
  {
    v15->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
    HIDWORD(v15[1].lpVtbl) = 1;
    v15->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v16->lpVtbl = (struct IUnknownVtbl *)off_1802095D0;
    v16[2].lpVtbl = (struct IUnknownVtbl *)a1;
    LODWORD(v16[3].lpVtbl) = a2;
    v16[5].lpVtbl = v11;
    v16[6].lpVtbl = v33;
    v17 = v12;
    v12 = 0LL;
    v24 = 0LL;
    v26 = 0LL;
    v25 = 0LL;
    v16[4].lpVtbl = v17;
    LOBYTE(v16[7].lpVtbl) = 0;
    v27 = 1;
    LODWORD(v16[8].lpVtbl) = a4;
    v14 = v16;
  }
  v31 = v14;
  Windows::Internal::ComTaskPool::RunTask(0, 2u, v13, 0, v14, 0LL);
  if ( v14 )
    ((void (__fastcall *)(IUnknown *))v14->lpVtbl->Release)(v14);
  if ( v12 )
    CoTaskMemFree(v12);
}
