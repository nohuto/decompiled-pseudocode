/*
 * XREFs of ??$_Move@PEAPEAURecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAURecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x180123F70
 * Callers:
 *     ?NotifyOnDeadObserver@CProcessAttributionManager@@AEAAXPEAVCProcessAttributionObserver@@@Z @ 0x1801242C4 (-NotifyOnDeadObserver@CProcessAttributionManager@@AEAAXPEAVCProcessAttributionObserver@@@Z.c)
 *     ?erase@?$vector@PEAURecord@CProcessAttributionManager@@V?$allocator@PEAURecord@CProcessAttributionManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@2@@Z @ 0x180124568 (-erase@-$vector@PEAURecord@CProcessAttributionManager@@V-$allocator@PEAURecord@CProcessAttributi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Move<CProcessAttributionManager::Record * *,CProcessAttributionManager::Record * *>(
        void *Src,
        __int64 a2,
        void *a3)
{
  size_t v4; // rbx

  v4 = 8 * ((a2 - (__int64)Src) >> 3);
  memmove(a3, Src, v4);
  return (__int64)a3 + v4;
}
