/*
 * XREFs of ?begin@?$deque@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@@2@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@@std@@@std@@@2@XZ @ 0x1800C50DC
 * Callers:
 *     ?ReevaluateSaDevicesForEndpoint@CAudioResourceManager@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800AC6B0 (-ReevaluateSaDevicesForEndpoint@CAudioResourceManager@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP.c)
 *     ?Shutdown@CAudioResourceManager@@UEAAXXZ @ 0x1800ACD80 (-Shutdown@CAudioResourceManager@@UEAAXXZ.c)
 *     ?GetWorkItem@CWorkFifo@@AEAA?AV?$shared_ptr@VWorkItem@CWorkFifo@@@std@@XZ @ 0x1800C2DCC (-GetWorkItem@CWorkFifo@@AEAA-AV-$shared_ptr@VWorkItem@CWorkFifo@@@std@@XZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::deque<std::shared_ptr<SaDeviceReevaluationContext>>::begin(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax

  v2 = a1[3];
  a2[1] = 0LL;
  a2[2] = v2;
  *a2 = *a1;
  return a2;
}
