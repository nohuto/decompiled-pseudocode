/*
 * XREFs of ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x140275864
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14000B530 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x140268470 (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14011B054 (SmKmStoreRefFromStoreIndex.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14026A018 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     SmFpFree @ 0x140272EDC (SmFpFree.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x140274F04 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(__int64 a1, __int64 a2, __int128 *a3, int *a4)
{
  struct _MDL *v4; // r14
  unsigned int v5; // ebx
  int v6; // esi
  int v9; // ebp
  __int128 v10; // xmm1
  _SLIST_HEADER *v11; // rcx
  BOOL v12; // edi
  void *v13; // rcx
  int v14; // eax
  struct _EX_RUNDOWN_REF *v15; // rax
  __int128 v16; // [rsp+20h] [rbp-58h] BYREF
  __int128 v17; // [rsp+30h] [rbp-48h]
  __int64 v18; // [rsp+40h] [rbp-38h]

  v4 = (struct _MDL *)*((_QWORD *)a3 + 4);
  v5 = *(_DWORD *)a3 & 7;
  v6 = 1;
  v9 = 1;
  if ( a4 )
  {
    v10 = a3[1];
    v16 = *a3;
    v18 = *((_QWORD *)a3 + 4);
    v17 = v10;
  }
  if ( v5 < 4 )
  {
    if ( v5 == 2 )
    {
      if ( (*((_DWORD *)a3 + 2) & 0x4000000) != 0 )
      {
        if ( LOWORD(stru_14041AEA0.Alignment) >= 0x1000u )
        {
          ExFreePoolWithTag(a3, 0);
LABEL_14:
          v12 = v5 == 1;
          goto LABEL_25;
        }
        v11 = &stru_14041AEA0;
LABEL_12:
        RtlpInterlockedPushEntrySList(v11, (PSLIST_ENTRY)a3);
        goto LABEL_14;
      }
    }
    else if ( !v5 && *((int *)a3 + 2) < 0 )
    {
      *(_QWORD *)&v17 = **((_QWORD **)a3 + 2);
      v11 = &stru_14041AF40;
      goto LABEL_12;
    }
    SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource((__int64)&SmGlobals, a3, (__int64)v4);
    goto LABEL_14;
  }
  if ( v5 == 5 )
  {
    v13 = a3;
    if ( (*((_DWORD *)a3 + 2) & 7) == 0 )
    {
LABEL_17:
      ExFreePoolWithTag(v13, 0);
LABEL_31:
      v15 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, *(_DWORD *)(a2 + 6016) & 0x3FF);
      ExReleaseRundownProtection_0(v15 + 1);
      return;
    }
    v12 = 0;
    ExFreePoolWithTag(a3, 0);
  }
  else
  {
    v12 = 0;
    v14 = *((_DWORD *)a3 + 2) & 7;
    if ( v14 )
    {
      if ( v14 == 3 )
      {
        v13 = a3;
        goto LABEL_17;
      }
      if ( (unsigned int)(v14 - 1) <= 1 )
        v9 = 0;
    }
    else
    {
      *((_QWORD *)a3 + 4) = 0LL;
    }
  }
LABEL_25:
  if ( a4 )
    v6 = SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxWorkItemComplete((__int64)&v16, a2, a2, *a4);
  if ( v6 )
  {
    if ( v12 )
      SmFpFree((__int64)&dword_14041AF50, 0, (__int64)v4, v4);
  }
  if ( v9 )
    goto LABEL_31;
}
