/*
 * XREFs of TppETWCallbackCancel @ 0x18010AF80
 * Callers:
 *     TppWorkWait @ 0x18000C5D0 (TppWorkWait.c)
 *     TppWorkCancelPendingCallbacks @ 0x180071EE0 (TppWorkCancelPendingCallbacks.c)
 *     TpWaitForIoCompletion @ 0x180087220 (TpWaitForIoCompletion.c)
 *     TppIopCancelPendingCallbacks @ 0x18010A810 (TppIopCancelPendingCallbacks.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 */

__int64 TppETWCallbackCancel()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
