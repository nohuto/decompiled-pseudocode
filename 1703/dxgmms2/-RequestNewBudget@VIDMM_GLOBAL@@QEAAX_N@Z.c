/*
 * XREFs of ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0063A64
 * Callers:
 *     ?XboxReevaluateAdapterBudgetsWorker@VIDMM_GLOBAL@@QEAAX_N_K@Z @ 0x1C004777C (-XboxReevaluateAdapterBudgetsWorker@VIDMM_GLOBAL@@QEAAX_N_K@Z.c)
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C004DB90 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 *     ?DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z @ 0x1C004DF64 (-DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C004E07C (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?NotifyProcessStatusChange@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0060FD0 (-NotifyProcessStatusChange@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0071420 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0091BF8 (-CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?SetMemoryBudgetTarget@VIDMM_GLOBAL@@QEAAXKK@Z @ 0x1C00950DC (-SetMemoryBudgetTarget@VIDMM_GLOBAL@@QEAAXKK@Z.c)
 *     ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1C0095A6C (-UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z.c)
 *     ?ChangeVideoMemoryReservation@VIDMM_PROCESS@@QEAAJKKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z @ 0x1C00998A4 (-ChangeVideoMemoryReservation@VIDMM_PROCESS@@QEAAJKKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z.c)
 *     ?SetMemoryBudgetOverride@VIDMM_PROCESS@@QEAAXK_K0@Z @ 0x1C0099C1C (-SetMemoryBudgetOverride@VIDMM_PROCESS@@QEAAXK_K0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::RequestNewBudget(VIDMM_GLOBAL *this, char a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // edx
  __int64 v4; // rax
  __int64 v5; // rcx

  if ( a2 )
  {
    v2 = *((_DWORD *)this + 1604);
    v3 = 0;
    if ( !v2 )
      return;
LABEL_3:
    v4 = 0LL;
    while ( !*(_BYTE *)(*((_QWORD *)this + 5150) + 280LL * v3 + v4 + 272) )
    {
      if ( ++v4 >= 2 )
      {
        if ( ++v3 < v2 )
          goto LABEL_3;
        return;
      }
    }
  }
  _InterlockedIncrement64((volatile signed __int64 *)this + 5205);
  v5 = *(_QWORD *)this;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v5 + 8) )
    KeSetEvent(*(PRKEVENT *)(v5 + 152), 0, 0);
}
