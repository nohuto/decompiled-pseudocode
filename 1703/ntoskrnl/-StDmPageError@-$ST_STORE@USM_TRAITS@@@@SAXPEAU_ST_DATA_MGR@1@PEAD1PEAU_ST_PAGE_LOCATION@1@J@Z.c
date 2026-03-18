/*
 * XREFs of ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@J@Z @ 0x14024BF10
 * Callers:
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14005D638 (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
 * Callees:
 *     SmEtwEnabled @ 0x1400587E0 (SmEtwEnabled.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     SmEtwLogStoreCorruption @ 0x14024D878 (SmEtwLogStoreCorruption.c)
 *     SmPrepareForFatalPageError @ 0x14024F9EC (SmPrepareForFatalPageError.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StDmPageError(__int64 a1, ULONG_PTR a2, void *a3, __int64 a4, signed int a5)
{
  int v9; // ecx
  __int64 v10; // rdx
  ULONGLONG *v11; // rcx
  __int64 v12; // r9
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  if ( (unsigned __int8)*(_DWORD *)(a1 + 776) )
    v9 = 0;
  else
    v9 = 2;
  v11 = SmEtwEnabled(v9);
  if ( v11 )
  {
    v13 = 0LL;
    if ( a5 == -1073741116 )
      BYTE1(v13) = 2;
    else
      BYTE1(v13) = a5 == -1073741761;
    SmEtwLogStoreCorruption(v11, v10, a1, a2, *(_WORD *)(v12 + 4), &v13);
  }
  if ( ((*(_DWORD *)(a1 + 832) >> 5) & 3u) >= 2 && (_BYTE)KdDebuggerEnabled )
    __debugbreak();
  if ( ((*(_DWORD *)(a1 + 832) >> 5) & 3) == 3 )
  {
    if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0 )
      SmPrepareForFatalPageError(
        a2 - 16 * (*(_DWORD *)a4 & *(_DWORD *)(a1 + 808)),
        *(_DWORD *)(a1 + 784),
        *(unsigned __int16 *)(a4 + 4),
        *(_DWORD *)a4 >> *(_DWORD *)(a1 + 812),
        *(unsigned __int16 *)(a1 + 976),
        *(_DWORD *)(a4 + 8),
        a2,
        a3);
    KeBugCheckEx(0x12Bu, a5, *(unsigned __int16 *)(a4 + 4), a2, (ULONG_PTR)a3);
  }
  ST_STORE<SM_TRAITS>::StDmDeviceError(a1, 0, a5);
}
