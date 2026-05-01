/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_f11545691eb1c18d1795497ebae59dd5___ @ 0x180184FB0
 * Callers:
 *     ??$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x1801844A4 (--$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAX.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_f11545691eb1c18d1795497ebae59dd5___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        IUnknown *a4)
{
  IUnknown *v5; // rdi
  IUnknown *v6; // rax
  IUnknown *v7; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v9; // ebx

  v5 = 0LL;
  v6 = (IUnknown *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    v6->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
    HIDWORD(v6[1].lpVtbl) = 1;
    v6->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v7->lpVtbl = (struct IUnknownVtbl *)off_18020E168;
    v7[2].lpVtbl = 0LL;
    if ( &v7[2] != a4 )
    {
      v7[2].lpVtbl = a4->lpVtbl;
      a4->lpVtbl = 0LL;
    }
    v7[3].lpVtbl = a4[1].lpVtbl;
    v5 = v7;
  }
  CurrentThreadId = GetCurrentThreadId();
  v9 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0x7D0u, v5, 0LL);
  if ( v5 )
    ((void (__fastcall *)(IUnknown *))v5->lpVtbl->Release)(v5);
  return v9;
}
