/*
 * XREFs of ??1?$_Deque_alloc@U?$_Deque_base_types@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@@std@@QEAA@XZ @ 0x1800BF510
 * Callers:
 *     _CWorkFifo::CWorkFifo_::_1_::dtor$3 @ 0x1800BF48B (_CWorkFifo--CWorkFifo_--_1_--dtor$3.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::_Deque_alloc<std::_Deque_base_types<std::shared_ptr<CWorkFifo::WorkItem>>>::~_Deque_alloc<std::_Deque_base_types<std::shared_ptr<CWorkFifo::WorkItem>>>(
        _QWORD **a1)
{
  std::_Deallocate(*a1, 1uLL, 0x10uLL);
  *a1 = 0LL;
}
