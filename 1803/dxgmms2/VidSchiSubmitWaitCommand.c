/*
 * XREFs of VidSchiSubmitWaitCommand @ 0x1C00111BC
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C0081FD0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00BC3AC (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009720 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiUpdateContextStatus @ 0x1C000CE10 (VidSchiUpdateContextStatus.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000E338 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiCompleteRewindPacket @ 0x1C000E5FC (VidSchiCompleteRewindPacket.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x1C0013B00 (VidSchiUnblockUnorderedWaitQueuePacket.c)
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
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rsi
  _QWORD *v12; // rax
  int v13; // eax
  int v14; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = *((_QWORD *)a1 + 11);
  v2 = a1;
  v3 = 0;
  v4 = *(_QWORD *)(v1 + 104);
  v5 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1904), &LockHandle);
  if ( (*(_BYTE *)(v5 + 2884) & 1) != 0
    || *(_DWORD *)(v5 + 2860)
    || *(_BYTE *)(v4 + 188)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 184), 0, 0) )
  {
    v14 = *((_DWORD *)v2 + 68);
    if ( (v14 & 1) == 0 )
    {
      LOBYTE(v6) = 1;
      if ( (v14 & 4) != 0 )
        VidSchiUnblockUnorderedWaitQueuePacket(v2, v6);
      else
        VidSchiUnwaitWaitQueuePacket((__int64)v2, 1u);
    }
  }
  if ( (*((_DWORD *)v2 + 68) & 1) != 0 )
  {
    v3 = 1;
  }
  else
  {
    v10 = *((_QWORD *)v2 + 11);
    v11 = *(_QWORD *)(*(_QWORD *)(v10 + 96) + 24LL);
    if ( (*(_DWORD *)(v10 + 184) & 4) == 0 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdEvent(v7, v6);
      v12[3] = v11;
      v12[4] = v10;
      v12[5] = *((unsigned int *)v2 + 28);
      WdLogEvent5_WdEvent(v12);
      v13 = *(_DWORD *)(v10 + 184) | 4;
      *(_QWORD *)(v10 + 648) = v2;
      *(_DWORD *)(v10 + 184) = v13;
    }
    VidSchiCompleteRewindPacket(v10, 1);
    VidSchiUpdateContextStatus(v1, (_QWORD *)4, (_QWORD *)0x5877);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v3 )
  {
    do
      v2 = VidSchiProcessCompletedQueuePacketInternal(v2, v8, v9);
    while ( v2 );
  }
}
