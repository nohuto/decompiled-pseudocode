/*
 * XREFs of ?StDmDeviceIoTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@PEAU_ST_DEVICE_IO@1@@Z @ 0x1402A47D8
 * Callers:
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402A4484 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmSinglePageTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x140151228 (-StDmSinglePageTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LO.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmDeviceIoTransfer(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v5; // r9
  _DWORD *v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 v12; // rdi
  __int64 *v13; // rcx
  __int64 result; // rax

  v5 = *(unsigned int **)(a3 + 8);
  v7 = v5 + 3;
  v8 = 4LL * *v5;
  v9 = (unsigned __int64)&v5[v8 + 3];
  v10 = 16 * (v5[3] & *(_DWORD *)(a1 + 808));
  v11 = v10
      - ((unsigned int)v10 & ~(*(_DWORD *)(a1 + 792) - 1))
      + (~(*(unsigned int *)(a1 + 792) - 1LL) & ((unsigned __int64)v5 + *(unsigned int *)(a1 + 792) + v8 * 4 + 11));
  if ( (unsigned __int64)(v5 + 3) >= v9 )
    return 0LL;
  v12 = (*(_DWORD *)(a3 + 20) & 0x10) != 0 ? 2 : 0;
  while ( 1 )
  {
    v13 = (__int64 *)(a2 + 16);
    if ( !a2 )
      v13 = (__int64 *)a3;
    result = ST_STORE<SM_TRAITS>::StDmSinglePageTransfer(
               a1,
               *(_QWORD *)(a1 + 896),
               (v11 + (unsigned int)(16 * (*v7 - *(_DWORD *)(a3 + 16)))) | v12,
               a2,
               *v13,
               (__int64)v7,
               0LL);
    if ( (int)result < 0 )
      break;
    v7 += 4;
    if ( (unsigned __int64)v7 >= v9 )
      return 0LL;
  }
  return result;
}
