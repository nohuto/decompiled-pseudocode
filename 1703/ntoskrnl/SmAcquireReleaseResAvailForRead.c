/*
 * XREFs of SmAcquireReleaseResAvailForRead @ 0x1401213C0
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x1400533F8 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140121190 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x140121428 (MmStoreChargeResidentAvailableForRead.c)
 */

__int64 __fastcall SmAcquireReleaseResAvailForRead(signed __int64 a1, __int64 a2, int a3)
{
  unsigned int v5; // ecx

  if ( a3 )
  {
    if ( qword_1403FA198 == a1 )
      _InterlockedExchange64(&qword_1403FA198, 0LL);
    else
      MiReturnResidentAvailable(a2 + 48);
    return 1;
  }
  else
  {
    v5 = MmStoreChargeResidentAvailableForRead(a2);
    if ( !v5 )
    {
      if ( qword_1403FA198 )
        return 0;
      v5 = 1;
      if ( a2 != 1 || _InterlockedCompareExchange64(&qword_1403FA198, a1, 0LL) )
        return 0;
    }
  }
  return v5;
}
