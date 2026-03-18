/*
 * XREFs of ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14005D994
 * Callers:
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140003DE8 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x14001F350 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x14002F340 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x1400350F0 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14005DCDC (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x140249F7C (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14024BC90 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x14001F9B4 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x14001FEF0 (-SmStCheckLockInProgressRegionComplete@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGIO.c)
 *     ?SmStFindVirtualLockedRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@KPEAX@Z @ 0x140037804 (-SmStFindVirtualLockedRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@K.c)
 *     SmAcquireReleaseCharges @ 0x14005DBA8 (SmAcquireReleaseCharges.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v5; // rax
  __int64 v7; // rcx
  volatile signed __int16 *v8; // r14
  __int64 v9; // r13
  signed __int16 v10; // di
  int v11; // edx
  signed __int16 v12; // bx
  bool v13; // zf
  signed __int16 v14; // ax
  __int64 v15; // rsi
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rcx
  unsigned __int64 VirtualLockedRegion; // [rsp+20h] [rbp-30h]
  _QWORD v21[5]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v22; // [rsp+90h] [rbp+40h]

  v5 = *(_QWORD *)(a1 + 6184);
  v7 = *(unsigned int *)(a1 + 6176);
  v22 = v7;
  v8 = (volatile signed __int16 *)(v5 + 8LL * a2);
  v9 = *(_QWORD *)v8 & 0x7FFFFFFFFFFF0000LL;
  if ( (a5 & 8) != 0 )
  {
    v15 = 0LL;
    if ( (*v8 & 0x4000) != 0 )
    {
      *v8 &= ~0x4000u;
      return v15;
    }
    if ( (unsigned int)SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, (__int64)v8, 0) )
      return v15;
    return 3LL;
  }
  if ( (a5 & 0x10) == 0 )
  {
    if ( (a5 & 4) != 0 )
    {
      _InterlockedOr16(v8, 0x8000u);
    }
    else if ( (a5 & 2) == 0 )
    {
      v10 = *v8;
      if ( (*v8 & 0x1FFF) != 0x1FFF )
      {
        while ( 1 )
        {
          v11 = 0;
          v12 = v10 ^ (v10 ^ (v10 + 1)) & 0x1FFF;
          if ( (v10 & 0x1FFF) == 0 )
          {
            v11 = SmAcquireReleaseCharges(v7, 1LL, 0LL);
            if ( !v11 )
            {
              if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 6440) )
                return 2LL;
              v12 = v12 & 0xC000 | 0x2000;
            }
            v7 = v22;
          }
          v14 = _InterlockedCompareExchange16(v8, v12, v10);
          v13 = v10 == v14;
          v10 = v14;
          if ( v13 )
            return v9 + a3;
          if ( v11 )
            SmAcquireReleaseCharges(v7, 1LL, 1LL);
          if ( (v10 & 0x1FFF) == 0x1FFF )
            return 1LL;
          v7 = v22;
        }
      }
      return 1LL;
    }
    return v9 + a3;
  }
  v17 = *(_QWORD *)(a1 + 6528);
  v15 = 0LL;
  if ( v17 && !(unsigned int)SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, v17, 0) )
    return v15;
  VirtualLockedRegion = SMKM_STORE<SM_TRAITS>::SmStFindVirtualLockedRegion(a1, (a5 >> 6) & 7, 0LL);
  *(_QWORD *)(a1 + 6528) = v8;
  memset(v21, 0, sizeof(v21));
  v21[1] = v22;
  v21[0] = v9;
  if ( !*(_BYTE *)(a1 + 5991) || (LODWORD(v21[2]) = 6, ((a5 >> 6) & 7) >= 6) )
    LODWORD(v21[2]) = (a5 >> 6) & 7;
  if ( (a5 & 1) != 0 )
    HIDWORD(v21[2]) |= 1u;
  v18 = SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(a1, 4LL, (__int64)v21, (a5 & 0x20 | 0x10) >> 2);
  if ( v18 < 0 )
  {
    if ( v18 != -1073741536 )
    {
      *(_QWORD *)(a1 + 6528) = 0LL;
      return v15;
    }
    return 3LL;
  }
  *(_QWORD *)(a1 + 6528) = 0LL;
  if ( SLODWORD(v21[4]) < 0 )
  {
    if ( LODWORD(v21[4]) == -1073740749 )
    {
      *v8 |= 0x4000u;
      return 1LL;
    }
  }
  else
  {
    *(_QWORD *)VirtualLockedRegion = v21[3];
    *(_QWORD *)v8 |= 0x8000000000000000uLL;
    v19 = *(_QWORD *)(a1 + 6520);
    if ( (unsigned __int64)(v19 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      _bittestandreset(*(signed __int32 **)(v19 + 16), a2);
    v15 = *(_QWORD *)(*(_QWORD *)VirtualLockedRegion + 24LL);
    if ( (*(_BYTE *)(a1 + 5989) & 0x20) != 0 )
    {
      memset(v21, 0, sizeof(v21));
      v21[0] = v9;
      v21[1] = v22;
      SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(a1, 6LL, (__int64)v21, 8u);
    }
  }
  return v15;
}
