/*
 * XREFs of __tailMerge_GDI32_dll @ 0x180196BA8
 * Callers:
 *     __imp_load_CreateCompatibleBitmap @ 0x180196B9C (__imp_load_CreateCompatibleBitmap.c)
 *     __imp_load_CombineRgn @ 0x180196C21 (__imp_load_CombineRgn.c)
 *     __imp_load_DeleteObject @ 0x180196C2D (__imp_load_DeleteObject.c)
 *     __imp_load_GetObjectW @ 0x180196C39 (__imp_load_GetObjectW.c)
 *     __imp_load_GetCurrentDpiInfo @ 0x180196C45 (__imp_load_GetCurrentDpiInfo.c)
 *     __imp_load_GetDeviceCaps @ 0x180196C51 (__imp_load_GetDeviceCaps.c)
 *     __imp_load_DeleteDC @ 0x180196C5D (__imp_load_DeleteDC.c)
 *     __imp_load_StretchDIBits @ 0x180196C69 (__imp_load_StretchDIBits.c)
 *     __imp_load_GdiAlphaBlend @ 0x180196C75 (__imp_load_GdiAlphaBlend.c)
 *     __imp_load_CreateCompatibleDC @ 0x180196C81 (__imp_load_CreateCompatibleDC.c)
 *     __imp_load_CreateDIBSection @ 0x180196C8D (__imp_load_CreateDIBSection.c)
 *     __imp_load_SelectObject @ 0x180196C99 (__imp_load_SelectObject.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180191670 (__delayLoadHelper2.c)
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
