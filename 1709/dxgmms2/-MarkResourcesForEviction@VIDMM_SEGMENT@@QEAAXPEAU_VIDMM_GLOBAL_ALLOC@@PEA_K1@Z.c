/*
 * XREFs of ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C004F800
 * Callers:
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0059D30 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C005BE50 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C005EA98 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 *     ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00AB404 (-ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     ?MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z @ 0x1C005036C (-MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z.c)
 */

void __fastcall VIDMM_SEGMENT::MarkResourcesForEviction(
        VIDMM_LINEAR_POOL **this,
        struct _VIDMM_POOL_BLOCK **a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  struct _VIDMM_POOL_BLOCK *v8; // rax
  unsigned __int64 v9; // rbp
  VIDMM_LINEAR_POOL *v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // r11
  __int64 v13; // rdx
  VIDMM_LINEAR_POOL *v14; // r10
  __int64 v15; // r9
  __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  char **v18; // rax
  struct _VIDMM_POOL_BLOCK *v19; // rdx
  struct _VIDMM_POOL_BLOCK *v20; // rcx
  char *v21; // rdi
  struct _VIDMM_POOL_BLOCK *v22; // rcx
  struct _VIDMM_POOL_BLOCK *v23; // rcx
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( ((_DWORD)this[10] & 0x1000) == 0 )
    VIDMM_LINEAR_POOL::MarkBlockForEviction(this[19], a2[19], a3, a4);
  v8 = a2[61];
  v9 = (unsigned __int64)a2[2];
  *((_DWORD *)a2 + 32) = 1;
  v10 = this[27];
  v11 = *(_QWORD *)v8;
  if ( v10 < (VIDMM_LINEAR_POOL *)((char *)v10 - v9) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v10, a2);
    *(_QWORD *)(v26 + 24) = 290LL;
    WdLogEvent5_WdAssertion(v26);
  }
  this[27] = (VIDMM_LINEAR_POOL *)((char *)this[27] - v9);
  v12 = *((unsigned int *)this + 95);
  v13 = *((int *)this + 119);
  v14 = this[1];
  v15 = *((_QWORD *)v14 + 5021);
  if ( (*(_BYTE *)(1552 * v12 + 24 * (v13 + 21) + v15) & 1) != 0 )
  {
    v13 = 368LL * *(unsigned int *)(*((_QWORD *)v14 + 3) + 200LL);
    v16 = *(_QWORD *)(v13 + *(_QWORD *)(v11 + 32) + 24) + 328 * v12;
  }
  else
  {
    v16 = 1552 * v12 + 328 * v13 + v15 + 536;
  }
  v17 = *(_QWORD *)(v16 + 112);
  if ( v17 < v17 - v9 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v17, v13);
    *(_QWORD *)(v27 + 24) = 297LL;
    WdLogEvent5_WdAssertion(v27);
  }
  *(_QWORD *)(v16 + 112) -= v9;
  --*((_DWORD *)this + 80);
  if ( ((_DWORD)this[10] & 0x1001) != 0 )
  {
    v23 = a2[62];
    if ( !v23 || _InterlockedExchangeAdd((volatile signed __int32 *)v23 + 5, 0xFFFFFFFF) == 1 )
    {
      v24 = *(_QWORD *)a2[61];
      v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 48), -(__int64)a2[2]);
      if ( v25 < (unsigned __int64)a2[2] )
      {
        v28 = WdLogNewEntry5_WdAssertion(v24, v25);
        *(_QWORD *)(v28 + 24) = 2169LL;
        WdLogEvent5_WdAssertion(v28);
      }
    }
  }
  v18 = (char **)(a2 + 48);
  v19 = a2[48];
  if ( *((struct _VIDMM_POOL_BLOCK ***)v19 + 1) != a2 + 48 || (v20 = a2[49], *(char ***)v20 != v18) )
    __fastfail(3u);
  *(_QWORD *)v20 = v19;
  v21 = (char *)(this + 22);
  *((_QWORD *)v19 + 1) = v20;
  v22 = (struct _VIDMM_POOL_BLOCK *)*((_QWORD *)v21 + 1);
  if ( *(char **)v22 != v21 )
    __fastfail(3u);
  *v18 = v21;
  a2[49] = v22;
  *(_QWORD *)v22 = v18;
  *((_QWORD *)v21 + 1) = v18;
}
