/*
 * XREFs of McTemplateK0pj @ 0x1C00277C0
 * Callers:
 *     ?DxgkPowerRuntimeControlCallback@@YAJPEAXPEBU_GUID@@0_K02PEA_K@Z @ 0x1C002BA60 (-DxgkPowerRuntimeControlCallback@@YAJPEAXPEBU_GUID@@0_K02PEA_K@Z.c)
 *     DxgkPowerRuntimeControlRequestCB @ 0x1C002F090 (DxgkPowerRuntimeControlRequestCB.c)
 * Callees:
 *     McGenEventWriteKM @ 0x1C000ACD4 (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pj(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-48h] BYREF
  va_list v5; // [rsp+40h] [rbp-38h]
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  __int64 v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  __int64 v13; // [rsp+A0h] [rbp+28h]
  va_list va1; // [rsp+A8h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  v13 = va_arg(va1, _QWORD);
  va_copy(v5, va);
  v7 = 0;
  v6 = 8;
  v8 = v13;
  v10 = 0;
  v9 = 16;
  return McGenEventWriteKM(&DxgkControlGuid_Context, a2, a3, 3u, &v4);
}
