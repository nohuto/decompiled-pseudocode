/*
 * XREFs of ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x140274F04
 * Callers:
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x140275864 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     SmFpFree @ 0x140272EDC (SmFpFree.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14027485C (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmProcessAddCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x140275104 (-SmProcessAddCompletion@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU-$SMKM_.c)
 *     SmAcquireReleaseResAvailForRead @ 0x140275B70 (SmAcquireReleaseResAvailForRead.c)
 *     SmIoRequestComplete @ 0x140275C28 (SmIoRequestComplete.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxWorkItemComplete(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 *v4; // rbx
  int v5; // r10d
  unsigned int v7; // esi
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rbp
  unsigned int v11; // r8d
  int v12; // eax

  v4 = *(__int64 **)(a1 + 32);
  v5 = a3;
  v7 = 1;
  if ( (unsigned __int64)v4 <= 1 )
    v8 = 0LL;
  else
    v8 = *v4;
  v9 = *(_DWORD *)(a3 + 6016) & 0x3FF;
  if ( (*(_DWORD *)a1 & 5) != 0 )
  {
    v10 = 0LL;
    v11 = 0;
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 16);
    v11 = *(_DWORD *)(v10 + 40) >> 12;
    if ( (*(_DWORD *)a1 & 7) == 2 )
      v4[1] = 0LL;
  }
  switch ( *(_DWORD *)a1 & 7 )
  {
    case 0:
      SMKM_STORE_MGR<SM_TRAITS>::SmProcessAddCompletion((unsigned int)&SmGlobals, a1, v11, v5, a4);
      break;
    case 1:
      if ( (*(_DWORD *)(a1 + 16) & 1) == 0 )
      {
        SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictComplete(
          (__int64)&SmGlobals,
          (unsigned int *)(a1 + 8),
          *(_DWORD *)(a1 + 12),
          v9);
        *(_DWORD *)v4 = 0;
        break;
      }
      return 0;
    case 2:
      v12 = *(_DWORD *)(a1 + 8);
      v9 = *(_QWORD *)(a1 + 32);
      if ( (_BYTE)v12 )
      {
        *(_WORD *)(v9 + 8) = (unsigned __int8)v12;
        if ( (xmmword_14041B0E0 & 8) != 0 )
          a4 = 0;
      }
      *(_DWORD *)v9 = a4;
      if ( (xmmword_14041B0E0 & 0x10) != 0 )
        SmAcquireReleaseResAvailForRead(v4, v11, 1LL);
      break;
    case 3:
      *(_DWORD *)v4 = a4;
      v4[1] = *(unsigned int *)(a1 + 12);
      break;
    case 4:
      if ( (*(_DWORD *)(a1 + 8) & 7) != 0 )
      {
LABEL_16:
        *(_DWORD *)v4 = a4;
        v4[1] = 0LL;
        break;
      }
      return 0;
    case 5:
      goto LABEL_16;
  }
  if ( v10 )
  {
    if ( (*(_BYTE *)(v10 + 10) & 5) == 0 )
      MmMapLockedPagesSpecifyCache((PMDL)v10, 0, MmCached, 0LL, 0, 0x40000010u);
    if ( (xmmword_14041B0E0 & 2) != 0 )
      SmFpFree((__int64)&dword_14041AFC0, 5, (__int64)v4, (struct _MDL *)v10);
  }
  if ( v8 )
    SmIoRequestComplete(v9, a1, v8, v4);
  return v7;
}
