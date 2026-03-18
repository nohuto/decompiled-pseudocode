/*
 * XREFs of ?VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0026FD8
 * Callers:
 *     ?VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C0027284 (-VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0007300 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0007370 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 */

struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiAllocatePacketFromGuaranteedPacketPool(struct _VIDSCH_CONTEXT *a1)
{
  __int64 v2; // rbx
  KSPIN_LOCK *v3; // r14
  unsigned int v4; // ebp
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rsi
  _QWORD *v10; // rbx
  _QWORD *v12; // rax

  v2 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 24LL);
  v3 = (KSPIN_LOCK *)(v2 + 1912);
  v4 = *(_DWORD *)(v2 + 132) * (48 * *(_DWORD *)(v2 + 60) + ((8 * *(_DWORD *)(v2 + 60) + 175) & 0xFFFFFFF8))
     + 8 * (*(_DWORD *)(v2 + 60) + 98);
  if ( v4 <= 0x3C0 )
    v4 = 960;
  v5 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v2 + 1912), (_QWORD **)a1 + 91, (_DWORD *)a1 + 186);
  v9 = v5;
  if ( !v5 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6, v8);
    v12[7] = (char *)a1 + 768;
    v12[3] = 281LL;
    v12[4] = 3584LL;
    v12[5] = v2;
    v12[6] = a1;
    WdLogEvent5_WdCriticalError(v12);
    JUMPOUT(0x1C00270EALL);
  }
  v10 = v5 - 1;
  if ( v5 != (_QWORD *)8 )
  {
    memset(v5 - 1, 0, v4);
    *((_DWORD *)v10 + 16) |= 0x40u;
    v10[7] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)v10 + 13) = 1;
    VidSchiInterlockedInsertTailList(v3, (__int64)a1 + 752, v9, (_DWORD *)a1 + 192);
  }
  return (struct _VIDSCH_QUEUE_PACKET *)v10;
}
