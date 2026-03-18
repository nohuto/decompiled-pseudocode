/*
 * XREFs of ExGetCallBackBlockContext @ 0x14003F058
 * Callers:
 *     PspCallProcessNotifyRoutines @ 0x1404B655C (PspCallProcessNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x1404B67E0 (PspCallThreadNotifyRoutines.c)
 *     PsCallImageNotifyRoutines @ 0x1404B6940 (PsCallImageNotifyRoutines.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140628520 (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkpLkmdFireCallbacks @ 0x140711C5C (DbgkpLkmdFireCallbacks.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x14077E100 (PsRemoveCreateThreadNotifyRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExGetCallBackBlockContext(__int64 a1)
{
  return *(_QWORD *)(a1 + 16);
}
