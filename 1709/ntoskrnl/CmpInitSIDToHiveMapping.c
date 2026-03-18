/*
 * XREFs of CmpInitSIDToHiveMapping @ 0x1405BF79C
 * Callers:
 *     CmInitSystem1 @ 0x14083BF10 (CmInitSystem1.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x1400FB0E0 (KeInitializeGuardedMutex.c)
 */

void CmpInitSIDToHiveMapping()
{
  KeInitializeGuardedMutex(&CmpSIDMappingLock);
}
