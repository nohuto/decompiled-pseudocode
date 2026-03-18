/*
 * XREFs of ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0191DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C00830DC (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?DxgkCreateDeviceInternal@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C00B5930 (-DxgkCreateDeviceInternal@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateDevice(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rsi
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rcx
  D3DKMT_HANDLE v12; // eax
  struct VMBPACKETCOMPLETION__ *v13; // rcx
  char v14; // bl
  __int64 v15; // rax
  struct DXGK_VIRTUAL_GPU_PARAV *v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdi
  struct VMBPACKETCOMPLETION__ *v22; // rcx
  _D3DKMT_CREATEDEVICE v23; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v24[8]; // [rsp+80h] [rbp-9h] BYREF
  _BYTE v25[32]; // [rsp+88h] [rbp-1h] BYREF
  _BYTE v26[40]; // [rsp+A8h] [rbp+1Fh] BYREF
  D3DKMT_HANDLE hDevice; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v28; // [rsp+F8h] [rbp+6Fh] BYREF

  v1 = *((_QWORD *)a1 + 9);
  hDevice = 0;
  if ( *(_BYTE *)(v1 + 28) )
  {
    v3 = *((_QWORD *)a1 + 6);
    if ( !*(_BYTE *)(v3 + 304) )
    {
      v4 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v4 + 24) = 547LL;
      goto LABEL_13;
    }
    v5 = v3 + 176;
    v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) + 2312LL);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v5, 0LL);
    v7 = v6 + 40;
    *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v6 + 40, 0LL);
    *(_QWORD *)(v6 + 48) = KeGetCurrentThread();
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v24,
      *(struct DXGADAPTER *const *)(*((_QWORD *)a1 + 5) + 16LL),
      0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v24) >= 0 )
    {
      v8 = ADAPTER_RENDER::CreateDevice((DXGADAPTER **)v6, &v28, 0, 2, 0LL, 0, 0, *((_QWORD *)a1 + 5));
      v10 = v8;
      if ( v8 >= 0 )
      {
        v11 = v28;
        *(_QWORD *)(v28 + 80) = *((_QWORD *)a1 + 5);
        v12 = *(_DWORD *)(v11 + 332);
        v13 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
        hDevice = v12;
        VmBusCompletePacket(v13, &hDevice, 4u);
        v14 = 1;
LABEL_9:
        COREACCESS::~COREACCESS((COREACCESS *)v26);
        COREACCESS::~COREACCESS((COREACCESS *)v25);
        *(_QWORD *)(v7 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v7, 0LL);
        KeLeaveCriticalRegion();
        *(_QWORD *)(v5 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v5, 0LL);
        KeLeaveCriticalRegion();
        return v14;
      }
      v15 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v15 + 24) = v10;
      *(_QWORD *)(v15 + 32) = 580LL;
      WdLogEvent5_WdError(v15);
    }
    v14 = 0;
    goto LABEL_9;
  }
  memset(&v23, 0, sizeof(v23));
  v17 = (struct DXGK_VIRTUAL_GPU_PARAV *)*((_QWORD *)a1 + 5);
  v23.Flags = *(D3DKMT_CREATEDEVICEFLAGS *)(v1 + 24);
  v19 = DxgkCreateDeviceInternal(&v23, v17, v18);
  v21 = v19;
  if ( v19 >= 0 )
  {
    v22 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
    hDevice = v23.hDevice;
    VmBusCompletePacket(v22, &hDevice, 4u);
    return 1;
  }
  v4 = WdLogNewEntry5_WdError(v20);
  *(_QWORD *)(v4 + 24) = v21;
  *(_QWORD *)(v4 + 32) = 597LL;
LABEL_13:
  WdLogEvent5_WdError(v4);
  return 0;
}
