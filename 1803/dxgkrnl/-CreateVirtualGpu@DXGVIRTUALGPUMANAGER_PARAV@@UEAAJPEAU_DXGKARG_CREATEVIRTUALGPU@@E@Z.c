/*
 * XREFs of ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0178990
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGK_VIRTUAL_GPU@@QEAA@PEAVADAPTER_RENDER@@E@Z @ 0x1C0172F4C (--0DXGK_VIRTUAL_GPU@@QEAA@PEAVADAPTER_RENDER@@E@Z.c)
 *     ?GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z @ 0x1C0173958 (-GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z.c)
 *     ??0DXG_VMBUS_CHANNEL_BASE@@QEAA@XZ @ 0x1C017A2D8 (--0DXG_VMBUS_CHANNEL_BASE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_PARAV::CreateVirtualGpu(
        DXGVIRTUALGPUMANAGER_PARAV *this,
        struct _DXGKARG_CREATEVIRTUALGPU *a2,
        char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v11; // rax
  ULONG PartitionId; // edx
  NTSTATUS v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  DXGK_VIRTUAL_GPU *v16; // rax
  _QWORD *v17; // r9
  __int64 v18; // r9
  ULONG v19; // r14d
  _QWORD *v20; // r9
  char *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rbx
  struct _LUID Luid; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+48h] [rbp-B8h]
  const wchar_t *v29; // [rsp+50h] [rbp-B0h]
  unsigned int *v30; // [rsp+58h] [rbp-A8h]
  int v31; // [rsp+60h] [rbp-A0h]
  unsigned int *v32; // [rsp+68h] [rbp-98h]
  int v33; // [rsp+70h] [rbp-90h]
  __int64 v34; // [rsp+78h] [rbp-88h]
  int v35; // [rsp+80h] [rbp-80h]
  _BYTE v36[40]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v37[32]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v38[8]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v39[32]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v40[40]; // [rsp+F8h] [rbp-8h] BYREF
  unsigned int v41; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v42; // [rsp+168h] [rbp+68h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)v38,
    *(struct DXGADAPTER *const *)(*((_QWORD *)this + 4) + 16LL),
    0LL);
  LODWORD(v8) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v38);
  if ( (int)v8 >= 0 )
  {
    Current = DXGPROCESS::GetCurrent(v7, v6);
    if ( !Current )
    {
      v11 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v11 + 24) = 581LL;
      WdLogEvent5_WdAssertion(v11);
    }
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v37, (struct _KTHREAD **)this + 5);
    PartitionId = a2->PartitionId;
    v42 = 0xFFFF;
    LODWORD(v8) = DXGVIRTUALGPUMANAGER::GetTargetPartitionId(this, PartitionId, &v42);
    if ( (int)v8 >= 0 )
    {
      v13 = ZwAllocateLocallyUniqueId(&Luid);
      v8 = v13;
      if ( v13 >= 0 )
      {
        *((_BYTE *)Current + 323) |= 2u;
        v16 = (DXGK_VIRTUAL_GPU *)operator new(0xE0uLL, 0x4B677844u, 1, PagedPool);
        if ( v16 )
        {
          DXGK_VIRTUAL_GPU::DXGK_VIRTUAL_GPU(v16, *((struct ADAPTER_RENDER **)this + 4), 1);
          *v17 = &DXGK_VIRTUAL_GPU_PARAV::`vftable';
          DXG_VMBUS_CHANNEL_BASE::DXG_VMBUS_CHANNEL_BASE((DXG_VMBUS_CHANNEL_BASE *)(v17 + 16));
          *(_BYTE *)(v18 + 126) = 1;
          *(_QWORD *)(v18 + 184) = v18 + 176;
          *(_QWORD *)(v18 + 176) = v18 + 176;
        }
        else
        {
          v18 = 0LL;
        }
        if ( v18 )
        {
          v19 = v42;
          *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v42) = v18;
          *(_BYTE *)(v18 + 112) = 1;
          *(_QWORD *)(v18 + 80) = Current;
          *(_BYTE *)(v18 + 113) = a3;
          *(_DWORD *)(v18 + 24) = v19;
          *(_OWORD *)(v18 + 36) = DXGK_VRD_UMED_CLASID;
          *(struct _LUID *)(v18 + 28) = Luid;
          v20 = (_QWORD *)(v18 + 96);
          ++*((_DWORD *)this + 4);
          v21 = (char *)this + 64;
          v22 = *(_QWORD *)v21;
          if ( *(char **)(*(_QWORD *)v21 + 8LL) != v21 )
            __fastfail(3u);
          *v20 = v22;
          v20[1] = v21;
          *(_QWORD *)(v22 + 8) = v20;
          v27 = 0LL;
          v34 = 0LL;
          v35 = 0;
          v29 = L"GuestIoSpaceSizeInMb";
          v30 = &v41;
          v32 = &v41;
          *(_QWORD *)v21 = v20;
          v41 = 1;
          v28 = 288;
          v31 = 67108868;
          v33 = 4;
          memset(v36, 0, sizeof(v36));
          if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Paravirtualization", &v27, 0LL, 0LL) >= 0 )
          {
            v24 = (unsigned __int64)v41 << 20;
            *((_QWORD *)DXGGLOBAL::GetGlobal(v23) + 158) = v24;
          }
          a2->PartitionId = v19;
          LODWORD(v8) = 0;
        }
        else
        {
          LODWORD(v8) = -1073741801;
        }
      }
      else
      {
        v15 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v15 + 24) = v8;
        WdLogEvent5_WdError(v15);
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v37);
  }
  COREACCESS::~COREACCESS((COREACCESS *)v40);
  COREACCESS::~COREACCESS((COREACCESS *)v39);
  return (unsigned int)v8;
}
