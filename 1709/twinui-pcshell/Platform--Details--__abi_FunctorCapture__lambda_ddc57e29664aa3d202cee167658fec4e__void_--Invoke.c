/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_ddc57e29664aa3d202cee167658fec4e__void_::Invoke @ 0x180154600
 * Callers:
 *     <none>
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Platform::Details::__abi_FunctorCapture__lambda_ddc57e29664aa3d202cee167658fec4e__void_::Invoke(
        __int64 a1)
{
  volatile signed __int32 *v1; // rsi
  volatile signed __int32 *v2; // rbp
  IUnknown *v3; // rbx
  IUnknown *v4; // rax
  IUnknown *v5; // rdi
  DWORD CurrentThreadId; // eax
  __int64 result; // rax
  _QWORD v8[8]; // [rsp+38h] [rbp-40h] BYREF

  v1 = *(volatile signed __int32 **)(a1 + 8);
  if ( v1 )
    _InterlockedIncrement(v1 + 13);
  v2 = v1;
  v8[0] = v1;
  if ( v1 )
  {
    _InterlockedIncrement(v1 + 13);
    v2 = (volatile signed __int32 *)v8[0];
  }
  v8[1] = v1;
  v3 = 0LL;
  v4 = (IUnknown *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v4->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
    HIDWORD(v4[1].lpVtbl) = 1;
    v4->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v5->lpVtbl = (struct IUnknownVtbl *)off_1802B36E8;
    v5[2].lpVtbl = 0LL;
    if ( &v5[2] != (IUnknown *)v8 )
    {
      v5[2].lpVtbl = (struct IUnknownVtbl *)v1;
      v2 = 0LL;
      v8[0] = 0LL;
    }
    v5[3].lpVtbl = (struct IUnknownVtbl *)v1;
    v3 = v5;
  }
  CurrentThreadId = GetCurrentThreadId();
  result = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0, v3, 0LL);
  if ( v3 )
    result = ((__int64 (__fastcall *)(IUnknown *))v3->lpVtbl->Release)(v3);
  if ( v2 )
  {
    result = (unsigned int)_InterlockedDecrement(v2 + 13);
    if ( !(_DWORD)result )
    {
      result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v8[0] + 72LL))(v8[0], 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        result = (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                         + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  if ( v1 )
  {
    result = (unsigned int)_InterlockedDecrement(v1 + 13);
    if ( !(_DWORD)result )
    {
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 72LL))(v1, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}
