/*
 * XREFs of VidSchiSubmitSoftwareCommand @ 0x1C00114D4
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C00766C0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00AB074 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008200 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 */

void __fastcall VidSchiSubmitSoftwareCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // rbx
  struct _VIDSCH_QUEUE_PACKET *v2; // rdi
  int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)a1 + 11);
  v2 = a1;
  v3 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL) + 1880LL), &LockHandle);
  if ( *((_QWORD *)v2 + 5) == v1 + 672 )
    v3 = 1;
  else
    *((_DWORD *)v2 + 20) |= 1u;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v3 )
  {
    do
      v2 = VidSchiProcessCompletedQueuePacketInternal(v2, v4, v5);
    while ( v2 );
  }
}
