/*
 * XREFs of ?VmBusCreateDevice@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002C3B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU@@@Z @ 0x1C00CFB00 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?DxgkCreateDeviceInternal@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU@@@Z @ 0x1C00F6E18 (-DxgkCreateDeviceInternal@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU@@@Z.c)
 */

char __fastcall VmBusCreateDevice(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rsi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  D3DKMT_HANDLE v13; // eax
  struct VMBPACKETCOMPLETION__ *v14; // rcx
  char v15; // bl
  __int64 v16; // rax
  struct DXGK_VIRTUAL_GPU *v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  struct VMBPACKETCOMPLETION__ *v23; // rcx
  char v24; // [rsp+28h] [rbp-61h]
  char v25; // [rsp+30h] [rbp-59h]
  _D3DKMT_CREATEDEVICE v26; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v27[8]; // [rsp+80h] [rbp-9h] BYREF
  _BYTE v28[32]; // [rsp+88h] [rbp-1h] BYREF
  _BYTE v29[40]; // [rsp+A8h] [rbp+1Fh] BYREF
  D3DKMT_HANDLE hDevice; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v31; // [rsp+F8h] [rbp+6Fh] BYREF

  v1 = *((_QWORD *)a1 + 9);
  hDevice = 0;
  if ( *(_BYTE *)(v1 + 20) )
  {
    v3 = *((_QWORD *)a1 + 6);
    if ( !*(_BYTE *)(v3 + 272) )
    {
      v4 = WdLogNewEntry5_WdError(a1, v3);
      *(_QWORD *)(v4 + 24) = 4598LL;
      goto LABEL_13;
    }
    v5 = v3 + 152;
    v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 8LL) + 2288LL);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v5, 0LL);
    v7 = v6 + 40;
    *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v6 + 40, 0LL);
    *(_QWORD *)(v6 + 48) = KeGetCurrentThread();
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v27,
      *(struct DXGADAPTER *const *)(*((_QWORD *)a1 + 5) + 8LL),
      0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v27) >= 0 )
    {
      v25 = 0;
      v24 = 0;
      v8 = ADAPTER_RENDER::CreateDevice(v6, &v31, 0LL, 2LL, 0LL, v24, v25, *((_QWORD *)a1 + 5));
      v11 = v8;
      if ( v8 >= 0 )
      {
        v12 = v31;
        *(_QWORD *)(v31 + 80) = *((_QWORD *)a1 + 5);
        v13 = *(_DWORD *)(v12 + 332);
        v14 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
        hDevice = v13;
        VmBusCompletePacket(v14, &hDevice, 4u);
        v15 = 1;
LABEL_9:
        COREACCESS::~COREACCESS((COREACCESS *)v29);
        COREACCESS::~COREACCESS((COREACCESS *)v28);
        *(_QWORD *)(v7 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v7, 0LL);
        KeLeaveCriticalRegion();
        *(_QWORD *)(v5 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v5, 0LL);
        KeLeaveCriticalRegion();
        return v15;
      }
      v16 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v16 + 24) = v11;
      *(_QWORD *)(v16 + 32) = 4631LL;
      WdLogEvent5_WdError(v16);
    }
    v15 = 0;
    goto LABEL_9;
  }
  memset(&v26, 0, sizeof(v26));
  v18 = (struct DXGK_VIRTUAL_GPU *)*((_QWORD *)a1 + 5);
  v26.Flags = *(D3DKMT_CREATEDEVICEFLAGS *)(v1 + 16);
  v19 = DxgkCreateDeviceInternal(&v26, v18);
  v22 = v19;
  if ( v19 >= 0 )
  {
    v23 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
    hDevice = v26.hDevice;
    VmBusCompletePacket(v23, &hDevice, 4u);
    return 1;
  }
  v4 = WdLogNewEntry5_WdError(v21, v20);
  *(_QWORD *)(v4 + 24) = v22;
  *(_QWORD *)(v4 + 32) = 4648LL;
LABEL_13:
  WdLogEvent5_WdError(v4);
  return 0;
}
