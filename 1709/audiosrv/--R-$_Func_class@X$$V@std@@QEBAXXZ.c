/*
 * XREFs of ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x18000C850
 * Callers:
 *     ?Invoke@ARM_EVENT@@UEAAXXZ @ 0x18000C5F0 (-Invoke@ARM_EVENT@@UEAAXXZ.c)
 *     ?ProcessWorkItem@CWorkFifo@@AEAAXXZ @ 0x1800C1374 (-ProcessWorkItem@CWorkFifo@@AEAAXXZ.c)
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
  if ( v2 == std::_Func_impl__lambda_6d8abb589d22b5930a9c9ecc0b82ece6__std::allocator_int__void_::_Do_call )
    return std::_Func_impl__lambda_6d8abb589d22b5930a9c9ecc0b82ece6__std::allocator_int__void_::_Do_call();
  else
    return v2();
}
