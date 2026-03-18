/*
 * XREFs of EtwpDeleteRealTimeConnectionObject @ 0x1404524A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 */

LONG_PTR __fastcall EtwpDeleteRealTimeConnectionObject(HANDLE *a1)
{
  ZwClose(a1[2]);
  ObfDereferenceObject(a1[6]);
  return ObfDereferenceObject(a1[7]);
}
