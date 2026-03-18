/*
 * XREFs of ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x140006E2C
 * Callers:
 *     ?StDmInvalidateCurrentRegions@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x140006DDC (-StDmInvalidateCurrentRegions@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14026C84C (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x14026EB70 (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x14026F9F8 (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 * Callees:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14026A3EC (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StDmUpdateRegionsToCompactBitmap@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KKK@Z @ 0x14026F33C (-StDmUpdateRegionsToCompactBitmap@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140270310 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140270658 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1402710C4 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x1402712C4 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned int *v5; // rdi
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // ebp
  __int64 result; // rax
  __int64 v10; // r12
  __int64 v11; // rax

  v3 = a3;
  v5 = (unsigned int *)(a1 + 16 * (a2 + 78LL));
  v6 = *v5;
  if ( a3 == -1 )
  {
    v7 = 0LL;
    v8 = -1;
LABEL_3:
    *v5 = -1;
    if ( (_DWORD)v3 != (_DWORD)v6 && (_DWORD)v6 != -1 )
    {
      if ( !(unsigned __int8)*(_DWORD *)(a1 + 776) )
        ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, (unsigned int)v6);
      if ( (*(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v6) & 0x1FFF) != 0 )
        ST_STORE<SM_TRAITS>::StDmUpdateRegionsToCompactBitmap(
          a1,
          (unsigned int)v6,
          0LL,
          *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v6) & 0x1FFF);
      else
        ST_STORE<SM_TRAITS>::StReleaseRegion(a1, (unsigned int)v6);
    }
    if ( (_DWORD)v3 != -1 )
    {
      if ( v8 )
        ST_STORE<SM_TRAITS>::StDmUpdateRegionsToCompactBitmap(a1, (unsigned int)v3, v8, 0LL);
      if ( !(unsigned __int8)*(_DWORD *)(a1 + 776) )
        ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(*(_QWORD *)(a1 + 1912), 3LL, 5000LL, 4294967294LL);
    }
    *v5 = v3;
    result = 0LL;
    v5[1] = v8;
    *((_QWORD *)v5 + 1) = v7;
    return result;
  }
  v10 = *(_QWORD *)(a1 + 1032);
  v11 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, a3, a2, 0LL);
  v7 = v11;
  if ( !v11 )
    return 3221225514LL;
  if ( v11 == -1 )
    return 3221226029LL;
  v8 = *(_WORD *)(v10 + 2 * v3) & 0x1FFF;
  if ( (*(_WORD *)(v10 + 2 * v3) & 0x1FFF) == 0 )
    goto LABEL_3;
  result = ST_STORE<SM_TRAITS>::StCompactRegions(a1, v11, v3, v11, v3, 0);
  if ( (int)result >= 0 )
    goto LABEL_3;
  return result;
}
