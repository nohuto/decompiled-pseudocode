/*
 * XREFs of ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C00B5C0C
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C007F920 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1C00B5AC0 (-AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z.c)
 *     ?BucketizeBudgetStateProcesses@VIDMM_GLOBAL@@IEAAXKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C00B62F4 (-BucketizeBudgetStateProcesses@VIDMM_GLOBAL@@IEAAXKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::AssignBudgets(
        VIDMM_GLOBAL *this,
        struct VIDMM_BUDGET_STATE *a2,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a3)
{
  __int64 v3; // rbx
  __int64 v6; // r9
  __int64 v7; // r11
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  _QWORD **v10; // rcx
  _QWORD *v11; // rax
  _QWORD *i; // rcx

  v3 = a3;
  VIDMM_GLOBAL::BucketizeBudgetStateProcesses(this, *(_DWORD *)a2, a3);
  v6 = *(unsigned int *)a2;
  v7 = *((_QWORD *)this + 5090);
  if ( (*(_BYTE *)(v7 + 24 * (v3 + 65 * v6) + 512) & 1) != 0 )
  {
    v8 = VIDMM_PARTITION::_PartitionTree;
    v9 = 0LL;
    while ( v8 )
    {
      v9 = v8;
      v8 = (_QWORD *)*v8;
    }
    while ( v9 )
    {
      VIDMM_GLOBAL::AssignBudgets(
        this,
        a2,
        (struct VIDMM_SEGMENT_GROUP_STATE *)(*(_QWORD *)(368LL * *(unsigned int *)(*((_QWORD *)this + 3) + 200LL)
                                                       + v9[4]
                                                       + 24)
                                           + 328LL * *(unsigned int *)a2));
      v10 = (_QWORD **)v9[1];
      v11 = v9;
      if ( v10 )
      {
        v9 = (_QWORD *)v9[1];
        for ( i = *v10; i; i = (_QWORD *)*i )
          v9 = i;
      }
      else
      {
        while ( 1 )
        {
          v9 = (_QWORD *)(v9[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v9 || (_QWORD *)*v9 == v11 )
            break;
          v11 = v9;
        }
      }
    }
  }
  else
  {
    VIDMM_GLOBAL::AssignBudgets(this, a2, (struct VIDMM_SEGMENT_GROUP_STATE *)(328 * v3 + 544 + v7 + 1560 * v6));
  }
}
