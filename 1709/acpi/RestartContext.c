/*
 * XREFs of RestartContext @ 0x1C0018450
 * Callers:
 *     SyncEvalObject @ 0x1C0006D00 (SyncEvalObject.c)
 *     InsertReadyQueue @ 0x1C00079E0 (InsertReadyQueue.c)
 *     RunContext @ 0x1C0008F50 (RunContext.c)
 *     RestartCtxtCallback @ 0x1C0018350 (RestartCtxtCallback.c)
 *     AMLIRestartContext @ 0x1C005B8E0 (AMLIRestartContext.c)
 *     SleepQueueDpc @ 0x1C005F340 (SleepQueueDpc.c)
 *     AsyncCallBack @ 0x1C00601A4 (AsyncCallBack.c)
 *     TimeoutCallback @ 0x1C0060690 (TimeoutCallback.c)
 *     SyncLoadDDB @ 0x1C00AEE84 (SyncLoadDDB.c)
 * Callees:
 *     InsertReadyQueue @ 0x1C00079E0 (InsertReadyQueue.c)
 *     OSQueueWorkItem @ 0x1C005B504 (OSQueueWorkItem.c)
 */

__int64 __fastcall RestartContext(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v5; // r9
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // rbp
  unsigned __int32 v10; // ecx
  unsigned int v11; // ecx
  __int64 v12; // rdx
  unsigned int inserted; // ebx
  __int64 v15; // rcx

  v2 = *(_QWORD *)(a1 + 104);
  if ( v2 )
    v5 = *(_QWORD *)(v2 + 32);
  else
    v5 = *(_QWORD *)(a1 + 72);
  CurrentThread = KeGetCurrentThread();
  v7 = *(_QWORD *)(a1 + 120);
  v8 = *(_QWORD *)(a1 + 408);
  v9 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && P )
  {
    v10 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0079788 + 1, 1u);
    if ( (_DWORD)qword_1C0079788 == 204 )
      v11 = v10 % 0xCC;
    else
      v11 = v10 % (unsigned int)qword_1C0079788;
    v12 = 72LL * v11;
    *(_QWORD *)((char *)P + v12 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)P + v12) = 1380275028;
    *(_QWORD *)((char *)P + v12 + 16) = CurrentThread;
    *(_QWORD *)((char *)P + v12 + 24) = v8;
    *(_QWORD *)((char *)P + v12 + 32) = a1;
    *(_QWORD *)((char *)P + v12 + 40) = v9;
    *(_QWORD *)((char *)P + v12 + 48) = a1;
    *(_QWORD *)((char *)P + v12 + 56) = v5;
    *(_QWORD *)((char *)P + v12 + 64) = v7;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    byte_1C0079660 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( !*(_QWORD *)(a1 + 432) )
      *(_QWORD *)(a1 + 432) = ++gAmliMethodCounter;
    *(_DWORD *)(a1 + 64) |= 0x20u;
    KeReleaseSpinLock(&SpinLock, byte_1C0079660);
    v15 = a1 + 360;
    if ( (gdwfAMLI & 4) != 0 )
    {
      if ( (unsigned __int8)ExTryQueueWorkItem(v15, 1LL) )
        return 32772LL;
      v15 = a1 + 360;
    }
    OSQueueWorkItem(v15);
    return 32772LL;
  }
  byte_1C0079660 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  if ( !*(_QWORD *)(a1 + 432) )
    *(_QWORD *)(a1 + 432) = ++gAmliMethodCounter;
  inserted = InsertReadyQueue((PSLIST_ENTRY)a1, a2);
  KeReleaseSpinLock(&SpinLock, byte_1C0079660);
  return inserted;
}
