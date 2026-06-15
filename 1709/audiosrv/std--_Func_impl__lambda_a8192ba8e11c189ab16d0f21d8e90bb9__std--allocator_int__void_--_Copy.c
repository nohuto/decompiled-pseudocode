/*
 * XREFs of std::_Func_impl__lambda_a8192ba8e11c189ab16d0f21d8e90bb9__std::allocator_int__void_::_Copy @ 0x180035800
 * Callers:
 *     <none>
 * Callees:
 *     ?_Reset0@?$_Ptr_base@VWorkItem@CWorkFifo@@@std@@QEAAXPEAVWorkItem@CWorkFifo@@PEAV_Ref_count_base@2@@Z @ 0x18005AFA0 (-_Reset0@-$_Ptr_base@VWorkItem@CWorkFifo@@@std@@QEAAXPEAVWorkItem@CWorkFifo@@PEAV_Ref_count_base.c)
 */

_QWORD *__fastcall std::_Func_impl__lambda_a8192ba8e11c189ab16d0f21d8e90bb9__std::allocator_int__void_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx

  if ( a2 )
  {
    *a2 = off_1800F4320;
    v4 = a2 + 1;
    a2[1] = 0LL;
    a2[2] = 0LL;
    v5 = *(_QWORD *)(a1 + 16);
    v6 = *(_QWORD *)(a1 + 8);
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    std::_Ptr_base<CWorkFifo::WorkItem>::_Reset0(v4, v6, v5);
  }
  return a2;
}
