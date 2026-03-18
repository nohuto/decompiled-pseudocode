/*
 * XREFs of VidSchiAllocateQueuePacket @ 0x1C006AD40
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C0005560 (VidSchWaitForSingleSyncObject.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0006490 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchEnqueueCpuEvent @ 0x1C0047EE0 (VidSchEnqueueCpuEvent.c)
 *     VidSchSubmitGlobalCommand @ 0x1C006C8E0 (VidSchSubmitGlobalCommand.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C00063A0 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0006410 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0011600 (VidSchiInterlockedRemoveEntryList.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C004FB1C (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C004FCEC (VidSchRegisterCompletionEvent.c)
 */

__int64 *__fastcall VidSchiAllocateQueuePacket(__int64 a1, int a2)
{
  __int64 v4; // rsi
  unsigned int v5; // r14d
  __int64 *v6; // rax
  __int64 *v7; // rbx
  __int64 *PoolWithTag; // rax
  __int64 v10; // rax
  __int64 *v11; // rax
  _QWORD v12[20]; // [rsp+20h] [rbp-C8h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  v5 = *(_DWORD *)(v4 + 128) * (48 * *(_DWORD *)(v4 + 56) + ((8 * *(_DWORD *)(v4 + 56) + 167) & 0xFFFFFFF8))
     + 8 * (*(_DWORD *)(v4 + 56) + 89);
  if ( v5 <= 0x370 )
    v5 = 880;
  v6 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v4 + 1888), (__int64 **)(a1 + 720), (_DWORD *)(a1 + 736));
  if ( v6 )
  {
    v7 = v6 - 1;
  }
  else
  {
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)512, v5, 0x68536956u);
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
      VidSchRegisterCompletionEvent(v4, (__int64)v12);
      do
      {
        v11 = VidSchiInterlockedRemoveHeadListIfExist(
                (KSPIN_LOCK *)(v4 + 1888),
                (__int64 **)(a1 + 720),
                (_DWORD *)(a1 + 736));
        if ( v11 )
          v7 = v11 - 1;
        else
          VidSchWaitForCompletionEvent(v4, (__int64)v12, 19LL);
      }
      while ( !v7 );
      VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v4 + 1896), v12, 0LL);
    }
  }
  if ( v7 )
  {
LABEL_6:
    memset(v7, 0, v5);
    v7[7] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)v7 + 13) = 1;
    VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(v4 + 1888), a1 + 768, v7 + 1, (_DWORD *)(a1 + 784));
  }
  return v7;
}
