/*
 * XREFs of ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01872F0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D3BC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x1C00FBCF0 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusWaitForSyncObjectFromGpu(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  UINT v7; // edi
  unsigned int v8; // r14d
  __int64 v9; // rax
  char v10; // cl
  UINT64 *v11; // rbx
  const unsigned __int64 *v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU v17; // [rsp+30h] [rbp-50h] BYREF
  int v18; // [rsp+A8h] [rbp+28h] BYREF

  v18 = 0;
  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU>((__int64)a1);
  v6 = v2;
  if ( v2 )
  {
    v7 = *(_DWORD *)(v2 + 28);
    if ( v7 - 1 > 0xFFFE )
    {
      v15 = WdLogNewEntry5_WdError(v4);
      *(_QWORD *)(v15 + 24) = *(unsigned int *)(v6 + 28);
      WdLogEvent5_WdError(v15);
      v18 = -1073741811;
    }
    else
    {
      v8 = 12 * v7 + 40;
      if ( *((_DWORD *)a1 + 20) >= v8 )
      {
        memset(&v17, 0, sizeof(v17));
        v17.hContext = *(_DWORD *)(v6 + 24);
        v17.ObjectHandleArray = (const D3DKMT_HANDLE *)(v6 + 8 * v7 + 40);
        v10 = *(_BYTE *)(v6 + 32);
        v11 = (UINT64 *)(v6 + 40);
        v17.ObjectCount = v7;
        if ( v10 )
          v17.FenceValue = *v11;
        else
          v17.FenceValue = 0LL;
        v12 = 0LL;
        if ( !v10 )
          v12 = v11;
        v18 = DxgkWaitForSynchronizationObjectFromGpuInternal(&v17, 0, 0LL, v12, 0);
        if ( v18 < 0 )
        {
          v14 = WdLogNewEntry5_WdError(v13);
          *(_QWORD *)(v14 + 24) = v18;
          WdLogEvent5_WdError(v14);
        }
      }
      else
      {
        v9 = WdLogNewEntry5_WdWarning(v4, v3, v5);
        *(_QWORD *)(v9 + 24) = v8;
        WdLogEvent5_WdWarning(v9);
      }
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v18, 4u);
    LOBYTE(v2) = 1;
  }
  return v2;
}
