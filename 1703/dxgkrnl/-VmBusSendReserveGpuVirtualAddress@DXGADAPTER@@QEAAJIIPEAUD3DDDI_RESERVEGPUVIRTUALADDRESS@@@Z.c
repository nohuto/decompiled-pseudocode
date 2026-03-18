/*
 * XREFs of ?VmBusSendReserveGpuVirtualAddress@DXGADAPTER@@QEAAJIIPEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C0031524
 * Callers:
 *     DxgkReserveGpuVirtualAddress @ 0x1C00A36F0 (DxgkReserveGpuVirtualAddress.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0032214 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendReserveGpuVirtualAddress(
        DXGADAPTER *this,
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
  __int128 v16; // [rsp+50h] [rbp-19h]
  __int128 v17; // [rsp+60h] [rbp-9h]
  __int128 v18; // [rsp+70h] [rbp+7h]
  __int128 v19; // [rsp+80h] [rbp+17h]
  UINT64 PagingFenceValue; // [rsp+90h] [rbp+27h]
  _QWORD v21[2]; // [rsp+A0h] [rbp+37h] BYREF

  v4 = *(_OWORD *)&a4->hPagingQueue;
  v5 = (struct VMBCHANNEL__ *)*((_QWORD *)this + 484);
  v7 = *(_OWORD *)&a4->MinimumAddress;
  v13 = 0LL;
  v16 = v4;
  v8 = *(_OWORD *)&a4->Size;
  v15 = a2;
  v17 = v7;
  v9 = *(_OWORD *)&a4->DriverProtection;
  LODWORD(v16) = a3;
  v18 = v8;
  PagingFenceValue = a4->PagingFenceValue;
  v14 = 21;
  v19 = v9;
  v12[0] = 16;
  VmBusSendSyncMessage(v5, (struct DXGKVMB_COMMAND *)&v13, 0x58u, v21, v12, v11);
  if ( v12[0] < 0x10 )
    return 3221225473LL;
  a4->VirtualAddress = v21[0];
  a4->PagingFenceValue = v21[1];
  return 0LL;
}
