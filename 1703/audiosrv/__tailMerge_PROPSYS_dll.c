/*
 * XREFs of __tailMerge_PROPSYS_dll @ 0x18004A398
 * Callers:
 *     __imp_load_PSCreateMemoryPropertyStore @ 0x18004A38C (__imp_load_PSCreateMemoryPropertyStore.c)
 *     __imp_load_PropVariantToStringAlloc @ 0x18004A773 (__imp_load_PropVariantToStringAlloc.c)
 *     __imp_load_PropVariantCompareEx @ 0x18004A77F (__imp_load_PropVariantCompareEx.c)
 *     __imp_load_PropVariantToUInt32 @ 0x18004A78B (__imp_load_PropVariantToUInt32.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18002EDC0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_PROPSYS_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_PROPSYS_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
