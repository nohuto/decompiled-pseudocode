/*
 * XREFs of VidSchiAllocateQueuePacket @ 0x1C0076AF0
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C0006360 (VidSchWaitForSingleSyncObject.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C00073F0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchEnqueueCpuEvent @ 0x1C0053170 (VidSchEnqueueCpuEvent.c)
 *     VidSchSubmitGlobalCommand @ 0x1C0079320 (VidSchSubmitGlobalCommand.c)
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0002828 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C0007300 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0007370 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0074A5C (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0074B84 (VidSchRegisterCompletionEvent.c)
 */

_QWORD *__fastcall VidSchiAllocateQueuePacket(__int64 a1, int a2)
{
  __int64 v3; // r14
  unsigned int v4; // ebp
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  size_t v7; // rsi
  _QWORD *PoolWithTag; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  _QWORD v12[25]; // [rsp+20h] [rbp-C8h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  v4 = *(_DWORD *)(v3 + 132) * (48 * *(_DWORD *)(v3 + 60) + ((8 * *(_DWORD *)(v3 + 60) + 175) & 0xFFFFFFF8))
     + 8 * (*(_DWORD *)(v3 + 60) + 98);
  if ( v4 <= 0x3C0 )
    v4 = 960;
  v5 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v3 + 1912), (_QWORD **)(a1 + 704), (_DWORD *)(a1 + 720));
  if ( v5 )
  {
    v6 = v5 - 1;
  }
  else
  {
    v7 = v4;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v4, 0x68536956u);
    v6 = PoolWithTag;
    if ( a2 )
    {
      if ( PoolWithTag )
        goto LABEL_7;
      memset(v12, 0, 0xA0uLL);
      v10 = *(_QWORD *)(a1 + 96);
      LODWORD(v12[4]) |= 0x40u;
      LODWORD(v12[2]) = 1;
      LODWORD(v12[6]) = *(unsigned __int16 *)(v10 + 4);
      VidSchRegisterCompletionEvent(v3, (__int64)v12);
      do
      {
        v11 = VidSchiInterlockedRemoveHeadListIfExist(
                (KSPIN_LOCK *)(v3 + 1912),
                (_QWORD **)(a1 + 704),
                (_DWORD *)(a1 + 720));
        if ( v11 )
          v6 = v11 - 1;
        else
          VidSchWaitForCompletionEvent(v3, (__int64)v12, 19LL);
      }
      while ( !v6 );
      VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v3 + 1920), v12, 0LL);
    }
  }
  if ( v6 )
  {
    v7 = v4;
LABEL_7:
    memset(v6, 0, v7);
    v6[7] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)v6 + 13) = 1;
    VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(v3 + 1912), a1 + 752, v6 + 1, (_DWORD *)(a1 + 768));
  }
  return v6;
}
