/*
 * XREFs of PnpDeviceCompletionRequestDestroy @ 0x1400FB974
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x1400FB8B0 (PnpDeviceCompletionRoutine.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140553144 (PnpDeviceCompletionProcessCompletedRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDeviceCompletionRequestDestroy(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 14, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0x31706E50u);
}
