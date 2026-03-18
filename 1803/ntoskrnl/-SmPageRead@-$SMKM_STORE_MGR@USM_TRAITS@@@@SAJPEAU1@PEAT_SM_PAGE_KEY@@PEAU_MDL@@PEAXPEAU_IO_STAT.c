/*
 * XREFs of ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140152AF8
 * Callers:
 *     SmPageRead @ 0x1401542D8 (SmPageRead.c)
 * Callees:
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14008FFAC (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140090324 (SmKmStoreRefFromStoreIndex.c)
 *     SmFpAllocate @ 0x140096D84 (SmFpAllocate.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x1400CC674 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     SmAcquireReleaseResAvailForRead @ 0x140152D28 (SmAcquireReleaseResAvailForRead.c)
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x140152D90 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPageRead(
        __int64 a1,
        _DWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 *a5)
{
  char v5; // bl
  unsigned __int64 v6; // rbp
  __int64 *v8; // r14
  __int64 *v9; // r12
  unsigned int v10; // edi
  int PickStore; // eax
  __int64 v12; // r15
  unsigned int v13; // esi
  char v14; // si
  struct _MDL *PoolWithTag; // rdi
  bool v16; // zf
  struct _EX_RUNDOWN_REF *v18; // rax
  unsigned int v19; // [rsp+70h] [rbp+8h]
  char v20; // [rsp+80h] [rbp+18h] BYREF
  __int64 v21; // [rsp+88h] [rbp+20h] BYREF

  v21 = 0LL;
  v5 = 0;
  v6 = a3;
  if ( (a3 & 3) != 0 )
  {
    v6 = a3 & 0xFFFFFFFFFFFFFFFCuLL;
    v5 = a3 & 1 | 2;
    if ( (a3 & 2) == 0 )
      v5 = a3 & 1;
  }
  v8 = a5;
  v9 = a5;
  a5[1] = 0LL;
  *v9 = a4;
  v10 = *(_DWORD *)(v6 + 40) >> 12;
  v19 = v10;
  LODWORD(a5) = v10;
  PickStore = SMKM_STORE_MGR<SM_TRAITS>::SmReadPickStore(
                (unsigned int)&SmGlobals,
                (_DWORD)a2,
                (unsigned int)&a5,
                (unsigned int)&v21,
                (__int64)&v20);
  v12 = v21;
  v13 = PickStore;
  if ( PickStore >= 0 )
  {
    v14 = (char)a5;
    v8[1] = (unsigned int)a5;
    if ( (v5 & 2) != 0 && !*(_BYTE *)(v12 + 6020) )
    {
      v13 = -1073741791;
      goto LABEL_18;
    }
    if ( (xmmword_1404660F0 & 0x10) == 0 )
    {
LABEL_7:
      if ( (v5 & 1) != 0 )
      {
        PoolWithTag = (struct _MDL *)RtlpInterlockedPopEntrySList(&stru_140465EA0);
        if ( PoolWithTag )
          goto LABEL_9;
        PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x61576D73u);
        if ( PoolWithTag )
          goto LABEL_9;
        v5 &= ~1u;
      }
      PoolWithTag = (struct _MDL *)SmFpAllocate(&dword_140465FC0, 1, (__int64)v8, 0LL, xmmword_1404660F0 & 1);
      if ( !PoolWithTag )
      {
        v13 = -1073741670;
LABEL_17:
        v10 = v19;
        goto LABEL_18;
      }
LABEL_9:
      memset(PoolWithTag, 0, 0x28uLL);
      v16 = (v20 & 1) == 0;
      LODWORD(PoolWithTag->MappedSystemVa) = *a2;
      LODWORD(PoolWithTag->Next) = 2;
      PoolWithTag->Process = (struct _EPROCESS *)v6;
      LOBYTE(PoolWithTag->Size) = v14;
      PoolWithTag->StartVa = v8;
      if ( !v16 )
        *(_DWORD *)&PoolWithTag->Size |= 0x1000000u;
      if ( (v5 & 1) != 0 )
        *(_DWORD *)&PoolWithTag->Size |= 0x4000000u;
      if ( (int)SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(
                  v8,
                  (__int64)&SmGlobals,
                  *(_WORD *)(v12 + 6016) & 0x3FF,
                  (int *)PoolWithTag) < 0 )
      {
        v13 = -1073741670;
      }
      else
      {
        PoolWithTag = 0LL;
        v9 = 0LL;
        v12 = 0LL;
        v5 = -5;
        v13 = 259;
      }
      if ( PoolWithTag )
        SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource((__int64)&SmGlobals, PoolWithTag, (__int64)v9);
      goto LABEL_17;
    }
    v5 ^= (v5 ^ (8 * SmAcquireReleaseResAvailForRead(v8, v10, 0LL))) & 8;
    if ( (v5 & 8) != 0 )
    {
      v5 |= 4u;
      goto LABEL_7;
    }
    v13 = -1073741670;
  }
LABEL_18:
  if ( v12 )
  {
    v18 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, *(_DWORD *)(v12 + 6016) & 0x3FF);
    ExReleaseRundownProtection(v18 + 1);
  }
  if ( (v5 & 4) != 0 )
    SmAcquireReleaseResAvailForRead(v9, v10, 1LL);
  if ( v9 )
  {
    *v8 = 0LL;
    v8[1] = 0LL;
    *(_DWORD *)v8 = v13;
  }
  return v13;
}
