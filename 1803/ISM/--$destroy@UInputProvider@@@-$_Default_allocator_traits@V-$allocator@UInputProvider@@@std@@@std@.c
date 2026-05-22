/*
 * XREFs of ??$destroy@UInputProvider@@@?$_Default_allocator_traits@V?$allocator@UInputProvider@@@std@@@std@@SAXAEAV?$allocator@UInputProvider@@@1@QEAUInputProvider@@@Z @ 0x1800051B4
 * Callers:
 *     _std::vector_InputProvider_std::allocator_InputProvider___::emplace_back_InputProvider__::_1_::catch$70 @ 0x1800E40E4 (_std--vector_InputProvider_std--allocator_InputProvider___--emplace_back_InputProvider__--_1_--c.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<InputProvider>>::destroy<InputProvider>(
        __int64 a1,
        __int64 a2)
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
