/*
 * XREFs of ?VmBusWaitForSyncObjectFromGpu@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00338C0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K@Z @ 0x1C008D830 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 */

unsigned __int8 __fastcall VmBusWaitForSyncObjectFromGpu(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rbx
  UINT v6; // edi
  unsigned int v7; // r14d
  __int64 v8; // rax
  char v9; // cl
  const unsigned __int64 *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU v16; // [rsp+20h] [rbp-50h] BYREF
  int v17; // [rsp+90h] [rbp+20h] BYREF

  v17 = 0;
  v5 = *((_QWORD *)a1 + 9);
  v6 = *(_DWORD *)(v5 + 20);
  if ( v6 - 1 > 0xFFFE )
  {
    v14 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v14 + 24) = *(unsigned int *)(v5 + 20);
    WdLogEvent5_WdError(v14);
    v17 = -1073741811;
  }
  else
  {
    v7 = 12 * v6 + 32;
    if ( *((_DWORD *)a1 + 20) >= v7 )
    {
      memset(&v16, 0, sizeof(v16));
      v9 = *(_BYTE *)(v5 + 24);
      v16.hContext = *(_DWORD *)(v5 + 16);
      v16.ObjectCount = v6;
      v16.ObjectHandleArray = (const D3DKMT_HANDLE *)(v5 + 8 * v6 + 32);
      if ( v9 )
        v16.FenceValue = *(_QWORD *)(v5 + 32);
      else
        v16.FenceValue = 0LL;
      v10 = 0LL;
      if ( !v9 )
        v10 = (const unsigned __int64 *)(v5 + 32);
      v17 = DxgkWaitForSynchronizationObjectFromGpuInternal(&v16, 0, 0, v10);
      if ( v17 < 0 )
      {
        v13 = WdLogNewEntry5_WdError(v12, v11);
        *(_QWORD *)(v13 + 24) = v17;
        WdLogEvent5_WdError(v13);
      }
    }
    else
    {
      v8 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
      *(_QWORD *)(v8 + 24) = v7;
      WdLogEvent5_WdWarning(v8);
    }
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v17, 4u);
  return 1;
}
