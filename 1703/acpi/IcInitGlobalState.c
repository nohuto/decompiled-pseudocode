/*
 * XREFs of IcInitGlobalState @ 0x1C0083A5C
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1C00AA9C4 (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

__int64 IcInitGlobalState()
{
  qword_1C0076528 = (__int64)&IcListHead;
  IcListHead = (__int64)&IcListHead;
  return 0LL;
}
