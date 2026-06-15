/*
 * XREFs of _std::shared_ptr_CWorkFifo::WorkItem_::_Resetp_CWorkFifo::WorkItem__::_1_::catch$1 @ 0x1800C1A65
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180057F94 (_CxxThrowException_0.c)
 *     ??_GWorkItem@CWorkFifo@@QEAAPEAXI@Z @ 0x1800C2134 (--_GWorkItem@CWorkFifo@@QEAAPEAXI@Z.c)
 */

void __fastcall __noreturn std::shared_ptr_CWorkFifo::WorkItem_::_Resetp_CWorkFifo::WorkItem__::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  CWorkFifo::WorkItem *v2; // rcx

  v2 = *(CWorkFifo::WorkItem **)(a2 + 72);
  if ( v2 )
    CWorkFifo::WorkItem::`scalar deleting destructor'(v2, a2);
  throw;
}
