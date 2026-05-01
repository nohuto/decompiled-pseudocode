/*
 * XREFs of _lambda_698b6ed47473c1c485a0f372d8eaf452_::__lambda_698b6ed47473c1c485a0f372d8eaf452_ @ 0x180104310
 * Callers:
 *     _wistd::_Func_impl_wistd::_Callable_obj__lambda_cfd27ea05118e91876b01966f7f941a5__0__wistd::details::function_allocator_wistd::_Func_class_void_enum_Windows::Internal::Shell::Holographic::ShellState_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_enum_Windows::Internal::Shell::Holographic::ShellState_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call_::_1_::dtor$1 @ 0x1801ED926 (_wistd--_Func_impl_wistd--_Callable_obj__lambda_cfd27ea05118e91876b01966f7f941a5__0_ea_1801ED926.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_698b6ed47473c1c485a0f372d8eaf452_::__lambda_698b6ed47473c1c485a0f372d8eaf452_(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v2; // rcx

  result = a1;
  v2 = *(volatile signed __int32 **)(a1 + 16);
  if ( v2 )
  {
    *(_QWORD *)(result + 16) = 0LL;
    result = (unsigned int)_InterlockedExchangeAdd(v2 + 11, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 72LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}
