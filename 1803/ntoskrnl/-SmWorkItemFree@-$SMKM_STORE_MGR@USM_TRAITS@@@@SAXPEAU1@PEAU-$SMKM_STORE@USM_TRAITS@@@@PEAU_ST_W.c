/*
 * XREFs of ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14008FC80
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400906FC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x140150D50 (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 * Callees:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14008FE10 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140090324 (SmKmStoreRefFromStoreIndex.c)
 *     SmFpFree @ 0x140091540 (SmFpFree.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x1400CC674 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(__int64 a1, __int64 a2, _SLIST_ENTRY *a3, unsigned int *a4)
{
  _SLIST_ENTRY *Next; // r15
  unsigned int v5; // esi
  int v6; // ebp
  int v9; // r14d
  _SLIST_ENTRY v10; // xmm1
  _SLIST_HEADER *v11; // rcx
  BOOL v12; // edi
  struct _EX_RUNDOWN_REF *v13; // rax
  int v14; // ebx
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
        if ( LOWORD(stru_140465EA0.Alignment) >= 0x1000u )
        {
          ExFreePoolWithTag(a3, 0);
          goto LABEL_9;
        }
        v11 = &stru_140465EA0;
        goto LABEL_8;
      }
    }
    else if ( !v5 && *((int *)&a3->Next + 2) < 0 )
    {
      v16.Next = a3[1].Next->Next;
      v11 = &stru_140465F40;
LABEL_8:
      RtlpInterlockedPushEntrySList(v11, a3);
LABEL_9:
      v12 = v5 == 1;
      goto LABEL_10;
    }
    SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(&SmGlobals, a3, Next);
    goto LABEL_9;
  }
  v14 = *(_DWORD *)(&a3->Next + 1) & 7;
  if ( v5 == 5 )
  {
    ExFreePoolWithTag(a3, 0);
    if ( v14 )
    {
      v12 = 0;
      goto LABEL_10;
    }
LABEL_16:
    v13 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(&SmGlobals, *(_DWORD *)(a2 + 6016) & 0x3FF);
    ExReleaseRundownProtection(v13 + 1);
    return;
  }
  v12 = 0;
  if ( v14 )
  {
    if ( v14 == 3 )
    {
      ExFreePoolWithTag(a3, 0);
      goto LABEL_16;
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
    if ( v12 )
      SmFpFree(
        &dword_140465F50,
        0LL,
        Next,
        Next,
        v15.Next,
        *((_QWORD *)&v15.Next + 1),
        v16.Next,
        *((_QWORD *)&v16.Next + 1),
        v17);
  }
  if ( v9 )
    goto LABEL_16;
}
