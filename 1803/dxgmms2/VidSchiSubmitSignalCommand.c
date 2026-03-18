/*
 * XREFs of VidSchiSubmitSignalCommand @ 0x1C0001A20
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C0081FD0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00BC3AC (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009720 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiCompleteSignalCommmand @ 0x1C0013D00 (VidSchiCompleteSignalCommmand.c)
 */

void __fastcall VidSchiSubmitSignalCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // rdi
  struct _VIDSCH_QUEUE_PACKET *v2; // rbx
  int v3; // esi
  __int64 v4; // rbp
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)a1 + 11);
  v2 = a1;
  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1904), &LockHandle);
  if ( *((_QWORD *)v2 + 5) == v1 + 656 )
  {
    v3 = 1;
  }
  else
  {
    v6 = *((_DWORD *)v2 + 20);
    if ( (*((_DWORD *)v2 + 68) & 1) != 0 )
    {
      if ( (v6 & 4) == 0 )
      {
        LOBYTE(v5) = 1;
        VidSchiCompleteSignalCommmand(v2, v5);
        _InterlockedIncrement((volatile signed __int32 *)(v4 + 1156));
        v6 = *((_DWORD *)v2 + 20);
      }
      v7 = v6 | 9;
    }
    else
    {
      v7 = v6 | 1;
    }
    *((_DWORD *)v2 + 20) = v7;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v3 )
  {
    do
      v2 = VidSchiProcessCompletedQueuePacketInternal(v2);
    while ( v2 );
  }
}
