/*
 * XREFs of ?QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K22222@Z @ 0x1C004C25C
 * Callers:
 *     ?QueryProcessSegmentGroupStatistics@VIDMM_GLOBAL@@QEAAJW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_GROUP_INFORMATION@@@Z @ 0x1C0022750 (-QueryProcessSegmentGroupStatistics@VIDMM_GLOBAL@@QEAAJW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAVVIDMM.c)
 *     ?QueryVideoMemoryInfo@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K222@Z @ 0x1C004C190 (-QueryVideoMemoryInfo@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001820 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013B00 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C00581DC (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 *     ?GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_BUDGET_VISIBILITY_STATE@@@Z @ 0x1C0066DB4 (-GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY.c)
 */

__int64 __fastcall VIDMM_PROCESS::QueryVideoMemoryInfo(
        VIDMM_PROCESS *this,
        struct VIDMM_GLOBAL *a2,
        unsigned int a3,
        unsigned int a4,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9,
        unsigned __int64 *a10,
        unsigned __int64 *a11)
{
  __int64 v14; // rsi
  __int64 v15; // rbx
  unsigned __int64 *v16; // rcx
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  __int64 v19; // r8
  int v20; // [rsp+20h] [rbp-28h] BYREF
  int v21; // [rsp+24h] [rbp-24h] BYREF
  _BYTE v22[32]; // [rsp+28h] [rbp-20h] BYREF

  if ( (unsigned int)a5 <= D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL )
  {
    v14 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * a3);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 48) + 296LL * a4;
      *a6 = *(_QWORD *)(v15 + 8LL * (int)a5 + 24);
      *a8 = *((_QWORD *)VIDMM_GLOBAL::GetSegmentGroupState(
                          *(VIDMM_GLOBAL **)v14,
                          a4,
                          a5,
                          *((struct VIDMM_PARTITION **)this + 21))
            + 4);
      *a9 = *(_QWORD *)(v15 + 8LL * (int)a5 + 56);
      v16 = a10;
      if ( a10 )
      {
        v19 = 5LL;
        do
        {
          if ( a5 )
            *v16 = 0LL;
          else
            *v16 = *(unsigned __int64 *)((char *)v16 + v15 - (_QWORD)a10 + 256);
          ++v16;
          --v19;
        }
        while ( v19 );
        *a11 = *(_QWORD *)(v15 + 8LL * (int)a5 + 200);
      }
      DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v22, (struct _KTHREAD **)(v14 + 360));
      *a7 = *(_QWORD *)(v15 + 8LL * (int)a5 + 136);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
      return 0LL;
    }
    if ( !a10 )
    {
      VIDMM_GLOBAL::GetProcessBudgetBandAndVisibility(
        this,
        *((struct DXGPROCESS **)this + 4),
        (enum VIDMM_BUDGET_PRIORITY_BAND *)&v20,
        (enum VIDMM_BUDGET_VISIBILITY_STATE *)&v21);
      SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(a2, a4, a5, *((struct VIDMM_PARTITION **)this + 21));
      *a6 = *((_QWORD *)SegmentGroupState + 3 * v20 + v21 + 5);
      *a8 = *((_QWORD *)VIDMM_GLOBAL::GetSegmentGroupState(a2, a4, a5, *((struct VIDMM_PARTITION **)this + 21)) + 4);
      *a9 = 0LL;
      *a7 = 0LL;
      return 0LL;
    }
  }
  return 3221225485LL;
}
