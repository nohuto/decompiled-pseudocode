/*
 * XREFs of EtwWriteEndScenario @ 0x14060C5F0
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x14018047C (PnpCompleteSystemStartProcess.c)
 *     PopGracefulShutdown @ 0x140485D40 (PopGracefulShutdown.c)
 *     PopDiagTracePowerTransitionEnd @ 0x1405EB3FC (PopDiagTracePowerTransitionEnd.c)
 * Callees:
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     EtwGetProviderIdFromHandle @ 0x140169D24 (EtwGetProviderIdFromHandle.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     WdipStartEndScenario @ 0x14060D6D4 (WdipStartEndScenario.c)
 */

NTSTATUS __fastcall EtwWriteEndScenario(
        PVOID *RegHandle,
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
    WdipStartEndScenario(&v10, ActivityId, EventDescriptor, 11LL);
    return EtwWrite((REGHANDLE)RegHandle, EventDescriptor, ActivityId, UserDataCount, UserData);
  }
  return result;
}
