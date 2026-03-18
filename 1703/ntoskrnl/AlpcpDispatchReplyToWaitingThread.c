/*
 * XREFs of AlpcpDispatchReplyToWaitingThread @ 0x140523D60
 * Callers:
 *     AlpcpDispatchMessage @ 0x140475DF8 (AlpcpDispatchMessage.c)
 *     AlpcpSendMessage @ 0x140524190 (AlpcpSendMessage.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x140041740 (KeReleaseSemaphoreEx.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     AlpcpSetOwnerPortMessage @ 0x140474A2C (AlpcpSetOwnerPortMessage.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14047BB04 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpUnlockMessage @ 0x14047CEA8 (AlpcpUnlockMessage.c)
 *     AlpcpDestroyBlob @ 0x14047EE40 (AlpcpDestroyBlob.c)
 *     AlpcpCaptureMessageDataSafe @ 0x140526170 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1406B1264 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpLogSendMessage @ 0x1406B2940 (AlpcpLogSendMessage.c)
 *     AlpcpLogWaitForReply @ 0x1406B2AFC (AlpcpLogWaitForReply.c)
 */

__int64 __fastcall AlpcpDispatchReplyToWaitingThread(__int64 a1)
{
  ULONG_PTR v1; // rdi
  int v3; // r15d
  _DWORD *v4; // rsi
  __int64 v5; // rbp
  int v6; // r13d
  int v7; // r12d
  struct _KTHREAD *CurrentThread; // rdx
  __int16 v9; // cx
  __int16 v10; // cx
  int v11; // r15d
  __int64 v12; // rsi
  volatile signed __int64 *v13; // rsi
  unsigned int v14; // eax
  char v15; // al
  char v16; // cl
  int v17; // esi
  __int64 v18; // r9
  signed __int64 BugCheckParameter4; // rcx
  volatile signed __int64 *v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rax
  char v24; // [rsp+80h] [rbp+8h]
  __int64 v25; // [rsp+88h] [rbp+10h]
  struct _KTHREAD *v26; // [rsp+90h] [rbp+18h]

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(_DWORD *)(a1 + 48);
  v4 = *(_DWORD **)a1;
  v24 = v3;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v5 = *(_QWORD *)(v1 + 24);
  v6 = (*(_DWORD *)(v1 + 40) >> 12) & 1;
  v25 = *(_QWORD *)(v1 + 32);
  v7 = (*(_DWORD *)(v5 + 416) >> 1) & 3;
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
      v21 = (volatile signed __int64 *)(v5 + 352);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ExfTryToWakePushLock(v21);
        v21 = (volatile signed __int64 *)(v5 + 352);
      }
      KeAbPostRelease((ULONG_PTR)v21);
    }
    CurrentThread = KeGetCurrentThread();
    *(_WORD *)(v1 + 242) = *(_WORD *)(a1 + 52);
    v26 = CurrentThread;
    *(_WORD *)(v1 + 240) = *(_WORD *)(a1 + 52) - 40;
    v9 = *(_WORD *)(a1 + 54);
    *(_WORD *)(v1 + 244) = v9;
    *(_WORD *)(v1 + 246) = *(_WORD *)(a1 + 56);
    *(_OWORD *)(v1 + 248) = *(_OWORD *)&CurrentThread[1].CurrentRunTime;
    if ( (v3 & 0x10000) != 0 )
    {
      *(_DWORD *)(v1 + 40) |= 0x200u;
      v10 = v9 & 0xDFFF;
    }
    else
    {
      *(_DWORD *)(v1 + 40) &= ~0x200u;
      v10 = v9 | 0x2000;
    }
    *(_WORD *)(v1 + 244) = v10;
    if ( (v4[104] & 0x2000) != 0 && (*(_DWORD *)(v1 + 40) & 0x200) != 0 )
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
    if ( v11 )
    {
      _InterlockedExchange64((volatile __int64 *)&v26[1].Teb, v1);
      *(_DWORD *)(v1 + 40) |= 0x800u;
      ++*(_WORD *)(v1 - 30);
    }
    *(_DWORD *)(v1 + 40) |= 0x100u;
    v12 = *(_QWORD *)(v1 + 16);
    if ( v12 )
    {
      ExAcquirePushLockExclusiveEx(v12 + 176, 0LL);
      --*(_DWORD *)(v12 + 456);
      *(_DWORD *)(v1 + 40) &= 0xFFFFFFF8;
      v13 = (volatile signed __int64 *)(v12 + 176);
      *(_QWORD *)(v1 + 16) = 0LL;
      **(_QWORD **)(v1 + 8) = *(_QWORD *)v1;
      *(_QWORD *)(*(_QWORD *)v1 + 8LL) = *(_QWORD *)(v1 + 8);
      if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v13);
      KeAbPostRelease((ULONG_PTR)v13);
      --*(_WORD *)(v1 - 30);
    }
    *(_DWORD *)(v1 + 44) = _InterlockedIncrement((volatile signed __int32 *)(v5 + 400));
    v14 = *(_DWORD *)(v1 + 40) ^ (*(_DWORD *)(v1 + 40) ^ (8 * v7)) & 0x78;
    *(_DWORD *)(v1 + 40) = v14;
    if ( ((v14 >> 3) & 0xF) == 1 )
    {
      v22 = *(_QWORD *)(v5 + 16);
      ExAcquirePushLockSharedEx(v22 - 16, 0LL);
      v23 = *(_QWORD *)(v22 + 8);
      if ( v23 )
        v23 = *(_QWORD *)(v23 + 56);
      *(_QWORD *)(v1 + 120) = v23;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v22 - 16), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v22 - 16));
      KeAbPostRelease(v22 - 16);
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
    v15 = AlpcpLogEnabled;
    if ( AlpcpLogEnabled )
    {
      AlpcpLogSendMessage(v1);
      v15 = AlpcpLogEnabled;
    }
    if ( v11 )
    {
      *(_QWORD *)(v1 + 32) = v26;
      *(_QWORD *)(a1 + 24) = v25;
      if ( v15 )
        AlpcpLogWaitForReply(v1);
      AlpcpUnlockMessage(v1);
    }
    else
    {
      *(_QWORD *)(v1 + 32) = 0LL;
      --*(_WORD *)(v1 - 30);
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v1);
      v16 = *(_BYTE *)(v1 - 32);
      v17 = 0;
      if ( (v16 & 1) != 0 )
      {
        v17 = 0x10000 - *(__int16 *)(v1 - 30);
        *(_WORD *)(v1 - 30) = 0;
        *(_BYTE *)(v1 - 32) = v16 & 0xFE;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v1 - 16));
      KeAbPostRelease(v1 - 16);
      if ( v17 > 0 )
      {
        BugCheckParameter4 = -v17 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 - 24), -v17);
        if ( BugCheckParameter4 <= 0 )
        {
          if ( BugCheckParameter4 )
            KeBugCheckEx(0x18u, 0LL, v1, 0x28uLL, BugCheckParameter4);
          AlpcpDestroyBlob(v1);
        }
      }
      if ( (v24 & 4) != 0 )
        *(_QWORD *)(a1 + 24) = v25;
      else
        KeReleaseSemaphoreEx(v25 + 1608, 1, 1, v18, 2);
    }
    if ( v6 )
      ObfDereferenceObject((PVOID)v5);
    return 0LL;
  }
}
