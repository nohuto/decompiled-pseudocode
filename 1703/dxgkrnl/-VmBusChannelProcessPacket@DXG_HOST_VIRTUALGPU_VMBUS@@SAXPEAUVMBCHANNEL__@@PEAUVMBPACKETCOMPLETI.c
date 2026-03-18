/*
 * XREFs of ?VmBusChannelProcessPacket@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C002BA50
 * Callers:
 *     <none>
 * Callees:
 *     ?VgpuDebugPrint@@YAXPEBDZZ @ 0x1C002B108 (-VgpuDebugPrint@@YAXPEBDZZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     Template_ppq @ 0x1C0041FF0 (Template_ppq.c)
 */

void __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelProcessPacket(
        struct VMBCHANNEL__ *a1,
        struct VMBPACKETCOMPLETION__ *a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r8d
  __int64 v12; // rax
  _QWORD *PoolWithTag; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rbx
  __int64 Pointer; // rax
  int v17; // ecx
  int v18; // r8d
  __int64 v19; // rax

  VgpuDebugPrint("DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelProcessPacket %p\n", a2);
  _InterlockedIncrement(&g_VgpuNumIncomingPackets);
  if ( a4 >= 0x10 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
      Template_ppq(v10, (unsigned int)&EventVmBusProcessPacketDpcBegin, v11, (_DWORD)a1, *(_QWORD *)a3, a3[2]);
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x58uLL, 0x4B677844u);
    v15 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 0LL;
      *PoolWithTag = 0LL;
      PoolWithTag[2] = VmBusProcessPacket;
      PoolWithTag[3] = PoolWithTag;
      _InterlockedIncrement(&g_VgpuNumWorkItemQueued);
      VgpuDebugPrint("DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelProcessPacketQueueWorkItem %p\n", a2);
      *((_DWORD *)v15 + 21) = a5;
      v15[4] = a1;
      *((_DWORD *)v15 + 20) = a4;
      v15[8] = a2;
      v15[9] = a3;
      Pointer = VmbChannelGetPointer(a1);
      v15[7] = 0LL;
      v15[6] = 0LL;
      v15[5] = Pointer;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v15, NormalWorkQueue);
    }
    else
    {
      v19 = WdLogNewEntry5_WdLowResource(v14);
      *(_QWORD *)(v19 + 24) = 7190LL;
      WdLogEvent5_WdLowResource(v19);
      VmBusCompletePacket(a2, 0LL, 0);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
      Template_ppq(v17, (unsigned int)&EventVmBusProcessPacketDpcEnd, v18, (_DWORD)a1, *(_QWORD *)a3, a3[2]);
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = 7162LL;
    WdLogEvent5_WdError(v12);
    VmBusCompletePacket(a2, 0LL, 0);
  }
}
