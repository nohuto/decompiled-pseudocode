/*
 * XREFs of ?VmBusSendCreatePagingQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATEPAGINGQUEUE@@PEAUDXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN@@@Z @ 0x1C0195CB0
 * Callers:
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C0092C50 (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 * Callees:
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0198920 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreatePagingQueue(
        struct VMBCHANNEL__ **this,
        int a2,
        int a3,
        const struct _D3DKMT_CREATEPAGINGQUEUE *a4,
        struct DXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN *a5)
{
  __int128 v5; // xmm0
  struct DXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN *v6; // rbx
  __int128 v7; // xmm1
  struct VMBCHANNEL__ *v8; // rcx
  struct _MDL *v10; // [rsp+28h] [rbp-48h]
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  int v12; // [rsp+38h] [rbp-38h]
  int v13; // [rsp+3Ch] [rbp-34h]
  int v14; // [rsp+40h] [rbp-30h]
  __int128 v15; // [rsp+48h] [rbp-28h]
  __int128 v16; // [rsp+58h] [rbp-18h]
  unsigned int v17; // [rsp+88h] [rbp+18h] BYREF

  v5 = *(_OWORD *)&a4->hDevice;
  v6 = a5;
  v7 = *(_OWORD *)&a4->FenceValueCPUVirtualAddress;
  v8 = *this;
  v11 = 0LL;
  v13 = 0;
  v15 = v5;
  LODWORD(v15) = a3;
  v12 = a2;
  v14 = 9;
  v16 = v7;
  v17 = 24;
  VmBusSendSyncMessage(v8, (struct DXGKVMB_COMMAND_BASE *)&v11, 0x38u, a5, &v17, v10);
  if ( v17 >= 0x18 && *((_DWORD *)v6 + 1) )
    return 0LL;
  else
    return 3221225473LL;
}
