/*
 * XREFs of Template_x @ 0x1C00DE028
 * Callers:
 *     ?DisarmPowerWatchdog@@YAXPEAX@Z @ 0x1C0065238 (-DisarmPowerWatchdog@@YAXPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

NTSTATUS Template_x(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-28h] BYREF
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  va_copy((va_list)v4.Ptr, va);
  v4.Reserved = 0;
  v4.Size = 8;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &StopPowerWatchdog, &W32kControlGuid, 1u, &v4);
}
