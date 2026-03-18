/*
 * XREFs of IoGetFileObjectGenericMapping @ 0x14055ED60
 * Callers:
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x140221DC8 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     VfUtilIsLocalSystem @ 0x140813FA8 (VfUtilIsLocalSystem.c)
 * Callees:
 *     <none>
 */

PGENERIC_MAPPING IoGetFileObjectGenericMapping(void)
{
  return (PGENERIC_MAPPING)&IopFileMapping;
}
