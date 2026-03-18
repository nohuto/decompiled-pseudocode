/*
 * XREFs of McTemplateU0xxx @ 0x1801AA4A4
 * Callers:
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x180092924 (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 *     ?NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x1801EB580 (-NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 *     ?Render@CHolographicInteropTarget@@UEAAJPEA_N@Z @ 0x1801FDE00 (-Render@CHolographicInteropTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     McGenEventWriteUM @ 0x1800CF9CC (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

ULONG McTemplateU0xxx(REGHANDLE *a1, const EVENT_DESCRIPTOR *a2, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+20h] [rbp-50h] BYREF
  va_list v4; // [rsp+30h] [rbp-40h]
  __int64 v5; // [rsp+38h] [rbp-38h]
  va_list v6; // [rsp+40h] [rbp-30h]
  __int64 v7; // [rsp+48h] [rbp-28h]
  va_list v8; // [rsp+50h] [rbp-20h]
  __int64 v9; // [rsp+58h] [rbp-18h]
  __int64 v10; // [rsp+90h] [rbp+20h] BYREF
  va_list va; // [rsp+90h] [rbp+20h]
  __int64 v12; // [rsp+98h] [rbp+28h] BYREF
  va_list va1; // [rsp+98h] [rbp+28h]
  va_list va2; // [rsp+A0h] [rbp+30h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  v5 = 8LL;
  va_copy(v4, va);
  v7 = 8LL;
  va_copy(v6, va1);
  v9 = 8LL;
  va_copy(v8, va2);
  return McGenEventWriteUM(a1, a2, 4u, &v3);
}
