/*
 * XREFs of McTemplateU0ix @ 0x180149770
 * Callers:
 *     HintPpm @ 0x180149458 (HintPpm.c)
 * Callees:
 *     McGenEventWriteUM @ 0x1800CF9CC (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

ULONG McTemplateU0ix(__int64 a1, __int64 a2, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+20h] [rbp-48h] BYREF
  va_list v4; // [rsp+30h] [rbp-38h]
  int v5; // [rsp+38h] [rbp-30h]
  int v6; // [rsp+3Ch] [rbp-2Ch]
  va_list v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]
  __int64 v10; // [rsp+80h] [rbp+18h] BYREF
  va_list va; // [rsp+80h] [rbp+18h]
  va_list va1; // [rsp+88h] [rbp+20h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v10 = va_arg(va1, _QWORD);
  va_copy(v4, va);
  v6 = 0;
  v5 = 8;
  va_copy(v7, va1);
  v9 = 0;
  v8 = 8;
  return McGenEventWriteUM(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_PPM_HINT_PROVIDED, 3u, &v3);
}
