/*
 * XREFs of NdisInitiateOffload @ 0x1C0067DA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     ?AdjustOffloadContext@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST@@H@Z @ 0x1C0067A7C (-AdjustOffloadContext@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST@@H@Z.c)
 */

void __stdcall NdisInitiateOffload(NDIS_HANDLE NdisBindingHandle, PNDIS_PROTOCOL_OFFLOAD_BLOCK_LIST OffloadBlockList)
{
  __int64 v3; // r11
  __int64 v4; // r11

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NdisBindingHandle + 2) + 3784LL) + 560LL) )
  {
    AdjustOffloadContext((struct _NDIS_OPEN_BLOCK *)NdisBindingHandle, OffloadBlockList, 0);
    (*(void (__fastcall **)(_QWORD, PNDIS_PROTOCOL_OFFLOAD_BLOCK_LIST))(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 3784LL)
                                                                      + 560LL))(
      *(_QWORD *)(v4 + 56),
      OffloadBlockList);
  }
  else
  {
    AdjustOffloadContext((struct _NDIS_OPEN_BLOCK *)NdisBindingHandle, OffloadBlockList, -1073741637);
    (*(void (__fastcall **)(_QWORD, PNDIS_PROTOCOL_OFFLOAD_BLOCK_LIST))(*(_QWORD *)(v3 + 24) + 776LL))(
      *(_QWORD *)(v3 + 32),
      OffloadBlockList);
  }
}
