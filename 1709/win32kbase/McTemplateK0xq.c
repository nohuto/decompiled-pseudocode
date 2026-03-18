/*
 * XREFs of McTemplateK0xq @ 0x1C00E2F1C
 * Callers:
 *     NtDCompositionBeginFrame @ 0x1C0037150 (NtDCompositionBeginFrame.c)
 *     ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1C0077488 (-UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ.c)
 *     EtwTraceCompletePowerRequest @ 0x1C0077500 (EtwTraceCompletePowerRequest.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C0077AC0 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     EtwUpdateEvent @ 0x1C0081D50 (EtwUpdateEvent.c)
 *     EtwTraceKillTimer @ 0x1C0084EA0 (EtwTraceKillTimer.c)
 *     EtwTraceCompositionSurfaceObjectUpdateEvent @ 0x1C00891F0 (EtwTraceCompositionSurfaceObjectUpdateEvent.c)
 *     EtwLogicalSurfCreateEvent @ 0x1C0090D60 (EtwLogicalSurfCreateEvent.c)
 *     EtwLogicalSurfDestroyEvent @ 0x1C00912E0 (EtwLogicalSurfDestroyEvent.c)
 *     ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1C00DC580 (-CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z.c)
 *     EtwTraceDCompBeginFrameEvent @ 0x1C00DFFE0 (EtwTraceDCompBeginFrameEvent.c)
 * Callees:
 *     McGenEventWriteKM @ 0x1C0009120 (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0xq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-48h] BYREF
  va_list v5; // [rsp+40h] [rbp-38h]
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  va_list v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(v5, va);
  v7 = 0;
  v6 = 8;
  va_copy(v8, va1);
  v10 = 0;
  v9 = 4;
  return McGenEventWriteKM(a1, a2, &W32kControlGuid, 3u, &v4);
}
