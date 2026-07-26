/*
 * XREFs of NdisMDeregisterScatterGatherDma @ 0x1C00BFA30
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceDmaAdapter @ 0x1C0025F04 (ndisDereferenceDmaAdapter.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

void __stdcall NdisMDeregisterScatterGatherDma(NDIS_HANDLE NdisMiniportDmaHandle)
{
  __int64 v1; // rbx

  v1 = *((_QWORD *)NdisMiniportDmaHandle + 1);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x12u, &WPP_27989bf75f273fb4647da878cf4d879f_Traceguids, v1);
  ndisDereferenceDmaAdapter(NdisMiniportDmaHandle);
  *(_DWORD *)(v1 + 120) &= ~0x200u;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x13u, &WPP_27989bf75f273fb4647da878cf4d879f_Traceguids, v1);
}
