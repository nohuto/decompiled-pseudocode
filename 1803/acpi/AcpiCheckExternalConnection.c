/*
 * XREFs of AcpiCheckExternalConnection @ 0x1C007A724
 * Callers:
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C007A814 (AcpiExternalTranslateBiosToNtResources.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1C0087654 (ACPIRootIrpQueryBusRelations.c)
 *     IrqArbAddAllocation @ 0x1C008F8F0 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C00910D4 (IrqArbpFindSuitableRangeIsa.c)
 * Callees:
 *     QueryExternalTranslatorInterface @ 0x1C007AE44 (QueryExternalTranslatorInterface.c)
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
