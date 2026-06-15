/*
 * XREFs of ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x18005B1D0
 * Callers:
 *     ??$?4AEAV?$function@$$A6AXXZ@std@@X@?$function@$$A6AXXZ@std@@QEAAAEAV01@AEAV01@@Z @ 0x18005B10C (--$-4AEAV-$function@$$A6AXXZ@std@@X@-$function@$$A6AXXZ@std@@QEAAAEAV01@AEAV01@@Z.c)
 *     ?Initialize@WorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800C0C00 (-Initialize@WorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800C1F24 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     std::_Func_impl__lambda_6d8abb589d22b5930a9c9ecc0b82ece6__std::allocator_int__void_::_Copy @ 0x18000C970 (std--_Func_impl__lambda_6d8abb589d22b5930a9c9ecc0b82ece6__std--allocator_int__void_--_Copy.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::function<void (void)>::function<void (void)>(_QWORD *a1, __int64 a2)
{
  _QWORD **v3; // rcx
  _QWORD *(__fastcall *v4)(__int64, _QWORD *); // rax
  _QWORD *v5; // rax

  a1[7] = 0LL;
  v3 = *(_QWORD ***)(a2 + 56);
  if ( v3 )
  {
    v4 = (_QWORD *(__fastcall *)(__int64, _QWORD *))**v3;
    if ( v4 == std::_Func_impl__lambda_6d8abb589d22b5930a9c9ecc0b82ece6__std::allocator_int__void_::_Copy )
      v5 = std::_Func_impl__lambda_6d8abb589d22b5930a9c9ecc0b82ece6__std::allocator_int__void_::_Copy((__int64)v3, a1);
    else
      v5 = v4((__int64)v3, a1);
    a1[7] = v5;
  }
  return a1;
}
