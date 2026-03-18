/*
 * XREFs of VidSchiSubmitHwPagingCommand @ 0x1C00BF058
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0061050 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0002EB0 (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C0033B44 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00BEC50 (VidSchiAllocateHwQueuePacket.c)
 */

void __fastcall VidSchiSubmitHwPagingCommand(__int64 a1, __int128 *a2)
{
  unsigned int v3; // eax
  __int64 v4; // r9
  __int64 v5; // rbx
  _QWORD *HwQueuePacket; // rax
  __int128 v7; // xmm0
  _QWORD *v8; // r8
  __int128 v9; // xmm1
  __int64 v10; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int128 v12; // xmm0
  __int128 v13; // xmm1

  v3 = VidSchiSchedulerNodeToDriverEngine(a1, *((_DWORD *)a2 + 15));
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 256) + 8LL * v3);
  HwQueuePacket = VidSchiAllocateHwQueuePacket(v5, 1);
  v7 = *a2;
  v8 = HwQueuePacket;
  v9 = a2[1];
  *(_DWORD *)HwQueuePacket = 1953189969;
  *((_DWORD *)HwQueuePacket + 12) = 8;
  HwQueuePacket[7] = MEMORY[0xFFFFF78000000320];
  v10 = *(_QWORD *)a2;
  *((_DWORD *)v8 + 13) = 2;
  v8[12] = v5;
  CurrentThread = KeGetCurrentThread();
  *((_OWORD *)v8 + 17) = v7;
  v8[13] = CurrentThread;
  v12 = a2[2];
  *((_OWORD *)v8 + 18) = v9;
  v8[9] = v10;
  v13 = a2[3];
  *((_OWORD *)v8 + 19) = v12;
  *(_QWORD *)&v12 = *((_QWORD *)a2 + 8);
  *((_OWORD *)v8 + 20) = v13;
  v8[42] = v12;
  VidSchiSubmitCommandPacketToHwQueue((struct _VIDSCH_QUEUE_PACKET *)v8);
}
