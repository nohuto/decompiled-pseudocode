/*
 * XREFs of VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0006410
 * Callers:
 *     VidSchiSwitchContextWithCheck @ 0x1C00098D0 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiDecrementContextReference @ 0x1C0010100 (VidSchiDecrementContextReference.c)
 *     ?VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0022034 (-VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0059620 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0069E70 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C006A150 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchSubmitCommand @ 0x1C006A5F0 (VidSchSubmitCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1C006AD40 (VidSchiAllocateQueuePacket.c)
 *     VidSchiAllocateDmaPacket @ 0x1C006CF88 (VidSchiAllocateDmaPacket.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall VidSchiInterlockedRemoveHeadListIfExist(KSPIN_LOCK *a1, __int64 **a2, _DWORD *a3)
{
  __int64 *v5; // rbx
  __int64 v6; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  KeAcquireInStackQueuedSpinLock(a1, &LockHandle);
  if ( *a2 != (__int64 *)a2 )
  {
    v5 = *a2;
    v6 = **a2;
    if ( (__int64 **)(*a2)[1] != a2 || *(__int64 **)(v6 + 8) != v5 )
      __fastfail(3u);
    *a2 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = a2;
    if ( a3 )
      --*a3;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v5;
}
