/*
 * XREFs of ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140097528
 * Callers:
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x1400967E8 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140099680 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14009A524 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x1400CC294 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x140150FFC (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x1402A3184 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x1402A52E8 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x140097750 (SmAcquireReleaseCharges.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x140097874 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?SmStFindVirtualLockedRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@KPEAX@Z @ 0x140097CA8 (-SmStFindVirtualLockedRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@K.c)
 *     ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x14009A418 (-SmStCheckLockInProgressRegionComplete@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGIO.c)
 *     memset @ 0x1401BCC40 (memset.c)
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
  volatile signed __int16 *v8; // rsi
  __int64 v9; // r14
  __int64 v10; // r12
  int v11; // edx
  signed __int16 v12; // bx
  signed __int16 v13; // bx
  __int64 v14; // rdi
  __int64 v16; // rdx
  __int64 VirtualLockedRegion; // rax
  __int64 v18; // r14
  int v19; // eax
  __int64 v20; // rcx
  _QWORD v21[5]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v22; // [rsp+90h] [rbp+40h]

  v5 = *(_QWORD *)(a1 + 6216);
  v7 = *(unsigned int *)(a1 + 6208);
  v22 = v7;
  v8 = (volatile signed __int16 *)(v5 + 8LL * a2);
  v9 = *(_QWORD *)v8;
  v10 = *(_QWORD *)v8 & 0x7FFFFFFFFFFF0000LL;
  if ( (a5 & 8) != 0 )
  {
    v14 = 0LL;
    if ( (v9 & 0x4000) != 0 )
    {
      *v8 = v9 & 0xBFFF;
      return v14;
    }
    if ( (unsigned int)SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, v8, 0LL) )
      return v14;
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
      if ( (v9 & 0x1FFF) != 0x1FFF )
      {
        while ( 1 )
        {
          v11 = 0;
          v12 = v9 ^ (v9 ^ (v9 + 1)) & 0x1FFF;
          if ( (v9 & 0x1FFF) == 0 )
          {
            v11 = SmAcquireReleaseCharges(v7, 1LL, 0LL);
            if ( !v11 )
            {
              if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 6472) )
                return 2LL;
              v12 = v12 & 0xC000 | 0x2000;
            }
            v7 = v22;
          }
          v13 = _InterlockedCompareExchange16(v8, v12, v9);
          if ( (_WORD)v9 == v13 )
            return v10 + a3;
          if ( v11 )
            SmAcquireReleaseCharges(v7, 1LL, 1LL);
          LOWORD(v9) = v13;
          if ( (v13 & 0x1FFF) == 0x1FFF )
            return 1LL;
          v7 = v22;
        }
      }
      return 1LL;
    }
    return v10 + a3;
  }
  v16 = *(_QWORD *)(a1 + 6560);
  v14 = 0LL;
  if ( v16 && !(unsigned int)SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, v16, 0LL) )
    return v14;
  VirtualLockedRegion = SMKM_STORE<SM_TRAITS>::SmStFindVirtualLockedRegion(a1, (a5 >> 6) & 7, 0LL);
  *(_QWORD *)(a1 + 6560) = v8;
  v18 = VirtualLockedRegion;
  memset(v21, 0, sizeof(v21));
  v21[0] = v10;
  v21[1] = v22;
  LODWORD(v21[2]) = (a5 >> 6) & 7;
  if ( (a5 & 1) != 0 )
    HIDWORD(v21[2]) |= 1u;
  v19 = SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(a1, 4LL, v21);
  if ( v19 < 0 )
  {
    if ( v19 != -1073741536 )
    {
      *(_QWORD *)(a1 + 6560) = 0LL;
      return v14;
    }
    return 3LL;
  }
  *(_QWORD *)(a1 + 6560) = 0LL;
  if ( SLODWORD(v21[4]) < 0 )
  {
    if ( LODWORD(v21[4]) != -1073740749 )
      return v14;
    *v8 |= 0x4000u;
    return 1LL;
  }
  *(_QWORD *)v18 = v21[3];
  *(_QWORD *)v8 |= 0x8000000000000000uLL;
  v20 = *(_QWORD *)(a1 + 6552);
  if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    _bittestandreset(*(signed __int32 **)(v20 + 16), a2);
  v14 = *(_QWORD *)(*(_QWORD *)v18 + 24LL);
  if ( (*(_BYTE *)(a1 + 6021) & 0x20) != 0 )
  {
    memset(v21, 0, sizeof(v21));
    v21[0] = v10;
    v21[1] = v22;
    SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(a1, 6LL, v21);
  }
  return v14;
}
