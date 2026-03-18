/*
 * XREFs of ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C019A4D0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K@Z @ 0x1C00E8F90 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusWaitForSyncObjectFromGpu(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rbx
  UINT v5; // edi
  unsigned int v6; // r14d
  __int64 v7; // rax
  char v8; // cl
  const unsigned __int64 *v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU v14; // [rsp+20h] [rbp-50h] BYREF
  int v15; // [rsp+90h] [rbp+20h] BYREF

  v15 = 0;
  v4 = *((_QWORD *)a1 + 9);
  v5 = *(_DWORD *)(v4 + 28);
  if ( v5 - 1 > 0xFFFE )
  {
    v12 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v12 + 24) = *(unsigned int *)(v4 + 28);
    WdLogEvent5_WdError(v12);
    v15 = -1073741811;
  }
  else
  {
    v6 = 12 * v5 + 40;
    if ( *((_DWORD *)a1 + 20) >= v6 )
    {
      memset(&v14, 0, sizeof(v14));
      v14.hContext = *(_DWORD *)(v4 + 24);
      v14.ObjectHandleArray = (const D3DKMT_HANDLE *)(v4 + 8 * v5 + 40);
      v8 = *(_BYTE *)(v4 + 32);
      v14.ObjectCount = v5;
      if ( v8 )
        v14.FenceValue = *(_QWORD *)(v4 + 40);
      else
        v14.FenceValue = 0LL;
      v9 = 0LL;
      if ( !v8 )
        v9 = (const unsigned __int64 *)(v4 + 40);
      v15 = DxgkWaitForSynchronizationObjectFromGpuInternal(&v14, 0LL, 0LL, v9);
      if ( v15 < 0 )
      {
        v11 = WdLogNewEntry5_WdError(v10);
        *(_QWORD *)(v11 + 24) = v15;
        WdLogEvent5_WdError(v11);
      }
    }
    else
    {
      v7 = WdLogNewEntry5_WdWarning(a1, a2, a3);
      *(_QWORD *)(v7 + 24) = v6;
      WdLogEvent5_WdWarning(v7);
    }
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v15, 4u);
  return 1;
}
