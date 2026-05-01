/*
 * XREFs of ?ImmersiveLauncherWNFCallback@CImmersiveMode@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180033B80
 * Callers:
 *     <none>
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveMode::ImmersiveLauncherWNFCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _DWORD *a4)
{
  _DWORD *v5; // rbx
  int v6; // ebp
  IUnknown *v7; // rsi
  IUnknown *v8; // rax
  IUnknown *v9; // rdi
  _DWORD *v11; // [rsp+88h] [rbp+20h] BYREF

  if ( a4 )
    (*(void (__fastcall **)(_DWORD *, __int64, struct _WNF_TYPE_ID *))(*(_QWORD *)a4 + 8LL))(a4, a2, a3);
  v5 = a4;
  v11 = a4;
  if ( a4 )
    (*(void (__fastcall **)(_DWORD *, __int64, struct _WNF_TYPE_ID *))(*(_QWORD *)a4 + 8LL))(a4, a2, a3);
  v6 = a4[94];
  v7 = 0LL;
  v8 = (IUnknown *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    v8->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
    HIDWORD(v8[1].lpVtbl) = 1;
    v8->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v9->lpVtbl = (struct IUnknownVtbl *)off_1801FB300;
    v9[2].lpVtbl = 0LL;
    if ( &v9[2] != (IUnknown *)&v11 )
    {
      v9[2].lpVtbl = (struct IUnknownVtbl *)a4;
      v5 = 0LL;
      v11 = 0LL;
    }
    v7 = v9;
  }
  Windows::Internal::ComTaskPool::RunTask(3, 2u, v6, 0, v7, 0LL);
  if ( v7 )
    ((void (__fastcall *)(IUnknown *))v7->lpVtbl->Release)(v7);
  if ( v5 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a4 + 16LL))(a4);
  return 0LL;
}
