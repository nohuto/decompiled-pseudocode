/*
 * XREFs of ?Uninitialize@UmfdAllocation@@SAXXZ @ 0x1C01237E8
 * Callers:
 *     ?Initialize@UmfdAllocation@@SA_NXZ @ 0x1C00FE798 (-Initialize@UmfdAllocation@@SA_NXZ.c)
 *     UmfdSessionUninitialize @ 0x1C0123710 (UmfdSessionUninitialize.c)
 * Callees:
 *     ?Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C0123824 (-Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void UmfdAllocation::Uninitialize(void)
{
  if ( UmfdAllocation::s_allocationLookup )
  {
    NSInstrumentation::CPointerHashTable::Destroy(UmfdAllocation::s_allocationLookup);
    UmfdAllocation::s_allocationLookup = 0LL;
  }
  if ( UmfdAllocation::s_allocationLookupLock )
    EngFreeMem(UmfdAllocation::s_allocationLookupLock);
}
