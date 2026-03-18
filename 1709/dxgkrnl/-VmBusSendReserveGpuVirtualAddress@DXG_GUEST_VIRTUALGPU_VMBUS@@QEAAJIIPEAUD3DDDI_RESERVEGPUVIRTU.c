/*
 * XREFs of ?VmBusSendReserveGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C0197B2C
 * Callers:
 *     DxgkReserveGpuVirtualAddress @ 0x1C00BC110 (DxgkReserveGpuVirtualAddress.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0198920 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
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
  struct _MDL *v11; // [rsp+28h] [rbp-41h]
  unsigned int v12[4]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v13; // [rsp+40h] [rbp-29h] BYREF
  int v14; // [rsp+48h] [rbp-21h]
  int v15; // [rsp+4Ch] [rbp-1Dh]
  int v16; // [rsp+50h] [rbp-19h]
  __int128 v17; // [rsp+58h] [rbp-11h]
  __int128 v18; // [rsp+68h] [rbp-1h]
  __int128 v19; // [rsp+78h] [rbp+Fh]
  __int128 v20; // [rsp+88h] [rbp+1Fh]
  UINT64 PagingFenceValue; // [rsp+98h] [rbp+2Fh]
  _QWORD v22[2]; // [rsp+A0h] [rbp+37h] BYREF

  v4 = *(_OWORD *)&a4->hPagingQueue;
  v5 = *this;
  v7 = *(_OWORD *)&a4->MinimumAddress;
  v13 = 0LL;
  v15 = 0;
  v17 = v4;
  v14 = a2;
  v8 = *(_OWORD *)&a4->Size;
  LODWORD(v17) = a3;
  v18 = v7;
  v16 = 18;
  v9 = *(_OWORD *)&a4->DriverProtection;
  v12[0] = 16;
  v19 = v8;
  PagingFenceValue = a4->PagingFenceValue;
  v20 = v9;
  VmBusSendSyncMessage(v5, (struct DXGKVMB_COMMAND_BASE *)&v13, 0x60u, v22, v12, v11);
  if ( v12[0] < 0x10 )
    return 3221225473LL;
  a4->VirtualAddress = v22[0];
  a4->PagingFenceValue = v22[1];
  return 0LL;
}
