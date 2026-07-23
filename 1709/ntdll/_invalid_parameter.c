/*
 * XREFs of _invalid_parameter @ 0x180090BC0
 * Callers:
 *     _lfind @ 0x180091980 (_lfind.c)
 *     _snprintf @ 0x180091B10 (_snprintf.c)
 *     _snwprintf @ 0x180091BC0 (_snwprintf.c)
 *     _splitpath_helper @ 0x180091D28 (_splitpath_helper.c)
 *     _strlwr_s @ 0x180092040 (_strlwr_s.c)
 *     _strupr @ 0x180092130 (_strupr.c)
 *     _strupr_s @ 0x180092180 (_strupr_s.c)
 *     _vsprintf_l @ 0x180092208 (_vsprintf_l.c)
 *     _vscprintf_helper @ 0x1800922C8 (_vscprintf_helper.c)
 *     _vswprintf_l @ 0x18009232C (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x1800923E8 (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x1800924B8 (_vsnwprintf_l.c)
 *     _wcslwr @ 0x1800925F0 (_wcslwr.c)
 *     _wcslwr_s @ 0x180092640 (_wcslwr_s.c)
 *     _wcsnset_s @ 0x180092720 (_wcsnset_s.c)
 *     _wcsset_s @ 0x1800927B0 (_wcsset_s.c)
 *     wcstoxq @ 0x18009286C (wcstoxq.c)
 *     _wcsupr_s @ 0x180092B10 (_wcsupr_s.c)
 *     bsearch @ 0x1800935E0 (bsearch.c)
 *     bsearch_s @ 0x1800936F0 (bsearch_s.c)
 *     qsort @ 0x180094A40 (qsort.c)
 *     qsort_s @ 0x180094DE0 (qsort_s.c)
 *     sprintf @ 0x1800951B0 (sprintf.c)
 *     vscan_fn @ 0x180095398 (vscan_fn.c)
 *     strtoxlX @ 0x180095E0C (strtoxlX.c)
 *     swprintf @ 0x1800960C0 (swprintf.c)
 *     wcstoxlX @ 0x180096AB8 (wcstoxlX.c)
 *     strtoxq @ 0x180096F34 (strtoxq.c)
 *     _output_l @ 0x180097180 (_output_l.c)
 *     _woutput_l @ 0x180097B00 (_woutput_l.c)
 *     _input_l @ 0x18009A000 (_input_l.c)
 *     _wctomb_s_l @ 0x18009A8C8 (_wctomb_s_l.c)
 *     _fputwc_nolock @ 0x18009A990 (_fputwc_nolock.c)
 *     _ungetc_nolock @ 0x18009AA54 (_ungetc_nolock.c)
 *     x64toa_s @ 0x18009ABE4 (x64toa_s.c)
 *     xtoa_s @ 0x18009ACF0 (xtoa_s.c)
 *     x64tow_s @ 0x18009AEC4 (x64tow_s.c)
 *     xtow_s @ 0x18009AFE4 (xtow_s.c)
 *     _makepath_s @ 0x18009B110 (_makepath_s.c)
 *     _vsnprintf_s @ 0x18009B280 (_vsnprintf_s.c)
 *     _snscanf_s @ 0x18009B320 (_snscanf_s.c)
 *     _vsnwprintf_s @ 0x18009B390 (_vsnwprintf_s.c)
 *     _snwscanf_s @ 0x18009B440 (_snwscanf_s.c)
 *     _splitpath_s @ 0x18009B480 (_splitpath_s.c)
 *     _strnset_s @ 0x18009B720 (_strnset_s.c)
 *     _strset_s @ 0x18009B7B0 (_strset_s.c)
 *     _wmakepath_s @ 0x18009B810 (_wmakepath_s.c)
 *     _wsplitpath_s @ 0x18009B980 (_wsplitpath_s.c)
 *     memcpy_s @ 0x18009BC40 (memcpy_s.c)
 *     memmove_s @ 0x18009BCF0 (memmove_s.c)
 *     vsprintf_s @ 0x18009BDA0 (vsprintf_s.c)
 *     sscanf_s @ 0x18009BDF0 (sscanf_s.c)
 *     strcat_s @ 0x18009BE50 (strcat_s.c)
 *     strcpy_s @ 0x18009BEF0 (strcpy_s.c)
 *     strncat_s @ 0x18009BF80 (strncat_s.c)
 *     strncpy_s @ 0x18009C080 (strncpy_s.c)
 *     strtok_s @ 0x18009C170 (strtok_s.c)
 *     vswprintf_s @ 0x18009C2C0 (vswprintf_s.c)
 *     swscanf_s @ 0x18009C320 (swscanf_s.c)
 *     wcscat_s @ 0x18009C380 (wcscat_s.c)
 *     wcscpy_s @ 0x18009C430 (wcscpy_s.c)
 *     wcsncat_s @ 0x18009C4C0 (wcsncat_s.c)
 *     wcsncpy_s @ 0x18009C5D0 (wcsncpy_s.c)
 *     wcstok_s @ 0x18009C6E0 (wcstok_s.c)
 *     _output_s @ 0x18009C7C4 (_output_s.c)
 *     _safecrt_wctomb_s @ 0x18009D03C (_safecrt_wctomb_s.c)
 *     _soutput_s @ 0x18009D10C (_soutput_s.c)
 *     _input_s @ 0x18009D60C (_input_s.c)
 *     _sinput_s @ 0x18009DF0C (_sinput_s.c)
 *     _swoutput_s @ 0x18009DF6C (_swoutput_s.c)
 *     _woutput_s @ 0x18009E080 (_woutput_s.c)
 *     _swinput_s @ 0x18009EE20 (_swinput_s.c)
 *     _winput_s @ 0x18009EED4 (_winput_s.c)
 *     _fgetwc_nolock @ 0x18009F864 (_fgetwc_nolock.c)
 *     _ungetwc_nolock @ 0x18009F8A8 (_ungetwc_nolock.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x180027C80 (RtlLookupFunctionEntry.c)
 *     RtlVirtualUnwind @ 0x18002A090 (RtlVirtualUnwind.c)
 *     DbgPrint @ 0x18006C5C0 (DbgPrint.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     RtlCaptureContext @ 0x1800A4090 (RtlCaptureContext.c)
 */

ULONG invalid_parameter()
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
