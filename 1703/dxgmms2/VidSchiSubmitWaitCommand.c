/*
 * XREFs of VidSchiSubmitWaitCommand @ 0x1C000DB74
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C00766C0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00AB074 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008200 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiUpdateContextStatus @ 0x1C000A0C0 (VidSchiUpdateContextStatus.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000D604 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiCompleteRewindPacket @ 0x1C000DCA4 (VidSchiCompleteRewindPacket.c)
 *     ?VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z @ 0x1C00119D0 (-VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z.c)
 */

void __fastcall VidSchiSubmitWaitCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // r14
  struct _VIDSCH_QUEUE_PACKET *v2; // rbx
  int v3; // ebp
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rsi
  _QWORD *v13; // rax
  int v14; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = *((_QWORD *)a1 + 11);
  v2 = a1;
  v3 = 0;
  v4 = *(_QWORD *)(v1 + 104);
  v5 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1880), &LockHandle);
  if ( (*(_BYTE *)(v5 + 2844) & 1) != 0
    || *(_DWORD *)(v5 + 2820)
    || *(_BYTE *)(v4 + 164)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 160), 0, 0) )
  {
    v14 = *((_DWORD *)v2 + 66);
    if ( (v14 & 1) == 0 )
    {
      if ( (v14 & 4) != 0 )
        VidSchiUnblockUnorderedWaitQueuePacket(v2, 1u);
      else
        VidSchiUnwaitWaitQueuePacket((__int64)v2, 1u, v8);
    }
  }
  if ( (*((_DWORD *)v2 + 66) & 1) != 0 )
  {
    v3 = 1;
  }
  else
  {
    v11 = *((_QWORD *)v2 + 11);
    v12 = *(_QWORD *)(*(_QWORD *)(v11 + 96) + 24LL);
    if ( (*(_DWORD *)(v11 + 176) & 4) == 0 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdEvent(v7, v6);
      v13[3] = v12;
      v13[4] = v11;
      v13[5] = *((unsigned int *)v2 + 26);
      WdLogEvent5_WdEvent(v13);
      *(_DWORD *)(v11 + 176) |= 4u;
      *(_QWORD *)(v11 + 664) = v2;
    }
    VidSchiCompleteRewindPacket(v11, 1LL);
    VidSchiUpdateContextStatus(v1, (_QWORD *)4, 22109LL);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v3 )
  {
    do
      v2 = VidSchiProcessCompletedQueuePacketInternal(v2, v9, v10);
    while ( v2 );
  }
}
