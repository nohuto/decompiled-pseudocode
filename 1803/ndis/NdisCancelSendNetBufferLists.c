/*
 * XREFs of NdisCancelSendNetBufferLists @ 0x1C005C110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisCancelSendNetBufferLists(NDIS_HANDLE NdisBindingHandle, PVOID CancelId)
{
  (*(void (__fastcall **)(NDIS_HANDLE, PVOID))(*((_QWORD *)NdisBindingHandle + 2) + 184LL))(NdisBindingHandle, CancelId);
}
