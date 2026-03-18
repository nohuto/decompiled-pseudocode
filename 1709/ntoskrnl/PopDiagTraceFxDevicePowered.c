/*
 * XREFs of PopDiagTraceFxDevicePowered @ 0x1400FD990
 * Callers:
 *     PopFxCompleteDevicePowerRequired @ 0x1400FD900 (PopFxCompleteDevicePowerRequired.c)
 * Callees:
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     PopFxAddLogEntry @ 0x1400FDE88 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceFxDevicePowered(__int64 a1)
{
  BOOLEAN result; // al
  REGHANDLE v2; // rbx
  __int64 v3; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  v3 = a1;
  result = PopFxAddLogEntry(a1, 0LL, 7LL, 0LL);
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
