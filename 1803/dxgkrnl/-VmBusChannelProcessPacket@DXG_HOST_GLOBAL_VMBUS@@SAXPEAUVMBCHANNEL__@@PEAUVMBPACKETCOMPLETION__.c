/*
 * XREFs of ?VmBusChannelProcessPacket@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C002D8C0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     McTemplateK0ppq @ 0x1C0041428 (McTemplateK0ppq.c)
 */

void __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusChannelProcessPacket(
        struct _LIST_ENTRY *a1,
        struct _LIST_ENTRY *a2,
        struct _LIST_ENTRY *a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v9; // rax
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v11; // rdi
  int v12; // ecx
  int v13; // r8d
  __int64 v14; // rax

  _InterlockedIncrement(&g_VgpuNumIncomingPackets);
  if ( a4 < 0x18 )
  {
    v9 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v9 + 24) = 4016LL;
LABEL_3:
    WdLogEvent5_WdError(v9);
    _InterlockedIncrement(&g_VgpuNumCompletedPackets);
    VmbChannelPacketComplete(a2, 0LL, 0LL);
    return;
  }
  if ( HIDWORD(a3->Blink) != 1 )
  {
    v9 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v9 + 24) = 4025LL;
    goto LABEL_3;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    McTemplateK0ppq(
      (_DWORD)a1,
      (unsigned int)&EventVmBusProcessPacketGlobalDpcBegin,
      (_DWORD)a3,
      (_DWORD)a1,
      (char)a3->Flink,
      (char)a3[1].Flink);
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x58uLL, 0x4B677844u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x58uLL);
    v11->List.Flink = 0LL;
    v11->WorkerRoutine = (PWORKER_THREAD_ROUTINE)VmBusProcessPacket;
    v11->Parameter = v11;
    _InterlockedIncrement(&g_VgpuNumWorkItemQueued);
    HIDWORD(v11[2].WorkerRoutine) = a5;
    v11[1].List.Flink = a1;
    LODWORD(v11[2].WorkerRoutine) = a4;
    v11[2].List.Flink = a2;
    v11[2].List.Blink = a3;
    v11[1].Parameter = (PVOID)VmbChannelGetPointer(a1);
    ExQueueWorkItem(v11, NormalWorkQueue);
  }
  else
  {
    v14 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v14 + 24) = 4050LL;
    WdLogEvent5_WdLowResource(v14);
    _InterlockedIncrement(&g_VgpuNumCompletedPackets);
    VmbChannelPacketComplete(a2, 0LL, 0LL);
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    McTemplateK0ppq(
      v12,
      (unsigned int)&EventVmBusProcessPacketGlobalDpcEnd,
      v13,
      (_DWORD)a1,
      (char)a3->Flink,
      (char)a3[1].Flink);
}
