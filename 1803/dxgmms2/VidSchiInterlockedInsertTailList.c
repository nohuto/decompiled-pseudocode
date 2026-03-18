/*
 * XREFs of VidSchiInterlockedInsertTailList @ 0x1C0007300
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C0006360 (VidSchWaitForSingleSyncObject.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009720 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiFreeQueuePacket @ 0x1C0011368 (VidSchiFreeQueuePacket.c)
 *     VidSchiCreateContextInternal @ 0x1C00117A8 (VidSchiCreateContextInternal.c)
 *     ?VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0026FD8 (-VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C002B520 (VidSchiProcessDpcDmaPacket.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030C40 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchCreateHwQueue @ 0x1C0032270 (VidSchCreateHwQueue.c)
 *     VidSchiCreateDeviceInternal @ 0x1C0057A8C (VidSchiCreateDeviceInternal.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0061050 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0074B84 (VidSchRegisterCompletionEvent.c)
 *     VidSchSubmitCommand @ 0x1C0075380 (VidSchSubmitCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1C0076AF0 (VidSchiAllocateQueuePacket.c)
 *     VidSchiCreateNode @ 0x1C007BF28 (VidSchiCreateNode.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00BEC50 (VidSchiAllocateHwQueuePacket.c)
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
