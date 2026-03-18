/*
 * XREFs of PoTraceSystemTimerResolutionUpdate @ 0x140005E40
 * Callers:
 *     ExpUpdateTimerResolution @ 0x140004CA4 (ExpUpdateTimerResolution.c)
 * Callees:
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

BOOLEAN PoTraceSystemTimerResolutionUpdate()
{
  BOOLEAN result; // al
  REGHANDLE v1; // rbx
  int v2; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  result = KeTimeIncrement;
  v2 = KeTimeIncrement;
  if ( PopDiagHandleRegistered )
  {
    v1 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_TIME_RESOLUTION_UPDATE);
    if ( result )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v2;
      UserData.Size = 4;
      return EtwWriteEx(v1, &POP_ETW_EVENT_TIME_RESOLUTION_UPDATE, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
  return result;
}
