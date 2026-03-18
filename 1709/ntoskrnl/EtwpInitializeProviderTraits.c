/*
 * XREFs of EtwpInitializeProviderTraits @ 0x1405F1F64
 * Callers:
 *     EtwpInitialize @ 0x140840858 (EtwpInitialize.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x1400FB0E0 (KeInitializeGuardedMutex.c)
 */

void EtwpInitializeProviderTraits()
{
  KeInitializeGuardedMutex(&EtwpProviderTraitsKmMutex);
  *(_OWORD *)&EtwpProviderTraitsKmTree = 0LL;
  KeInitializeGuardedMutex(&EtwpProviderTraitsUmMutex);
  *(_OWORD *)&EtwpProviderTraitsUmTree = 0LL;
}
