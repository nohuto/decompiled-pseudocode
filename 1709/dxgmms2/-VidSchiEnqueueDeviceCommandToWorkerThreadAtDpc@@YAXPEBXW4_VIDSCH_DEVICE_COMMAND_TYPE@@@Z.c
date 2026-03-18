/*
 * XREFs of ?VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C002474C
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004B50 (VidSchiProcessDpcVSyncCookie.c)
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@PEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C0024934 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLI.c)
 * Callees:
 *     VidSchiUpdatePriorityTables @ 0x1C0009A40 (VidSchiUpdatePriorityTables.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00244E8 (-VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@.c)
 */

LONG __fastcall VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc(__int128 *a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  _QWORD *v7; // rax
  __int128 v8; // xmm0
  __int64 (__fastcall *v9)(); // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // xmm1_8
  __int64 v15; // rbx
  struct _VIDSCH_QUEUE_PACKET *PacketFromGuaranteedPacketPool; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  LONG result; // eax
  _OWORD v26[8]; // [rsp+28h] [rbp-29h] BYREF
  int v27; // [rsp+C0h] [rbp+6Fh] BYREF

  v2 = a2;
  v4 = 0LL;
  memset(v26, 0, sizeof(v26));
  if ( (_DWORD)v2 == 5 )
  {
    v9 = VidSchiExecuteMmIoFlipAtPassiveLevel;
    v4 = *(_QWORD *)a1;
    v14 = *((_QWORD *)a1 + 2);
    v26[3] = *a1;
    *(_QWORD *)&v26[4] = v14;
    DWORD2(v26[2]) = 5;
  }
  else
  {
    if ( (_DWORD)v2 != 6 )
    {
      v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)(v2 - 5), v5, v6);
      v7[7] = 0LL;
      v7[3] = 270LL;
      v7[4] = 23LL;
      v7[5] = -1073741811LL;
      v7[6] = v2;
      WdLogEvent5_WdCriticalError(v7);
      goto LABEL_7;
    }
    v8 = *a1;
    v4 = *((_QWORD *)a1 + 3);
    v9 = VidSchiExecutePostPresentAtPassiveLevel;
    v10 = a1[1];
    DWORD2(v26[2]) = 6;
    v26[3] = v8;
    v11 = a1[2];
    v26[4] = v10;
    v12 = a1[3];
    v26[5] = v11;
    v13 = a1[4];
    v26[6] = v12;
    v26[7] = v13;
  }
  *((_QWORD *)&v26[1] + 1) = v9;
LABEL_7:
  v15 = *(_QWORD *)(v4 + 224);
  PacketFromGuaranteedPacketPool = VidSchiAllocatePacketFromGuaranteedPacketPool((struct _VIDSCH_CONTEXT *)v15);
  *(_DWORD *)PacketFromGuaranteedPacketPool = 1953189969;
  *((_DWORD *)PacketFromGuaranteedPacketPool + 12) = 6;
  *((_QWORD *)PacketFromGuaranteedPacketPool + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)PacketFromGuaranteedPacketPool + 13) = 2;
  *((_QWORD *)PacketFromGuaranteedPacketPool + 11) = v15;
  CurrentThread = KeGetCurrentThread();
  v18 = v26[1];
  v27 = 0;
  *((_OWORD *)PacketFromGuaranteedPacketPool + 18) = v26[0];
  *((_QWORD *)PacketFromGuaranteedPacketPool + 13) = CurrentThread;
  v19 = v26[2];
  *((_OWORD *)PacketFromGuaranteedPacketPool + 19) = v18;
  v20 = v26[3];
  *((_OWORD *)PacketFromGuaranteedPacketPool + 20) = v19;
  v21 = v26[4];
  *((_OWORD *)PacketFromGuaranteedPacketPool + 21) = v20;
  v22 = v26[5];
  *((_OWORD *)PacketFromGuaranteedPacketPool + 22) = v21;
  v23 = v26[6];
  *((_OWORD *)PacketFromGuaranteedPacketPool + 23) = v22;
  v24 = v26[7];
  *((_OWORD *)PacketFromGuaranteedPacketPool + 24) = v23;
  *((_OWORD *)PacketFromGuaranteedPacketPool + 25) = v24;
  result = VidSchiUpdatePriorityTables(v4, (__int64)PacketFromGuaranteedPacketPool, 1, &v27);
  if ( (_DWORD)v2 == 5 )
  {
    ++*(_DWORD *)(v15 + 792);
  }
  else if ( (_DWORD)v2 == 6 )
  {
    ++*(_DWORD *)(v15 + 796);
  }
  if ( v27 )
  {
    *(_QWORD *)(v4 + 1384) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(v4 + 1352), 0, 0);
  }
  return result;
}
