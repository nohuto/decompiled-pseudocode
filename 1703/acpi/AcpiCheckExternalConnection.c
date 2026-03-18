/*
 * XREFs of AcpiCheckExternalConnection @ 0x1C008C8D4
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0086020 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C00898E8 (IrqArbpFindSuitableRangeIsa.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1C008C928 (ACPIRootIrpQueryBusRelations.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C009E7AC (AcpiExternalTranslateBiosToNtResources.c)
 * Callees:
 *     <none>
 */

__int64 AcpiCheckExternalConnection()
{
  PVOID v0; // rbx
  __int64 result; // rax

  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(&ExternalTranslatorInterfaceLock, 1u);
  v0 = ExternalTranslationInterface;
  ExReleaseResourceLite(&ExternalTranslatorInterfaceLock);
  KeLeaveCriticalRegion();
  result = 0LL;
  if ( !v0 )
    return QueryExternalTranslatorInterface();
  return result;
}
