/*
 * XREFs of __tailMerge_propsys_dll @ 0x180062068
 * Callers:
 *     __imp_load_PSCreateMemoryPropertyStore @ 0x18006205C (__imp_load_PSCreateMemoryPropertyStore.c)
 *     __imp_load_PropVariantToStringAlloc @ 0x1800624E0 (__imp_load_PropVariantToStringAlloc.c)
 *     __imp_load_PropVariantCompareEx @ 0x1800624EC (__imp_load_PropVariantCompareEx.c)
 *     __imp_load_PropVariantToUInt32 @ 0x1800624F8 (__imp_load_PropVariantToUInt32.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180049AA0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_propsys_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_PROPSYS_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
