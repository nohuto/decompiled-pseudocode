/*
 * XREFs of ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x14009A2D4
 * Callers:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14009A440 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x1402A52E8 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x140097874 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x14009A3E4 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x14009A418 (-SmStCheckLockInProgressRegionComplete@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGIO.c)
 *     MmStoreDecommitVirtualMemory @ 0x1400CFD8C (MmStoreDecommitVirtualMemory.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStReleaseVirtualRegion(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r15
  __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // edi
  __int64 v11; // r14
  __int64 result; // rax
  _QWORD v13[6]; // [rsp+20h] [rbp-48h] BYREF

  v6 = *(unsigned int *)(a1 + 6208);
  v7 = (__int64 *)(*(_QWORD *)(a1 + 6216) + 8LL * a2);
  v8 = *v7;
  v9 = *v7 & 0x7FFFFFFFFFFF0000LL;
  if ( (a3 & 2) != 0 && !v9 )
    return 1075380276LL;
  v10 = a3 & 1;
  if ( (v8 & 0x4000) != 0 )
    *(_WORD *)v7 = v8 & 0xBFFF;
  else
    SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, v7, a3 & 1);
  if ( (unsigned int)SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(a1, a2, a3, a4) )
    return 3221225646LL;
  MmStoreDecommitVirtualMemory(v9, v6);
  if ( *(__int16 *)v7 < 0 )
    return 3221225646LL;
  v11 = *v7;
  *v7 = 0LL;
  memset(v13, 0, 0x28uLL);
  v13[0] = v9;
  v13[1] = v6;
  result = SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(a1, 3LL, (__int64)v13, v10 != 0 ? 11 : 8);
  if ( (_DWORD)result != -1073741650 )
    return 0LL;
  *v7 = v11;
  return result;
}
