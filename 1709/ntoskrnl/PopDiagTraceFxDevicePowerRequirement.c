/*
 * XREFs of PopDiagTraceFxDevicePowerRequirement @ 0x1400FDDE8
 * Callers:
 *     PopFxProcessWork @ 0x1400FD9F8 (PopFxProcessWork.c)
 *     PopFxDeliverDevicePowerRequired @ 0x140131A64 (PopFxDeliverDevicePowerRequired.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x1401550A4 (PopFxUpdateDeviceIdleTimer.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x140157B30 (PopFxIdleTimeoutDpcRoutine.c)
 * Callees:
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     PopFxAddLogEntry @ 0x1400FDE88 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceFxDevicePowerRequirement(__int64 a1, char a2, unsigned __int8 a3)
{
  __int64 v4; // r9
  const EVENT_DESCRIPTOR *v5; // rbx
  __int64 v6; // r8
  BOOLEAN result; // al
  REGHANDLE v8; // rsi
  int v9; // [rsp+40h] [rbp-48h] BYREF
  __int64 v10; // [rsp+48h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-38h] BYREF
  int *v12; // [rsp+60h] [rbp-28h]
  int v13; // [rsp+68h] [rbp-20h]
  int v14; // [rsp+6Ch] [rbp-1Ch]

  v10 = a1;
  v4 = a3;
  if ( a2 == 1 )
  {
    v5 = &POP_ETW_EVENT_DEVICE_POWER_REQUIREMENT_FROM_PEP;
    v6 = 4LL;
  }
  else
  {
    v5 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_DEVICE_POWER_REQUIREMENT_TO_DEVICE;
    v6 = 5LL;
  }
  result = PopFxAddLogEntry(a1, 0LL, v6, v4);
  if ( PopDiagHandleRegistered )
  {
    v8 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, v5);
    if ( result )
    {
      UserData.Reserved = 0;
      v14 = 0;
      v9 = a3;
      UserData.Size = 8;
      UserData.Ptr = (ULONGLONG)&v10;
      v12 = &v9;
      v13 = 4;
      return EtwWriteEx(v8, v5, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
    }
  }
  return result;
}
