/*
 * XREFs of ?VmBusSendCreatePagingQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATEPAGINGQUEUE@@PEAUDXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN@@@Z @ 0x1C0182454
 * Callers:
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00F2914 (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 * Callees:
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C018557C (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreatePagingQueue(
        struct VMBCHANNEL__ **this,
        int a2,
        int a3,
        const struct _D3DKMT_CREATEPAGINGQUEUE *a4,
        struct DXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN *a5)
{
  __int128 v5; // xmm0
  struct DXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN *v6; // rdi
  __int128 v7; // xmm1
  struct VMBCHANNEL__ *v8; // rcx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v12; // rax
  struct _MDL *v13; // [rsp+28h] [rbp-48h]
  __int64 v14; // [rsp+30h] [rbp-40h] BYREF
  int v15; // [rsp+38h] [rbp-38h]
  int v16; // [rsp+3Ch] [rbp-34h]
  int v17; // [rsp+40h] [rbp-30h]
  __int128 v18; // [rsp+48h] [rbp-28h]
  __int128 v19; // [rsp+58h] [rbp-18h]
  unsigned int v20; // [rsp+88h] [rbp+18h] BYREF

  v5 = *(_OWORD *)&a4->hDevice;
  v6 = a5;
  v7 = *(_OWORD *)&a4->FenceValueCPUVirtualAddress;
  v8 = *this;
  v14 = 0LL;
  v16 = 0;
  v18 = v5;
  LODWORD(v18) = a3;
  v15 = a2;
  v17 = 9;
  v19 = v7;
  v20 = 24;
  v10 = VmBusSendSyncMessage(v8, (struct DXGKVMB_COMMAND_BASE *)&v14, 0x38u, a5, &v20, v13);
  if ( v10 >= 0 )
  {
    v10 = -1073741823;
    if ( v20 >= 0x18 )
    {
      if ( *((_DWORD *)v6 + 1) )
        return 0LL;
    }
  }
  v12 = WdLogNewEntry5_WdError(v9);
  *(_QWORD *)(v12 + 24) = v10;
  WdLogEvent5_WdError(v12);
  return (unsigned int)v10;
}
