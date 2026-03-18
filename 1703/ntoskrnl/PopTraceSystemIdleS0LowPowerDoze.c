/*
 * XREFs of PopTraceSystemIdleS0LowPowerDoze @ 0x1406CEDE4
 * Callers:
 *     PopIdleAoAcDozeToS4 @ 0x1406D4A60 (PopIdleAoAcDozeToS4.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void PopTraceSystemIdleS0LowPowerDoze()
{
  REGHANDLE v0; // rbx
  int v1; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF

  if ( PopDiagHandleRegistered )
  {
    v0 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_S0_LOW_POWER_DOZE) )
    {
      v1 = 0;
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v1;
      UserData.Size = 4;
      EtwWrite(v0, &POP_ETW_EVENT_SYSTEM_IDLE_S0_LOW_POWER_DOZE, 0LL, 1u, &UserData);
    }
  }
}
