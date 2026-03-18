/*
 * XREFs of LinkNodeInitGlobalState @ 0x1C0083A3C
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1C00AA9C4 (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

__int64 LinkNodeInitGlobalState()
{
  qword_1C0076578 = (__int64)&LinkNodeListHead;
  LinkNodeListHead = (__int64)&LinkNodeListHead;
  return 0LL;
}
