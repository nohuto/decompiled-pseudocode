/*
 * XREFs of NdisMCmDeleteVc @ 0x1C0108D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisMCmDeleteVc(NDIS_HANDLE NdisVcHandle)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)NdisVcHandle + 9);
  if ( *(_QWORD *)(v1 + 32) )
    return NdisCoDeleteVc(*(NDIS_HANDLE *)(v1 + 32));
  else
    return NdisCoDeleteVc(*(NDIS_HANDLE *)(v1 + 40));
}
