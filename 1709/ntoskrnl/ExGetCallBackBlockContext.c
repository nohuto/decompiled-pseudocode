/*
 * XREFs of ExGetCallBackBlockContext @ 0x1400A63E0
 * Callers:
 *     PspCallProcessNotifyRoutines @ 0x1404D265C (PspCallProcessNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x1404D28E0 (PspCallThreadNotifyRoutines.c)
 *     PsCallImageNotifyRoutines @ 0x1404D2A40 (PsCallImageNotifyRoutines.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x1405CC504 (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkpLkmdFireCallbacks @ 0x1406AD3AC (DbgkpLkmdFireCallbacks.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x14071A700 (PsRemoveCreateThreadNotifyRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExGetCallBackBlockContext(__int64 a1)
{
  return *(_QWORD *)(a1 + 16);
}
