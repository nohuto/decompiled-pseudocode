/*
 * XREFs of ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C005F1B0
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005F630 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00632F0 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C009DDD0 (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VIDMM_GLOBAL::VerifyBudgetGroups(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned int a3,
        struct VIDMM_SEGMENT *a4,
        struct _VIDMM_VERIFY_BUDGET_GROUPS *a5)
{
  __int64 v5; // r15
  __int64 v6; // r14
  unsigned int v9; // r10d
  unsigned int v10; // r9d
  __int64 v11; // rdx
  unsigned __int8 v12; // r10
  unsigned __int8 v13; // r9
  int v14; // edi
  unsigned int v15; // ecx
  int v16; // esi
  int v17; // r10d
  unsigned int v18; // r9d
  __int64 v19; // rcx
  int v20; // eax
  __int64 v22; // rax

  v5 = *((_QWORD *)this + 5021);
  v6 = 1552LL * a2;
  v9 = a3;
  v10 = *(_DWORD *)(v6 + v5 + 20);
  v11 = v10;
  if ( (a3 & ~*(_DWORD *)(v6 + v5 + 16)) != 0 || !a3 )
  {
LABEL_6:
    v12 = 0;
    if ( (a3 & ~*(_DWORD *)(v6 + v5 + 16)) != 0 )
    {
      v13 = 0;
      v12 = 0;
      goto LABEL_14;
    }
  }
  else
  {
    while ( (v9 & 1) == 0
         || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (unsigned int)v11) + 80LL) & 0x80000) != 0x80000 )
    {
      v11 = (unsigned int)(v11 + 1);
      v9 >>= 1;
      if ( !v9 )
        goto LABEL_6;
    }
    v12 = 1;
  }
  if ( a3 )
  {
    v11 = a3;
    while ( (v11 & 1) == 0
         || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v10) + 80LL) & 0x100000) != 0x100000 )
    {
      ++v10;
      v11 = (unsigned int)v11 >> 1;
      if ( !(_DWORD)v11 )
        goto LABEL_32;
    }
    v13 = 1;
  }
  else
  {
LABEL_32:
    v13 = 0;
  }
LABEL_14:
  v14 = 0;
  if ( !a4 )
  {
    if ( v12 )
      goto LABEL_16;
    if ( v13 )
    {
LABEL_30:
      v16 = 1;
      v17 = v12 + 1;
      goto LABEL_17;
    }
LABEL_37:
    v16 = 2;
    v17 = 3;
    goto LABEL_26;
  }
  v15 = *((_DWORD *)a4 + 20);
  v11 = v15 >> 20;
  LOBYTE(v11) = (v15 & 0x100000) != 0;
  if ( (v15 & 0x80000) == 0 )
  {
    if ( (v15 & 0x100000) != 0 )
      goto LABEL_30;
    goto LABEL_37;
  }
LABEL_16:
  v16 = 0;
  v17 = 2 * v13;
LABEL_17:
  if ( v17 != 3 )
  {
    v18 = *(_DWORD *)(v6 + v5 + 20);
    v19 = (unsigned int)~*(_DWORD *)(v5 + 16);
    if ( ((unsigned int)v19 & a3) != 0 )
      goto LABEL_38;
    if ( a3 )
    {
      v20 = 1;
      do
      {
        if ( (a3 & 1) != 0 )
        {
          v19 = *((_QWORD *)this + 464);
          v11 = *(_QWORD *)(v19 + 8LL * v18);
          if ( (*(_DWORD *)(v11 + 80) & 0x180000) == 0 )
            v14 |= v20;
        }
        v20 = __ROL4__(v20, 1);
        ++v18;
        a3 >>= 1;
      }
      while ( a3 );
      if ( v14 )
      {
LABEL_38:
        v22 = WdLogNewEntry5_WdAssertion(v19, v11);
        *(_QWORD *)(v22 + 24) = 11676LL;
        WdLogEvent5_WdAssertion(v22);
        return 0;
      }
    }
  }
LABEL_26:
  if ( a5 )
    *(_DWORD *)a5 = v16 | (16 * v17) | *(_DWORD *)a5 & 0xFFFFFF00;
  return 1;
}
