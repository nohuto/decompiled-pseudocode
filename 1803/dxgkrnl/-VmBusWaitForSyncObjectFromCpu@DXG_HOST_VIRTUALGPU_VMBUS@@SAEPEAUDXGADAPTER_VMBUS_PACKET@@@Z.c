/*
 * XREFs of ?VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01870D0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D40C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C00D0CAC (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusWaitForSyncObjectFromCpu(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  void *v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // eax
  _QWORD *PoolWithTag; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU v24; // [rsp+20h] [rbp-30h] BYREF
  int v25; // [rsp+68h] [rbp+18h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU>((__int64)a1);
  v3 = v2;
  if ( !v2 )
    return v2;
  v25 = -1073741811;
  memset(&v24, 0, sizeof(v24));
  v7 = *(unsigned int *)(v3 + 28);
  v8 = 0LL;
  if ( !(_DWORD)v7 )
    goto LABEL_17;
  v5 = 0xFFFFFFFFLL;
  v6 = (unsigned int)v7;
  v9 = 4 * v7;
  v4 = 0xFFFFFFFFLL;
  if ( v9 > 0xFFFFFFFF )
    goto LABEL_17;
  v4 = (unsigned int)v9;
  v10 = (unsigned int)v6;
  v6 = 0xFFFFFFFFLL;
  v11 = 8 * v10;
  if ( v11 <= 0xFFFFFFFF )
  {
    v12 = (unsigned int)v11;
    if ( (unsigned int)(v4 + 56) < 0x38 )
    {
      v14 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, 0xFFFFFFFFLL, (unsigned int)v11);
      *(_QWORD *)(v14 + 24) = 2798LL;
    }
    else
    {
      v13 = (unsigned int)(v4 + 56);
      v15 = v11 + v13;
      if ( (int)v12 + (int)v13 >= (unsigned int)v13 )
      {
        if ( *((_DWORD *)a1 + 20) >= v15 )
        {
          if ( *(_QWORD *)(v3 + 40) )
          {
            PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x4B677844u);
            v8 = PoolWithTag;
            if ( PoolWithTag )
            {
              *PoolWithTag = 0LL;
              PoolWithTag[1] = 0LL;
              PoolWithTag[2] = 0LL;
              *PoolWithTag = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 216LL) + 88LL);
              PoolWithTag[1] = *(_QWORD *)(v3 + 40);
              *((_BYTE *)PoolWithTag + 16) = *(_BYTE *)(v3 + 48);
              v24.ObjectHandleArray = (const D3DKMT_HANDLE *)(v3 + 56);
              v24.FenceValueArray = (const UINT64 *)(v3 + 4 * (*(unsigned int *)(v3 + 28) + 14LL));
              v24.Flags.Value = *(_DWORD *)(v3 + 32);
              v24.hDevice = *(_DWORD *)(v3 + 24);
              v24.ObjectCount = *(_DWORD *)(v3 + 28);
              v24.hAsyncEvent = PoolWithTag;
              v25 = DxgkWaitForSynchronizationObjectFromCpuInternal(&v24, 0, PoolWithTag);
            }
            else
            {
              v18 = WdLogNewEntry5_WdLowResource(v17);
              *(_QWORD *)(v18 + 24) = 2824LL;
              WdLogEvent5_WdLowResource(v18);
              v25 = -1073741801;
            }
            goto LABEL_19;
          }
          v14 = WdLogNewEntry5_WdWarning(v15, v13, v12);
          *(_QWORD *)(v14 + 24) = 2817LL;
        }
        else
        {
          v14 = WdLogNewEntry5_WdWarning(v15, v13, v12);
          *(_QWORD *)(v14 + 24) = 2808LL;
        }
      }
      else
      {
        v14 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, v13, v12);
        *(_QWORD *)(v14 + 24) = 2803LL;
      }
    }
  }
  else
  {
LABEL_17:
    v14 = WdLogNewEntry5_WdWarning(v5, v4, v6);
    *(_QWORD *)(v14 + 24) = 2793LL;
  }
  WdLogEvent5_WdWarning(v14);
LABEL_19:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v25, 4u);
  if ( v25 < 0 )
  {
    v22 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v22 + 24) = 2852LL;
    WdLogEvent5_WdWarning(v22);
    ExFreePoolWithTag(v8, 0x4B677844u);
  }
  LOBYTE(v2) = 1;
  return v2;
}
