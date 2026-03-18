/*
 * XREFs of VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0007210
 * Callers:
 *     VidSchiSwitchContextWithCheck @ 0x1C000ADA0 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiDecrementContextReference @ 0x1C000E770 (VidSchiDecrementContextReference.c)
 *     ?VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00244E8 (-VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C005C8C0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchiSubmitPagingCommand @ 0x1C006DC60 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C006DF30 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchSubmitCommand @ 0x1C006E3C0 (VidSchSubmitCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1C006EA50 (VidSchiAllocateQueuePacket.c)
 *     VidSchiAllocateDmaPacket @ 0x1C0071C0C (VidSchiAllocateDmaPacket.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall VidSchiInterlockedRemoveHeadListIfExist(KSPIN_LOCK *a1, _QWORD **a2, _DWORD *a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  KeAcquireInStackQueuedSpinLock(a1, &LockHandle);
  v6 = *a2;
  if ( *a2 != a2 )
  {
    v5 = *a2;
    if ( (_QWORD **)v6[1] != a2 || (v7 = (_QWORD *)*v6, (_QWORD *)v7[1] != v5) )
      __fastfail(3u);
    *a2 = v7;
    v7[1] = a2;
    if ( a3 )
      --*a3;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v5;
}
