/*
 * XREFs of ?_Destroy@?$_Ref_count@VWorkItem@CWorkFifo@@@std@@EEAAXXZ @ 0x1800C2A40
 * Callers:
 *     <none>
 * Callees:
 *     ??_GWorkItem@CWorkFifo@@QEAAPEAXI@Z @ 0x1800BF9F4 (--_GWorkItem@CWorkFifo@@QEAAPEAXI@Z.c)
 */

CWorkFifo::WorkItem *__fastcall std::_Ref_count<CWorkFifo::WorkItem>::_Destroy(__int64 a1)
{
  CWorkFifo::WorkItem *v1; // rcx
  CWorkFifo::WorkItem *result; // rax

  v1 = *(CWorkFifo::WorkItem **)(a1 + 16);
  if ( v1 )
    return CWorkFifo::WorkItem::`scalar deleting destructor'(v1);
  return result;
}
