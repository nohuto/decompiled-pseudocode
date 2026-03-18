/*
 * XREFs of ?VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00244E8
 * Callers:
 *     ?VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C002474C (-VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C00071A0 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0007210 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     memset @ 0x1C0018400 (memset.c)
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
  v3 = (KSPIN_LOCK *)(v2 + 1896);
  v4 = *(_DWORD *)(v2 + 128) * (48 * *(_DWORD *)(v2 + 56) + ((8 * *(_DWORD *)(v2 + 56) + 175) & 0xFFFFFFF8))
     + 8 * (*(_DWORD *)(v2 + 56) + 93);
  if ( v4 <= 0x3A0 )
    v4 = 928;
  v5 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v2 + 1896), (_QWORD **)a1 + 90, (_DWORD *)a1 + 184);
  v9 = v5;
  if ( !v5 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6, v8);
    v12[7] = (char *)a1 + 760;
    v12[3] = 281LL;
    v12[4] = 3584LL;
    v12[5] = v2;
    v12[6] = a1;
    WdLogEvent5_WdCriticalError(v12);
    JUMPOUT(0x1C00245FALL);
  }
  v10 = v5 - 1;
  if ( v5 != (_QWORD *)8 )
  {
    memset(v5 - 1, 0, v4);
    *((_DWORD *)v10 + 16) |= 0x40u;
    v10[7] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)v10 + 13) = 1;
    VidSchiInterlockedInsertTailList(v3, (__int64)a1 + 744, v9, (_DWORD *)a1 + 190);
  }
  return (struct _VIDSCH_QUEUE_PACKET *)v10;
}
