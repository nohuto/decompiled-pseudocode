/*
 * XREFs of PsGetProcessInheritedFromUniqueProcessId @ 0x140060450
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x1404CD0A0 (AlpcpCompleteDispatchMessage.c)
 *     PsChargeProcessWakeCounter @ 0x14057FFB0 (PsChargeProcessWakeCounter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessInheritedFromUniqueProcessId(__int64 a1)
{
  return *(_QWORD *)(a1 + 992);
}
