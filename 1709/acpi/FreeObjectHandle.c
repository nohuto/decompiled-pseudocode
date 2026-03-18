/*
 * XREFs of FreeObjectHandle @ 0x1C005ECC0
 * Callers:
 *     ACPIGet @ 0x1C0006FE0 (ACPIGet.c)
 *     AMLIIterateSiblingsNext @ 0x1C0013824 (AMLIIterateSiblingsNext.c)
 *     EnableDisableCMOSRegions @ 0x1C0013D70 (EnableDisableCMOSRegions.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C00178B0 (PciConfigSpaceHandlerWorker.c)
 *     GetPciAddressWorker @ 0x1C0017E10 (GetPciAddressWorker.c)
 * Callees:
 *     HeapFree @ 0x1C000D8A0 (HeapFree.c)
 *     DereferenceObjectEx @ 0x1C001B118 (DereferenceObjectEx.c)
 */

void __fastcall FreeObjectHandle(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( a1 == (__int64 *)(v2 + 120) )
  {
    DereferenceObjectEx(v2);
  }
  else
  {
    DereferenceObjectEx(v2);
    HeapFree((__int64)a1);
  }
}
