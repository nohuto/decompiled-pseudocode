/*
 * XREFs of CmpInitSIDToHiveMapping @ 0x140655C0C
 * Callers:
 *     CmInitSystem1 @ 0x1408B04E0 (CmInitSystem1.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x1400751C0 (KeInitializeGuardedMutex.c)
 */

void CmpInitSIDToHiveMapping()
{
  KeInitializeGuardedMutex(&CmpSIDMappingLock);
}
