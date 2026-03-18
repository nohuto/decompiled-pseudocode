/*
 * XREFs of ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030AC8
 * Callers:
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002FCF8 (-VidSchiCompleteHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C003032C (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiCompleteHwQueueWaitPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030440 (-VidSchiCompleteHwQueueWaitPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C000A8D0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C000F294 (VidSchiSignalRegisteredEvent.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00103BC (VidSchiCheckPendingDeviceCommand.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030C40 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z @ 0x1C0031278 (-VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z.c)
 */

void __fastcall VidSchiFreeCompletedHwQueuePacket(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // r15
  __int64 v6; // r14
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9

  v2 = *((_QWORD *)a1 + 12);
  v3 = *(_QWORD *)(v2 + 24);
  v4 = *(_QWORD *)(v3 + 16);
  v5 = *(_QWORD *)(v3 + 8);
  v6 = *(_QWORD *)(v4 + 24);
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  v7 = (_QWORD *)((char *)a1 + 32);
  *((_DWORD *)a1 + 13) = 16;
  v8 = *((_QWORD *)a1 + 4);
  if ( *(struct _VIDSCH_QUEUE_PACKET **)(v8 + 8) != (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 32)
    || (v9 = (_QWORD *)*((_QWORD *)a1 + 5), (_QWORD *)*v9 != v7) )
  {
    __fastfail(3u);
  }
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  v10 = 0LL;
  *v7 = 0LL;
  *((_QWORD *)a1 + 5) = 0LL;
  v11 = *(_QWORD *)(v2 + 96);
  if ( v11 != v2 + 96 )
  {
    LOBYTE(v10) = v11 == *(_QWORD *)(v2 + 112);
    v10 = (unsigned int)(v10 + 1);
  }
  VidSchiSetHwQueueState(v2, v10);
  _InterlockedDecrement((volatile signed __int32 *)(v6 + 964));
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 2820));
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 1220));
  _InterlockedDecrement((volatile signed __int32 *)(v2 + 88));
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 152));
  VidSchiProfilePerformanceTick(9LL, v6, v4, v12, 0LL, (__int64)a1, 0LL, 0LL);
  VidSchiCheckPendingDeviceCommand((_QWORD *)v5);
  VidSchiSignalRegisteredEvent(v6, (struct _KEVENT **)(v4 + 424));
  VidSchiSignalRegisteredEvent(v6, (struct _KEVENT **)(v6 + 1832));
  *(_QWORD *)(v4 + 328) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v4 + 296), 0, 0);
  *(_QWORD *)(v6 + 1680) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v6 + 1648), 0, 0);
  VidSchiFreeQueuePacket((struct VIDSCH_HW_QUEUE *)v2, a1);
}
