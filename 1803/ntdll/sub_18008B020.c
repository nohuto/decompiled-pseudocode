/*
 * XREFs of sub_18008B020 @ 0x18008B020
 * Callers:
 *     _lfind @ 0x18008BDE0 (_lfind.c)
 *     _snprintf @ 0x18008BF80 (_snprintf.c)
 *     _snwprintf @ 0x18008C030 (_snwprintf.c)
 *     sub_18008C198 @ 0x18008C198 (sub_18008C198.c)
 *     _strlwr_s @ 0x18008C4B0 (_strlwr_s.c)
 *     _strupr @ 0x18008C5A0 (_strupr.c)
 *     _strupr_s @ 0x18008C5F0 (_strupr_s.c)
 *     swprintf @ 0x18008C660 (swprintf.c)
 *     sub_18008C738 @ 0x18008C738 (sub_18008C738.c)
 *     sub_18008C7F8 @ 0x18008C7F8 (sub_18008C7F8.c)
 *     sub_18008C85C @ 0x18008C85C (sub_18008C85C.c)
 *     sub_18008C918 @ 0x18008C918 (sub_18008C918.c)
 *     sub_18008C9E8 @ 0x18008C9E8 (sub_18008C9E8.c)
 *     _wcslwr @ 0x18008CB30 (_wcslwr.c)
 *     _wcslwr_s @ 0x18008CB90 (_wcslwr_s.c)
 *     _wcsnset_s @ 0x18008CC80 (_wcsnset_s.c)
 *     _wcsset_s @ 0x18008CD10 (_wcsset_s.c)
 *     sub_18008CDCC @ 0x18008CDCC (sub_18008CDCC.c)
 *     _wcsupr_s @ 0x18008D060 (_wcsupr_s.c)
 *     bsearch @ 0x18008DB40 (bsearch.c)
 *     bsearch_s @ 0x18008DC50 (bsearch_s.c)
 *     qsort @ 0x18008EFB0 (qsort.c)
 *     qsort_s @ 0x18008F350 (qsort_s.c)
 *     sprintf @ 0x18008F710 (sprintf.c)
 *     sub_18008F8F8 @ 0x18008F8F8 (sub_18008F8F8.c)
 *     sub_18009038C @ 0x18009038C (sub_18009038C.c)
 *     sub_180090F98 @ 0x180090F98 (sub_180090F98.c)
 *     sub_180091404 @ 0x180091404 (sub_180091404.c)
 *     sub_180091650 @ 0x180091650 (sub_180091650.c)
 *     sub_180091FB0 @ 0x180091FB0 (sub_180091FB0.c)
 *     sub_180094560 @ 0x180094560 (sub_180094560.c)
 *     sub_180094E8C @ 0x180094E8C (sub_180094E8C.c)
 *     sub_180094F54 @ 0x180094F54 (sub_180094F54.c)
 *     sub_180095014 @ 0x180095014 (sub_180095014.c)
 *     sub_180095184 @ 0x180095184 (sub_180095184.c)
 *     sub_1800952A0 @ 0x1800952A0 (sub_1800952A0.c)
 *     sub_180095474 @ 0x180095474 (sub_180095474.c)
 *     sub_1800955AC @ 0x1800955AC (sub_1800955AC.c)
 *     _makepath_s @ 0x1800956F0 (_makepath_s.c)
 *     _vsnprintf_s @ 0x180095860 (_vsnprintf_s.c)
 *     _snscanf_s @ 0x180095900 (_snscanf_s.c)
 *     _vsnwprintf_s @ 0x180095970 (_vsnwprintf_s.c)
 *     _snwscanf_s @ 0x180095A20 (_snwscanf_s.c)
 *     _splitpath_s @ 0x180095A60 (_splitpath_s.c)
 *     _strnset_s @ 0x180095D00 (_strnset_s.c)
 *     _strset_s @ 0x180095D90 (_strset_s.c)
 *     _wmakepath_s @ 0x180095DF0 (_wmakepath_s.c)
 *     _wsplitpath_s @ 0x180095F60 (_wsplitpath_s.c)
 *     memcpy_s @ 0x180096220 (memcpy_s.c)
 *     memmove_s @ 0x1800962D0 (memmove_s.c)
 *     vsprintf_s @ 0x180096380 (vsprintf_s.c)
 *     sscanf_s @ 0x1800963D0 (sscanf_s.c)
 *     strcat_s @ 0x180096430 (strcat_s.c)
 *     strcpy_s @ 0x1800964E0 (strcpy_s.c)
 *     strncat_s @ 0x180096580 (strncat_s.c)
 *     strncpy_s @ 0x180096690 (strncpy_s.c)
 *     strtok_s @ 0x1800967A0 (strtok_s.c)
 *     vswprintf_s @ 0x180096930 (vswprintf_s.c)
 *     swscanf_s @ 0x180096990 (swscanf_s.c)
 *     wcscat_s @ 0x1800969F0 (wcscat_s.c)
 *     wcscpy_s @ 0x180096AB0 (wcscpy_s.c)
 *     wcsncat_s @ 0x180096B50 (wcsncat_s.c)
 *     wcsncpy_s @ 0x180096C80 (wcsncpy_s.c)
 *     wcstok_s @ 0x180096DA0 (wcstok_s.c)
 *     sub_180096EA4 @ 0x180096EA4 (sub_180096EA4.c)
 *     sub_180097788 @ 0x180097788 (sub_180097788.c)
 *     sub_180097858 @ 0x180097858 (sub_180097858.c)
 *     sub_180097DA0 @ 0x180097DA0 (sub_180097DA0.c)
 *     sub_180098700 @ 0x180098700 (sub_180098700.c)
 *     sub_180098760 @ 0x180098760 (sub_180098760.c)
 *     sub_180098874 @ 0x180098874 (sub_180098874.c)
 *     sub_180099634 @ 0x180099634 (sub_180099634.c)
 *     sub_1800996E8 @ 0x1800996E8 (sub_1800996E8.c)
 *     sub_18009A10C @ 0x18009A10C (sub_18009A10C.c)
 *     sub_18009A150 @ 0x18009A150 (sub_18009A150.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     RtlVirtualUnwind @ 0x18000B340 (RtlVirtualUnwind.c)
 *     RtlLookupFunctionEntry @ 0x18000EBA0 (RtlLookupFunctionEntry.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     RtlCaptureContext @ 0x18009EAD0 (RtlCaptureContext.c)
 */

ULONG sub_18008B020()
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
