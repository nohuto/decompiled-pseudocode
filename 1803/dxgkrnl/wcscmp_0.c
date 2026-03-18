/*
 * XREFs of wcscmp_0 @ 0x1C001C5D6
 * Callers:
 *     ?CheckKernelBlockList@DXGADAPTER@@AEAAJIIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C01E9254 (-CheckKernelBlockList@DXGADAPTER@@AEAAJIIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z @ 0x1C01E9778 (-FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z.c)
 *     DpiTestProcessRegKey @ 0x1C020ED60 (DpiTestProcessRegKey.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp_0(const wchar_t *Str1, const wchar_t *Str2)
{
  return wcscmp(Str1, Str2);
}
