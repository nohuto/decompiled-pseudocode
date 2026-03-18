/*
 * XREFs of PsGetProcessInheritedFromUniqueProcessId @ 0x14006AE00
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x1404A1000 (AlpcpCompleteDispatchMessage.c)
 *     PsChargeProcessWakeCounter @ 0x140599290 (PsChargeProcessWakeCounter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessInheritedFromUniqueProcessId(__int64 a1)
{
  return *(_QWORD *)(a1 + 992);
}
