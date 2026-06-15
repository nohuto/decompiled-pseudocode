/*
 * XREFs of ?push_back@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@VWorkItem@CWorkFifo@@@2@@Z @ 0x1800F5914
 * Callers:
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800F468C (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x180016CB0 (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Growmap@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800F531C (-_Growmap@-$deque@V-$shared_ptr@VWorkItem@CWorkFifo@@@std@@V-$allocator@V-$shared_ptr@VWorkItem@.c)
 */

__int64 __fastcall std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::push_back(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rsi
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax

  v4 = a1[2];
  if ( v4 <= a1[4] + 1LL )
  {
    std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::_Growmap(a1);
    v4 = a1[2];
  }
  a1[3] &= v4 - 1;
  v5 = a1[1];
  v6 = (a1[2] - 1LL) & (a1[4] + a1[3]);
  if ( !*(_QWORD *)(v5 + 8 * v6) )
  {
    *(_QWORD *)(a1[1] + 8 * v6) = std::_Allocate<std::_Default_allocate_traits<1>>(1uLL, 0x10uLL);
    v5 = a1[1];
  }
  v7 = *(_QWORD **)(v5 + 8 * v6);
  *v7 = 0LL;
  v7[1] = 0LL;
  v8 = a2[1];
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  *v7 = *a2;
  result = a2[1];
  v7[1] = result;
  ++a1[4];
  return result;
}
