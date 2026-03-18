/*
 * XREFs of ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C004B3B0
 * Callers:
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0056F40 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0058C00 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C005B708 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C230 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00A2E00 (-ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     ?MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z @ 0x1C004BEE0 (-MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z.c)
 */

void __fastcall VIDMM_SEGMENT::MarkResourcesForEviction(
        VIDMM_LINEAR_POOL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  __int64 v8; // rsi
  VIDMM_LINEAR_POOL *v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rbp
  unsigned __int64 v12; // rcx
  char *v13; // rax
  __int64 v14; // rdx
  char **v15; // rcx
  char *v16; // rbx
  char **v17; // rcx
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( ((_DWORD)this[10] & 0x1000) == 0 )
    VIDMM_LINEAR_POOL::MarkBlockForEviction(this[22], *((struct _VIDMM_POOL_BLOCK **)a2 + 19), a3, a4);
  v8 = *((_QWORD *)a2 + 2);
  *((_DWORD *)a2 + 32) = 1;
  v9 = this[30];
  if ( v9 < (VIDMM_LINEAR_POOL *)((char *)v9 - v8) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v9, a2);
    *(_QWORD *)(v19 + 24) = 285LL;
    WdLogEvent5_WdAssertion(v19);
  }
  this[30] = (VIDMM_LINEAR_POOL *)((char *)this[30] - v8);
  v10 = *((int *)this + 125);
  v11 = *((_QWORD *)this[1] + 5150) + 280LL * *((unsigned int *)this + 101);
  v12 = *(_QWORD *)(v11 + 8 * v10 + 248);
  if ( v12 < v12 - v8 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v12, a2);
    *(_QWORD *)(v20 + 24) = 292LL;
    WdLogEvent5_WdAssertion(v20);
  }
  *(_QWORD *)(v11 + 8 * v10 + 248) -= v8;
  --*((_DWORD *)this + 86);
  if ( ((_DWORD)this[10] & 0x1001) != 0 )
  {
    v18 = _InterlockedExchangeAdd64(
            (volatile signed __int64 *)&VIDMM_SEGMENT::_GlobalTotalBytesCommittedInAperture,
            -*((_QWORD *)a2 + 2));
    if ( v18 < *((_QWORD *)a2 + 2) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v18, a2);
      *(_QWORD *)(v21 + 24) = 2128LL;
      WdLogEvent5_WdAssertion(v21);
    }
  }
  v13 = (char *)a2 + 416;
  v14 = *((_QWORD *)a2 + 52);
  v15 = (char **)*((_QWORD *)a2 + 53);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v14 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 416) || *v15 != v13 )
    __fastfail(3u);
  *v15 = (char *)v14;
  v16 = (char *)(this + 25);
  *(_QWORD *)(v14 + 8) = v15;
  v17 = (char **)*((_QWORD *)v16 + 1);
  if ( *v17 != v16 )
    __fastfail(3u);
  *(_QWORD *)v13 = v16;
  *((_QWORD *)a2 + 53) = v17;
  *v17 = v13;
  *((_QWORD *)v16 + 1) = v13;
}
