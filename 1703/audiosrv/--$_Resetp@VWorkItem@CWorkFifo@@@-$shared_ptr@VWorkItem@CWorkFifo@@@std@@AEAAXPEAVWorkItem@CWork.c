/*
 * XREFs of ??$_Resetp@VWorkItem@CWorkFifo@@@?$shared_ptr@VWorkItem@CWorkFifo@@@std@@AEAAXPEAVWorkItem@CWorkFifo@@@Z @ 0x1800C1A00
 * Callers:
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800C41D8 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025D60 (--2@YAPEAX_K@Z.c)
 *     ?_Reset0@?$_Ptr_base@VWorkItem@CWorkFifo@@@std@@QEAAXPEAVWorkItem@CWorkFifo@@PEAV_Ref_count_base@2@@Z @ 0x1800C509C (-_Reset0@-$_Ptr_base@VWorkItem@CWorkFifo@@@std@@QEAAXPEAVWorkItem@CWorkFifo@@PEAV_Ref_count_base.c)
 */

__int64 __fastcall std::shared_ptr<CWorkFifo::WorkItem>::_Resetp<CWorkFifo::WorkItem>(
        __int64 a1,
        CWorkFifo::WorkItem *a2)
{
  _DWORD *v4; // rax
  __int64 result; // rax
  _QWORD v6[7]; // [rsp+0h] [rbp-38h] BYREF

  v6[4] = -2LL;
  try
  {
    v4 = operator new(0x18uLL);
    if ( v4 )
    {
      v4[2] = 1;
      v4[3] = 1;
      *(_QWORD *)v4 = &std::_Ref_count<CWorkFifo::WorkItem>::`vftable';
      *((_QWORD *)v4 + 2) = a2;
    }
    result = std::_Ptr_base<CWorkFifo::WorkItem>::_Reset0(a1, a2, v4);
  }
  catch ( ... )
  {
    if ( a2 )
      CWorkFifo::WorkItem::`scalar deleting destructor'(a2, (unsigned int)v6);
    throw;
  }
  return result;
}
