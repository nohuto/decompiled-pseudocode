/*
 * XREFs of ??_GWorkItem@CWorkFifo@@QEAAPEAXI@Z @ 0x1800C2134
 * Callers:
 *     _std::shared_ptr_CWorkFifo::WorkItem_::_Resetp_CWorkFifo::WorkItem__::_1_::catch$1 @ 0x1800C1A65 (_std--shared_ptr_CWorkFifo--WorkItem_--_Resetp_CWorkFifo--WorkItem__--_1_--catch$1.c)
 *     ?_Destroy@?$_Ref_count@VWorkItem@CWorkFifo@@@std@@EEAAXXZ @ 0x1800C4CE0 (-_Destroy@-$_Ref_count@VWorkItem@CWorkFifo@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CWorkFifo::WorkItem *__fastcall CWorkFifo::WorkItem::`scalar deleting destructor'(CWorkFifo::WorkItem *this)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  operator delete(this, (const struct std::nothrow_t *)0x10);
  return this;
}
