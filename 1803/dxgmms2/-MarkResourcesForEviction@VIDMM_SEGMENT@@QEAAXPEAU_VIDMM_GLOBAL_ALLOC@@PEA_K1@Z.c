/*
 * XREFs of ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0072F88
 * Callers:
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C005E61C (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0060750 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C006307C (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 *     ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00B3CC0 (-ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     ?MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z @ 0x1C00540E4 (-MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z.c)
 */

void __fastcall VIDMM_SEGMENT::MarkResourcesForEviction(
        VIDMM_LINEAR_POOL **this,
        struct _VIDMM_POOL_BLOCK **a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  struct _VIDMM_POOL_BLOCK *v8; // rax
  struct _VIDMM_POOL_BLOCK *v9; // rbp
  VIDMM_LINEAR_POOL *v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // r8
  VIDMM_LINEAR_POOL *v13; // r10
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  struct _VIDMM_POOL_BLOCK *v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  char **v21; // rax
  struct _VIDMM_POOL_BLOCK *v22; // rdx
  struct _VIDMM_POOL_BLOCK *v23; // rcx
  char *v24; // rdi
  struct _VIDMM_POOL_BLOCK *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( ((_DWORD)this[10] & 0x1000) == 0 )
    VIDMM_LINEAR_POOL::MarkBlockForEviction(this[19], a2[19], a3, a4);
  v8 = a2[61];
  v9 = a2[2];
  *((_DWORD *)a2 + 32) = 1;
  v10 = this[27];
  v11 = *(_QWORD *)v8;
  if ( (unsigned __int64)v10 < v10 - v9 )
  {
    v26 = WdLogNewEntry5_WdAssertion(v10, a2);
    *(_QWORD *)(v26 + 24) = 290LL;
    WdLogEvent5_WdAssertion(v26);
    v10 = this[27];
  }
  v12 = *((unsigned int *)this + 95);
  v13 = this[1];
  v14 = *((int *)this + 119);
  this[27] = (VIDMM_LINEAR_POOL *)(v10 - v9);
  v15 = *((_QWORD *)v13 + 5090);
  if ( (*(_BYTE *)(v15 + 24 * (v14 + 65 * v12) + 512) & 1) != 0 )
  {
    v14 = 368LL * *(unsigned int *)(*((_QWORD *)v13 + 3) + 200LL);
    v16 = *(_QWORD *)(v14 + *(_QWORD *)(v11 + 32) + 24) + 328 * v12;
  }
  else
  {
    v16 = 328 * v14 + 544 + v15 + 1560 * v12;
  }
  v17 = *(_QWORD *)(v16 + 112);
  if ( v17 < v17 - (unsigned __int64)v9 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v17, v14);
    *(_QWORD *)(v27 + 24) = 297LL;
    WdLogEvent5_WdAssertion(v27);
    v17 = *(_QWORD *)(v16 + 112);
  }
  *(_QWORD *)(v16 + 112) = v17 - (_QWORD)v9;
  --*((_DWORD *)this + 80);
  if ( ((_DWORD)this[10] & 0x1001) != 0 )
  {
    v18 = a2[62];
    if ( !v18 || _InterlockedExchangeAdd((volatile signed __int32 *)v18 + 11, 0xFFFFFFFF) == 1 )
    {
      v19 = *(_QWORD *)a2[61];
      v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 48), -(__int64)a2[2]);
      if ( v20 < (unsigned __int64)a2[2] )
      {
        v28 = WdLogNewEntry5_WdAssertion(v19, v20);
        *(_QWORD *)(v28 + 24) = 2169LL;
        WdLogEvent5_WdAssertion(v28);
      }
    }
  }
  v21 = (char **)(a2 + 48);
  v22 = a2[48];
  if ( *((struct _VIDMM_POOL_BLOCK ***)v22 + 1) != a2 + 48 || (v23 = a2[49], *(char ***)v23 != v21) )
    __fastfail(3u);
  *(_QWORD *)v23 = v22;
  v24 = (char *)(this + 22);
  *((_QWORD *)v22 + 1) = v23;
  v25 = (struct _VIDMM_POOL_BLOCK *)*((_QWORD *)v24 + 1);
  if ( *(char **)v25 != v24 )
    __fastfail(3u);
  *v21 = v24;
  a2[49] = v25;
  *(_QWORD *)v25 = v21;
  *((_QWORD *)v24 + 1) = v21;
}
