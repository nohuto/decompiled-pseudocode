/*
 * XREFs of ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14005327C
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140053EC8 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x14011FD64 (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 * Callees:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x1400533F8 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140053AB4 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x140053C18 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     SmFpFree @ 0x140054CF0 (SmFpFree.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(__int64 a1, __int64 a2, _SLIST_ENTRY *a3, unsigned int *a4)
{
  _SLIST_ENTRY *Next; // r14
  unsigned int v5; // ebx
  int v6; // esi
  int v9; // ebp
  _SLIST_ENTRY v10; // xmm1
  BOOL v11; // edi
  struct _EX_RUNDOWN_REF *v12; // rax
  _SLIST_ENTRY *v13; // rcx
  int v14; // eax
  _SLIST_ENTRY v15; // [rsp+20h] [rbp-58h] BYREF
  _SLIST_ENTRY v16; // [rsp+30h] [rbp-48h]
  _SLIST_ENTRY *v17; // [rsp+40h] [rbp-38h]

  Next = a3[2].Next;
  v5 = (__int64)a3->Next & 7;
  v6 = 1;
  v9 = 1;
  if ( a4 )
  {
    v10 = a3[1];
    v15 = *a3;
    v17 = a3[2].Next;
    v16 = v10;
  }
  if ( v5 < 4 )
  {
    if ( v5 == 2 )
    {
      if ( (*(_DWORD *)(&a3->Next + 1) & 0x4000000) != 0 )
      {
        if ( LOWORD(stru_1403F9EE0.Alignment) >= 0x1000u )
          ExFreePoolWithTag(a3, 0);
        else
          RtlpInterlockedPushEntrySList(&stru_1403F9EE0, a3);
        goto LABEL_9;
      }
    }
    else if ( !v5 && *((_DWORD *)&a3->Next + 2) >= 0x80000000 )
    {
      v16.Next = a3[1].Next->Next;
    }
    SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(&SmGlobals, a3, Next);
LABEL_9:
    v11 = v5 == 1;
    goto LABEL_10;
  }
  if ( v5 == 5 )
  {
    v13 = a3;
    if ( (*(_DWORD *)(&a3->Next + 1) & 7) != 0 )
    {
      v11 = 0;
      ExFreePoolWithTag(a3, 0);
      goto LABEL_10;
    }
LABEL_26:
    ExFreePoolWithTag(v13, 0);
LABEL_16:
    v12 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(&SmGlobals, *(_DWORD *)(a2 + 5984) & 0x3FF);
    ExReleaseRundownProtection(v12 + 1);
    return;
  }
  v11 = 0;
  v14 = *(_DWORD *)(&a3->Next + 1) & 7;
  if ( v14 )
  {
    if ( v14 == 3 )
    {
      v13 = a3;
      goto LABEL_26;
    }
    if ( (unsigned int)(v14 - 1) <= 1 )
      v9 = 0;
  }
  else
  {
    a3[2].Next = 0LL;
  }
LABEL_10:
  if ( a4 )
    v6 = ((__int64 (__fastcall *)(_SLIST_ENTRY *, __int64, __int64, _QWORD))SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxWorkItemComplete)(
           &v15,
           a2,
           a2,
           *a4);
  if ( v6 )
  {
    if ( v11 )
      SmFpFree(&dword_1403F9F78, 0LL, Next, Next);
  }
  if ( v9 )
    goto LABEL_16;
}
