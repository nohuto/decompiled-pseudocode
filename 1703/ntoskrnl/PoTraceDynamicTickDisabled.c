/*
 * XREFs of PoTraceDynamicTickDisabled @ 0x14022FAC8
 * Callers:
 *     KePrepareClockTimerForIdle @ 0x140067B60 (KePrepareClockTimerForIdle.c)
 *     KeInitializeClock @ 0x140819AAC (KeInitializeClock.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

BOOLEAN PoTraceDynamicTickDisabled()
{
  BOOLEAN result; // al
  REGHANDLE v1; // rbx
  char v2; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF

  result = KiDynamicTickDisableReason;
  v2 = KiDynamicTickDisableReason;
  if ( PopDiagHandleRegistered )
  {
    v1 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DYNAMIC_TICK_DISABLED);
    if ( result )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v2;
      UserData.Size = 1;
      return EtwWriteEx(v1, &POP_ETW_EVENT_DYNAMIC_TICK_DISABLED, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
    }
  }
  return result;
}
