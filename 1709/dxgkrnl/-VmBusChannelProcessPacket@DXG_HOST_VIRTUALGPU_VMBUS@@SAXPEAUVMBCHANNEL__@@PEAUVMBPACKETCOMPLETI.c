/*
 * XREFs of ?VmBusChannelProcessPacket@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C0024EB0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppq @ 0x1C0032B64 (McTemplateK0ppq.c)
 */

void __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelProcessPacket(
        struct _LIST_ENTRY *a1,
        struct _LIST_ENTRY *a2,
        struct _LIST_ENTRY *a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v9; // rax
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  __int64 v11; // rcx
  struct _WORK_QUEUE_ITEM *v12; // rdi
  __int64 Pointer; // rax
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // rax

  _InterlockedIncrement(&g_VgpuNumIncomingPackets);
  if ( a4 < 0x18 )
  {
    v9 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v9 + 24) = 438LL;
LABEL_3:
    WdLogEvent5_WdError(v9);
    _InterlockedIncrement(&g_VgpuNumCompletedPackets);
    VmbChannelPacketComplete(a2, 0LL, 0LL);
    return;
  }
  if ( HIDWORD(a3->Blink) )
  {
    v9 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v9 + 24) = 447LL;
    goto LABEL_3;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    McTemplateK0ppq(
      (_DWORD)a1,
      (unsigned int)&EventVmBusProcessPacketDpcBegin,
      (_DWORD)a3,
      (_DWORD)a1,
      (char)a3->Flink,
      (char)a3[1].Flink);
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x58uLL, 0x4B677844u);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag->List.Flink = 0LL;
    PoolWithTag->List.Flink = 0LL;
    PoolWithTag->WorkerRoutine = (PWORKER_THREAD_ROUTINE)VmBusProcessPacket;
    PoolWithTag->Parameter = PoolWithTag;
    _InterlockedIncrement(&g_VgpuNumWorkItemQueued);
    HIDWORD(PoolWithTag[2].WorkerRoutine) = a5;
    PoolWithTag[1].List.Flink = a1;
    LODWORD(PoolWithTag[2].WorkerRoutine) = a4;
    PoolWithTag[2].List.Flink = a2;
    PoolWithTag[2].List.Blink = a3;
    Pointer = VmbChannelGetPointer(a1);
    v12[1].Parameter = 0LL;
    v12[1].WorkerRoutine = 0LL;
    v12[1].List.Blink = (struct _LIST_ENTRY *)Pointer;
    ExQueueWorkItem(v12, NormalWorkQueue);
  }
  else
  {
    v16 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v16 + 24) = 474LL;
    WdLogEvent5_WdLowResource(v16);
    _InterlockedIncrement(&g_VgpuNumCompletedPackets);
    VmbChannelPacketComplete(a2, 0LL, 0LL);
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    McTemplateK0ppq(
      v14,
      (unsigned int)&EventVmBusProcessPacketDpcEnd,
      v15,
      (_DWORD)a1,
      (char)a3->Flink,
      (char)a3[1].Flink);
}
