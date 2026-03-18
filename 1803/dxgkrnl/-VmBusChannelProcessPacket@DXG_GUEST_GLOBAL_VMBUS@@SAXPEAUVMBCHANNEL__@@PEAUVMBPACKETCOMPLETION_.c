/*
 * XREFs of ?VmBusChannelProcessPacket@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C002D710
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0023A00 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N1111@Z @ 0x1C002D608 (-PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@.c)
 *     ?VmBusSetGuestData@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_SETGUESTDATA@@@Z @ 0x1C002DF38 (-VmBusSetGuestData@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_SETGUESTDATA@@@Z.c)
 *     McTemplateK0ppq @ 0x1C0041428 (McTemplateK0ppq.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusChannelProcessPacket(
        struct _LIST_ENTRY *a1,
        struct _LIST_ENTRY *a2,
        void *a3,
        int a4,
        unsigned int a5)
{
  int v9; // ecx
  int v10; // ecx
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v12; // rdi
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rax
  CRefCountedBuffer *v16; // rcx
  struct _KEVENT *v17; // rdi

  _InterlockedIncrement(&g_VgpuNumIncomingPackets);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    McTemplateK0ppq(
      (_DWORD)a1,
      (unsigned int)&EventVmBusProcessPacketHostToVmDpcBegin,
      (_DWORD)a3,
      (_DWORD)a1,
      *(_QWORD *)a3,
      *((_DWORD *)a3 + 4));
  v9 = *((_DWORD *)a3 + 4);
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        DXG_GUEST_GLOBAL_VMBUS::VmBusSetGuestData((struct DXGKVMB_COMMAND_SETGUESTDATA *)a3);
      }
      else
      {
        PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x58uLL, 0x4B677844u);
        v12 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 0x58uLL);
          v12->List.Flink = 0LL;
          v12->WorkerRoutine = (PWORKER_THREAD_ROUTINE)VmBusProcessPacket;
          v12->Parameter = v12;
          _InterlockedIncrement(&g_VgpuNumWorkItemQueued);
          HIDWORD(v12[2].WorkerRoutine) = a5;
          v12[1].List.Flink = a1;
          LODWORD(v12[2].WorkerRoutine) = a4;
          v12[2].List.Flink = a2;
          v12[2].List.Blink = (struct _LIST_ENTRY *)a3;
          ExQueueWorkItem(v12, NormalWorkQueue);
          goto LABEL_16;
        }
        v15 = WdLogNewEntry5_WdLowResource();
        *(_QWORD *)(v15 + 24) = 7803LL;
        WdLogEvent5_WdLowResource(v15);
      }
    }
    else
    {
      v16 = (CRefCountedBuffer *)*((_QWORD *)a3 + 5);
      if ( v16 )
        CRefCountedBuffer::RefCountedBufferRelease(v16);
      DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(
        *((PKSPIN_LOCK *)a3 + 3),
        *((struct _D3DKMT_PRESENTHISTORYTOKEN **)a3 + 4),
        (int)a3);
    }
  }
  else
  {
    v17 = (struct _KEVENT *)*((_QWORD *)a3 + 3);
    KeSetEvent(v17, 0, 0);
    if ( *((_BYTE *)a3 + 32) )
      ObfDereferenceObject(v17);
  }
  _InterlockedIncrement(&g_VgpuNumCompletedPackets);
  VmbChannelPacketComplete(a2, 0LL, 0LL);
LABEL_16:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    McTemplateK0ppq(
      v13,
      (unsigned int)&EventVmBusProcessPacketHostToVmDpcEnd,
      v14,
      (_DWORD)a1,
      *(_QWORD *)a3,
      *((_DWORD *)a3 + 4));
}
