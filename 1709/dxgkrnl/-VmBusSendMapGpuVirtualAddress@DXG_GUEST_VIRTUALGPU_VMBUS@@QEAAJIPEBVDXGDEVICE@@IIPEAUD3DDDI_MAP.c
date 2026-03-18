/*
 * XREFs of ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C019706C
 * Callers:
 *     ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x1C007D2CC (-MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C0097830 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C00EBAF0 (DxgkMapGpuVirtualAddress.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C01C78F8 (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0198920 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
        struct VMBCHANNEL__ **this,
        int a2,
        const struct DXGDEVICE *a3,
        int a4,
        unsigned int a5,
        struct D3DDDI_MAPGPUVIRTUALADDRESS *a6)
{
  int v7; // ecx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  struct VMBCHANNEL__ *v13; // rcx
  __int64 v14; // rcx
  __int64 v16; // rax
  struct _MDL *v17; // [rsp+28h] [rbp-81h]
  unsigned int v18[4]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v19; // [rsp+40h] [rbp-69h] BYREF
  int v20; // [rsp+48h] [rbp-61h]
  int v21; // [rsp+4Ch] [rbp-5Dh]
  int v22; // [rsp+50h] [rbp-59h]
  __int128 v23; // [rsp+58h] [rbp-51h]
  __int128 v24; // [rsp+68h] [rbp-41h]
  __int128 v25; // [rsp+78h] [rbp-31h]
  __int128 v26; // [rsp+88h] [rbp-21h]
  __int128 v27; // [rsp+98h] [rbp-11h]
  __int128 v28; // [rsp+A8h] [rbp-1h]
  UINT64 PagingFenceValue; // [rsp+B8h] [rbp+Fh]
  int v30; // [rsp+C0h] [rbp+17h]
  _QWORD v31[2]; // [rsp+D0h] [rbp+27h] BYREF
  unsigned int v32; // [rsp+E0h] [rbp+37h]

  v7 = 0;
  v19 = 0LL;
  v20 = a2;
  v21 = 0;
  v22 = 17;
  v8 = *(_OWORD *)&a6->MinimumAddress;
  v23 = *(_OWORD *)&a6->hPagingQueue;
  LODWORD(v23) = a4;
  v9 = *(_OWORD *)&a6->hAllocation;
  v24 = v8;
  v10 = *(_OWORD *)&a6->SizeInPages;
  v25 = v9;
  LODWORD(v25) = a5;
  v11 = *(_OWORD *)&a6->DriverProtection;
  v26 = v10;
  v12 = *(_OWORD *)&a6->Reserved1;
  v27 = v11;
  PagingFenceValue = a6->PagingFenceValue;
  v28 = v12;
  if ( a3 )
    v7 = *((_DWORD *)a3 + 84);
  v30 = v7;
  v13 = *this;
  v18[0] = 24;
  VmBusSendSyncMessage(v13, (struct DXGKVMB_COMMAND_BASE *)&v19, 0x88u, v31, v18, v17);
  if ( v18[0] < 0x18 )
  {
    v16 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v16 + 24) = 6042LL;
    WdLogEvent5_WdError(v16);
    return 3221225473LL;
  }
  else
  {
    a6->VirtualAddress = v31[0];
    a6->PagingFenceValue = v31[1];
    return v32;
  }
}
