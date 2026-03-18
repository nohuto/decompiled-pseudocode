/*
 * XREFs of PopDiagTraceFxDevicePowered @ 0x140077AC0
 * Callers:
 *     PopFxCompleteDevicePowerRequired @ 0x140077A30 (PopFxCompleteDevicePowerRequired.c)
 * Callees:
 *     PopFxAddLogEntry @ 0x140077F7C (PopFxAddLogEntry.c)
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceFxDevicePowered(__int64 a1)
{
  BOOLEAN result; // al
  REGHANDLE v2; // rbx
  __int64 v3; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  v3 = a1;
  result = PopFxAddLogEntry(a1, 0LL, 7LL);
  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_POWERED);
    if ( result )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v3;
      UserData.Size = 8;
      return EtwWriteEx(v2, &POP_ETW_EVENT_DEVICE_POWERED, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
    }
  }
  return result;
}
