/*
 * XREFs of ?VmBusWaitForSyncObjectFromCpu@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00336E0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C008D1C0 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 */

unsigned __int8 __fastcall VmBusWaitForSyncObjectFromCpu(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  void *v7; // rbx
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // eax
  _QWORD *PoolWithTag; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU v23; // [rsp+20h] [rbp-30h] BYREF
  int v24; // [rsp+60h] [rbp+10h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  v24 = -1073741811;
  memset(&v23, 0, sizeof(v23));
  v6 = *(unsigned int *)(v1 + 20);
  v7 = 0LL;
  v8 = *(_QWORD *)(v1 + 32);
  if ( !(_DWORD)v6
    || (v3 = (unsigned int)v6, v4 = 0xFFFFFFFFLL, v9 = 4 * v6, v9 > 0xFFFFFFFF)
    || (v5 = 8LL * (unsigned int)v3, v5 > 0xFFFFFFFF) )
  {
    v12 = WdLogNewEntry5_WdWarning(v4, v3, v5, v8);
    *(_QWORD *)(v12 + 24) = 5958LL;
    goto LABEL_17;
  }
  v10 = v9 + 48;
  if ( v10 < 0x30 )
  {
    v12 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, 0xFFFFFFFFLL, v5, v8);
    *(_QWORD *)(v12 + 24) = 5963LL;
LABEL_17:
    WdLogEvent5_WdWarning(v12);
    goto LABEL_18;
  }
  v11 = v10;
  v13 = v5 + v10;
  if ( (int)v5 + (int)v11 < (unsigned int)v11 )
  {
    v12 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, v11, v5, v8);
    *(_QWORD *)(v12 + 24) = 5968LL;
    goto LABEL_17;
  }
  if ( *((_DWORD *)a1 + 20) < v13 )
  {
    v12 = WdLogNewEntry5_WdWarning(v13, v11, v5, v8);
    *(_QWORD *)(v12 + 24) = 5973LL;
    goto LABEL_17;
  }
  if ( !v8 )
  {
    v12 = WdLogNewEntry5_WdWarning(v13, v11, v5, 0LL);
    *(_QWORD *)(v12 + 24) = 5982LL;
    goto LABEL_17;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x4B677844u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = *((_QWORD *)a1 + 4);
    PoolWithTag[1] = *(_QWORD *)(v1 + 32);
    *((_BYTE *)PoolWithTag + 16) = *(_BYTE *)(v1 + 40);
    v23.ObjectHandleArray = (const D3DKMT_HANDLE *)(v1 + 48);
    v23.FenceValueArray = (const UINT64 *)(v1 + 48 + 4LL * *(unsigned int *)(v1 + 20));
    v23.Flags.Value = *(_DWORD *)(v1 + 24);
    v23.hDevice = *(_DWORD *)(v1 + 16);
    v23.ObjectCount = *(_DWORD *)(v1 + 20);
    v23.hAsyncEvent = PoolWithTag;
    v24 = DxgkWaitForSynchronizationObjectFromCpuInternal(&v23, 0, PoolWithTag);
  }
  else
  {
    v16 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v16 + 24) = 5989LL;
    WdLogEvent5_WdLowResource(v16);
    v24 = -1073741801;
  }
LABEL_18:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v24, 4u);
  if ( v24 < 0 )
  {
    v21 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
    *(_QWORD *)(v21 + 24) = 6016LL;
    WdLogEvent5_WdWarning(v21);
    ExFreePoolWithTag(v7, 0x4B677844u);
  }
  return 1;
}
