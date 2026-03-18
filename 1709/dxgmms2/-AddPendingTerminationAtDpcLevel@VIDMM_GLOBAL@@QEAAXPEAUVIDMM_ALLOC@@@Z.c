/*
 * XREFs of ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0001F00
 * Callers:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C0004764 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004B50 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0005730 (VidSchiCompleteFlipEntry.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008120 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008DA0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00200AC (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  VIDMM_GLOBAL *v4; // rbx
  VIDMM_GLOBAL **v5; // rdx
  _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)this + 5141, &LockHandle);
  v4 = (struct VIDMM_ALLOC *)((char *)a2 + 200);
  v5 = (VIDMM_GLOBAL **)*((_QWORD *)this + 5143);
  if ( *v5 != (VIDMM_GLOBAL *)((char *)this + 41136) )
    __fastfail(3u);
  *(_QWORD *)v4 = (char *)this + 41136;
  *((_QWORD *)v4 + 1) = v5;
  *v5 = v4;
  *((_QWORD *)this + 5143) = v4;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeSetEvent(*((PRKEVENT *)this + 5140), 0, 0);
}
