/*
 * XREFs of PnpDeviceCompletionRequestDestroy @ 0x140080F24
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x140080E60 (PnpDeviceCompletionRoutine.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1404DB7F0 (PnpDeviceCompletionProcessCompletedRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDeviceCompletionRequestDestroy(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 14, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0x31706E50u);
}
