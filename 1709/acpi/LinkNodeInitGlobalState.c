/*
 * XREFs of LinkNodeInitGlobalState @ 0x1C008D37C
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1C00AFBDC (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

__int64 LinkNodeInitGlobalState()
{
  qword_1C00785D8 = (__int64)&LinkNodeListHead;
  LinkNodeListHead = (__int64)&LinkNodeListHead;
  return 0LL;
}
