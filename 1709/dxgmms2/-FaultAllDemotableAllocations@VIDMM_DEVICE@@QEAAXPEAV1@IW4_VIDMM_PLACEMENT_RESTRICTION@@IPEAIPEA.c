/*
 * XREFs of ?FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IW4_VIDMM_PLACEMENT_RESTRICTION@@IPEAIPEA_KPEA_N@Z @ 0x1C00A0730
 * Callers:
 *     ?DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEA_N@Z @ 0x1C00A0C20 (-DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_.c)
 * Callees:
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0059D30 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C008112C (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 */

VIDMM_GLOBAL *__fastcall VIDMM_DEVICE::FaultAllDemotableAllocations(
        VIDMM_GLOBAL **a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int *a6,
        VIDMM_GLOBAL **a7,
        _BYTE *a8)
{
  __int64 v9; // rdi
  __int64 v10; // rax
  VIDMM_GLOBAL *result; // rax
  _QWORD **v12; // r15
  __int64 v13; // r13
  _QWORD *v14; // rsi
  VIDMM_DEVICE **v15; // r12
  __int64 v16; // rdi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned int v20; // ecx
  int v21; // [rsp+68h] [rbp+20h]

  v21 = a4;
  v9 = a3;
  if ( g_IsInternalReleaseOrDbg )
  {
    v10 = WdLogNewEntry5_WdTrace(a1);
    a4 = v21;
    *(_QWORD *)(v10 + 24) = a1;
  }
  result = *a1;
  v12 = (_QWORD **)((char *)a1[5] + 56 * v9 + 32);
  v13 = *(_QWORD *)(*((_QWORD *)*a1 + 464) + 8 * v9);
  v14 = *v12;
  if ( *v12 != v12 )
  {
    while ( 1 )
    {
      v15 = (VIDMM_DEVICE **)(v14 - 7);
      v14 = (_QWORD *)*v14;
      v16 = *(_QWORD *)*v15;
      result = (VIDMM_GLOBAL *)*(unsigned int *)(v16 + 76);
      if ( ((unsigned __int8)result & 0x40) != 0 )
      {
        if ( a4 != 7
          || (*(_BYTE *)(v13 + 82) & 1) == 0
          || (v17 = *(_QWORD *)(v16 + 144), v18 = *(_QWORD *)(v13 + 384), v17 < v18)
          || *(_QWORD *)(v16 + 16) + v17 > *(_QWORD *)(v13 + 392) + v18 )
        {
          result = (VIDMM_GLOBAL *)*(unsigned int *)(v16 + 376);
          if ( (unsigned int)result > a5 )
          {
            v20 = *a6;
            if ( *a6 && v20 < (unsigned int)result )
              result = (VIDMM_GLOBAL *)v20;
            *a6 = (unsigned int)result;
          }
          else
          {
            if ( (*((_DWORD *)a1 + 13) & 7) == 0 )
              VIDMM_DEVICE::PartiallySuspend(a1);
            VIDMM_GLOBAL::FaultOneAllocation(*a1, v15);
            v19 = *(_QWORD *)(v16 + 16);
            *a8 = 1;
            result = *a7;
            if ( v19 >= (unsigned __int64)*a7 )
            {
              *a7 = 0LL;
              return result;
            }
            result = (VIDMM_GLOBAL *)((char *)result - v19);
            *a7 = result;
          }
        }
      }
      if ( v14 == v12 )
        return result;
      a4 = v21;
    }
  }
  return result;
}
