/*
 * XREFs of ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x1C009B098
 * Callers:
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C009AE40 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C016E9D0 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C00F4C90 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C01839B0 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 */

__int64 __fastcall MapGpuVirtualAddressToAllocation(struct ADAPTER_RENDER *a1, struct DXGALLOCATION *a2)
{
  DXGADAPTER *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // ebx
  __int64 v13; // r15
  int v14; // r14d
  int v15; // ebp
  __int64 v16; // rsi
  struct DXGPROCESS *Current; // rax
  int v18; // eax
  int v19; // edx
  __int64 v20; // rax
  struct DXGPROCESS *v21; // rax
  __int64 v22; // rax
  unsigned int v23; // [rsp+20h] [rbp-C8h]
  struct D3DDDI_MAPGPUVIRTUALADDRESS v24; // [rsp+40h] [rbp-A8h] BYREF

  memset(&v24, 0, sizeof(v24));
  v4 = (DXGADAPTER *)*((_QWORD *)a1 + 2);
  v24.Protection.Value = 1LL;
  if ( DXGADAPTER::ReplicateGdiContent(v4) )
  {
    v13 = *((_QWORD *)a2 + 5);
    v14 = 0;
    v15 = 0;
    v16 = *(_QWORD *)(v13 + 24);
    while ( v16 )
    {
      if ( *(_BYTE *)(*((_QWORD *)a1 + 2) + 185LL) )
      {
        Current = DXGPROCESS::GetCurrent();
        v18 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)a1 + 2) + 4080LL),
                *((_DWORD *)Current + 98),
                *(const struct DXGDEVICE **)(v13 + 8),
                0,
                *(_DWORD *)(v16 + 96),
                &v24);
      }
      else
      {
        LOBYTE(v23) = 0;
        v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct D3DDDI_MAPGPUVIRTUALADDRESS *, unsigned int, int))(*(_QWORD *)(*((_QWORD *)a1 + 68) + 8LL) + 792LL))(
                *((_QWORD *)a1 + 69),
                0LL,
                *(_QWORD *)(v16 + 24),
                &v24,
                v23,
                (*(_DWORD *)(v16 + 72) >> 12) & 0x3F);
      }
      v11 = v18;
      if ( v18 < 0 )
        goto LABEL_19;
      v24.BaseAddress = v24.VirtualAddress;
      v5 = (*(_DWORD *)(v16 + 72) >> 12) & 0x3F;
      v19 = 1 << ((*(_DWORD *)(v16 + 72) >> 12) & 0x3F);
      if ( (v19 & v14) != 0 )
      {
        v20 = WdLogNewEntry5_WdError(v5);
        *(_QWORD *)(v20 + 24) = 1659LL;
        goto LABEL_17;
      }
      v16 = *(_QWORD *)(v16 + 64);
      v14 |= v19;
      ++v15;
    }
    if ( v15 == *(_DWORD *)(*((_QWORD *)a1 + 2) + 248LL) )
      return 0LL;
    v20 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v20 + 24) = 1668LL;
LABEL_17:
    WdLogEvent5_WdError(v20);
    return (unsigned int)-1073741811;
  }
  else
  {
    v6 = *((_QWORD *)a1 + 2);
    if ( *(_BYTE *)(v6 + 185) )
    {
      v21 = DXGPROCESS::GetCurrent();
      v7 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)a1 + 2) + 4080LL),
             *((_DWORD *)v21 + 98),
             *(const struct DXGDEVICE **)(*((_QWORD *)a2 + 5) + 8LL),
             0,
             *((_DWORD *)a2 + 24),
             &v24);
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct D3DDDI_MAPGPUVIRTUALADDRESS *, _BYTE, _DWORD))(*(_QWORD *)(*((_QWORD *)a1 + 68) + 8LL) + 792LL))(
             *((_QWORD *)a1 + 69),
             0LL,
             *((_QWORD *)a2 + 3),
             &v24,
             0,
             *(_DWORD *)(v6 + 2484));
    }
    v11 = v7;
    if ( v7 >= 0 )
      return 0LL;
LABEL_19:
    v22 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v22 + 24) = v11;
    WdLogEvent5_WdWarning(v22);
  }
  return (unsigned int)v11;
}
