/*
 * XREFs of ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@J@Z @ 0x1402A557C
 * Callers:
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x1401512E4 (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
 * Callees:
 *     SmEtwEnabled @ 0x140092880 (SmEtwEnabled.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x1402A4F98 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 *     SmEtwLogStoreCorruption @ 0x1402A6DF0 (SmEtwLogStoreCorruption.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageError(
        __int64 a1,
        void *a2,
        UCHAR *a3,
        ULONG_PTR a4,
        __int64 a5,
        int a6)
{
  __int64 v10; // rdx
  ULONGLONG *v11; // rcx
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 result; // rax
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v11 = SmEtwEnabled((unsigned __int8)*(_DWORD *)(a1 + 776) == 0 ? 2 : 0);
  if ( v11 )
  {
    v15 = 0LL;
    if ( a6 == -1073741116 )
      BYTE1(v15) = 2;
    else
      BYTE1(v15) = a6 == -1073741761;
    SmEtwLogStoreCorruption(v11, v10, a1, a2, *(_WORD *)(v12 + 4), &v15);
  }
  v13 = (*(_DWORD *)(a1 + 832) >> 5) & 3;
  if ( v13 >= 2 && (_BYTE)KdDebuggerEnabled )
    __debugbreak();
  if ( (*(_DWORD *)(a1 + 776) & 0x40000) == 0
    || a6 != -1073741116
    || (result = ST_STORE<SM_TRAITS>::StDmHandleDecompressionFailure(a1, a2, a3, a4, a5), !(_DWORD)result) )
  {
    if ( v13 >= 3 )
      KeBugCheckEx(0x12Bu, a6, *(unsigned __int16 *)(a4 + 4), (ULONG_PTR)a2, (ULONG_PTR)a3);
    return 0LL;
  }
  return result;
}
