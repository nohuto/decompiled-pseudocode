/*
 * XREFs of ?ndisNblTrackerVerifyNoNblsHeld@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C0001CC4
 * Callers:
 *     NdisNblTrackerDeregisterComponent @ 0x1C000F1B0 (NdisNblTrackerDeregisterComponent.c)
 * Callees:
 *     ndisNblTrackerAreNblsOutstandingOnComponent @ 0x1C0001D00 (ndisNblTrackerAreNblsOutstandingOnComponent.c)
 *     ndisBugCheckEx @ 0x1C004F1C8 (ndisBugCheckEx.c)
 */

void __fastcall ndisNblTrackerVerifyNoNblsHeld(ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // ebx

  v2 = 0;
  while ( !(unsigned __int8)ndisNblTrackerAreNblsOutstandingOnComponent(BugCheckParameter3, v2) )
  {
    if ( ++v2 >= 2 )
      return;
  }
  if ( !ndisNblTrackerLeakedNblDisposition )
    ndisBugCheckEx(0x27uLL, 1uLL, BugCheckParameter3, 0LL);
  if ( ndisNblTrackerLeakedNblDisposition == 2 && !(_BYTE)KdDebuggerNotPresent )
    __int2c();
}
