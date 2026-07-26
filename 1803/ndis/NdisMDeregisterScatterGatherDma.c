/*
 * XREFs of NdisMDeregisterScatterGatherDma @ 0x1C00B3230
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceDmaAdapter @ 0x1C00130C4 (ndisDereferenceDmaAdapter.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __stdcall NdisMDeregisterScatterGatherDma(NDIS_HANDLE NdisMiniportDmaHandle)
{
  __int64 v1; // rbx

  v1 = *((_QWORD *)NdisMiniportDmaHandle + 1);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x12u, &WPP_b7380f6131c0382fffce9713ea39f3ba_Traceguids, v1);
  ndisDereferenceDmaAdapter(NdisMiniportDmaHandle);
  *(_DWORD *)(v1 + 120) &= ~0x200u;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x13u, &WPP_b7380f6131c0382fffce9713ea39f3ba_Traceguids, v1);
}
