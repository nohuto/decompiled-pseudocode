/*
 * XREFs of ?erase@?$vector@PEAURecord@CProcessAttributionManager@@V?$allocator@PEAURecord@CProcessAttributionManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@2@@Z @ 0x18001F430
 * Callers:
 *     ??_GCProcessAttribution@@UEAAPEAXI@Z @ 0x1800207F0 (--_GCProcessAttribution@@UEAAPEAXI@Z.c)
 *     ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXP6AX1K_KW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@Z @ 0x180021F30 (-EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObs.c)
 * Callees:
 *     ??$_Move_unchecked@PEAPEAURecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAURecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18001F470 (--$_Move_unchecked@PEAPEAURecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAURecord@CPr.c)
 */

_QWORD *__fastcall std::vector<CProcessAttributionManager::Record *>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *result; // rax

  std::_Move_unchecked<CProcessAttributionManager::Record * *,CProcessAttributionManager::Record * *>((void *)(a3 + 8));
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
