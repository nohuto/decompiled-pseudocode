/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_67fff51ef85bdb7f782db56f669e2f17___ @ 0x18001BDE8
 * Callers:
 *     CIAMGlobals::QueueViewManagementTask__lambda_04a7eef998d7b1b6cf04498891e66b1a___ @ 0x180019FD0 (CIAMGlobals--QueueViewManagementTask__lambda_04a7eef998d7b1b6cf04498891e66b1a___.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_67fff51ef85bdb7f782db56f669e2f17___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rsi
  unsigned int v10; // ebx

  v6 = 0LL;
  v7 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    *v7 = &IAppViewDataSourceAdapter::`vftable';
    *((_DWORD *)v7 + 3) = 1;
    *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v8 = off_1801F9348;
    v8[2] = 0LL;
    if ( v8 + 2 != a4 )
    {
      v8[2] = *a4;
      *a4 = 0LL;
    }
    v9 = a4 + 1;
    v8[3] = 0LL;
    if ( v8 + 3 != v9 )
    {
      v8[3] = *v9;
      *v9 = 0LL;
    }
    v6 = v8;
  }
  v10 = Windows::Internal::ComTaskPool::RunTask(3LL, 2LL, a3, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  return v10;
}
