/*
 * XREFs of FreeObjectHandle @ 0x1C005E124
 * Callers:
 *     ACPIGet @ 0x1C0002C00 (ACPIGet.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C0011420 (PciConfigSpaceHandlerWorker.c)
 *     GetPciAddressWorker @ 0x1C0011980 (GetPciAddressWorker.c)
 *     AMLIIterateSiblingsNext @ 0x1C001FA30 (AMLIIterateSiblingsNext.c)
 *     EnableDisableCMOSRegions @ 0x1C0024B70 (EnableDisableCMOSRegions.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C00156D8 (DereferenceObjectEx.c)
 */

void __fastcall FreeObjectHandle(_QWORD *a1)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)*a1;
  if ( a1 == v2 + 15 )
  {
    DereferenceObjectEx(v2);
  }
  else
  {
    DereferenceObjectEx(v2);
    HeapFree((__int64)a1);
  }
}
