/*
 * XREFs of ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C00637A0
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0063D00 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0067620 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C00A442C (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA.c)
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
  __int64 v5; // rbp
  VIDMM_GLOBAL *v7; // rdi
  __int64 v8; // rsi
  unsigned int v9; // r10d
  unsigned int v10; // r11d
  unsigned int v11; // edx
  unsigned __int8 v12; // r10
  unsigned int v13; // edx
  unsigned __int8 v14; // r9
  int v15; // r11d
  __int64 v16; // rdx
  unsigned int v17; // eax
  int v18; // ebx
  int v19; // r10d
  unsigned int v20; // r9d
  bool v22; // zf
  __int64 v23; // rax

  v5 = *((_QWORD *)this + 5090);
  v7 = this;
  v8 = 1560LL * a2;
  v9 = a3;
  v10 = *(_DWORD *)(v8 + v5 + 20);
  v11 = v10;
  if ( (a3 & ~*(_DWORD *)(v8 + v5 + 16)) != 0 || !a3 )
  {
LABEL_27:
    v12 = 0;
    if ( (a3 & ~*(_DWORD *)(v8 + v5 + 16)) != 0 )
    {
      v14 = 0;
      v12 = 0;
      goto LABEL_11;
    }
  }
  else
  {
    while ( 1 )
    {
      if ( (v9 & 1) != 0 )
      {
        this = *(VIDMM_GLOBAL **)(*((_QWORD *)v7 + 464) + 8LL * v11);
        if ( (*((_DWORD *)this + 20) & 0x80000) != 0 )
          break;
      }
      ++v11;
      v9 >>= 1;
      if ( !v9 )
        goto LABEL_27;
    }
    v12 = 1;
  }
  if ( a3 )
  {
    v13 = a3;
    while ( 1 )
    {
      if ( (v13 & 1) != 0 )
      {
        this = *(VIDMM_GLOBAL **)(*((_QWORD *)v7 + 464) + 8LL * v10);
        if ( (*((_DWORD *)this + 20) & 0x100000) != 0 )
          break;
      }
      ++v10;
      v13 >>= 1;
      if ( !v13 )
        goto LABEL_30;
    }
    v14 = 1;
  }
  else
  {
LABEL_30:
    v14 = 0;
  }
LABEL_11:
  v15 = 0;
  v16 = 1LL;
  if ( a4 )
  {
    v17 = *((_DWORD *)a4 + 20);
    this = (VIDMM_GLOBAL *)(v17 >> 20);
    LOBYTE(this) = (v17 & 0x100000) != 0;
    if ( (v17 & 0x80000) != 0 )
    {
LABEL_13:
      v18 = 0;
      v19 = 2 * v14;
      goto LABEL_14;
    }
    v22 = (v17 & 0x100000) == 0;
  }
  else
  {
    if ( v12 )
      goto LABEL_13;
    v22 = v14 == 0;
  }
  if ( v22 )
  {
    v18 = 2;
    v19 = 3;
    goto LABEL_23;
  }
  v18 = 1;
  v19 = v12 + 1;
LABEL_14:
  if ( v19 != 3 )
  {
    v20 = *(_DWORD *)(v8 + v5 + 20);
    if ( (~*(_DWORD *)(v5 + 16) & a3) != 0 )
      goto LABEL_37;
    if ( a3 )
    {
      LODWORD(v16) = 1;
      do
      {
        if ( (a3 & 1) != 0 )
        {
          this = *(VIDMM_GLOBAL **)(*((_QWORD *)v7 + 464) + 8LL * v20);
          if ( (*((_DWORD *)this + 20) & 0x180000) == 0 )
            v15 |= v16;
        }
        v16 = (unsigned int)__ROL4__(v16, 1);
        ++v20;
        a3 >>= 1;
      }
      while ( a3 );
      if ( v15 )
      {
LABEL_37:
        v23 = WdLogNewEntry5_WdAssertion(this, v16);
        *(_QWORD *)(v23 + 24) = 11849LL;
        WdLogEvent5_WdAssertion(v23);
        return 0;
      }
    }
  }
LABEL_23:
  if ( a5 )
    *(_DWORD *)a5 = v18 | (16 * v19) | *(_DWORD *)a5 & 0xFFFFFF00;
  return 1;
}
