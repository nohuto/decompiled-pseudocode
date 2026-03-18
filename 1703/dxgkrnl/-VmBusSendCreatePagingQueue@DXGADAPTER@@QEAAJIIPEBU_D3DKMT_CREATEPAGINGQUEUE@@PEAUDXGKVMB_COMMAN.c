/*
 * XREFs of ?VmBusSendCreatePagingQueue@DXGADAPTER@@QEAAJIIPEBU_D3DKMT_CREATEPAGINGQUEUE@@PEAUDXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN@@@Z @ 0x1C002F724
 * Callers:
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00BFDFC (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 * Callees:
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0032214 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendCreatePagingQueue(
        DXGADAPTER *this,
        int a2,
        int a3,
        const struct _D3DKMT_CREATEPAGINGQUEUE *a4,
        struct DXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN *a5)
{
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  struct DXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN *v7; // rbx
  struct VMBCHANNEL__ *v8; // rcx
  struct _MDL *v10; // [rsp+28h] [rbp-40h]
  __int64 v11; // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+38h] [rbp-30h]
  int v13; // [rsp+3Ch] [rbp-2Ch]
  __int128 v14; // [rsp+40h] [rbp-28h]
  __int128 v15; // [rsp+50h] [rbp-18h]
  unsigned int v16; // [rsp+78h] [rbp+10h] BYREF

  v5 = *(_OWORD *)&a4->hDevice;
  v11 = 0LL;
  v6 = *(_OWORD *)&a4->FenceValueCPUVirtualAddress;
  v7 = a5;
  v8 = (struct VMBCHANNEL__ *)*((_QWORD *)this + 484);
  v13 = a2;
  v12 = 12;
  v16 = 24;
  v14 = v5;
  LODWORD(v14) = a3;
  v15 = v6;
  VmBusSendSyncMessage(v8, (struct DXGKVMB_COMMAND *)&v11, 0x30u, a5, &v16, v10);
  if ( v16 >= 0x18 && *((_DWORD *)v7 + 1) )
    return 0LL;
  else
    return 3221225473LL;
}
