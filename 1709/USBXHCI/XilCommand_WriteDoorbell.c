/*
 * XREFs of XilCommand_WriteDoorbell @ 0x1C000F6D0
 * Callers:
 *     Command_HandleCommandRingStoppedEvent @ 0x1C000CF74 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C000D8B0 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     XilCommand_SendRequestToRingDoorbell @ 0x1C000F5FC (XilCommand_SendRequestToRingDoorbell.c)
 *     XilCoreCommand_DirectWriteDoorbell @ 0x1C003FFB0 (XilCoreCommand_DirectWriteDoorbell.c)
 */

__int64 __fastcall XilCommand_WriteDoorbell(__int64 a1)
{
  _BYTE *v1; // rcx

  v1 = (_BYTE *)(a1 + 136);
  if ( *v1 )
    return XilCommand_SendRequestToRingDoorbell((__int64)v1);
  else
    return XilCoreCommand_DirectWriteDoorbell(v1 + 16);
}
