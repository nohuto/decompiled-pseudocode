/*
 * XREFs of AlpcpDispatchReplyToWaitingThread @ 0x14049FAA0
 * Callers:
 *     AlpcpDispatchMessage @ 0x140465C50 (AlpcpDispatchMessage.c)
 *     AlpcpSendMessage @ 0x1404A01A0 (AlpcpSendMessage.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x14006A750 (KeReleaseSemaphoreEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140461730 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpSetOwnerPortMessage @ 0x1404674B8 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpUnlockMessage @ 0x14049DAB4 (AlpcpUnlockMessage.c)
 *     AlpcpUnlockBlob @ 0x14049FE60 (AlpcpUnlockBlob.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1404A17F0 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1406DCE44 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpLogSendMessage @ 0x1406DE688 (AlpcpLogSendMessage.c)
 *     AlpcpLogWaitForReply @ 0x1406DE844 (AlpcpLogWaitForReply.c)
 */

__int64 __fastcall AlpcpDispatchReplyToWaitingThread(__int64 a1)
{
  ULONG_PTR v1; // rdi
  ULONG_PTR v3; // r12
  signed __int32 *v4; // r15
  __int64 v5; // r14
  int v6; // ebp
  struct _KTHREAD *CurrentThread; // r13
  __int16 v8; // cx
  __int16 v9; // cx
  unsigned __int8 v10; // cf
  int v11; // r15d
  __int64 v12; // r13
  unsigned int v13; // ebp
  __int64 v15; // rbx
  __int64 v16; // rax
  bool v17; // zf
  char v18; // [rsp+80h] [rbp+8h]
  int v19; // [rsp+88h] [rbp+10h]
  __int64 v20; // [rsp+90h] [rbp+18h]
  struct _KTHREAD *v21; // [rsp+98h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 8);
  LODWORD(v3) = *(_DWORD *)(a1 + 48);
  v4 = *(signed __int32 **)a1;
  v18 = v3;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v5 = *(_QWORD *)(v1 + 24);
  v20 = *(_QWORD *)(v1 + 32);
  v19 = *(_DWORD *)(v1 + 40);
  v6 = *(_DWORD *)(v5 + 416) >> 1;
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
        ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 352));
      KeAbPostRelease(v5 + 352);
    }
    CurrentThread = KeGetCurrentThread();
    *(_WORD *)(v1 + 242) = *(_WORD *)(a1 + 52);
    v21 = CurrentThread;
    *(_WORD *)(v1 + 240) = *(_WORD *)(a1 + 52) - 40;
    v8 = *(_WORD *)(a1 + 54);
    *(_WORD *)(v1 + 244) = v8;
    *(_WORD *)(v1 + 246) = *(_WORD *)(a1 + 56);
    *(_OWORD *)(v1 + 248) = *(_OWORD *)&CurrentThread[1].CycleTime;
    if ( (v3 & 0x10000) != 0 )
    {
      *(_DWORD *)(v1 + 40) |= 0x200u;
      v9 = v8 & 0xDFFF;
    }
    else
    {
      *(_DWORD *)(v1 + 40) &= ~0x200u;
      v9 = v8 | 0x2000;
    }
    v10 = _bittest((const signed __int32 *)(v1 + 40), 9u);
    *(_WORD *)(v1 + 244) = v9;
    if ( (v10 & _bittest(v4 + 104, 0xDu)) != 0 )
    {
      AlpcpSetOwnerPortMessage(v1, v4, 0);
    }
    else
    {
      ObfReferenceObject(v4);
      *(_DWORD *)(v1 + 40) |= 0x1000u;
      *(_QWORD *)(v1 + 24) = v4;
    }
    v11 = v3 & 0x20000;
    if ( (v3 & 0x20000) != 0 )
    {
      _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].Teb, v1);
      *(_DWORD *)(v1 + 40) |= 0x800u;
      ++*(_WORD *)(v1 - 30);
    }
    *(_DWORD *)(v1 + 40) |= 0x100u;
    v12 = *(_QWORD *)(v1 + 16);
    if ( v12 )
    {
      v3 = v12 + 176;
      ExAcquirePushLockExclusiveEx(v12 + 176, 0LL);
      --*(_DWORD *)(v12 + 456);
      *(_DWORD *)(v1 + 40) &= 0xFFFFFFF8;
      *(_QWORD *)(v1 + 16) = 0LL;
      **(_QWORD **)(v1 + 8) = *(_QWORD *)v1;
      *(_QWORD *)(*(_QWORD *)v1 + 8LL) = *(_QWORD *)(v1 + 8);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v3);
      KeAbPostRelease(v3);
      --*(_WORD *)(v1 - 30);
      LOBYTE(v3) = v18;
    }
    *(_DWORD *)(v1 + 44) = _InterlockedIncrement((volatile signed __int32 *)(v5 + 400));
    v13 = *(_DWORD *)(v1 + 40) & 0xFFFFFF87 | (8 * (v6 & 3));
    *(_DWORD *)(v1 + 40) = v13;
    if ( ((v13 >> 3) & 0xF) == 1 )
    {
      v15 = *(_QWORD *)(v5 + 16);
      ExAcquirePushLockSharedEx(v15 - 16, 0LL);
      v16 = *(_QWORD *)(v15 + 8);
      if ( v16 )
        *(_QWORD *)(v1 + 120) = *(_QWORD *)(v16 + 56);
      else
        *(_QWORD *)(v1 + 120) = 0LL;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v15 - 16), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v15 - 16));
      KeAbPostRelease(v15 - 16);
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
      AlpcpExposeViewAttributeInSenderContext((PVOID)v5, v1);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v5 + 352));
    KeAbPostRelease(v5 + 352);
    if ( AlpcpLogEnabled )
      AlpcpLogSendMessage(v1);
    if ( v11 )
    {
      v17 = AlpcpLogEnabled == 0;
      *(_QWORD *)(v1 + 32) = v21;
      *(_QWORD *)(a1 + 24) = v20;
      if ( !v17 )
        AlpcpLogWaitForReply(v1);
      AlpcpUnlockMessage(v1);
    }
    else
    {
      *(_QWORD *)(v1 + 32) = 0LL;
      --*(_WORD *)(v1 - 30);
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v1);
      AlpcpUnlockBlob(v1);
      if ( (v3 & 4) != 0 )
        *(_QWORD *)(a1 + 24) = v20;
      else
        KeReleaseSemaphoreEx(v20 + 1608, 1, 1);
    }
    if ( (v19 & 0x1000) != 0 )
      ObfDereferenceObject((PVOID)v5);
    return 0LL;
  }
}
