/*
 * XREFs of ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1400539A0
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x140029F68 (MiStoreUpdateMemoryConditions.c)
 * Callees:
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14003A2A8 (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     SmKmStoreReferenceEx @ 0x140053A78 (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140053AB4 (SmKmStoreRefFromStoreIndex.c)
 *     KeQueryPriorityThread @ 0x140054910 (KeQueryPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14011FE94 (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmUpdateMemoryConditions(__int64 a1, int a2, int a3)
{
  unsigned int i; // esi
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // ecx
  __int64 v9; // rax
  unsigned int v10; // edi
  struct _KTHREAD *v11; // r15
  KPRIORITY PriorityThread; // eax
  struct _EX_RUNDOWN_REF *v13; // rax

  if ( (*(_DWORD *)(a1 + 1800) & 0x20) != 0 )
    SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextUpdateMemoryCondition((PEX_SPIN_LOCK)(a1 + 1264), a2, a3);
  for ( i = 0; i < 0x400; ++i )
  {
    v6 = SmKmStoreReferenceEx(a1, i);
    v7 = v6;
    if ( v6 )
    {
      *(_BYTE *)(v6 + 5990) = a2;
      v8 = *(unsigned __int8 *)(v6 + 5990);
      v9 = *(unsigned __int8 *)(v6 + 5990);
      if ( v8 == 4 )
        v10 = *(_DWORD *)(v7 + 6680);
      else
        v10 = `SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition[v9];
      v11 = *(struct _KTHREAD **)(v7 + 6168);
      PriorityThread = KeQueryPriorityThread(v11);
      if ( a2 < 4 )
      {
        if ( PriorityThread != v10 )
          KeSetActualBasePriorityThread(v11, v10);
        if ( a2 <= 0 )
          ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(v7 + 80, v7 + 5944);
      }
      else if ( PriorityThread > (int)v10 )
      {
        KeSetActualBasePriorityThread(v11, v10);
      }
      v13 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, *(_DWORD *)(v7 + 5984) & 0x3FF);
      ExReleaseRundownProtection(v13 + 1);
    }
  }
}
