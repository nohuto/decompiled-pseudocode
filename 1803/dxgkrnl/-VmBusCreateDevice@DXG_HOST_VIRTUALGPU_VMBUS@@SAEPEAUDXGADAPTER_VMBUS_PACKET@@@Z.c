/*
 * XREFs of ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017D9D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D394 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXG.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C00A5C30 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C00A8B9C (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateDevice(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  struct DXG_SET_GUEST_DATA *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rcx
  D3DKMT_HANDLE v16; // eax
  struct VMBPACKETCOMPLETION__ *v17; // rcx
  __int64 v19; // rax
  struct DXGK_VIRTUAL_GPU_PARAV *v20; // rdx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdi
  struct VMBPACKETCOMPLETION__ *v24; // rcx
  char v25[8]; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v26[32]; // [rsp+58h] [rbp-51h] BYREF
  _BYTE v27[40]; // [rsp+78h] [rbp-31h] BYREF
  _D3DKMT_CREATEDEVICE v28; // [rsp+A0h] [rbp-9h] BYREF
  D3DKMT_HANDLE hDevice; // [rsp+118h] [rbp+6Fh] BYREF
  struct DXG_SET_GUEST_DATA *v30; // [rsp+120h] [rbp+77h] BYREF
  __int64 v31; // [rsp+128h] [rbp+7Fh] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_OPENADAPTER>((__int64)a1);
  if ( !v2 )
    return 0;
  hDevice = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 216LL) + 88LL);
  v4 = (struct DXG_SET_GUEST_DATA *)operator new(0x10uLL, 0x4B677844u, 0, (POOL_TYPE)512);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v2 + 32);
    *((_QWORD *)v4 + 1) = v5;
    *(_QWORD *)v4 = v3;
  }
  v30 = v4;
  if ( v4 )
  {
    if ( *(_BYTE *)(v2 + 28) )
    {
      v7 = *((_QWORD *)a1 + 6);
      if ( !*(_BYTE *)(v7 + 320) )
      {
        v8 = WdLogNewEntry5_WdError(v5);
        *(_QWORD *)(v8 + 24) = 613LL;
LABEL_18:
        WdLogEvent5_WdError(v8);
        goto LABEL_19;
      }
      v9 = v7 + 184;
      v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) + 2464LL);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v9, 0LL);
      v11 = v10 + 40;
      *(_QWORD *)(v9 + 8) = KeGetCurrentThread();
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v10 + 40, 0LL);
      *(_QWORD *)(v10 + 48) = KeGetCurrentThread();
      COREADAPTERACCESS::COREADAPTERACCESS(
        (COREADAPTERACCESS *)v25,
        *(struct DXGADAPTER *const *)(*((_QWORD *)a1 + 5) + 16LL),
        0LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v25) < 0 )
      {
LABEL_10:
        COREACCESS::~COREACCESS((COREACCESS *)v27);
        COREACCESS::~COREACCESS((COREACCESS *)v26);
        *(_QWORD *)(v11 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v11, 0LL);
        KeLeaveCriticalRegion();
        *(_QWORD *)(v9 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v9, 0LL);
        KeLeaveCriticalRegion();
LABEL_19:
        operator delete(v30);
        return 0;
      }
      v12 = ADAPTER_RENDER::CreateDevice((DXGADAPTER **)v10, &v31, 0, 2, 0LL, 0, 0, *((_QWORD *)a1 + 5), (__int64)&v30);
      v14 = v12;
      if ( v12 < 0 )
      {
        v19 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v19 + 24) = v14;
        *(_QWORD *)(v19 + 32) = 647LL;
        WdLogEvent5_WdError(v19);
        goto LABEL_10;
      }
      v15 = v31;
      *(_QWORD *)(v31 + 80) = *((_QWORD *)a1 + 5);
      v16 = *(_DWORD *)(v15 + 332);
      v17 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
      hDevice = v16;
      VmBusCompletePacket(v17, &hDevice, 4u);
      COREACCESS::~COREACCESS((COREACCESS *)v27);
      COREACCESS::~COREACCESS((COREACCESS *)v26);
      *(_QWORD *)(v11 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v11, 0LL);
      KeLeaveCriticalRegion();
      *(_QWORD *)(v9 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v9, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      memset(&v28, 0, sizeof(v28));
      v20 = (struct DXGK_VIRTUAL_GPU_PARAV *)*((_QWORD *)a1 + 5);
      v28.Flags = *(D3DKMT_CREATEDEVICEFLAGS *)(v2 + 24);
      v21 = DxgkCreateDeviceImpl(&v28, v20, &v30, 0);
      v23 = v21;
      if ( v21 < 0 )
      {
        v8 = WdLogNewEntry5_WdError(v22);
        *(_QWORD *)(v8 + 24) = v23;
        *(_QWORD *)(v8 + 32) = 664LL;
        goto LABEL_18;
      }
      v24 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
      hDevice = v28.hDevice;
      VmBusCompletePacket(v24, &hDevice, 4u);
    }
    return 1;
  }
  v6 = WdLogNewEntry5_WdError(v5);
  *(_QWORD *)(v6 + 24) = 605LL;
  WdLogEvent5_WdError(v6);
  return 0;
}
