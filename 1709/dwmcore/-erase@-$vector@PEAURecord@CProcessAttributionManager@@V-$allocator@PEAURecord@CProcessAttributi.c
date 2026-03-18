/*
 * XREFs of ?erase@?$vector@PEAURecord@CProcessAttributionManager@@V?$allocator@PEAURecord@CProcessAttributionManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@2@@Z @ 0x180124568
 * Callers:
 *     ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXP6AX1K_KW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@Z @ 0x180007BD0 (-EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObs.c)
 *     ??1CProcessAttribution@@UEAA@XZ @ 0x180129210 (--1CProcessAttribution@@UEAA@XZ.c)
 * Callees:
 *     ??$_Move@PEAPEAURecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAURecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x180123F70 (--$_Move@PEAPEAURecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAURecord@CProcessAttri.c)
 */

_QWORD *__fastcall std::vector<CProcessAttributionManager::Record *>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *result; // rax

  std::_Move<CProcessAttributionManager::Record * *,CProcessAttributionManager::Record * *>(
    (void *)(a3 + 8),
    *(_QWORD *)(a1 + 8),
    (void *)a3);
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
