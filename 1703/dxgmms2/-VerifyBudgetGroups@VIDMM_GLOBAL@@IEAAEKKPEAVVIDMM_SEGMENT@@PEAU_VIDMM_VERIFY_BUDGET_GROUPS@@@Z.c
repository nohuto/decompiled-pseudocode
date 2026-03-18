/*
 * XREFs of ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C005BD30
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C230 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00602A0 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C0095BEC (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA.c)
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
  __int64 v5; // r14
  __int64 v6; // rbp
  VIDMM_GLOBAL *v8; // rbx
  unsigned int v9; // r10d
  unsigned int v10; // edx
  char v11; // r11
  unsigned int v12; // edx
  unsigned int v13; // r9d
  char v14; // r9
  __int64 v15; // rdx
  unsigned int v16; // eax
  int v17; // edi
  int v18; // esi
  int v19; // r10d
  unsigned int v20; // r9d
  __int64 v22; // rax

  v5 = *((_QWORD *)this + 5021);
  v6 = v5 + 472LL * a2;
  v8 = this;
  v9 = a3;
  v10 = *(_DWORD *)(v6 + 20);
  if ( (~*(_DWORD *)(v6 + 16) & a3) != 0 || !a3 )
  {
LABEL_6:
    v11 = 0;
  }
  else
  {
    while ( 1 )
    {
      if ( (v9 & 1) != 0 )
      {
        this = *(VIDMM_GLOBAL **)(*((_QWORD *)v8 + 464) + 8LL * v10);
        if ( (*((_DWORD *)this + 20) & 0x80000) == 0x80000 )
          break;
      }
      ++v10;
      v9 >>= 1;
      if ( !v9 )
        goto LABEL_6;
    }
    v11 = 1;
  }
  v12 = a3;
  v13 = *(_DWORD *)(v6 + 20);
  if ( (~*(_DWORD *)(v6 + 16) & a3) != 0 || !a3 )
  {
LABEL_31:
    v14 = 0;
  }
  else
  {
    while ( 1 )
    {
      if ( (v12 & 1) != 0 )
      {
        this = *(VIDMM_GLOBAL **)(*((_QWORD *)v8 + 464) + 8LL * v13);
        if ( (*((_DWORD *)this + 20) & 0x100000) == 0x100000 )
          break;
      }
      ++v13;
      v12 >>= 1;
      if ( !v12 )
        goto LABEL_31;
    }
    v14 = 1;
  }
  v15 = 1LL;
  if ( !a4 )
  {
    if ( v11 )
      goto LABEL_15;
    if ( v14 )
    {
LABEL_29:
      v17 = 0;
      v18 = 1;
      v19 = (v11 != 0) + 1;
      goto LABEL_16;
    }
LABEL_34:
    v18 = 2;
    v19 = 3;
    goto LABEL_25;
  }
  v16 = *((_DWORD *)a4 + 20);
  this = (VIDMM_GLOBAL *)(v16 >> 20);
  LOBYTE(this) = (v16 & 0x100000) != 0;
  if ( (v16 & 0x80000) == 0 )
  {
    if ( (v16 & 0x100000) != 0 )
      goto LABEL_29;
    goto LABEL_34;
  }
LABEL_15:
  v17 = 0;
  v18 = 0;
  v19 = v14 != 0 ? 2 : 0;
LABEL_16:
  if ( v19 != 3 )
  {
    v20 = *(_DWORD *)(v6 + 20);
    if ( (~*(_DWORD *)(v5 + 16) & a3) != 0 )
      goto LABEL_35;
    if ( a3 )
    {
      LODWORD(v15) = 1;
      do
      {
        if ( (a3 & 1) != 0 )
        {
          this = *(VIDMM_GLOBAL **)(*((_QWORD *)v8 + 464) + 8LL * v20);
          if ( (*((_DWORD *)this + 20) & 0x180000) == 0 )
            v17 |= v15;
        }
        v15 = (unsigned int)__ROL4__(v15, 1);
        ++v20;
        a3 >>= 1;
      }
      while ( a3 );
      if ( v17 )
      {
LABEL_35:
        v22 = WdLogNewEntry5_WdAssertion(this, v15);
        *(_QWORD *)(v22 + 24) = 11208LL;
        WdLogEvent5_WdAssertion(v22);
        return 0;
      }
    }
  }
LABEL_25:
  if ( a5 )
    *(_DWORD *)a5 = v18 | (16 * v19) | *(_DWORD *)a5 & 0xFFFFFF00;
  return 1;
}
