/*
 * XREFs of PsGetProcessInheritedFromUniqueProcessId @ 0x1400E7A10
 * Callers:
 *     PsChargeProcessWakeCounter @ 0x1404C80E0 (PsChargeProcessWakeCounter.c)
 *     AlpcpCompleteDispatchMessage @ 0x140525120 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessInheritedFromUniqueProcessId(__int64 a1)
{
  return *(_QWORD *)(a1 + 992);
}
