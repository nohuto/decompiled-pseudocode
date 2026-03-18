/*
 * XREFs of ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1402689F0
 * Callers:
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140009098 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140267F20 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140268DA4 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x1402691F0 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14026D694 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14026FEBC (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140270658 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x1400059FC (SmAcquireReleaseCharges.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x140267E0C (-SmStCheckLockInProgressRegionComplete@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGIO.c)
 *     ?SmStFindVirtualLockedRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@KPEAX@Z @ 0x1402685F0 (-SmStFindVirtualLockedRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@K.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x14026864C (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v5; // rax
  unsigned __int64 v7; // rcx
  volatile signed __int16 *v8; // r14
  __int64 v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  signed __int16 v15; // di
  int v16; // edx
  signed __int16 v17; // bx
  bool v18; // zf
  signed __int16 v19; // ax
  unsigned __int64 VirtualLockedRegion; // [rsp+20h] [rbp-30h]
  _QWORD v21[5]; // [rsp+28h] [rbp-28h] BYREF
  unsigned __int64 v22; // [rsp+90h] [rbp+40h]

  v5 = *(_QWORD *)(a1 + 6216);
  v7 = *(unsigned int *)(a1 + 6208);
  v22 = v7;
  v8 = (volatile signed __int16 *)(v5 + 8LL * a2);
  v9 = *(_QWORD *)v8 & 0x7FFFFFFFFFFF0000LL;
  if ( (a5 & 8) != 0 )
  {
    v10 = 0LL;
    if ( (*v8 & 0x4000) != 0 )
    {
      *v8 &= ~0x4000u;
      return v10;
    }
    if ( (unsigned int)SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, (__int64)v8, 0) )
      return v10;
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
      v15 = *v8;
      if ( (*v8 & 0x1FFF) != 0x1FFF )
      {
        while ( 1 )
        {
          v16 = 0;
          v17 = v15 ^ (v15 ^ (v15 + 1)) & 0x1FFF;
          if ( (v15 & 0x1FFF) == 0 )
          {
            v16 = SmAcquireReleaseCharges(v7, 1, 0LL);
            if ( !v16 )
            {
              if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 6472) )
                return 2LL;
              v17 = v17 & 0xC000 | 0x2000;
            }
            v7 = v22;
          }
          v19 = _InterlockedCompareExchange16(v8, v17, v15);
          v18 = v15 == v19;
          v15 = v19;
          if ( v18 )
            return v9 + a3;
          if ( v16 )
            SmAcquireReleaseCharges(v7, 1, 1LL);
          if ( (v15 & 0x1FFF) == 0x1FFF )
            return 1LL;
          v7 = v22;
        }
      }
      return 1LL;
    }
    return v9 + a3;
  }
  v11 = *(_QWORD *)(a1 + 6560);
  v10 = 0LL;
  if ( !v11 || (unsigned int)SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, v11, 0) )
  {
    VirtualLockedRegion = SMKM_STORE<SM_TRAITS>::SmStFindVirtualLockedRegion(a1, (a5 >> 6) & 7, 0LL);
    *(_QWORD *)(a1 + 6560) = v8;
    memset(v21, 0, sizeof(v21));
    v21[1] = v22;
    v21[0] = v9;
    if ( !*(_BYTE *)(a1 + 6023) || (LODWORD(v21[2]) = 6, ((a5 >> 6) & 7) >= 6) )
      LODWORD(v21[2]) = (a5 >> 6) & 7;
    if ( (a5 & 1) != 0 )
      HIDWORD(v21[2]) |= 1u;
    v12 = SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(a1, 4, (__int64)v21, (a5 & 0x20 | 0x10) >> 2);
    if ( v12 < 0 )
    {
      if ( v12 != -1073741536 )
      {
        *(_QWORD *)(a1 + 6560) = 0LL;
        return v10;
      }
      return 3LL;
    }
    *(_QWORD *)(a1 + 6560) = 0LL;
    if ( SLODWORD(v21[4]) < 0 )
    {
      if ( LODWORD(v21[4]) != -1073740749 )
        return v10;
      *v8 |= 0x4000u;
      return 1LL;
    }
    *(_QWORD *)VirtualLockedRegion = v21[3];
    *(_QWORD *)v8 |= 0x8000000000000000uLL;
    v13 = *(_QWORD *)(a1 + 6552);
    if ( (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      _bittestandreset(*(signed __int32 **)(v13 + 16), a2);
    v10 = *(_QWORD *)(*(_QWORD *)VirtualLockedRegion + 24LL);
    if ( (*(_BYTE *)(a1 + 6021) & 0x20) != 0 )
    {
      memset(v21, 0, sizeof(v21));
      v21[0] = v9;
      v21[1] = v22;
      SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(a1, 6, (__int64)v21, 8u);
    }
  }
  return v10;
}
