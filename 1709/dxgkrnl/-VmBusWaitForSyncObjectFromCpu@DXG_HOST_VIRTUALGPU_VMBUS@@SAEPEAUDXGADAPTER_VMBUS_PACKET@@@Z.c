/*
 * XREFs of ?VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C019A2E0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C00CF1AC (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusWaitForSyncObjectFromCpu(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  void *v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // eax
  _QWORD *PoolWithTag; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU v23; // [rsp+20h] [rbp-30h] BYREF
  int v24; // [rsp+60h] [rbp+10h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  v24 = -1073741811;
  memset(&v23, 0, sizeof(v23));
  v6 = *(unsigned int *)(v1 + 28);
  v7 = 0LL;
  if ( !(_DWORD)v6 )
    goto LABEL_16;
  v4 = 0xFFFFFFFFLL;
  v5 = (unsigned int)v6;
  v8 = 4 * v6;
  v3 = 0xFFFFFFFFLL;
  if ( v8 > 0xFFFFFFFF
    || (v3 = (unsigned int)v8, v9 = (unsigned int)v5, v5 = 0xFFFFFFFFLL, v10 = 8 * v9, v10 > 0xFFFFFFFF) )
  {
LABEL_16:
    v13 = WdLogNewEntry5_WdWarning(v4, v3, v5);
    *(_QWORD *)(v13 + 24) = 2376LL;
    goto LABEL_17;
  }
  v11 = (unsigned int)v10;
  if ( (unsigned int)(v3 + 56) < 0x38 )
  {
    v13 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, 0xFFFFFFFFLL, (unsigned int)v10);
    *(_QWORD *)(v13 + 24) = 2381LL;
LABEL_17:
    WdLogEvent5_WdWarning(v13);
    goto LABEL_18;
  }
  v12 = (unsigned int)(v3 + 56);
  v14 = v10 + v12;
  if ( (int)v11 + (int)v12 < (unsigned int)v12 )
  {
    v13 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, v12, v11);
    *(_QWORD *)(v13 + 24) = 2386LL;
    goto LABEL_17;
  }
  if ( *((_DWORD *)a1 + 20) < v14 )
  {
    v13 = WdLogNewEntry5_WdWarning(v14, v12, v11);
    *(_QWORD *)(v13 + 24) = 2391LL;
    goto LABEL_17;
  }
  if ( !*(_QWORD *)(v1 + 40) )
  {
    v13 = WdLogNewEntry5_WdWarning(v14, v12, v11);
    *(_QWORD *)(v13 + 24) = 2400LL;
    goto LABEL_17;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x4B677844u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = *((_QWORD *)a1 + 4);
    PoolWithTag[1] = *(_QWORD *)(v1 + 40);
    *((_BYTE *)PoolWithTag + 16) = *(_BYTE *)(v1 + 48);
    v23.ObjectHandleArray = (const D3DKMT_HANDLE *)(v1 + 56);
    v23.FenceValueArray = (const UINT64 *)(v1 + 4 * (*(unsigned int *)(v1 + 28) + 14LL));
    v23.Flags.Value = *(_DWORD *)(v1 + 32);
    v23.hDevice = *(_DWORD *)(v1 + 24);
    v23.ObjectCount = *(_DWORD *)(v1 + 28);
    v23.hAsyncEvent = PoolWithTag;
    v24 = DxgkWaitForSynchronizationObjectFromCpuInternal(&v23, 0LL, PoolWithTag);
  }
  else
  {
    v17 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v17 + 24) = 2407LL;
    WdLogEvent5_WdLowResource(v17);
    v24 = -1073741801;
  }
LABEL_18:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v24, 4u);
  if ( v24 < 0 )
  {
    v21 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    *(_QWORD *)(v21 + 24) = 2434LL;
    WdLogEvent5_WdWarning(v21);
    ExFreePoolWithTag(v7, 0x4B677844u);
  }
  return 1;
}
