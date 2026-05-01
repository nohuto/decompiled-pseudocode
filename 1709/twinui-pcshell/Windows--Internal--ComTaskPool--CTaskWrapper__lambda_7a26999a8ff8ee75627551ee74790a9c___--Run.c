/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7a26999a8ff8ee75627551ee74790a9c___::Run @ 0x18003A3F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CClassicWindowExternal@@QEAA@PEAUIClassicWindow@@@Z @ 0x180035768 (--0CClassicWindowExternal@@QEAA@PEAUIClassicWindow@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7a26999a8ff8ee75627551ee74790a9c___::Run(
        __int64 a1)
{
  __int64 v2; // rsi
  struct IClassicWindow *v3; // rbp
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h]

  v2 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 208LL))(*(_QWORD *)(a1 + 24)) )
  {
    v7 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 208LL))(*(_QWORD *)(a1 + 24));
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 120LL))(v2, *v7);
  }
  else
  {
    v3 = *(struct IClassicWindow **)(a1 + 24);
    v4 = 0LL;
    v9 = 0LL;
    result = (__int64)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( result )
    {
      result = (__int64)CClassicWindowExternal::CClassicWindowExternal((CClassicWindowExternal *)result, v3);
      v4 = result;
      v9 = result;
    }
    if ( v4 )
    {
      v8 = 0LL;
      result = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v2 + 104LL))(v2, v4, &v8);
      if ( (int)result >= 0 )
        result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 200LL))(*(_QWORD *)(a1 + 24), v8);
      v6 = v8;
      if ( v8 )
      {
        v8 = 0LL;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
    }
    if ( v4 )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 60), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 80LL))(v9, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                         + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
  }
  return result;
}
