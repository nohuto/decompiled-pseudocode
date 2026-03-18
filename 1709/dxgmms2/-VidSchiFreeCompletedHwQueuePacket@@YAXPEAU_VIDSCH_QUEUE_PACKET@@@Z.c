/*
 * XREFs of ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002D4F0
 * Callers:
 *     ?VidSchiCompleteHwQueueRenderPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002D0F8 (-VidSchiCompleteHwQueueRenderPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C002D418 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C0004764 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C0005F30 (VidSchiSignalRegisteredEvent.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000A200 (VidSchiProfilePerformanceTick.c)
 *     ?VidSchiFreeHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002D62C (-VidSchiFreeHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

void __fastcall VidSchiFreeCompletedHwQueuePacket(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rsi
  char *v7; // rax
  __int64 v8; // r9
  __int64 *v9; // rcx

  v2 = *((_QWORD *)a1 + 12);
  v3 = *(_QWORD *)(v2 + 24);
  v4 = *(_QWORD *)(v3 + 32);
  v5 = *(_QWORD *)(v3 + 24);
  v6 = *(_QWORD *)(v4 + 24);
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  v7 = (char *)a1 + 32;
  *((_DWORD *)a1 + 13) = 16;
  v8 = *((_QWORD *)a1 + 4);
  if ( *(struct _VIDSCH_QUEUE_PACKET **)(v8 + 8) != (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 32)
    || (v9 = (__int64 *)*((_QWORD *)a1 + 5), (char *)*v9 != v7) )
  {
    __fastfail(3u);
  }
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  _InterlockedDecrement((volatile signed __int32 *)(v6 + 948));
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 2788));
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 1196));
  _InterlockedDecrement((volatile signed __int32 *)(v2 + 104));
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 120));
  VidSchiProfilePerformanceTick(9LL, v6, v4, v8, 0LL, (__int64)a1, 0LL, 0LL);
  VidSchiCheckPendingDeviceCommand((_QWORD *)v5);
  VidSchiSignalRegisteredEvent(v6, (struct _KEVENT **)(v4 + 424));
  VidSchiSignalRegisteredEvent(v6, (struct _KEVENT **)(v6 + 1816));
  *(_QWORD *)(v4 + 328) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v4 + 296), 0, 0);
  *(_QWORD *)(v6 + 1664) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v6 + 1632), 0, 0);
  VidSchiFreeHwQueuePacket(a1);
}
