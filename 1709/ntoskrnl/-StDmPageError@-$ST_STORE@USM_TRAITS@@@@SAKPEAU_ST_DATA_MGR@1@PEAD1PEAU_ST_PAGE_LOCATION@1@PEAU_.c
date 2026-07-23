/*
 * XREFs of ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@J@Z @ 0x14026DAC8
 * Callers:
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14026ED2C (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
 * Callees:
 *     SmEtwEnabled @ 0x14012F570 (SmEtwEnabled.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14026D360 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 *     SmEtwLogStoreCorruption @ 0x140272B48 (SmEtwLogStoreCorruption.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageError(
        __int64 a1,
        void *a2,
        UCHAR *a3,
        ULONG_PTR a4,
        __int64 a5,
        int a6)
{
  int v10; // ecx
  __int64 v11; // rdx
  ULONGLONG *v12; // rcx
  __int64 v13; // r9
  unsigned int v14; // edi
  __int64 result; // rax
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  if ( (unsigned __int8)*(_DWORD *)(a1 + 776) )
    v10 = 0;
  else
    v10 = 2;
  v12 = SmEtwEnabled(v10);
  if ( v12 )
  {
    v16 = 0LL;
    if ( a6 == -1073741116 )
      BYTE1(v16) = 2;
    else
      BYTE1(v16) = a6 == -1073741761;
    SmEtwLogStoreCorruption(v12, v11, a1, a2, *(_WORD *)(v13 + 4), &v16);
  }
  v14 = (*(_DWORD *)(a1 + 832) >> 5) & 3;
  if ( v14 >= 2 && (_BYTE)KdDebuggerEnabled )
    __debugbreak();
  if ( (*(_DWORD *)(a1 + 776) & 0x40000) == 0
    || a6 != -1073741116
    || (result = ST_STORE<SM_TRAITS>::StDmHandleDecompressionFailure(a1, a2, a3, a4, a5), !(_DWORD)result) )
  {
    if ( v14 >= 3 )
      KeBugCheckEx(0x12Bu, a6, *(unsigned __int16 *)(a4 + 4), (ULONG_PTR)a2, (ULONG_PTR)a3);
    return 0LL;
  }
  return result;
}
