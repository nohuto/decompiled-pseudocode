/*
 * XREFs of NdisTerminateOffload @ 0x1C00681D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     ?AdjustOffloadContext@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST@@H@Z @ 0x1C0067A7C (-AdjustOffloadContext@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST@@H@Z.c)
 */

void __stdcall NdisTerminateOffload(NDIS_HANDLE NdisBindingHandle, PNDIS_PROTOCOL_OFFLOAD_BLOCK_LIST OffloadBlockList)
{
  __int64 v3; // r11

  AdjustOffloadContext((struct _NDIS_OPEN_BLOCK *)NdisBindingHandle, OffloadBlockList, 0);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*((_QWORD *)NdisBindingHandle + 2) + 3784LL) + 568LL))(
    *((_QWORD *)NdisBindingHandle + 7),
    v3);
}
