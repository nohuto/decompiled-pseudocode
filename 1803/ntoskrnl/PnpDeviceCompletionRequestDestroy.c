/*
 * XREFs of PnpDeviceCompletionRequestDestroy @ 0x1401467B0
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x1401466F0 (PnpDeviceCompletionRoutine.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1405D39C8 (PnpDeviceCompletionProcessCompletedRequest.c)
 * Callees:
 *     PnpDisableDeviceCompletionQueueWatchdog @ 0x1401468A8 (PnpDisableDeviceCompletionQueueWatchdog.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDeviceCompletionRequestDestroy(PVOID P)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 14, 0xFFFFFFFF) == 1 )
  {
    if ( *((_QWORD *)P + 15) )
    {
      PnpDisableDeviceCompletionQueueWatchdog();
      ExFreePoolWithTag(*((PVOID *)P + 15), 0x57647050u);
      *((_QWORD *)P + 15) = 0LL;
    }
    ExFreePoolWithTag(P, 0x31706E50u);
  }
}
