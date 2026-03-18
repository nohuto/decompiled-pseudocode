/*
 * XREFs of PoTraceDynamicTickDisabled @ 0x1402442E0
 * Callers:
 *     KePrepareClockTimerForIdle @ 0x14010F380 (KePrepareClockTimerForIdle.c)
 *     KeInitializeClock @ 0x140848FF0 (KeInitializeClock.c)
 * Callees:
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

BOOLEAN PoTraceDynamicTickDisabled()
{
  BOOLEAN result; // al
  REGHANDLE v1; // rbx
  char v2; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

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
