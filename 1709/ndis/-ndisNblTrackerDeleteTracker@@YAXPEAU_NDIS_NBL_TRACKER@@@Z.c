/*
 * XREFs of ?ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C0002374
 * Callers:
 *     NdisNblTrackerDeregisterComponent @ 0x1C000F1B0 (NdisNblTrackerDeregisterComponent.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C00100B0 (NdisNblTrackerRegisterComponent.c)
 * Callees:
 *     ndisFreePerProcessorSlot @ 0x1C001E500 (ndisFreePerProcessorSlot.c)
 */

void __fastcall ndisNblTrackerDeleteTracker(char *P)
{
  __int64 *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rcx

  v2 = (__int64 *)(P + 40);
  v3 = 2LL;
  do
  {
    v4 = *v2;
    if ( *v2 )
    {
      *v2 = 0LL;
      ndisFreePerProcessorSlot(v4, 1802781774LL);
    }
    v2 += 2;
    --v3;
  }
  while ( v3 );
  ExFreePoolWithTag(P, 0);
}
