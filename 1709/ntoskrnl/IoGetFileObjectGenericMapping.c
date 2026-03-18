/*
 * XREFs of IoGetFileObjectGenericMapping @ 0x14056FCD0
 * Callers:
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1401E3B78 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     VfUtilIsLocalSystem @ 0x1407A6E28 (VfUtilIsLocalSystem.c)
 * Callees:
 *     <none>
 */

PGENERIC_MAPPING IoGetFileObjectGenericMapping(void)
{
  return (PGENERIC_MAPPING)&IopFileMapping;
}
