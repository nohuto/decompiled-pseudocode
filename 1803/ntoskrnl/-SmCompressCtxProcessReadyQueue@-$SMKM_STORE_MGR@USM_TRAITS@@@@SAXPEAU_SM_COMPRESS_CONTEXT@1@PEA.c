/*
 * XREFs of ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x14008EC0C
 * Callers:
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14008E990 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1400917BC (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14008EF6C (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140090324 (SmKmStoreRefFromStoreIndex.c)
 *     SmIoRequestComplete @ 0x1400914A8 (SmIoRequestComplete.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     MmUnmapLockedPages @ 0x140110450 (MmUnmapLockedPages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessReadyQueue(__int64 a1, __int64 a2, KIRQL a3, int a4)
{
  __int64 **v4; // rbx
  volatile LONG *v6; // rsi
  KIRQL v7; // bp
  int v9; // r14d
  __int64 *v10; // rdx
  __int64 *v11; // rdi
  __int64 result; // rax
  int v13; // ebp
  KIRQL v14; // bp
  __int64 v15; // rdx
  unsigned __int64 *v16; // r8
  __int64 *v17; // rcx
  __int64 v18; // r8
  struct _EX_RUNDOWN_REF *v19; // rax

  v4 = (__int64 **)(a1 + 96);
  v6 = (volatile LONG *)(a1 + 112);
  v7 = a3;
  if ( a3 == 0xFF )
    goto LABEL_10;
  while ( 1 )
  {
    v9 = 0;
    if ( !a4 && (*v4[1] & 0xFFFFFFFFFFFFFFF8uLL) < 0x80 )
      v9 = 4;
    v10 = v4[1];
    if ( v10 == (__int64 *)v4 )
    {
      v11 = 0LL;
    }
    else
    {
      v11 = *v4;
      *v4 = (__int64 *)(**v4 & 0xFFFFFFFFFFFFFFF8uLL);
      if ( v11 == v10 )
      {
        *v4 = 0LL;
        v4[1] = (__int64 *)v4;
      }
      else
      {
        *v10 = *v10 & 7 | (8 * ((unsigned __int64)*v10 >> 3) - 8);
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    result = v7;
    __writecr8(v7);
    if ( !v11 )
      break;
    v13 = SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(
            a2,
            (int)v11 + 24,
            1,
            *(_DWORD *)(v11[13] + 6016) & 0x3FF,
            (__int64)v11,
            v11[4],
            v9);
    if ( v13 < 0 )
    {
      if ( v13 == -1073741739 )
      {
        v14 = ExAcquireSpinLockExclusive(v6);
        v15 = ((unsigned __int64)*v4[1] >> 3) + 1;
        *v11 = (unsigned __int64)*v4 | *(_DWORD *)v11 & 7;
        v16 = (unsigned __int64 *)v4[1];
        *v4 = v11;
        if ( v16 == (unsigned __int64 *)v4 )
        {
          v4[1] = v11;
          v16 = (unsigned __int64 *)v11;
        }
        *v16 = *(_DWORD *)v16 & 7 | (unsigned __int64)(8 * v15);
        ExReleaseSpinLockExclusiveFromDpcLevel(v6);
        result = v14;
        __writecr8(v14);
        return result;
      }
      MmUnmapLockedPages(*(PVOID *)(*(_QWORD *)v11[2] + 24LL), *(PMDL *)v11[2]);
      v17 = (__int64 *)v11[4];
      v18 = *v17;
      *(_DWORD *)v17 = v13;
      *(_QWORD *)(v11[4] + 8) = 0LL;
      SmIoRequestComplete(v17, v11, v18, v11[4]);
      v19 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a2, *(_DWORD *)(v11[13] + 6016) & 0x3FF);
      ExReleaseRundownProtection(v19 + 1);
      ExFreePoolWithTag(v11, 0);
    }
LABEL_10:
    v7 = ExAcquireSpinLockExclusive(v6);
  }
  return result;
}
