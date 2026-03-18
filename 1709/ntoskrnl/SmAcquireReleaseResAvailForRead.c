/*
 * XREFs of SmAcquireReleaseResAvailForRead @ 0x140275B70
 * Callers:
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1402675D8 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x140274F04 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x14022D844 (MmStoreChargeResidentAvailableForRead.c)
 */

_BOOL8 __fastcall SmAcquireReleaseResAvailForRead(signed __int64 a1, __int64 a2, int a3)
{
  BOOL v5; // ecx

  if ( a3 )
  {
    if ( qword_14041B168 == a1 )
      _InterlockedExchange64(&qword_14041B168, 0LL);
    else
      MiReturnResidentAvailable(a2 + 48);
    return 1;
  }
  else
  {
    v5 = MmStoreChargeResidentAvailableForRead(a2);
    if ( !v5 )
    {
      if ( qword_14041B168 )
        return 0;
      v5 = 1;
      if ( a2 != 1 || _InterlockedCompareExchange64(&qword_14041B168, a1, 0LL) )
        return 0;
    }
  }
  return v5;
}
