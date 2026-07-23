/*
 * XREFs of sub_180095DE0 @ 0x180095DE0
 * Callers:
 *     _lfind @ 0x180096B80 (_lfind.c)
 *     _snprintf @ 0x180096D10 (_snprintf.c)
 *     _snwprintf @ 0x180096DC0 (_snwprintf.c)
 *     sub_180096F28 @ 0x180096F28 (sub_180096F28.c)
 *     _strlwr_s @ 0x180097220 (_strlwr_s.c)
 *     _strupr @ 0x1800972F0 (_strupr.c)
 *     _strupr_s @ 0x180097340 (_strupr_s.c)
 *     sub_1800973C8 @ 0x1800973C8 (sub_1800973C8.c)
 *     sub_18009742C @ 0x18009742C (sub_18009742C.c)
 *     sub_1800974E8 @ 0x1800974E8 (sub_1800974E8.c)
 *     sub_1800975B8 @ 0x1800975B8 (sub_1800975B8.c)
 *     _wcslwr @ 0x1800976F0 (_wcslwr.c)
 *     _wcslwr_s @ 0x180097740 (_wcslwr_s.c)
 *     _wcsnset_s @ 0x180097820 (_wcsnset_s.c)
 *     _wcsset_s @ 0x1800978B0 (_wcsset_s.c)
 *     sub_18009796C @ 0x18009796C (sub_18009796C.c)
 *     _wcsupr_s @ 0x180097C10 (_wcsupr_s.c)
 *     bsearch @ 0x1800986E0 (bsearch.c)
 *     bsearch_s @ 0x1800987F0 (bsearch_s.c)
 *     qsort @ 0x180099B50 (qsort.c)
 *     qsort_s @ 0x180099F60 (qsort_s.c)
 *     sprintf @ 0x18009A3A0 (sprintf.c)
 *     sub_18009A588 @ 0x18009A588 (sub_18009A588.c)
 *     sub_18009AFFC @ 0x18009AFFC (sub_18009AFFC.c)
 *     swprintf @ 0x18009B2B0 (swprintf.c)
 *     sub_18009B8F8 @ 0x18009B8F8 (sub_18009B8F8.c)
 *     sub_18009BD48 @ 0x18009BD48 (sub_18009BD48.c)
 *     sub_18009C1C4 @ 0x18009C1C4 (sub_18009C1C4.c)
 *     sub_18009C40C @ 0x18009C40C (sub_18009C40C.c)
 *     sub_18009CD80 @ 0x18009CD80 (sub_18009CD80.c)
 *     sub_18009F290 @ 0x18009F290 (sub_18009F290.c)
 *     sub_18009FB60 @ 0x18009FB60 (sub_18009FB60.c)
 *     sub_18009FC28 @ 0x18009FC28 (sub_18009FC28.c)
 *     sub_18009FCF4 @ 0x18009FCF4 (sub_18009FCF4.c)
 *     sub_18009FE84 @ 0x18009FE84 (sub_18009FE84.c)
 *     sub_18009FF90 @ 0x18009FF90 (sub_18009FF90.c)
 *     sub_1800A0164 @ 0x1800A0164 (sub_1800A0164.c)
 *     sub_1800A0284 @ 0x1800A0284 (sub_1800A0284.c)
 *     _makepath_s @ 0x1800A03B0 (_makepath_s.c)
 *     _vsnprintf_s @ 0x1800A0520 (_vsnprintf_s.c)
 *     _snscanf_s @ 0x1800A05C0 (_snscanf_s.c)
 *     _vsnwprintf_s @ 0x1800A0630 (_vsnwprintf_s.c)
 *     _snwscanf_s @ 0x1800A06E0 (_snwscanf_s.c)
 *     _splitpath_s @ 0x1800A0720 (_splitpath_s.c)
 *     _strnset_s @ 0x1800A09C0 (_strnset_s.c)
 *     _strset_s @ 0x1800A0A50 (_strset_s.c)
 *     _wmakepath_s @ 0x1800A0AB0 (_wmakepath_s.c)
 *     _wsplitpath_s @ 0x1800A0C20 (_wsplitpath_s.c)
 *     memcpy_s @ 0x1800A0EE0 (memcpy_s.c)
 *     memmove_s @ 0x1800A0F90 (memmove_s.c)
 *     vsprintf_s @ 0x1800A1040 (vsprintf_s.c)
 *     sscanf_s @ 0x1800A1090 (sscanf_s.c)
 *     strcat_s @ 0x1800A10F0 (strcat_s.c)
 *     strcpy_s @ 0x1800A1190 (strcpy_s.c)
 *     strncat_s @ 0x1800A1220 (strncat_s.c)
 *     strncpy_s @ 0x1800A1320 (strncpy_s.c)
 *     strtok_s @ 0x1800A1410 (strtok_s.c)
 *     vswprintf_s @ 0x1800A1560 (vswprintf_s.c)
 *     swscanf_s @ 0x1800A15C0 (swscanf_s.c)
 *     wcscat_s @ 0x1800A1620 (wcscat_s.c)
 *     wcscpy_s @ 0x1800A16D0 (wcscpy_s.c)
 *     wcsncat_s @ 0x1800A1760 (wcsncat_s.c)
 *     wcsncpy_s @ 0x1800A1870 (wcsncpy_s.c)
 *     wcstok_s @ 0x1800A1980 (wcstok_s.c)
 *     sub_1800A1A64 @ 0x1800A1A64 (sub_1800A1A64.c)
 *     sub_1800A22D4 @ 0x1800A22D4 (sub_1800A22D4.c)
 *     sub_1800A23A4 @ 0x1800A23A4 (sub_1800A23A4.c)
 *     sub_1800A28A4 @ 0x1800A28A4 (sub_1800A28A4.c)
 *     sub_1800A3130 @ 0x1800A3130 (sub_1800A3130.c)
 *     sub_1800A3190 @ 0x1800A3190 (sub_1800A3190.c)
 *     sub_1800A32A4 @ 0x1800A32A4 (sub_1800A32A4.c)
 *     sub_1800A4064 @ 0x1800A4064 (sub_1800A4064.c)
 *     sub_1800A4118 @ 0x1800A4118 (sub_1800A4118.c)
 *     sub_1800A4AD0 @ 0x1800A4AD0 (sub_1800A4AD0.c)
 *     sub_1800A4B20 @ 0x1800A4B20 (sub_1800A4B20.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x180034710 (RtlLookupFunctionEntry.c)
 *     RtlVirtualUnwind @ 0x1800377A0 (RtlVirtualUnwind.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     RtlCaptureContext @ 0x1800A91B0 (RtlCaptureContext.c)
 */

ULONG sub_180095DE0()
{
  ULONG64 Rip; // rbx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v1; // rax
  unsigned __int64 ImageBase; // [rsp+40h] [rbp-508h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+48h] [rbp-500h] BYREF
  PVOID HandlerData; // [rsp+50h] [rbp-4F8h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+60h] [rbp-4E8h] BYREF
  DWORD64 retaddr; // [rsp+548h] [rbp+0h] BYREF

  RtlCaptureContext(&ContextRecord);
  Rip = ContextRecord.Rip;
  v1 = RtlLookupFunctionEntry(ContextRecord.Rip, &ImageBase, 0LL);
  if ( v1 )
  {
    RtlVirtualUnwind(0, ImageBase, Rip, v1, &ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
  }
  else
  {
    ContextRecord.Rip = retaddr;
    ContextRecord.Rsp = (DWORD64)&retaddr;
  }
  return DbgPrint("Invalid parameter passed to C runtime function.\n");
}
