/*
 * XREFs of NdisIMGetBindingContext @ 0x1C00E3D70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

NDIS_HANDLE __stdcall NdisIMGetBindingContext(NDIS_HANDLE NdisBindingHandle)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)NdisBindingHandle + 2);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(0x2Fu, &WPP_666d18e4e4b135fd66b72aa04d21ecd1_Traceguids, (__int64)NdisBindingHandle);
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0x30u, &WPP_666d18e4e4b135fd66b72aa04d21ecd1_Traceguids, (__int64)NdisBindingHandle);
  }
  return *(NDIS_HANDLE *)(v1 + 1976);
}
