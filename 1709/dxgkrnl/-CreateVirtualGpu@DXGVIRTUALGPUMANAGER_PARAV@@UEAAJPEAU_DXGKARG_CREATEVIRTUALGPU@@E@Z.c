/*
 * XREFs of ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C018DCA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z @ 0x1C00F0940 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00F925C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGK_VIRTUAL_GPU@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C0188DD4 (--0DXGK_VIRTUAL_GPU@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_PARAV::CreateVirtualGpu(
        DXGVIRTUALGPUMANAGER_PARAV *this,
        struct _DXGKARG_CREATEVIRTUALGPU *a2,
        char a3)
{
  __int64 v6; // rax
  __int64 result; // rax
  __int64 PartitionId; // rcx
  struct DXGPROCESS *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // rax
  DXGK_VIRTUAL_GPU *v15; // rax
  DXGK_VIRTUAL_GPU *v16; // rbx
  NTSTATUS LocallyUniqueId; // eax
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rax
  char *v21; // rdi
  _QWORD *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // [rsp+30h] [rbp-39h] BYREF
  int v25; // [rsp+38h] [rbp-31h]
  const wchar_t *v26; // [rsp+40h] [rbp-29h]
  unsigned int *v27; // [rsp+48h] [rbp-21h]
  int v28; // [rsp+50h] [rbp-19h]
  unsigned int *v29; // [rsp+58h] [rbp-11h]
  int v30; // [rsp+60h] [rbp-9h]
  __int64 v31; // [rsp+68h] [rbp-1h]
  int v32; // [rsp+70h] [rbp+7h]
  _BYTE v33[40]; // [rsp+78h] [rbp+Fh] BYREF
  unsigned int v34; // [rsp+D0h] [rbp+67h] BYREF
  struct DXGPROCESS *Current; // [rsp+D8h] [rbp+6Fh] BYREF

  if ( a2->PartitionId >= *((_DWORD *)this + 3) )
  {
    v6 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v6 + 24) = a2->PartitionId;
    *(_QWORD *)(v6 + 32) = *((unsigned int *)this + 3);
LABEL_3:
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  PartitionId = a2->PartitionId;
  if ( *(_QWORD *)(*((_QWORD *)this + 3) + 8 * PartitionId) )
  {
    v6 = WdLogNewEntry5_WdError(PartitionId);
    *(_QWORD *)(v6 + 24) = a2->PartitionId;
    goto LABEL_3;
  }
  Current = DXGPROCESS::GetCurrent(PartitionId, (__int64)a2);
  v9 = Current;
  if ( !Current )
  {
    v12 = DXGPROCESS::CreateDxgProcess(&Current, 0LL, 0LL);
    if ( v12 < 0 )
    {
      v14 = WdLogNewEntry5_WdWarning(v11, v10, v13);
      *(_QWORD *)(v14 + 24) = 522LL;
      WdLogEvent5_WdWarning(v14);
      return (unsigned int)v12;
    }
    v9 = Current;
  }
  *((_BYTE *)v9 + 307) |= 2u;
  v15 = (DXGK_VIRTUAL_GPU *)operator new(0xC8uLL, 0x4B677844u, 1, PagedPool);
  v16 = v15;
  if ( v15 )
  {
    DXGK_VIRTUAL_GPU::DXGK_VIRTUAL_GPU(v15, *((struct ADAPTER_RENDER **)this + 4));
    *(_QWORD *)v16 = &DXGK_VIRTUAL_GPU_PARAV::`vftable';
    *((_QWORD *)v16 + 15) = 0LL;
    *((_BYTE *)v16 + 128) = 0;
    *((_QWORD *)v16 + 18) = 0LL;
    *((_QWORD *)v16 + 17) = 0LL;
    *((_BYTE *)v16 + 104) = 1;
    *((_QWORD *)v16 + 20) = (char *)v16 + 152;
    *((_QWORD *)v16 + 19) = (char *)v16 + 152;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v16 )
    return 3221225495LL;
  *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * a2->PartitionId) = v16;
  *((_BYTE *)v16 + 104) = 1;
  *((_QWORD *)v16 + 10) = v9;
  *((_BYTE *)v16 + 105) = a3;
  ++*((_DWORD *)this + 4);
  *((_DWORD *)v16 + 6) = a2->PartitionId;
  *(_OWORD *)((char *)v16 + 36) = DXGK_VRD_UMED_CLASID;
  LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)((char *)v16 + 28));
  v19 = LocallyUniqueId;
  if ( LocallyUniqueId >= 0 )
  {
    a2->VirtualGpuLuid = *(LUID *)((char *)v16 + 28);
    *((_QWORD *)v16 + 23) = 0x40000000LL;
    v24 = 0LL;
    v31 = 0LL;
    v32 = 0;
    v26 = L"GuestIoSpaceSizeInMb";
    v27 = &v34;
    v29 = &v34;
    v34 = 1;
    v25 = 288;
    v28 = 67108868;
    v30 = 4;
    memset(v33, 0, sizeof(v33));
    if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Paravirtualization", &v24, 0LL, 0LL) >= 0 )
      *((_QWORD *)v16 + 23) = (unsigned __int64)v34 << 20;
    v21 = (char *)this + 40;
    v22 = (_QWORD *)((char *)v16 + 88);
    v23 = *(_QWORD *)v21;
    if ( *(char **)(*(_QWORD *)v21 + 8LL) != v21 )
      __fastfail(3u);
    *v22 = v23;
    v22[1] = v21;
    *(_QWORD *)(v23 + 8) = v22;
    result = 0LL;
    *(_QWORD *)v21 = v22;
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v20 + 24) = v19;
    WdLogEvent5_WdError(v20);
    (*(void (__fastcall **)(DXGVIRTUALGPUMANAGER_PARAV *, _QWORD))(*(_QWORD *)this + 24LL))(this, a2->PartitionId);
    return (unsigned int)v19;
  }
  return result;
}
