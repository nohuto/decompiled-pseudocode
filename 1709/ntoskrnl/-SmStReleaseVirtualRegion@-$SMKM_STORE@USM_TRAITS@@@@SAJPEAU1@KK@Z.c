/*
 * XREFs of ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x1402690C8
 * Callers:
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14026D694 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1402710C4 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     MmStoreDecommitVirtualMemory @ 0x14022D870 (MmStoreDecommitVirtualMemory.c)
 *     ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x140267E0C (-SmStCheckLockInProgressRegionComplete@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGIO.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x14026864C (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x14026892C (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStReleaseVirtualRegion(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // r15
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rdi
  __int64 result; // rax
  __int64 v10; // r14
  _QWORD v11[6]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *(unsigned int *)(a1 + 6208);
  v7 = (_QWORD *)(*(_QWORD *)(a1 + 6216) + 8LL * a2);
  v8 = *v7 & 0x7FFFFFFFFFFF0000LL;
  if ( (a3 & 2) != 0 && !v8 )
    return 1075380276LL;
  if ( (*(_WORD *)v7 & 0x4000) != 0 )
    *(_WORD *)v7 &= ~0x4000u;
  else
    SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, (__int64)v7, a3 & 1);
  if ( SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(a1, a2) )
    return 3221225646LL;
  MmStoreDecommitVirtualMemory(v8, v3);
  if ( *(__int16 *)v7 < 0 )
    return 3221225646LL;
  v10 = *v7;
  *v7 = 0LL;
  memset(v11, 0, 0x28uLL);
  v11[0] = v8;
  v11[1] = v3;
  result = SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(a1, 3, (__int64)v11, (a3 & 1) != 0 ? 11 : 8);
  if ( (_DWORD)result != -1073741650 )
    return 0LL;
  *v7 = v10;
  return result;
}
