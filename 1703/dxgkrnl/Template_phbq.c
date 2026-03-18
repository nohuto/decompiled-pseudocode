/*
 * XREFs of Template_phbq @ 0x1C0041F50
 * Callers:
 *     DpiDispatchPnp @ 0x1C00A9AE0 (DpiDispatchPnp.c)
 *     DpiDispatchInternalIoctl @ 0x1C00A9C10 (DpiDispatchInternalIoctl.c)
 *     DpiDispatchPower @ 0x1C01036E0 (DpiDispatchPower.c)
 *     DpiDispatchIoctl @ 0x1C011D0D0 (DpiDispatchIoctl.c)
 *     DpiDispatchSystemControl @ 0x1C01CA9E0 (DpiDispatchSystemControl.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

NTSTATUS Template_phbq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  __int16 v4; // [rsp+30h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-21h] BYREF
  __int16 *v6; // [rsp+50h] [rbp-11h]
  __int64 v7; // [rsp+58h] [rbp-9h]
  __int64 v8; // [rsp+60h] [rbp-1h]
  __int64 v9; // [rsp+68h] [rbp+7h]
  va_list v10; // [rsp+70h] [rbp+Fh]
  __int64 v11; // [rsp+78h] [rbp+17h]
  __int64 v12; // [rsp+C8h] [rbp+67h] BYREF
  va_list va; // [rsp+C8h] [rbp+67h]
  __int64 v14; // [rsp+D0h] [rbp+6Fh]
  __int64 v15; // [rsp+D8h] [rbp+77h]
  va_list va1; // [rsp+E0h] [rbp+7Fh] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v12 = va_arg(va1, _QWORD);
  v14 = va_arg(va1, _QWORD);
  v15 = va_arg(va1, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  v4 = 72;
  v6 = &v4;
  v8 = v15;
  va_copy(v10, va1);
  v9 = 72LL;
  *(_QWORD *)&UserData.Size = 8LL;
  v7 = 2LL;
  v11 = 4LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 4u, &UserData);
}
