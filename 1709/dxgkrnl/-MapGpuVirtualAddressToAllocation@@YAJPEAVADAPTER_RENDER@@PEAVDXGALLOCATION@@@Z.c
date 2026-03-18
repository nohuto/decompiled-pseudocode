/*
 * XREFs of ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x1C007D2CC
 * Callers:
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C007D090 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C0186AD0 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C019706C (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 */

__int64 __fastcall MapGpuVirtualAddressToAllocation(struct ADAPTER_RENDER *a1, struct DXGALLOCATION *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // ebx
  __int64 v12; // r15
  int v13; // r14d
  int v14; // ebp
  __int64 v15; // rdi
  struct DXGPROCESS *Current; // rax
  int v17; // eax
  int v18; // edx
  __int64 v19; // rax
  struct DXGPROCESS *v20; // rax
  __int64 v21; // rax
  unsigned int v22; // [rsp+20h] [rbp-C8h]
  struct D3DDDI_MAPGPUVIRTUALADDRESS v23; // [rsp+40h] [rbp-A8h] BYREF

  memset(&v23, 0, sizeof(v23));
  v5 = *((_QWORD *)a1 + 2);
  v23.Protection.Value |= 1uLL;
  if ( *(_BYTE *)(v5 + 2234) )
  {
    v12 = *((_QWORD *)a2 + 5);
    v13 = 0;
    v14 = 0;
    v15 = *(_QWORD *)(v12 + 24);
    while ( v15 )
    {
      if ( *(_BYTE *)(*((_QWORD *)a1 + 2) + 185LL) )
      {
        Current = DXGPROCESS::GetCurrent();
        v17 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)a1 + 2) + 3888LL),
                *((_DWORD *)Current + 106),
                *(const struct DXGDEVICE **)(v12 + 8),
                0,
                *(_DWORD *)(v15 + 96),
                &v23);
      }
      else
      {
        LOBYTE(v22) = 0;
        v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct D3DDDI_MAPGPUVIRTUALADDRESS *, unsigned int, int))(*(_QWORD *)(*((_QWORD *)a1 + 66) + 8LL) + 792LL))(
                *((_QWORD *)a1 + 67),
                0LL,
                *(_QWORD *)(v15 + 24),
                &v23,
                v22,
                (*(_DWORD *)(v15 + 72) >> 12) & 0x3F);
      }
      v10 = v17;
      if ( v17 < 0 )
        goto LABEL_19;
      v23.BaseAddress = v23.VirtualAddress;
      v4 = (*(_DWORD *)(v15 + 72) >> 12) & 0x3F;
      v18 = 1 << ((*(_DWORD *)(v15 + 72) >> 12) & 0x3F);
      if ( (v18 & v13) != 0 )
      {
        v19 = WdLogNewEntry5_WdError(v4);
        *(_QWORD *)(v19 + 24) = 1620LL;
        goto LABEL_17;
      }
      v15 = *(_QWORD *)(v15 + 64);
      v13 |= v18;
      ++v14;
    }
    if ( v14 == *(_DWORD *)(*((_QWORD *)a1 + 2) + 248LL) )
      return 0LL;
    v19 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v19 + 24) = 1629LL;
LABEL_17:
    WdLogEvent5_WdError(v19);
    return (unsigned int)-1073741811;
  }
  else
  {
    if ( *(_BYTE *)(v5 + 185) )
    {
      v20 = DXGPROCESS::GetCurrent();
      v6 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)a1 + 2) + 3888LL),
             *((_DWORD *)v20 + 106),
             *(const struct DXGDEVICE **)(*((_QWORD *)a2 + 5) + 8LL),
             0,
             *((_DWORD *)a2 + 24),
             &v23);
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct D3DDDI_MAPGPUVIRTUALADDRESS *, _BYTE, _DWORD))(*(_QWORD *)(*((_QWORD *)a1 + 66) + 8LL) + 792LL))(
             *((_QWORD *)a1 + 67),
             0LL,
             *((_QWORD *)a2 + 3),
             &v23,
             0,
             *(_DWORD *)(v5 + 2332));
    }
    v10 = v6;
    if ( v6 >= 0 )
      return 0LL;
LABEL_19:
    v21 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v21 + 24) = v10;
    WdLogEvent5_WdWarning(v21);
  }
  return (unsigned int)v10;
}
