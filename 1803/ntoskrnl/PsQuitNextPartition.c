/*
 * XREFs of PsQuitNextPartition @ 0x14028582C
 * Callers:
 *     ExpNodeHotAddProcessorWorker @ 0x1407C5580 (ExpNodeHotAddProcessorWorker.c)
 * Callees:
 *     PsDereferencePartition @ 0x14006FEF8 (PsDereferencePartition.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsQuitNextPartition(PVOID Object)
{
  PsDereferencePartition((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x6E457350u);
}
