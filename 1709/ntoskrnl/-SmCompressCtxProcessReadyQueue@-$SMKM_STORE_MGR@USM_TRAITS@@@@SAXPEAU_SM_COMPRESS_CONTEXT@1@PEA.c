/*
 * XREFs of ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x1402654CC
 * Callers:
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1402652D4 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140265730 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MmUnmapLockedPages @ 0x140074D40 (MmUnmapLockedPages.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14011B054 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x140265D68 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     SmIoRequestComplete @ 0x140275C28 (SmIoRequestComplete.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessReadyQueue(__int64 a1, __int64 a2, KIRQL a3, int a4)
{
  __int64 **v4; // rbx
  KIRQL v6; // si
  volatile LONG *i; // r14
  int v10; // ebp
  __int64 *v11; // rdx
  __int64 *v12; // rdi
  __int64 result; // rax
  int v14; // eax
  int v15; // esi
  __int64 *v16; // rcx
  __int64 v17; // r8
  struct _EX_RUNDOWN_REF *v18; // rax
  KIRQL v19; // si
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r9

  v4 = (__int64 **)(a1 + 96);
  v6 = a3;
  if ( a3 == 0xFF )
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 112));
  for ( i = (volatile LONG *)(a1 + 112); ; v6 = ExAcquireSpinLockExclusive(i) )
  {
    v10 = 0;
    if ( !a4 && (*v4[1] & 0xFFFFFFFFFFFFFFF8uLL) < 0x80 )
      v10 = 4;
    v11 = v4[1];
    if ( v11 == (__int64 *)v4 )
    {
      v12 = 0LL;
    }
    else
    {
      v12 = *v4;
      *v4 = (__int64 *)(**v4 & 0xFFFFFFFFFFFFFFF8uLL);
      if ( v12 == v11 )
      {
        *v4 = 0LL;
        v4[1] = (__int64 *)v4;
      }
      else
      {
        *v11 = *v11 & 7 | (8 * ((unsigned __int64)*v11 >> 3) - 8);
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(i);
    result = v6;
    __writecr8(v6);
    if ( !v12 )
      break;
    v14 = SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(
            a2,
            (int)v12 + 24,
            1,
            *(_DWORD *)(v12[13] + 6016) & 0x3FF,
            (__int64)v12,
            v12[4],
            v10);
    v15 = v14;
    if ( v14 < 0 )
    {
      if ( v14 == -1073741739 )
      {
        v19 = ExAcquireSpinLockExclusive(i);
        v20 = *v4[1];
        *v12 = (unsigned __int64)*v4 | *(_DWORD *)v12 & 7;
        v21 = v20 >> 3;
        *v4 = v12;
        if ( v4[1] == (__int64 *)v4 )
          v4[1] = v12;
        *v4[1] = *(_DWORD *)v4[1] & 7 | (8 * (v21 + 1));
        ExReleaseSpinLockExclusiveFromDpcLevel(i);
        result = v19;
        __writecr8(v19);
        return result;
      }
      MmUnmapLockedPages(*(PVOID *)(*(_QWORD *)v12[2] + 24LL), *(PMDL *)v12[2]);
      v16 = (__int64 *)v12[4];
      v17 = *v16;
      *(_DWORD *)v16 = v15;
      *(_QWORD *)(v12[4] + 8) = 0LL;
      SmIoRequestComplete(v16, v12, v17, v12[4]);
      v18 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a2, *(_DWORD *)(v12[13] + 6016) & 0x3FF);
      ExReleaseRundownProtection_0(v18 + 1);
      ExFreePoolWithTag(v12, 0);
    }
  }
  return result;
}
