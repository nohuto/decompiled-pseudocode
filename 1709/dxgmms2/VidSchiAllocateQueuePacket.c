/*
 * XREFs of VidSchiAllocateQueuePacket @ 0x1C006EA50
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C0005FE0 (VidSchWaitForSingleSyncObject.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007290 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchSubmitGlobalCommand @ 0x1C0071CA8 (VidSchSubmitGlobalCommand.c)
 *     VidSchEnqueueCpuEvent @ 0x1C0072F20 (VidSchEnqueueCpuEvent.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C00071A0 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0007210 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0010DCC (VidSchiInterlockedRemoveEntryList.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     VidSchRegisterCompletionEvent @ 0x1C007182C (VidSchRegisterCompletionEvent.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0071908 (VidSchWaitForCompletionEvent.c)
 */

_QWORD *__fastcall VidSchiAllocateQueuePacket(__int64 a1, int a2)
{
  __int64 v4; // rsi
  unsigned int v5; // r14d
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  _QWORD *PoolWithTag; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  _QWORD v12[20]; // [rsp+20h] [rbp-C8h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  v5 = *(_DWORD *)(v4 + 128) * (48 * *(_DWORD *)(v4 + 56) + ((8 * *(_DWORD *)(v4 + 56) + 175) & 0xFFFFFFF8))
     + 8 * (*(_DWORD *)(v4 + 56) + 93);
  if ( v5 <= 0x3A0 )
    v5 = 928;
  v6 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v4 + 1896), (_QWORD **)(a1 + 696), (_DWORD *)(a1 + 712));
  if ( v6 )
  {
    v7 = v6 - 1;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v5, 0x68536956u);
    v7 = PoolWithTag;
    if ( a2 )
    {
      if ( PoolWithTag )
        goto LABEL_6;
      memset(v12, 0, sizeof(v12));
      v10 = *(_QWORD *)(a1 + 96);
      LODWORD(v12[4]) |= 0x10u;
      LODWORD(v12[2]) = 1;
      LODWORD(v12[6]) = *(unsigned __int16 *)(v10 + 4);
      VidSchRegisterCompletionEvent(v4, v12);
      do
      {
        v11 = VidSchiInterlockedRemoveHeadListIfExist(
                (KSPIN_LOCK *)(v4 + 1896),
                (_QWORD **)(a1 + 696),
                (_DWORD *)(a1 + 712));
        if ( v11 )
          v7 = v11 - 1;
        else
          VidSchWaitForCompletionEvent(v4, v12, 19LL);
      }
      while ( !v7 );
      VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v4 + 1904), v12, 0LL);
    }
  }
  if ( v7 )
  {
LABEL_6:
    memset(v7, 0, v5);
    v7[7] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)v7 + 13) = 1;
    VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(v4 + 1896), a1 + 744, v7 + 1, (_DWORD *)(a1 + 760));
  }
  return v7;
}
