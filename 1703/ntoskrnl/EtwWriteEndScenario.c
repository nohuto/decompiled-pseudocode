/*
 * XREFs of EtwWriteEndScenario @ 0x140586480
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x140162DE4 (PnpCompleteSystemStartProcess.c)
 *     PopGracefulShutdown @ 0x1404199F0 (PopGracefulShutdown.c)
 *     PopDiagTracePowerTransitionEnd @ 0x140577C58 (PopDiagTracePowerTransitionEnd.c)
 * Callees:
 *     EtwGetProviderIdFromHandle @ 0x14003DD38 (EtwGetProviderIdFromHandle.c)
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     WdipStartEndScenario @ 0x1404674F4 (WdipStartEndScenario.c)
 */

NTSTATUS __fastcall EtwWriteEndScenario(
        ULONG_PTR *RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        LPCGUID ActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  NTSTATUS result; // eax
  __int128 v10; // [rsp+30h] [rbp-48h] BYREF

  if ( !EventDescriptor || !ActivityId )
    return -1073741811;
  if ( !EtwEventEnabled((REGHANDLE)RegHandle, EventDescriptor) )
    return -1073741816;
  result = EtwGetProviderIdFromHandle(RegHandle, 0, &v10);
  if ( result >= 0 )
  {
    WdipStartEndScenario((__int64)&v10, (__int64)ActivityId, &EventDescriptor->Id, 11);
    return EtwWrite((REGHANDLE)RegHandle, EventDescriptor, ActivityId, UserDataCount, UserData);
  }
  return result;
}
