/*
 * XREFs of PsQuitNextPartition @ 0x14024FD6C
 * Callers:
 *     ExpNodeHotAddProcessorWorker @ 0x14075E6C0 (ExpNodeHotAddProcessorWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     PsDereferencePartition @ 0x1400B8F3C (PsDereferencePartition.c)
 */

LONG_PTR __fastcall PsQuitNextPartition(PVOID Object)
{
  PsDereferencePartition((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x6E457350u);
}
