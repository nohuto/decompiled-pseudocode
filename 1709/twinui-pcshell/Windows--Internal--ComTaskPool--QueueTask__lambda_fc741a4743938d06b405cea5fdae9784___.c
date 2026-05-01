/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_fc741a4743938d06b405cea5fdae9784___ @ 0x18003B6D8
 * Callers:
 *     ?_CheckForInitialSuppression@CRotationManagerSync@@AEAAXXZ @ 0x18003B124 (-_CheckForInitialSuppression@CRotationManagerSync@@AEAAXXZ.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_fc741a4743938d06b405cea5fdae9784___(
        __int64 a1,
        __int64 a2)
{
  IUnknown *v3; // rdi
  IUnknown *v4; // rax
  IUnknown *v5; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v7; // ebx

  v3 = 0LL;
  v4 = (IUnknown *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v4->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
    HIDWORD(v4[1].lpVtbl) = 1;
    v4->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v5->lpVtbl = (struct IUnknownVtbl *)off_1801FBFB8;
    v5[2].lpVtbl = 0LL;
    if ( &v5[2] != (IUnknown *)a2 )
    {
      v5[2].lpVtbl = *(struct IUnknownVtbl **)a2;
      *(_QWORD *)a2 = 0LL;
    }
    v5[3].lpVtbl = *(struct IUnknownVtbl **)(a2 + 8);
    *(_QWORD *)(a2 + 8) = 0LL;
    LOBYTE(v5[4].lpVtbl) = 0;
    *(_BYTE *)(a2 + 16) = 1;
    v3 = v5;
  }
  CurrentThreadId = GetCurrentThreadId();
  v7 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0, v3, 0LL);
  if ( v3 )
    ((void (__fastcall *)(IUnknown *))v3->lpVtbl->Release)(v3);
  return v7;
}
