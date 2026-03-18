/*
 * XREFs of ?VmBusSendReserveGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C0184714
 * Callers:
 *     DxgkReserveGpuVirtualAddress @ 0x1C00DD2E0 (DxgkReserveGpuVirtualAddress.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C018557C (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendReserveGpuVirtualAddress(
        struct VMBCHANNEL__ **this,
        int a2,
        int a3,
        struct D3DDDI_RESERVEGPUVIRTUALADDRESS *a4)
{
  __int128 v4; // xmm0
  struct VMBCHANNEL__ *v5; // rcx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rax
  struct _MDL *v14; // [rsp+28h] [rbp-51h]
  unsigned int v15[4]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v16; // [rsp+40h] [rbp-39h] BYREF
  int v17; // [rsp+48h] [rbp-31h]
  int v18; // [rsp+4Ch] [rbp-2Dh]
  int v19; // [rsp+50h] [rbp-29h]
  __int128 v20; // [rsp+58h] [rbp-21h]
  __int128 v21; // [rsp+68h] [rbp-11h]
  __int128 v22; // [rsp+78h] [rbp-1h]
  __int128 v23; // [rsp+88h] [rbp+Fh]
  UINT64 PagingFenceValue; // [rsp+98h] [rbp+1Fh]
  _QWORD v25[2]; // [rsp+A0h] [rbp+27h] BYREF

  v4 = *(_OWORD *)&a4->hPagingQueue;
  v5 = *this;
  v7 = *(_OWORD *)&a4->MinimumAddress;
  v16 = 0LL;
  v18 = 0;
  v20 = v4;
  v17 = a2;
  v8 = *(_OWORD *)&a4->Size;
  LODWORD(v20) = a3;
  v21 = v7;
  v19 = 18;
  v9 = *(_OWORD *)&a4->DriverProtection;
  v15[0] = 16;
  v22 = v8;
  PagingFenceValue = a4->PagingFenceValue;
  v23 = v9;
  v11 = VmBusSendSyncMessage(v5, (struct DXGKVMB_COMMAND_BASE *)&v16, 0x60u, v25, v15, v14);
  if ( v11 < 0 || (v11 = -1073741823, v15[0] < 0x10) )
  {
    v12 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v12 + 24) = v11;
    WdLogEvent5_WdError(v12);
  }
  else
  {
    v11 = 0;
    a4->VirtualAddress = v25[0];
    a4->PagingFenceValue = v25[1];
  }
  return (unsigned int)v11;
}
