/*
 * XREFs of IcInitGlobalState @ 0x1C008D39C
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1C00AFBDC (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

__int64 IcInitGlobalState()
{
  qword_1C0078588 = (__int64)&IcListHead;
  IcListHead = (__int64)&IcListHead;
  return 0LL;
}
