/*
 * XREFs of VidSchiInterlockedInsertTailList @ 0x1C00063A0
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C0005560 (VidSchWaitForSingleSyncObject.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008200 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiFreeQueuePacket @ 0x1C000EB98 (VidSchiFreeQueuePacket.c)
 *     VidSchiCreateContextInternal @ 0x1C000EE34 (VidSchiCreateContextInternal.c)
 *     ?VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0022034 (-VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C002657C (VidSchiProcessDpcDmaPacket.c)
 *     VidSchRegisterCompletionEvent @ 0x1C004FCEC (VidSchRegisterCompletionEvent.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0059620 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchSubmitCommand @ 0x1C006A5F0 (VidSchSubmitCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1C006AD40 (VidSchiAllocateQueuePacket.c)
 *     VidSchiCreateDeviceInternal @ 0x1C006C10C (VidSchiCreateDeviceInternal.c)
 *     VidSchiCreateNode @ 0x1C0071134 (VidSchiCreateNode.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiInterlockedInsertTailList(KSPIN_LOCK *a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  _QWORD *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1, &LockHandle);
  v7 = *(_QWORD **)(a2 + 8);
  if ( *v7 != a2 )
    __fastfail(3u);
  *a3 = a2;
  a3[1] = v7;
  *v7 = a3;
  *(_QWORD *)(a2 + 8) = a3;
  if ( a4 )
    ++*a4;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
