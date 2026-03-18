/*
 * XREFs of ?VmBusSendMapGpuVirtualAddress@DXGADAPTER@@QEAAJIPEAVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C0030B80
 * Callers:
 *     DxgkMapGpuVirtualAddress @ 0x1C0092C50 (DxgkMapGpuVirtualAddress.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6@Z @ 0x1C00C44B0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0032214 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendMapGpuVirtualAddress(
        DXGADAPTER *this,
        int a2,
        struct DXGDEVICE *a3,
        int a4,
        unsigned int a5,
        struct D3DDDI_MAPGPUVIRTUALADDRESS *a6)
{
  int v7; // ecx
  __int128 v8; // xmm1
  __int128 v9; // xmm1
  __int128 v10; // xmm1
  struct VMBCHANNEL__ *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // rax
  struct _MDL *v16; // [rsp+28h] [rbp-71h]
  unsigned int v17[4]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v18; // [rsp+40h] [rbp-59h] BYREF
  int v19; // [rsp+48h] [rbp-51h]
  int v20; // [rsp+4Ch] [rbp-4Dh]
  __int128 v21; // [rsp+50h] [rbp-49h]
  __int128 v22; // [rsp+60h] [rbp-39h]
  __int128 v23; // [rsp+70h] [rbp-29h]
  __int128 v24; // [rsp+80h] [rbp-19h]
  __int128 v25; // [rsp+90h] [rbp-9h]
  __int128 v26; // [rsp+A0h] [rbp+7h]
  UINT64 PagingFenceValue; // [rsp+B0h] [rbp+17h]
  int v28; // [rsp+B8h] [rbp+1Fh]
  _QWORD v29[2]; // [rsp+C0h] [rbp+27h] BYREF
  unsigned int v30; // [rsp+D0h] [rbp+37h]

  v7 = 0;
  v18 = 0LL;
  v19 = 20;
  v20 = a2;
  v8 = *(_OWORD *)&a6->MinimumAddress;
  v21 = *(_OWORD *)&a6->hPagingQueue;
  v22 = v8;
  LODWORD(v21) = a4;
  v9 = *(_OWORD *)&a6->SizeInPages;
  v23 = *(_OWORD *)&a6->hAllocation;
  v24 = v9;
  LODWORD(v23) = a5;
  v10 = *(_OWORD *)&a6->Reserved1;
  v25 = *(_OWORD *)&a6->DriverProtection;
  PagingFenceValue = a6->PagingFenceValue;
  v26 = v10;
  if ( a3 )
    v7 = *((_DWORD *)a3 + 84);
  v28 = v7;
  v11 = (struct VMBCHANNEL__ *)*((_QWORD *)this + 484);
  v17[0] = 24;
  VmBusSendSyncMessage(v11, (struct DXGKVMB_COMMAND *)&v18, 0x80u, v29, v17, v16);
  if ( v17[0] < 0x18 )
  {
    v15 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v15 + 24) = 4358LL;
    WdLogEvent5_WdError(v15);
    return 3221225473LL;
  }
  else
  {
    a6->VirtualAddress = v29[0];
    a6->PagingFenceValue = v29[1];
    return v30;
  }
}
