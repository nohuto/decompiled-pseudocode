/*
 * XREFs of ?QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K22222@Z @ 0x1C0047E00
 * Callers:
 *     ?QueryProcessSegmentGroupStatistics@VIDMM_GLOBAL@@QEAAJW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_GROUP_INFORMATION@@@Z @ 0x1C0020690 (-QueryProcessSegmentGroupStatistics@VIDMM_GLOBAL@@QEAAJW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAVVIDMM.c)
 *     ?QueryVideoMemoryInfo@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K222@Z @ 0x1C0047D34 (-QueryVideoMemoryInfo@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B5C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002144 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_BUDGET_VISIBILITY_STATE@@@Z @ 0x1C00A53B4 (-GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY.c)
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
  __int64 v11; // r11
  __int64 v13; // rbx
  __int64 v14; // r10
  __int64 v15; // rdi
  __int64 v16; // rbx
  unsigned __int64 *v17; // rcx
  __int64 v19; // r11
  __int64 v20; // r8
  __int64 v21; // rdx
  int v22; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v23[32]; // [rsp+28h] [rbp-20h] BYREF

  v11 = a5;
  v13 = a4;
  if ( (unsigned int)a5 <= D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL )
  {
    v14 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * a3);
    if ( v14 )
    {
      v15 = a5;
      v16 = *(_QWORD *)(v14 + 48) + 264LL * a4;
      *a6 = *(_QWORD *)(v16 + 8LL * (int)a5 + 24);
      *a8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 41200LL) + 8 * (v11 + 35LL * a4) + 80);
      *a9 = *(_QWORD *)(v16 + 8 * v11 + 56);
      v17 = a10;
      if ( a10 )
      {
        v20 = 5LL;
        v21 = v16 - (_QWORD)a10;
        do
        {
          if ( (_DWORD)v11 )
            *v17 = 0LL;
          else
            *v17 = *(unsigned __int64 *)((char *)v17 + v21 + 224);
          ++v17;
          --v20;
        }
        while ( v20 );
        *a11 = *(_QWORD *)(v16 + 8 * v11 + 200);
      }
      DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v23, (struct _KTHREAD **)(v14 + 328));
      *a7 = *(_QWORD *)(v16 + 8 * v15 + 136);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
      return 0LL;
    }
    if ( !a10 )
    {
      VIDMM_GLOBAL::GetProcessBudgetBandAndVisibility(
        this,
        *((struct DXGPROCESS **)this + 4),
        (enum VIDMM_BUDGET_PRIORITY_BAND *)&a5,
        (enum VIDMM_BUDGET_VISIBILITY_STATE *)&v22);
      *a6 = *(_QWORD *)(*((_QWORD *)a2 + 5150)
                      + 8 * (35 * v13 + 3 * v19 + (int)a5 + 4LL + 2 * (3 * v19 + (int)a5 + 4LL) + v22));
      *a8 = *(_QWORD *)(*((_QWORD *)a2 + 5150) + 8 * (35 * v13 + v19) + 80);
      *a9 = 0LL;
      *a7 = 0LL;
      return 0LL;
    }
  }
  return 3221225485LL;
}
