/*
 * XREFs of ?StDmSinglePageTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x140151228
 * Callers:
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x140150FFC (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?StDmDeviceIoTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@PEAU_ST_DEVICE_IO@1@@Z @ 0x1402A47D8 (-StDmDeviceIoTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@PEAU_ST.c)
 * Callees:
 *     SmMapPage @ 0x140094084 (SmMapPage.c)
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x1401512E4 (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
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
  int v11; // ebx
  PVOID v12; // rax
  char v13; // dl
  __int64 v14; // r8
  __int64 v15; // r9
  int v17; // [rsp+68h] [rbp+20h] BYREF

  v11 = a4 != 0 ? 4 : 0;
  if ( (a4 != 0 ? 4 : 0) != 0 )
  {
    v12 = SmMapPage(a5, &v17);
    v13 = v11 | 0x10;
    v14 = (__int64)v12;
    if ( (*(_DWORD *)(a4 + 8) & 0x8000000) == 0 )
      v13 = v11;
    LOBYTE(v11) = v13;
  }
  else
  {
    v14 = a5;
  }
  if ( !v14 )
    return 3221225626LL;
  v15 = (v14 + (*(unsigned __int16 *)(a6 + 6) << 12)) | 1;
  if ( (v11 & 0x10) == 0 )
    v15 = v14 + (*(unsigned __int16 *)(a6 + 6) << 12);
  return ST_STORE<SM_TRAITS>::StDmSinglePageCopy(a1, a2, a3, v15, a6, a7);
}
