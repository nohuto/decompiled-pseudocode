/*
 * XREFs of VidSchiSignalRegisteredEvent @ 0x1C000E814
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008200 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C000DF80 (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C000E3A0 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiSignalFlipEvents @ 0x1C0013720 (VidSchiSignalFlipEvents.c)
 *     VidSchiExecutePostPresentAtPassiveLevel @ 0x1C0025F40 (VidSchiExecutePostPresentAtPassiveLevel.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00AA7D4 (VidSchiDiscardQueuePacket.c)
 *     VidSchUnreferenceDmaBuffer @ 0x1C00ACE04 (VidSchUnreferenceDmaBuffer.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiSignalRegisteredEvent(__int64 a1, struct _KEVENT **a2)
{
  KIRQL v4; // si
  struct _KEVENT *i; // rbx
  int Flink; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 1896), &LockHandle);
  for ( i = *a2; i != (struct _KEVENT *)a2; i = *(struct _KEVENT **)&i->Header.Lock )
  {
    if ( LODWORD(i->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&i[1].Header.Lock + 4LL * LODWORD(i[1].Header.WaitListHead.Blink) + 1060) >= *(_DWORD *)(*(_QWORD *)&i[1].Header.Lock + 204LL) )
        continue;
LABEL_8:
      ++i[5].Header.LockNV;
      KeSetEvent(i + 4, 0, 0);
      continue;
    }
    if ( ((__int64)i[1].Header.WaitListHead.Flink & 4) == 0 )
      goto LABEL_8;
    Flink = (int)i[1].Header.WaitListHead.Blink->Flink;
    HIDWORD(i[5].Header.WaitListHead.Blink) = Flink;
    if ( !Flink )
      goto LABEL_8;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeLowerIrql(v4);
}
