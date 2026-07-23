/*
 * XREFs of RtlSetLastWin32Error @ 0x180008390
 * Callers:
 *     sub_180006FA8 @ 0x180006FA8 (sub_180006FA8.c)
 *     EtwUnregisterTraceGuids @ 0x180007FE0 (EtwUnregisterTraceGuids.c)
 *     EtwNotificationUnregister @ 0x180008040 (EtwNotificationUnregister.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x180008370 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     EtwRegisterTraceGuidsW @ 0x1800099D0 (EtwRegisterTraceGuidsW.c)
 *     EtwNotificationRegister @ 0x1800296B0 (EtwNotificationRegister.c)
 *     EtwEventRegister @ 0x180029F50 (EtwEventRegister.c)
 *     sub_18002C9D0 @ 0x18002C9D0 (sub_18002C9D0.c)
 *     EtwEventActivityIdControl @ 0x18006B380 (EtwEventActivityIdControl.c)
 *     RtlQueryUnbiasedInterruptTime @ 0x18006CF80 (RtlQueryUnbiasedInterruptTime.c)
 *     sub_18007278C @ 0x18007278C (sub_18007278C.c)
 *     sub_1800728E0 @ 0x1800728E0 (sub_1800728E0.c)
 *     EtwGetTraceLoggerHandle @ 0x180081230 (EtwGetTraceLoggerHandle.c)
 *     EtwGetTraceEnableLevel @ 0x180081280 (EtwGetTraceEnableLevel.c)
 *     EtwGetTraceEnableFlags @ 0x1800812C0 (EtwGetTraceEnableFlags.c)
 *     EtwRegisterSecurityProvider @ 0x18008AC60 (EtwRegisterSecurityProvider.c)
 *     sub_1801068A8 @ 0x1801068A8 (sub_1801068A8.c)
 *     EtwCreateTraceInstanceId @ 0x1801069A0 (EtwCreateTraceInstanceId.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 * Callees:
 *     EtwEventWrite @ 0x180007400 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

void __cdecl RtlSetLastWin32Error(LONG Win32Error)
{
  struct _TEB *v1; // rax
  bool v2; // zf
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF
  LONG v4; // [rsp+50h] [rbp+8h] BYREF

  v4 = Win32Error;
  v1 = NtCurrentTeb();
  if ( dword_18015D7AC && Win32Error == dword_18015D7AC )
    __debugbreak();
  if ( v1->LastErrorValue != Win32Error )
  {
    v2 = byte_18015D434 == 0;
    v1->LastErrorValue = Win32Error;
    if ( !v2 )
    {
      if ( v4 )
      {
        v3[0] = &v4;
        v3[1] = 4LL;
        EtwEventWrite(RegHandle, &EventDescriptor, 1u, (PEVENT_DATA_DESCRIPTOR)v3);
      }
    }
  }
}
