/*
 * XREFs of ??$_Setp@VWorkItem@CWorkFifo@@@?$shared_ptr@VWorkItem@CWorkFifo@@@std@@AEAAXPEAVWorkItem@CWorkFifo@@U?$integral_constant@_N$0A@@1@@Z @ 0x1800F1A38
 * Callers:
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800F468C (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000B390 (--2@YAPEAX_K@Z.c)
 */

_DWORD *__fastcall std::shared_ptr<CWorkFifo::WorkItem>::_Setp<CWorkFifo::WorkItem>(
        CWorkFifo::WorkItem **a1,
        CWorkFifo::WorkItem *a2)
{
  _DWORD *result; // rax
  _QWORD v5[7]; // [rsp+0h] [rbp-38h] BYREF

  v5[4] = -2LL;
  try
  {
    result = operator new(0x18uLL);
    if ( result )
    {
      result[2] = 1;
      result[3] = 1;
      *(_QWORD *)result = &std::_Ref_count<CWorkFifo::WorkItem>::`vftable';
      *((_QWORD *)result + 2) = a2;
    }
    *a1 = a2;
    a1[1] = (CWorkFifo::WorkItem *)result;
  }
  catch ( ... )
  {
    if ( a2 )
      CWorkFifo::WorkItem::`scalar deleting destructor'(a2, (unsigned int)v5);
    throw;
  }
  return result;
}
