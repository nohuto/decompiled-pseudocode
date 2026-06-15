/*
 * XREFs of ??$_Resetp@VWorkItem@CWorkFifo@@@?$shared_ptr@VWorkItem@CWorkFifo@@@std@@AEAAXPEAVWorkItem@CWorkFifo@@@Z @ 0x1800BEE30
 * Callers:
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800C1F24 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     ?_Reset0@?$_Ptr_base@VWorkItem@CWorkFifo@@@std@@QEAAXPEAVWorkItem@CWorkFifo@@PEAV_Ref_count_base@2@@Z @ 0x18005AFA0 (-_Reset0@-$_Ptr_base@VWorkItem@CWorkFifo@@@std@@QEAAXPEAVWorkItem@CWorkFifo@@PEAV_Ref_count_base.c)
 */

void __fastcall std::shared_ptr<CWorkFifo::WorkItem>::_Resetp<CWorkFifo::WorkItem>(_QWORD *a1, CWorkFifo::WorkItem *a2)
{
  _DWORD *v4; // rax
  _QWORD v5[7]; // [rsp+0h] [rbp-38h] BYREF

  v5[4] = -2LL;
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
    std::_Ptr_base<CWorkFifo::WorkItem>::_Reset0(a1, (__int64)a2, (__int64)v4);
  }
  catch ( ... )
  {
    if ( a2 )
      CWorkFifo::WorkItem::`scalar deleting destructor'(a2, (unsigned int)v5);
    throw;
  }
}
