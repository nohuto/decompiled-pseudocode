/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_96e0e644045a5df6c639af1253b871cf__&___ptr64_ @ 0x180050CBC
 * Callers:
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x18004F518 (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_96e0e644045a5df6c639af1253b871cf______ptr64_(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4)
{
  IUnknown *v6; // rdi
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  unsigned int v9; // ebx

  v6 = 0LL;
  v7 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    *(_QWORD *)v7 = &IAppViewDataSourceAdapter::`vftable';
    v7[3] = 1;
    *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v8 = off_1801FCD60;
    *((_OWORD *)v8 + 1) = *(_OWORD *)a4;
    *((_OWORD *)v8 + 2) = *(_OWORD *)(a4 + 16);
    *((_QWORD *)v8 + 6) = *(_QWORD *)(a4 + 32);
    v6 = (IUnknown *)v8;
  }
  v9 = Windows::Internal::ComTaskPool::RunTask(3, 0x40u, a3, 0, v6, 0LL);
  if ( v6 )
    ((void (__fastcall *)(IUnknown *))v6->lpVtbl->Release)(v6);
  return v9;
}
