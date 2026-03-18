/*
 * XREFs of ?StDmSinglePageTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14005D588
 * Callers:
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14005DCDC (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?StDmDeviceIoTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@PEAU_ST_DEVICE_IO@1@@Z @ 0x14024B48C (-StDmDeviceIoTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@PEAU_ST.c)
 * Callees:
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14005D638 (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
 *     SmMapPage @ 0x14005D83C (SmMapPage.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmSinglePageTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  BOOL v7; // ebx
  __int64 v12; // r10
  __int64 v13; // r9
  char v15; // [rsp+68h] [rbp+20h] BYREF

  v7 = 0;
  if ( a4 )
  {
    v12 = SmMapPage(a5, &v15);
    v7 = (*(_DWORD *)(a4 + 8) & 0x8000000) != 0;
  }
  else
  {
    v12 = a5;
  }
  if ( !v12 )
    return 3221225626LL;
  v13 = v12 + (*(unsigned __int16 *)(a6 + 6) << 12);
  if ( v7 )
    v13 |= 1uLL;
  return ST_STORE<SM_TRAITS>::StDmSinglePageCopy(a1, a2, a3, v13, a6, a7);
}
