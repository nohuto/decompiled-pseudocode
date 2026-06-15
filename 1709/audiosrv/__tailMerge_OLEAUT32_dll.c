/*
 * XREFs of __tailMerge_OLEAUT32_dll @ 0x180033C46
 * Callers:
 *     __imp_load_SysFreeString @ 0x180033C3A (__imp_load_SysFreeString.c)
 *     __imp_load_VariantTimeToSystemTime @ 0x1800341BF (__imp_load_VariantTimeToSystemTime.c)
 *     __imp_load_SystemTimeToVariantTime @ 0x1800341CB (__imp_load_SystemTimeToVariantTime.c)
 *     __imp_load_SafeArrayGetLBound @ 0x18003425C (__imp_load_SafeArrayGetLBound.c)
 *     __imp_load_SafeArrayGetUBound @ 0x180034268 (__imp_load_SafeArrayGetUBound.c)
 *     __imp_load_SafeArrayDestroy @ 0x180034274 (__imp_load_SafeArrayDestroy.c)
 *     __imp_load_SafeArrayCreate @ 0x180034280 (__imp_load_SafeArrayCreate.c)
 *     __imp_load_SafeArrayGetVartype @ 0x18003428C (__imp_load_SafeArrayGetVartype.c)
 *     __imp_load_SafeArrayCopy @ 0x180034298 (__imp_load_SafeArrayCopy.c)
 *     __imp_load_SafeArrayUnlock @ 0x1800342A4 (__imp_load_SafeArrayUnlock.c)
 *     __imp_load_SafeArrayLock @ 0x1800342B0 (__imp_load_SafeArrayLock.c)
 *     __imp_load_SysAllocString @ 0x1800342BC (__imp_load_SysAllocString.c)
 *     __imp_load_SafeArrayGetElement @ 0x180034418 (__imp_load_SafeArrayGetElement.c)
 *     __imp_load_BSTR_UserSize @ 0x180034E36 (__imp_load_BSTR_UserSize.c)
 *     __imp_load_BSTR_UserFree @ 0x180034E56 (__imp_load_BSTR_UserFree.c)
 *     __imp_load_LPSAFEARRAY_UserSize @ 0x180034E76 (__imp_load_LPSAFEARRAY_UserSize.c)
 *     __imp_load_BSTR_UserUnmarshal64 @ 0x180034E96 (__imp_load_BSTR_UserUnmarshal64.c)
 *     __imp_load_LPSAFEARRAY_UserFree @ 0x180034EB6 (__imp_load_LPSAFEARRAY_UserFree.c)
 *     __imp_load_LPSAFEARRAY_UserUnmarshal @ 0x180034ED6 (__imp_load_LPSAFEARRAY_UserUnmarshal.c)
 *     __imp_load_LPSAFEARRAY_UserFree64 @ 0x180034EF6 (__imp_load_LPSAFEARRAY_UserFree64.c)
 *     __imp_load_LPSAFEARRAY_UserMarshal64 @ 0x180034F16 (__imp_load_LPSAFEARRAY_UserMarshal64.c)
 *     __imp_load_BSTR_UserUnmarshal @ 0x180034F36 (__imp_load_BSTR_UserUnmarshal.c)
 *     __imp_load_BSTR_UserMarshal @ 0x180034F56 (__imp_load_BSTR_UserMarshal.c)
 *     __imp_load_LPSAFEARRAY_UserUnmarshal64 @ 0x180034F76 (__imp_load_LPSAFEARRAY_UserUnmarshal64.c)
 *     __imp_load_LPSAFEARRAY_UserMarshal @ 0x180034F96 (__imp_load_LPSAFEARRAY_UserMarshal.c)
 *     __imp_load_BSTR_UserFree64 @ 0x180034FB6 (__imp_load_BSTR_UserFree64.c)
 *     __imp_load_BSTR_UserSize64 @ 0x180034FD6 (__imp_load_BSTR_UserSize64.c)
 *     __imp_load_LPSAFEARRAY_UserSize64 @ 0x180034FF6 (__imp_load_LPSAFEARRAY_UserSize64.c)
 *     __imp_load_BSTR_UserMarshal64 @ 0x180035016 (__imp_load_BSTR_UserMarshal64.c)
 *     __imp_load_VarBstrCat @ 0x180035356 (__imp_load_VarBstrCat.c)
 *     __imp_load_SysStringLen @ 0x180035362 (__imp_load_SysStringLen.c)
 *     __imp_load_SysAllocStringLen @ 0x18003536E (__imp_load_SysAllocStringLen.c)
 *     __imp_load_SysStringByteLen @ 0x18003537A (__imp_load_SysStringByteLen.c)
 *     __imp_load_SysAllocStringByteLen @ 0x180035386 (__imp_load_SysAllocStringByteLen.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800DDF20 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_OLEAUT32_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          &_DELAY_IMPORT_DESCRIPTOR_OLEAUT32_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
