/*
 * XREFs of ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1800450C8
 * Callers:
 *     ?Invoke@ARM_EVENT@@UEAAXXZ @ 0x180045020 (-Invoke@ARM_EVENT@@UEAAXXZ.c)
 *     ?ProcessWorkItem@CWorkFifo@@AEAAXXZ @ 0x1800C37C4 (-ProcessWorkItem@CWorkFifo@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_class<void,>::operator()(__int64 a1)
{
  __int64 v1; // rcx
  __int64 (*v2)(void); // rax

  v1 = *(_QWORD *)(a1 + 56);
  if ( !v1 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 16LL);
  if ( v2 == std::_Func_impl__lambda_8da706c8feaf042eaa6260cdea38ce5d__std::allocator_int__void_::_Do_call )
    return std::_Func_impl__lambda_8da706c8feaf042eaa6260cdea38ce5d__std::allocator_int__void_::_Do_call();
  else
    return v2();
}
