/*
 * XREFs of ??1?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@QEAA@XZ @ 0x1800BF54C
 * Callers:
 *     _CWorkFifo::CWorkFifo_::_1_::dtor$0 @ 0x1800BF497 (_CWorkFifo--CWorkFifo_--_1_--dtor$0.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Tidy@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@IEAAXXZ @ 0x1800C2DFC (-_Tidy@-$deque@V-$shared_ptr@VWorkItem@CWorkFifo@@@std@@V-$allocator@V-$shared_ptr@VWorkItem@CWo.c)
 */

void __fastcall std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::~deque<std::shared_ptr<CWorkFifo::WorkItem>>(
        _QWORD **a1)
{
  std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::_Tidy(a1);
  std::_Deallocate(*a1, 1uLL, 0x10uLL);
  *a1 = 0LL;
}
