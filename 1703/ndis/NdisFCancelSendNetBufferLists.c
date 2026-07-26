/*
 * XREFs of NdisFCancelSendNetBufferLists @ 0x1C0059490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisFCancelSendNetBufferLists(NDIS_HANDLE NdisFilterHandle, PVOID CancelId)
{
  (*((void (__fastcall **)(NDIS_HANDLE, PVOID))NdisFilterHandle + 81))(NdisFilterHandle, CancelId);
}
