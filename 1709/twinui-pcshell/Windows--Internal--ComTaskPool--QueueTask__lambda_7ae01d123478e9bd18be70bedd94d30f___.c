/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_7ae01d123478e9bd18be70bedd94d30f___ @ 0x18006CC90
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_e1365bb4f253a4ea24e8f51062dc9f67___ @ 0x18006C380 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_e1365bb4f253a4ea24e8f51062dc9f67___.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18006F1FC (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_7ae01d123478e9bd18be70bedd94d30f___(
        __int64 a1,
        __int64 a2,
        int a3,
        IUnknown *a4)
{
  IUnknown *v6; // rdi
  IUnknown *v7; // rax
  IUnknown *v8; // rbx
  struct IUnknownVtbl **p_lpVtbl; // rdx
  unsigned int v10; // ebx

  v6 = 0LL;
  v7 = (IUnknown *)operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    v7->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
    HIDWORD(v7[1].lpVtbl) = 1;
    v7->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v8->lpVtbl = (struct IUnknownVtbl *)off_1801FEEE0;
    v8[2].lpVtbl = 0LL;
    if ( &v8[2] != a4 )
    {
      v8[2].lpVtbl = a4->lpVtbl;
      a4->lpVtbl = 0LL;
    }
    v8[3].lpVtbl = a4[1].lpVtbl;
    p_lpVtbl = &a4[2].lpVtbl;
    v8[4].lpVtbl = 0LL;
    if ( &v8[4] != &a4[2] )
    {
      v8[4].lpVtbl = *p_lpVtbl;
      *p_lpVtbl = 0LL;
    }
    v8[5].lpVtbl = a4[3].lpVtbl;
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
      &v8[6],
      &a4[4]);
    v8[6].lpVtbl = (struct IUnknownVtbl *)&CFramePresentationTelemetry::UnpresentWindow::`vftable';
    v6 = v8;
  }
  v10 = Windows::Internal::ComTaskPool::RunTask(3, 2u, a3, 0, v6, 0LL);
  if ( v6 )
    ((void (__fastcall *)(IUnknown *))v6->lpVtbl->Release)(v6);
  return v10;
}
