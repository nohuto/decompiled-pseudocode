/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_c093b048b1c12e288728af00af624558___ @ 0x1801D37D4
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x1801D0060 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1801D4AFC (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_c093b048b1c12e288728af00af624558___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // ebp
  IUnknown *v6; // rdi
  IUnknown *v7; // rax
  IUnknown *v8; // rbx
  unsigned int v9; // ebx

  v5 = dword_1802BB0C4;
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
    v8->lpVtbl = (struct IUnknownVtbl *)off_180213D78;
    v8[2].lpVtbl = 0LL;
    if ( &v8[2] != (IUnknown *)a4 )
    {
      v8[2].lpVtbl = *(struct IUnknownVtbl **)a4;
      *(_QWORD *)a4 = 0LL;
    }
    v8[3].lpVtbl = *(struct IUnknownVtbl **)(a4 + 8);
    v8[4].lpVtbl = *(struct IUnknownVtbl **)(a4 + 16);
    *(_QWORD *)(a4 + 16) = 0LL;
    LODWORD(v8[5].lpVtbl) = *(_DWORD *)(a4 + 24);
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
      &v8[6],
      a4 + 32);
    v8[6].lpVtbl = (struct IUnknownVtbl *)&SingleViewExperienceTelemetry::Launch::`vftable';
    v6 = v8;
  }
  v9 = Windows::Internal::ComTaskPool::RunTask(0, 2u, v5, 0, v6, 0LL);
  if ( v6 )
    ((void (__fastcall *)(IUnknown *))v6->lpVtbl->Release)(v6);
  return v9;
}
