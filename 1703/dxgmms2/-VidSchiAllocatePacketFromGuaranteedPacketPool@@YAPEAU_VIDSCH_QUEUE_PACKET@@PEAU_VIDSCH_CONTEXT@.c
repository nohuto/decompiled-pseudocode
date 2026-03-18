/*
 * XREFs of ?VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0022034
 * Callers:
 *     ?VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C0022300 (-VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C00063A0 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0006410 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 */

struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiAllocatePacketFromGuaranteedPacketPool(struct _VIDSCH_CONTEXT *a1)
{
  __int64 v2; // rbx
  KSPIN_LOCK *v3; // r14
  unsigned int v4; // ebp
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *v9; // rsi
  __int64 *v10; // rbx
  _QWORD *v12; // rax

  v2 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 24LL);
  v3 = (KSPIN_LOCK *)(v2 + 1888);
  v4 = *(_DWORD *)(v2 + 128) * (48 * *(_DWORD *)(v2 + 56) + ((8 * *(_DWORD *)(v2 + 56) + 167) & 0xFFFFFFF8))
     + 8 * (*(_DWORD *)(v2 + 56) + 89);
  if ( v4 <= 0x370 )
    v4 = 880;
  v5 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v2 + 1888), (__int64 **)a1 + 93, (_DWORD *)a1 + 190);
  v9 = v5;
  if ( !v5 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6, v8);
    v12[7] = (char *)a1 + 784;
    v12[3] = 281LL;
    v12[4] = 3584LL;
    v12[5] = v2;
    v12[6] = a1;
    WdLogEvent5_WdCriticalError(v12);
    JUMPOUT(0x1C0022146LL);
  }
  v10 = v5 - 1;
  if ( v5 != (__int64 *)8 )
  {
    memset(v5 - 1, 0, v4);
    *((_DWORD *)v10 + 16) |= 0x40u;
    v10[7] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)v10 + 13) = 1;
    VidSchiInterlockedInsertTailList(v3, (__int64)a1 + 768, v9, (_DWORD *)a1 + 196);
  }
  return (struct _VIDSCH_QUEUE_PACKET *)v10;
}
