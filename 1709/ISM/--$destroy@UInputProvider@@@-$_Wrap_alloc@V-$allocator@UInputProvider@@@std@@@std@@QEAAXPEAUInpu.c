/*
 * XREFs of ??$destroy@UInputProvider@@@?$_Wrap_alloc@V?$allocator@UInputProvider@@@std@@@std@@QEAAXPEAUInputProvider@@@Z @ 0x1800055E4
 * Callers:
 *     _std::vector_InputProvider_std::allocator_InputProvider___::emplace_back_InputProvider__::_1_::catch$73 @ 0x1800CE532 (_std--vector_InputProvider_std--allocator_InputProvider___--emplace_back_InputProvider__--_1_--c.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Wrap_alloc<std::allocator<InputProvider>>::destroy<InputProvider>(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 16);
  if ( v2 )
  {
    *(_QWORD *)(a2 + 16) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
