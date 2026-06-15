/*
 * XREFs of ?_Reset0@?$_Ptr_base@VWorkItem@CWorkFifo@@@std@@QEAAXPEAVWorkItem@CWorkFifo@@PEAV_Ref_count_base@2@@Z @ 0x1800C509C
 * Callers:
 *     ??$make_shared@USaDeviceReevaluationContext@@$$V@std@@YA?AV?$shared_ptr@USaDeviceReevaluationContext@@@0@XZ @ 0x1800A9F64 (--$make_shared@USaDeviceReevaluationContext@@$$V@std@@YA-AV-$shared_ptr@USaDeviceReevaluationCon.c)
 *     ??$_Resetp@VWorkItem@CWorkFifo@@@?$shared_ptr@VWorkItem@CWorkFifo@@@std@@AEAAXPEAVWorkItem@CWorkFifo@@@Z @ 0x1800C1A00 (--$_Resetp@VWorkItem@CWorkFifo@@@-$shared_ptr@VWorkItem@CWorkFifo@@@std@@AEAAXPEAVWorkItem@CWork.c)
 *     ??4?$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800C1F7C (--4-$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?push_back@?$deque@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@USaDeviceReevaluationContext@@@2@@Z @ 0x1800C50F4 (-push_back@-$deque@V-$shared_ptr@USaDeviceReevaluationContext@@@std@@V-$allocator@V-$shared_ptr@.c)
 *     ??$make_shared@UPool@CEndpointResourcePool@Sarm@@AEAIAEAIAEA_J@std@@YA?AV?$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@0@AEAI0AEA_J@Z @ 0x1800C5198 (--$make_shared@UPool@CEndpointResourcePool@Sarm@@AEAIAEAIAEA_J@std@@YA-AV-$shared_ptr@UPool@CEnd.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Ptr_base<CWorkFifo::WorkItem>::_Reset0(_QWORD *a1, __int64 a2, __int64 a3)
{
  std::_Ref_count_base *v5; // rcx

  v5 = (std::_Ref_count_base *)a1[1];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  *a1 = a2;
  a1[1] = a3;
}
