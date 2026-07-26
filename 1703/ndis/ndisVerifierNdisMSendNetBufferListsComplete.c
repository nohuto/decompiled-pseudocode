/*
 * XREFs of ndisVerifierNdisMSendNetBufferListsComplete @ 0x1C0065DE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisVerifierNdisMSendNetBufferListsComplete(__int64 a1, __int64 a2, __int64 a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, void (__stdcall *)(NDIS_HANDLE, PNET_BUFFER_LIST, ULONG)))ndisVerifierNdisDispatch->NdisMSendNetBufferListsComplete)(
           a1,
           a2,
           a3,
           *(_QWORD *)(a1 + 4992),
           NdisMSendNetBufferListsComplete);
}
