/*
 * XREFs of ??$?0AEAV?$function@$$A6AXXZ@std@@@?$_Ref_count_obj@V?$function@$$A6AXXZ@std@@@std@@QEAA@AEAV?$function@$$A6AXXZ@1@@Z @ 0x18001C7C8
 * Callers:
 *     ??$make_shared@V?$function@$$A6AXXZ@std@@AEAV12@@std@@YA?AV?$shared_ptr@V?$function@$$A6AXXZ@std@@@0@AEAV?$function@$$A6AXXZ@0@@Z @ 0x18002AB78 (--$make_shared@V-$function@$$A6AXXZ@std@@AEAV12@@std@@YA-AV-$shared_ptr@V-$function@$$A6AXXZ@std.c)
 * Callees:
 *     std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Move @ 0x18002AAA0 (std--_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_--_Move.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::_Ref_count_obj<std::function<void (void)>>::_Ref_count_obj<std::function<void (void)>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rcx
  __int64 (__fastcall *v5)(_QWORD, __int64); // rax
  __int64 v6; // rax

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<std::function<void (void)>>::`vftable';
  v3 = a1 + 16;
  *(_QWORD *)(a1 + 72) = 0LL;
  v4 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 56);
  if ( v4 )
  {
    v5 = **v4;
    if ( v5 == std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Move )
      v6 = std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Move(v4, v3);
    else
      v6 = v5(v4, v3);
    *(_QWORD *)(v3 + 56) = v6;
  }
  return a1;
}
