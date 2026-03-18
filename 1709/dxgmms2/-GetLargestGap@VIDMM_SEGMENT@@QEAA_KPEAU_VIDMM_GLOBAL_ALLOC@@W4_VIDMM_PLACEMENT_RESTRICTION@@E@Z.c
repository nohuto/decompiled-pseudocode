/*
 * XREFs of ?GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C00AA4F0
 * Callers:
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C0066F30 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 *     ?DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEA_N@Z @ 0x1C00A0C20 (-DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_.c)
 * Callees:
 *     ?GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z @ 0x1C00B2274 (-GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z.c)
 */

unsigned __int64 __fastcall VIDMM_SEGMENT::GetLargestGap(__int64 a1, __int64 a2, int a3, unsigned __int8 a4)
{
  int v4; // r11d
  unsigned __int64 v7; // rdi
  unsigned int v8; // ebp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v12; // rsi
  unsigned int v13; // r9d
  unsigned __int64 v14; // rax

  v4 = *(_DWORD *)(a1 + 80);
  if ( (v4 & 0x20) != 0 )
    v7 = *(_QWORD *)(a2 + 24);
  else
    v7 = *(_QWORD *)(a2 + 16);
  v8 = *(_DWORD *)(a2 + 32);
  if ( (**(_DWORD **)(a2 + 504) & 0x20000) != 0 )
  {
    v8 = *(_DWORD *)(a1 + 408);
    v7 = ~*(_QWORD *)(a1 + 400) & (*(_QWORD *)(a1 + 400) + v7);
  }
  v9 = *(_QWORD *)(a1 + 48);
  v10 = 0LL;
  switch ( a3 )
  {
    case 7:
      if ( *(_DWORD *)(a1 + 412) == 1 )
      {
        result = 0LL;
        v12 = *(_QWORD *)(a1 + 384) + *(_QWORD *)(a1 + 392);
        if ( v12 < v9 )
          result = VIDMM_LINEAR_POOL::GetLargestGap(*(VIDMM_LINEAR_POOL **)(a1 + 152), v7, v8, 0, v12, v9);
        if ( result < v7 )
        {
          if ( v12 )
            return VIDMM_LINEAR_POOL::GetLargestGap(*(VIDMM_LINEAR_POOL **)(a1 + 152), v7, v8, 0, 0LL, v12);
        }
        return result;
      }
      goto LABEL_39;
    case 3:
LABEL_14:
      a4 = 1;
      return VIDMM_LINEAR_POOL::GetLargestGap(*(VIDMM_LINEAR_POOL **)(a1 + 152), v7, v8, a4, v10, v9);
    case 4:
      v13 = dword_1C0040188;
      if ( (v4 & 0x1001) != 0 )
        v13 = dword_1C004018C;
      if ( (*(_DWORD *)(a2 + 80) & 0x400) == 0 )
      {
        if ( *(_BYTE *)(a1 + 449) )
        {
          v9 = (v13 * (v9 / 0x64) + 4095) & 0xFFFFFFFFFFFFF000uLL;
          goto LABEL_14;
        }
        v10 = (v9 / 0x64 * (100 - v13) + 4095) & 0xFFFFFFFFFFFFF000uLL;
      }
LABEL_39:
      a4 = 0;
      return VIDMM_LINEAR_POOL::GetLargestGap(*(VIDMM_LINEAR_POOL **)(a1 + 152), v7, v8, a4, v10, v9);
    case 5:
      if ( *(_DWORD *)(a1 + 412) == 1 )
      {
        v14 = *(_QWORD *)(a1 + 432);
        if ( v14 )
        {
          if ( v14 >= v7 )
          {
            v10 = *(_QWORD *)(a1 + 416);
            v9 = *(_QWORD *)(a1 + 424);
          }
          else
          {
            a3 = 6;
          }
        }
        else
        {
          v9 = *(_QWORD *)(a1 + 384) + *(_QWORD *)(a1 + 392);
          v10 = v9 - v7;
        }
      }
      else
      {
        v10 = *(_QWORD *)(a1 + 384);
        v9 = v10 + *(_QWORD *)(a1 + 392);
      }
      a4 = 0;
      break;
  }
  if ( a3 != 6 )
    return VIDMM_LINEAR_POOL::GetLargestGap(*(VIDMM_LINEAR_POOL **)(a1 + 152), v7, v8, a4, v10, v9);
  if ( *(_DWORD *)(a1 + 412) != 1 )
  {
    v10 = *(_QWORD *)(a1 + 384);
    v9 = v10 + *(_QWORD *)(a1 + 392);
    goto LABEL_39;
  }
  if ( *(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 384) >= v7 )
  {
    v9 = *(_QWORD *)(a1 + 424);
    v10 = *(_QWORD *)(a1 + 416) - v7;
    goto LABEL_39;
  }
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(v9);
  return *(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 384);
}
