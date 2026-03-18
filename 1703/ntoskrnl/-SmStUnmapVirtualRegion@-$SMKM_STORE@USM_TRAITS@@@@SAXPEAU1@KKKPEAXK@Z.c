/*
 * XREFs of ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14005D878
 * Callers:
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140003DE8 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x14001F2C4 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x14001F350 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x14002F340 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x1400350F0 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14005DCDC (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14024A28C (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 * Callees:
 *     ?SmStFindVirtualLockedRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@KPEAX@Z @ 0x140037804 (-SmStFindVirtualLockedRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@K.c)
 *     SmKmUnlockMdl @ 0x140039E90 (SmKmUnlockMdl.c)
 *     SmFpFree @ 0x140054CF0 (SmFpFree.c)
 *     SmAcquireReleaseCharges @ 0x14005DBA8 (SmAcquireReleaseCharges.c)
 */

__int16 __fastcall SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  _UNKNOWN **v6; // rax
  __int64 v7; // r14
  __int64 v9; // rcx
  __int64 v10; // rsi
  PMDL *VirtualLockedRegion; // rdi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v6 = &retaddr;
  v7 = *(_QWORD *)(a1 + 6184);
  v9 = *(unsigned int *)(a1 + 6176);
  v10 = a2;
  if ( (a6 & 4) != 0 )
  {
    VirtualLockedRegion = (PMDL *)SMKM_STORE<SM_TRAITS>::SmStFindVirtualLockedRegion(
                                    a1,
                                    (a6 >> 3) & 7,
                                    *(_QWORD *)(v7 + 8LL * a2) & 0x7FFFFFFFFFFF0000LL);
    SmKmUnlockMdl(*VirtualLockedRegion, *(_QWORD *)(a1 + 6432), a1 + 6320);
    SmFpFree(*(_QWORD *)(a1 + 6432), 2, a1 + 6320, *VirtualLockedRegion);
    *VirtualLockedRegion = 0LL;
    LOWORD(v6) = -1;
    *(_QWORD *)(v7 + 8 * v10) &= ~0x8000000000000000uLL;
  }
  else
  {
    if ( (a6 & 2) != 0 )
    {
      LOWORD(v6) = 0x7FFF;
LABEL_10:
      _InterlockedAnd16((volatile signed __int16 *)(v7 + 8LL * a2), (unsigned __int16)v6);
      return (__int16)v6;
    }
    if ( (a6 & 1) != 0 )
      return (__int16)v6;
    if ( (*(_WORD *)(v7 + 8LL * a2) & 0x2000) != 0 && KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 6440) )
    {
      LOWORD(v6) = -8193;
      goto LABEL_10;
    }
    LOWORD(v6) = _InterlockedDecrement16((volatile signed __int16 *)(v7 + 8LL * a2));
    if ( ((unsigned __int16)v6 & 0x1FFF) == 0 )
      LOWORD(v6) = SmAcquireReleaseCharges(v9, 1LL, 1LL);
  }
  return (__int16)v6;
}
