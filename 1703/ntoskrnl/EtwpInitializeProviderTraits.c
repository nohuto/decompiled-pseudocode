/*
 * XREFs of EtwpInitializeProviderTraits @ 0x1405D59C8
 * Callers:
 *     EtwpInitialize @ 0x1407FBF08 (EtwpInitialize.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x140067180 (KeInitializeGuardedMutex.c)
 */

void EtwpInitializeProviderTraits()
{
  KeInitializeGuardedMutex(&EtwpProviderTraitsKmMutex);
  EtwpProviderTraitsKmTree = 0LL;
  KeInitializeGuardedMutex(&EtwpProviderTraitsUmMutex);
  EtwpProviderTraitsUmTree = 0LL;
}
