/*
 * XREFs of AcpiCheckExternalConnection @ 0x1C008D4D4
 * Callers:
 *     IrqArbAddAllocation @ 0x1C00889C0 (IrqArbAddAllocation.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1C008D3BC (ACPIRootIrpQueryBusRelations.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C009522C (IrqArbpFindSuitableRangeIsa.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C00A17A4 (AcpiExternalTranslateBiosToNtResources.c)
 * Callees:
 *     QueryExternalTranslatorInterface @ 0x1C0095F94 (QueryExternalTranslatorInterface.c)
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
