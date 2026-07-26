/*
 * XREFs of NdisOffloadTcpReceiveReturn @ 0x1C0066CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisOffloadTcpReceiveReturn(NDIS_HANDLE NdisBindingHandle, PNET_BUFFER_LIST NetBufferList)
{
  (*(void (__fastcall **)(_QWORD, PNET_BUFFER_LIST))(*(_QWORD *)(*((_QWORD *)NdisBindingHandle + 2) + 3784LL) + 632LL))(
    *((_QWORD *)NdisBindingHandle + 7),
    NetBufferList);
}
