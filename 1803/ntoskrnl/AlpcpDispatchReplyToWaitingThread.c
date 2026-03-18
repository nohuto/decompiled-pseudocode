/*
 * XREFs of AlpcpDispatchReplyToWaitingThread @ 0x1404CB2A0
 * Callers:
 *     AlpcpSendMessage @ 0x1404CC2E0 (AlpcpSendMessage.c)
 *     AlpcpDispatchMessage @ 0x1404DC48C (AlpcpDispatchMessage.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeReleaseSemaphoreEx @ 0x140084C90 (KeReleaseSemaphoreEx.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     AlpcpUnlockBlob @ 0x1404CBF90 (AlpcpUnlockBlob.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1404CD870 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1404D513C (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpSetOwnerPortMessage @ 0x1404DDF58 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140747B64 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpLogSendMessage @ 0x140749578 (AlpcpLogSendMessage.c)
 *     AlpcpLogWaitForReply @ 0x140749734 (AlpcpLogWaitForReply.c)
 */

__int64 __fastcall AlpcpDispatchReplyToWaitingThread(__int64 a1)
{
  ULONG_PTR v1; // rdi
  ULONG_PTR v2; // r12
  signed __int32 *v4; // r15
  __int64 v5; // r14
  int v6; // ecx
  int v7; // ebp
  struct _KTHREAD *CurrentThread; // r13
  __int16 v9; // dx
  __int16 v10; // dx
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // r15d
  __int64 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // ebp
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  bool v30; // zf
  char v31; // [rsp+80h] [rbp+8h]
  __int16 v32; // [rsp+88h] [rbp+10h]
  __int64 v33; // [rsp+90h] [rbp+18h]
  struct _KTHREAD *v34; // [rsp+98h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 8);
  LODWORD(v2) = *(_DWORD *)(a1 + 48);
  v4 = *(signed __int32 **)a1;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v5 = *(_QWORD *)(v1 + 24);
  v6 = *(_DWORD *)(v1 + 40);
  v33 = *(_QWORD *)(v1 + 32);
  v7 = *(_DWORD *)(v5 + 416) >> 1;
  v31 = v2;
  v32 = v6;
  if ( (unsigned __int64)*(unsigned __int16 *)(a1 + 52) > *(_QWORD *)(v5 + 272) )
  {
    AlpcpUnlockMessage(v1);
    return 3221225507LL;
  }
  else
  {
    *(_QWORD *)(v1 + 24) = 0LL;
    *(_QWORD *)(v1 + 200) = 0LL;
    if ( *(_WORD *)(a1 + 54) == 11 )
    {
      ExAcquirePushLockExclusiveEx(v5 + 352, 0LL);
      *(_DWORD *)(v5 + 416) &= ~8u;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 352), v24, v25, v26);
      KeAbPostRelease(v5 + 352);
      v6 = *(_DWORD *)(v1 + 40);
    }
    CurrentThread = KeGetCurrentThread();
    *(_WORD *)(v1 + 242) = *(_WORD *)(a1 + 52);
    v34 = CurrentThread;
    *(_WORD *)(v1 + 240) = *(_WORD *)(a1 + 52) - 40;
    v9 = *(_WORD *)(a1 + 54);
    *(_WORD *)(v1 + 244) = v9;
    *(_WORD *)(v1 + 246) = *(_WORD *)(a1 + 56);
    *(_OWORD *)(v1 + 248) = *(_OWORD *)&CurrentThread[1].CycleTime;
    if ( (v2 & 0x10000) != 0 )
    {
      v10 = v9 & 0xDFFF;
      v11 = v6 | 0x200;
    }
    else
    {
      v10 = v9 | 0x2000;
      v11 = v6 & 0xFFFFFDFF;
    }
    *(_DWORD *)(v1 + 40) = v11;
    *(_WORD *)(v1 + 244) = v10;
    if ( (_bittest((const signed __int32 *)(v1 + 40), 9u) & _bittest(v4 + 104, 0xDu)) != 0 )
    {
      AlpcpSetOwnerPortMessage(v1, v4, 0LL);
    }
    else
    {
      ObfReferenceObject(v4);
      *(_DWORD *)(v1 + 40) |= 0x1000u;
      *(_QWORD *)(v1 + 24) = v4;
    }
    v12 = *(_DWORD *)(v1 + 40);
    v13 = v2 & 0x20000;
    if ( (v2 & 0x20000) != 0 )
    {
      _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].Teb, v1);
      *(_DWORD *)(v1 + 40) |= 0x800u;
      ++*(_WORD *)(v1 - 30);
      v12 = *(_DWORD *)(v1 + 40);
    }
    v14 = *(_QWORD *)(v1 + 16);
    *(_DWORD *)(v1 + 40) = v12 | 0x100;
    if ( v14 )
    {
      v2 = v14 + 176;
      ExAcquirePushLockExclusiveEx(v14 + 176, 0LL);
      --*(_DWORD *)(v14 + 456);
      *(_DWORD *)(v1 + 40) &= 0xFFFFFFF8;
      *(_QWORD *)(v1 + 16) = 0LL;
      **(_QWORD **)(v1 + 8) = *(_QWORD *)v1;
      *(_QWORD *)(*(_QWORD *)v1 + 8LL) = *(_QWORD *)(v1 + 8);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v2, v15, v16, v17);
      KeAbPostRelease(v2);
      --*(_WORD *)(v1 - 30);
      LOBYTE(v2) = v31;
    }
    *(_DWORD *)(v1 + 44) = _InterlockedIncrement((volatile signed __int32 *)(v5 + 400));
    v18 = *(_DWORD *)(v1 + 40) & 0xFFFFFF87 | (8 * (v7 & 3));
    *(_DWORD *)(v1 + 40) = v18;
    if ( ((v18 >> 3) & 0xF) == 1 )
    {
      v27 = *(_QWORD *)(v5 + 16);
      ExAcquirePushLockSharedEx(v27 - 16, 0LL);
      v28 = *(_QWORD *)(v27 + 8);
      if ( v28 )
        v29 = *(_QWORD *)(v28 + 56);
      else
        v29 = 0LL;
      *(_QWORD *)(v1 + 120) = v29;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v27 - 16), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v27 - 16));
      KeAbPostRelease(v27 - 16);
    }
    else
    {
      *(_QWORD *)(v1 + 120) = *(_QWORD *)(v5 + 56);
    }
    if ( *(_QWORD *)(v1 + 176) )
    {
      AlpcpCaptureMessageDataSafe(v1);
      *(_QWORD *)(v1 + 176) = 0LL;
    }
    ExAcquirePushLockSharedEx(v5 + 352, 0LL);
    if ( *(_QWORD *)(v1 + 144) )
      AlpcpExposeViewAttributeInSenderContext((PVOID)v5);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v5 + 352));
    KeAbPostRelease(v5 + 352);
    if ( AlpcpLogEnabled )
      AlpcpLogSendMessage(v1);
    if ( v13 )
    {
      v30 = AlpcpLogEnabled == 0;
      *(_QWORD *)(v1 + 32) = v34;
      *(_QWORD *)(a1 + 24) = v33;
      if ( !v30 )
        AlpcpLogWaitForReply(v1);
      AlpcpUnlockMessage(v1);
    }
    else
    {
      *(_QWORD *)(v1 + 32) = 0LL;
      --*(_WORD *)(v1 - 30);
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v1, v19, v20, v21);
      AlpcpUnlockBlob(v1);
      if ( (v2 & 4) != 0 )
        *(_QWORD *)(a1 + 24) = v33;
      else
        KeReleaseSemaphoreEx(v33 + 1608, 1, 1, v22, 2);
    }
    if ( (v32 & 0x1000) != 0 )
      ObfDereferenceObject((PVOID)v5);
    return 0LL;
  }
}
