/*
 * XREFs of std::_Func_impl__lambda_9e46ffd542bc9784639054f686993e60__std::allocator_int__bool_ISaDeviceProxy_____ptr64_::_Do_call @ 0x1800A9870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall std::_Func_impl__lambda_9e46ffd542bc9784639054f686993e60__std::allocator_int__bool_ISaDeviceProxy_____ptr64_::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rbx

  v2 = *a2;
  return (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 80LL))(*a2) != 2
      && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2) != 3;
}
