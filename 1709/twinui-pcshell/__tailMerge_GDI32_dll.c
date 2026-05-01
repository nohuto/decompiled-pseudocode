/*
 * XREFs of __tailMerge_GDI32_dll @ 0x1801E5060
 * Callers:
 *     __imp_load_CombineRgn @ 0x1801E5054 (__imp_load_CombineRgn.c)
 *     __imp_load_DeleteObject @ 0x1801E50D9 (__imp_load_DeleteObject.c)
 *     __imp_load_CreateCompatibleBitmap @ 0x1801E50E5 (__imp_load_CreateCompatibleBitmap.c)
 *     __imp_load_GetObjectW @ 0x1801E50F1 (__imp_load_GetObjectW.c)
 *     __imp_load_GetDeviceCaps @ 0x1801E50FD (__imp_load_GetDeviceCaps.c)
 *     __imp_load_DeleteDC @ 0x1801E5109 (__imp_load_DeleteDC.c)
 *     __imp_load_StretchDIBits @ 0x1801E5115 (__imp_load_StretchDIBits.c)
 *     __imp_load_GdiAlphaBlend @ 0x1801E5121 (__imp_load_GdiAlphaBlend.c)
 *     __imp_load_CreateCompatibleDC @ 0x1801E512D (__imp_load_CreateCompatibleDC.c)
 *     __imp_load_CreateDIBSection @ 0x1801E5139 (__imp_load_CreateDIBSection.c)
 *     __imp_load_SelectObject @ 0x1801E5145 (__imp_load_SelectObject.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801DFA40 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_GDI32_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_GDI32_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
