/*
 * XREFs of ?Initialize@WorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800C318C
 * Callers:
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800C41D8 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x180045160 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??$make_shared@V?$function@$$A6AXXZ@std@@AEAV12@@std@@YA?AV?$shared_ptr@V?$function@$$A6AXXZ@std@@@0@AEAV?$function@$$A6AXXZ@0@@Z @ 0x1800C1C14 (--$make_shared@V-$function@$$A6AXXZ@std@@AEAV12@@std@@YA-AV-$shared_ptr@V-$function@$$A6AXXZ@std.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWorkFifo::WorkItem::Initialize(_QWORD *a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  std::_Ref_count_base *v7; // rcx
  __int64 v9; // rdx
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v11; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    v4 = std::make_shared<std::function<void (void)>,std::function<void (void)> &>(&v10, a2);
    v5 = *v4;
    v6 = v4[1];
    *v4 = 0LL;
    v4[1] = 0LL;
    v7 = (std::_Ref_count_base *)a1[1];
    a1[1] = v6;
    *a1 = v5;
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
  }
  catch ( std::bad_alloc )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\workfifo.h",
      (const char *)0x8007000ELL);
    std::_Func_class<void,>::_Tidy(a2, v9);
    return 2147942414LL;
  }
  std::_Func_class<void,>::_Tidy(a2, v6);
  return 0LL;
}
