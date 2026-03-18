/*
 * XREFs of ExGetCallBackBlockRoutine @ 0x14003EAF0
 * Callers:
 *     PspCallProcessNotifyRoutines @ 0x1404B655C (PspCallProcessNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x1404B67E0 (PspCallThreadNotifyRoutines.c)
 *     PsCallImageNotifyRoutines @ 0x1404B6940 (PsCallImageNotifyRoutines.c)
 *     DbgkLkmdRegisterCallback @ 0x1406280A0 (DbgkLkmdRegisterCallback.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140628520 (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkLkmdUnregisterCallback @ 0x140711BB0 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x140711C5C (DbgkpLkmdFireCallbacks.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x14077E100 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x14077E200 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExGetCallBackBlockRoutine(__int64 a1)
{
  return *(_QWORD *)(a1 + 8);
}
