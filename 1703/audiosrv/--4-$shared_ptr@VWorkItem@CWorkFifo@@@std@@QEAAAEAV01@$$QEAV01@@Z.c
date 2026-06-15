/*
 * XREFs of ??4?$shared_ptr@VWorkItem@CWorkFifo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C1FD4
 * Callers:
 *     ?GetWorkItem@CWorkFifo@@AEAA?AV?$shared_ptr@VWorkItem@CWorkFifo@@@std@@XZ @ 0x1800C2DCC (-GetWorkItem@CWorkFifo@@AEAA-AV-$shared_ptr@VWorkItem@CWorkFifo@@@std@@XZ.c)
 *     ?ProcessWorkItem@CWorkFifo@@AEAAXXZ @ 0x1800C37C4 (-ProcessWorkItem@CWorkFifo@@AEAAXXZ.c)
 *     ?Initialize@CEndpointResourcePool@Sarm@@QEAAJPEAUISaDeviceProxy@@PEAU__POSITION@@@Z @ 0x1800C53F0 (-Initialize@CEndpointResourcePool@Sarm@@QEAAJPEAUISaDeviceProxy@@PEAU__POSITION@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::shared_ptr<CWorkFifo::WorkItem>::operator=(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  std::_Ref_count_base *v5; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = a2[1];
  a2[1] = 0LL;
  v5 = (std::_Ref_count_base *)a1[1];
  a1[1] = v4;
  *a1 = v2;
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return a1;
}
