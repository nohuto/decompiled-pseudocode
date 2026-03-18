/*
 * XREFs of IoGetFileObjectGenericMapping @ 0x14043E710
 * Callers:
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1401DF684 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     VfUtilIsLocalSystem @ 0x140765258 (VfUtilIsLocalSystem.c)
 * Callees:
 *     <none>
 */

PGENERIC_MAPPING IoGetFileObjectGenericMapping(void)
{
  return (PGENERIC_MAPPING)&IopFileMapping;
}
