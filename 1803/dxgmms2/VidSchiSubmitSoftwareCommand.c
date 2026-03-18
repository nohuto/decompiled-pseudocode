/*
 * XREFs of VidSchiSubmitSoftwareCommand @ 0x1C00024F0
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C0081FD0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00BC3AC (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009720 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 */

void __fastcall VidSchiSubmitSoftwareCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // rbx
  struct _VIDSCH_QUEUE_PACKET *v2; // rdi
  int v3; // esi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)a1 + 11);
  v2 = a1;
  v3 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL) + 1904LL), &LockHandle);
  if ( *((_QWORD *)v2 + 5) == v1 + 656 )
    v3 = 1;
  else
    *((_DWORD *)v2 + 20) |= 1u;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v3 )
  {
    do
      v2 = VidSchiProcessCompletedQueuePacketInternal(v2);
    while ( v2 );
  }
}
