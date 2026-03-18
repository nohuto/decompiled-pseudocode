/*
 * XREFs of AlpcpDispatchReplyToPort @ 0x140430220
 * Callers:
 *     AlpcpDispatchMessage @ 0x140475DF8 (AlpcpDispatchMessage.c)
 *     AlpcpSendMessage @ 0x140524190 (AlpcpSendMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     AlpcpCancelMessage @ 0x14042FD5C (AlpcpCancelMessage.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x1404304C0 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpClearOwnerPortMessage @ 0x14043054C (AlpcpClearOwnerPortMessage.c)
 *     AlpcpReferenceReplyTargetPorts @ 0x140430580 (AlpcpReferenceReplyTargetPorts.c)
 *     AlpcpSetOwnerPortMessage @ 0x140474A2C (AlpcpSetOwnerPortMessage.c)
 *     AlpcpUnlockMessage @ 0x14047CEA8 (AlpcpUnlockMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x140525120 (AlpcpCompleteDispatchMessage.c)
 */

__int64 __fastcall AlpcpDispatchReplyToPort(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 v3; // r14
  __int64 v4; // r15
  int v5; // eax
  volatile signed __int32 **v6; // r12
  signed __int64 *v7; // r13
  volatile signed __int32 *v8; // rsi
  volatile signed __int32 *v9; // rbp
  struct _KTHREAD *CurrentThread; // r13
  __int16 v11; // cx
  __int16 v12; // cx
  signed __int32 v14[22]; // [rsp+0h] [rbp-58h] BYREF
  int v15; // [rsp+60h] [rbp+8h]
  int v16; // [rsp+68h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)a1;
  v16 = *(_DWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v4 = *(_QWORD *)(v1 + 24);
  v5 = (*(_DWORD *)(v4 + 416) >> 1) & 3;
  if ( v5 == 2 )
  {
    v6 = *(volatile signed __int32 ***)(v4 + 16);
    v7 = (signed __int64 *)(v6 - 2);
    ExAcquirePushLockSharedEx((ULONG_PTR)(v6 - 2), 0LL);
    v8 = v6[2];
LABEL_3:
    v9 = v8;
    goto LABEL_4;
  }
  if ( v5 == 1 )
  {
    v6 = *(volatile signed __int32 ***)(v3 + 16);
    v7 = (signed __int64 *)(v6 - 2);
    ExAcquirePushLockSharedEx((ULONG_PTR)(v6 - 2), 0LL);
    v8 = *v6;
    if ( v3 == v4 )
      goto LABEL_3;
    v9 = v6[1];
  }
  else
  {
    v6 = *(volatile signed __int32 ***)(v4 + 16);
    v7 = (signed __int64 *)(v6 - 2);
    ExAcquirePushLockSharedEx((ULONG_PTR)(v6 - 2), 0LL);
    v8 = *v6;
    v9 = v6[1];
  }
LABEL_4:
  if ( ((*(_DWORD *)(v3 + 416) & 0x20) == 0 || (*(_DWORD *)(v3 + 256) & 0x1000) != 0)
    && ((*(_DWORD *)(v4 + 416) & 0x20) == 0 || (*(_DWORD *)(v4 + 256) & 0x1000) != 0) )
  {
    if ( (unsigned __int64)*(unsigned __int16 *)(a1 + 52) > *((_QWORD *)v8 + 34) )
    {
      if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v7);
      KeAbPostRelease((ULONG_PTR)v7);
      AlpcpUnlockMessage(v1);
      return 3221225507LL;
    }
    else
    {
      v15 = AlpcpReferenceReplyTargetPorts((PVOID)v8, (PVOID)v9);
      if ( v15 < 0 )
      {
        if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v7);
        KeAbPostRelease((ULONG_PTR)v7);
        AlpcpCancelMessage(v3, v1, 0x10000);
        return (unsigned int)v15;
      }
      else
      {
        *(_QWORD *)(v1 + 200) = 0LL;
        if ( *(_WORD *)(a1 + 54) == 11 )
        {
          ExAcquirePushLockExclusiveEx(v4 + 352, 0LL);
          *(_DWORD *)(v4 + 416) &= ~8u;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 352));
          KeAbPostRelease(v4 + 352);
        }
        CurrentThread = KeGetCurrentThread();
        *(_WORD *)(v1 + 242) = *(_WORD *)(a1 + 52);
        *(_WORD *)(v1 + 240) = *(_WORD *)(a1 + 52) - 40;
        v11 = *(_WORD *)(a1 + 54);
        *(_WORD *)(v1 + 244) = v11;
        *(_WORD *)(v1 + 246) = *(_WORD *)(a1 + 56);
        *(_OWORD *)(v1 + 248) = *(_OWORD *)&CurrentThread[1].CurrentRunTime;
        if ( (v16 & 0x10000) != 0 )
        {
          *(_DWORD *)(v1 + 40) |= 0x200u;
          v12 = v11 & 0xDFFF;
        }
        else
        {
          *(_DWORD *)(v1 + 40) &= ~0x200u;
          v12 = v11 | 0x2000;
        }
        *(_WORD *)(v1 + 244) = v12;
        *(_DWORD *)(v1 + 40) |= 0x10000u;
        _InterlockedOr(v14, 0);
        AlpcpClearOwnerPortMessage(v1);
        if ( (*(_DWORD *)(v3 + 416) & 0x2000) != 0 && (*(_DWORD *)(v1 + 40) & 0x200) != 0 )
        {
          AlpcpSetOwnerPortMessage(v1, v3, 0LL);
        }
        else
        {
          ObfReferenceObject((PVOID)v3);
          *(_DWORD *)(v1 + 40) |= 0x1000u;
          *(_QWORD *)(v1 + 24) = v3;
        }
        *(_DWORD *)(v1 + 44) = _InterlockedIncrement(v9 + 100);
        *(_QWORD *)(v1 + 120) = *((_QWORD *)v9 + 7);
        ObfDereferenceObject((PVOID)v9);
        if ( *(_QWORD *)(v1 + 16) )
          AlpcpRemoveMessageFromPendingQueue(v1);
        ExAcquirePushLockSharedEx((ULONG_PTR)(v8 + 88), 0LL);
        if ( (v16 & 0x20000) != 0 )
        {
          *(_DWORD *)(v1 + 40) &= ~0x100u;
          *(_QWORD *)(v1 + 32) = CurrentThread;
          *(_WORD *)(v1 - 30) += 2;
          _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].Teb, v1);
        }
        *(_QWORD *)(a1 + 32) = v8;
        *(_QWORD *)(a1 + 16) = v6;
        if ( *(_QWORD *)(v1 + 160) )
          *(_DWORD *)(a1 + 48) |= 8u;
        AlpcpCompleteDispatchMessage(a1);
        return 0LL;
      }
    }
  }
  else
  {
    if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v7);
    KeAbPostRelease((ULONG_PTR)v7);
    AlpcpCancelMessage(v3, v1, 0x10000);
    return 3221225527LL;
  }
}
