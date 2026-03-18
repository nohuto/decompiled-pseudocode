/*
 * XREFs of VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C0034008
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C00082B0 (VidSchiSendToExecutionQueue.c)
 *     VidSchiResetEngine @ 0x1C002BF88 (VidSchiResetEngine.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C0033E60 (VidSchiCompleteAllPendingCommand.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C000A8D0 (VidSchiProfilePerformanceTick.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C002A5B8 (VidSchDdiNotifyDpcWorker.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0074A5C (VidSchWaitForCompletionEvent.c)
 */

void __fastcall VidSchiCompletePendingCommandInNodeHwQueue(__int64 a1, int a2, char a3)
{
  __int64 v4; // rsi
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rcx
  _DWORD v18[20]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v19[2]; // [rsp+98h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD v21[40]; // [rsp+C8h] [rbp-40h] BYREF
  char v22; // [rsp+178h] [rbp+70h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 2824) )
  {
    if ( a3 && *(_DWORD *)(a1 + 2824) > 1u )
    {
      memset(v21, 0, sizeof(v21));
      v6 = *(unsigned __int16 *)(a1 + 4);
      v21[4] = 0;
      v21[8] |= 0x40u;
      v21[12] = v6;
      v21[5] = 1;
      *(_QWORD *)(a1 + 280) = MEMORY[0xFFFFF78000000320];
      KeResetEvent((PRKEVENT)(a1 + 240));
      while ( *(_DWORD *)(a1 + 2824) > 1u )
      {
        VidSchiProfilePerformanceTick(16LL, v4, 0LL, v7, 0LL, 0LL, 0LL, 0LL);
        VidSchWaitForCompletionEvent(v4, v21, 0xFFFFFFFFLL);
        VidSchiProfilePerformanceTick(17LL, v4, 0LL, v8, 0LL, 0LL, 0LL, 0LL);
      }
    }
    if ( *(_DWORD *)(a1 + 2824) )
    {
      v22 = 0;
      memset(v18, 0, sizeof(v18));
      v9 = *(unsigned __int16 *)(a1 + 4);
      v10 = *(_QWORD *)(a1 + 24);
      if ( *(_DWORD *)(a1 + 2832) )
      {
        v18[2] = *(_DWORD *)(a1 + 160);
        v18[0] = 2;
        v18[3] = a2;
        v18[4] = *(unsigned __int16 *)(*(_QWORD *)(v10 + 8 * v9 + 440) + 8LL);
        v11 = *(_QWORD *)(v10 + 8 * v9 + 440);
        v12 = *(unsigned __int16 *)(v11 + 6);
        v18[5] = *(unsigned __int16 *)(v11 + 6);
        v13 = (_QWORD *)WdLogNewEntry5_WdEvent(v12, v9);
        v13[3] = v18[3];
        v13[4] = v18[2];
        v13[5] = v18[4];
        v13[6] = v18[5];
      }
      else
      {
        v18[0] = 1;
        v18[2] = a2;
        v18[3] = *(unsigned __int16 *)(*(_QWORD *)(v10 + 8 * v9 + 440) + 8LL);
        v14 = *(_QWORD *)(v10 + 8 * v9 + 440);
        v15 = *(unsigned __int16 *)(v14 + 6);
        v18[4] = *(unsigned __int16 *)(v14 + 6);
        v13 = (_QWORD *)WdLogNewEntry5_WdEvent(v15, v9);
        v13[3] = v18[2];
        v13[4] = v18[3];
        v13[5] = v18[4];
      }
      WdLogEvent5_WdEvent(v13);
      v16 = *(unsigned int *)(v4 + 32);
      v17 = *(_QWORD *)(v4 + 24);
      v19[0] = *(_QWORD *)(v4 + 8);
      v19[1] = v18;
      DpSynchronizeExecution(v17, VidSchiCallNotifyInterruptAtISR, v19, v16, &v22);
    }
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1928), &LockHandle);
  VidSchDdiNotifyDpcWorker(*(_QWORD *)(v4 + 8), 0);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
