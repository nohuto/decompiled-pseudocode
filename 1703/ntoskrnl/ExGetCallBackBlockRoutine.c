/*
 * XREFs of ExGetCallBackBlockRoutine @ 0x14008BD80
 * Callers:
 *     PspCallProcessNotifyRoutines @ 0x1404FA068 (PspCallProcessNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x1404FA280 (PspCallThreadNotifyRoutines.c)
 *     PsCallImageNotifyRoutines @ 0x1404FA3F0 (PsCallImageNotifyRoutines.c)
 *     DbgkLkmdRegisterCallback @ 0x1405A8840 (DbgkLkmdRegisterCallback.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x1405A8C54 (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkLkmdUnregisterCallback @ 0x140682040 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x1406820EC (DbgkpLkmdFireCallbacks.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x1406E3D90 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x1406E3E90 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExGetCallBackBlockRoutine(__int64 a1)
{
  return *(_QWORD *)(a1 + 8);
}
