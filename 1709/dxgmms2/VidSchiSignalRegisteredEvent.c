/*
 * XREFs of VidSchiSignalRegisteredEvent @ 0x1C0005F30
 * Callers:
 *     VidSchiProcessDpcSystemRequest @ 0x1C00025C0 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004B50 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0005730 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008DA0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C000D944 (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiSignalFlipEvents @ 0x1C00159C8 (VidSchiSignalFlipEvents.c)
 *     VidSchiExecutePostPresentAtPassiveLevel @ 0x1C0028030 (VidSchiExecutePostPresentAtPassiveLevel.c)
 *     ?VidSchiCompleteHwQueueRenderPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002D0F8 (-VidSchiCompleteHwQueueRenderPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002D4F0 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00B30EC (VidSchiDiscardQueuePacket.c)
 *     VidSchUnreferenceDmaBuffer @ 0x1C00B57E4 (VidSchUnreferenceDmaBuffer.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiSignalRegisteredEvent(__int64 a1, struct _KEVENT **a2)
{
  KIRQL v4; // bl
  struct _KEVENT *i; // rdi
  int Flink; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 1904), &LockHandle);
  for ( i = *a2; i != (struct _KEVENT *)a2; i = *(struct _KEVENT **)&i->Header.Lock )
  {
    if ( LODWORD(i->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&i[1].Header.Lock + 4LL * LODWORD(i[1].Header.WaitListHead.Blink) + 1060) >= *(_DWORD *)(*(_QWORD *)&i[1].Header.Lock + 204LL) )
        continue;
    }
    else if ( ((__int64)i[1].Header.WaitListHead.Flink & 4) != 0 )
    {
      Flink = (int)i[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(i[5].Header.WaitListHead.Blink) = Flink;
      if ( Flink )
        continue;
    }
    ++i[5].Header.LockNV;
    KeSetEvent(i + 4, 0, 0);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeLowerIrql(v4);
}
