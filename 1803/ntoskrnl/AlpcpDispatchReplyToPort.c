/*
 * XREFs of AlpcpDispatchReplyToPort @ 0x1404DEDF4
 * Callers:
 *     AlpcpSendMessage @ 0x1404CC2E0 (AlpcpSendMessage.c)
 *     AlpcpDispatchMessage @ 0x1404DC48C (AlpcpDispatchMessage.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404CD0A0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     AlpcpSetOwnerPortMessage @ 0x1404DDF58 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpCancelMessage @ 0x1404DE89C (AlpcpCancelMessage.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x1404DF074 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpClearOwnerPortMessage @ 0x1404DF100 (AlpcpClearOwnerPortMessage.c)
 *     AlpcpReferenceReplyTargetPorts @ 0x1404DF134 (AlpcpReferenceReplyTargetPorts.c)
 */

__int64 __fastcall AlpcpDispatchReplyToPort(__int64 a1)
{
  ULONG_PTR v2; // rbx
  __int64 v3; // r15
  __int64 v4; // r13
  volatile signed __int32 **v5; // r14
  signed __int64 *v6; // rdi
  ULONG_PTR v7; // rcx
  volatile signed __int32 *v8; // rbp
  volatile signed __int32 *v9; // r12
  struct _KTHREAD *CurrentThread; // rdi
  __int16 v11; // cx
  int v12; // eax
  __int16 v13; // cx
  unsigned int v14; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  signed __int32 v23[22]; // [rsp+0h] [rbp-58h] BYREF
  int v24; // [rsp+60h] [rbp+8h]
  int v25; // [rsp+68h] [rbp+10h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)a1;
  v25 = *(_DWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v4 = *(_QWORD *)(v2 + 24);
  if ( ((*(_DWORD *)(v4 + 416) >> 1) & 3) != 1 )
  {
    v5 = *(volatile signed __int32 ***)(v4 + 16);
    v6 = (signed __int64 *)(v5 - 2);
    v7 = (ULONG_PTR)(v5 - 2);
    if ( ((*(_DWORD *)(v4 + 416) >> 1) & 3) == 2 )
    {
      ExAcquirePushLockSharedEx(v7, 0LL);
      v8 = v5[2];
      v9 = v8;
      goto LABEL_4;
    }
    ExAcquirePushLockSharedEx(v7, 0LL);
    v8 = *v5;
    goto LABEL_21;
  }
  v5 = *(volatile signed __int32 ***)(v3 + 16);
  v6 = (signed __int64 *)(v5 - 2);
  ExAcquirePushLockSharedEx((ULONG_PTR)(v5 - 2), 0LL);
  v8 = *v5;
  v9 = *v5;
  if ( v3 != v4 )
LABEL_21:
    v9 = v5[1];
LABEL_4:
  if ( (*(_DWORD *)(v3 + 416) & 0x20) != 0 && (*(_DWORD *)(v3 + 256) & 0x1000) == 0
    || (*(_DWORD *)(v4 + 416) & 0x20) != 0 && (*(_DWORD *)(v4 + 256) & 0x1000) == 0 )
  {
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    v19 = -1073741769;
LABEL_40:
    AlpcpCancelMessage(v3, v2, 0x10000u);
    return v19;
  }
  if ( (unsigned __int64)*(unsigned __int16 *)(a1 + 52) > *((_QWORD *)v8 + 34) )
  {
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    AlpcpUnlockMessage(v2, v20, v21, v22);
    return 3221225507LL;
  }
  else
  {
    v24 = AlpcpReferenceReplyTargetPorts((PVOID)v8, (PVOID)v9);
    if ( v24 < 0 )
    {
      if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v6);
      KeAbPostRelease((ULONG_PTR)v6);
      v19 = v24;
      goto LABEL_40;
    }
    *(_QWORD *)(v2 + 200) = 0LL;
    if ( *(_WORD *)(a1 + 54) == 11 )
    {
      ExAcquirePushLockExclusiveEx(v4 + 352, 0LL);
      *(_DWORD *)(v4 + 416) &= ~8u;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 352), v16, v17, v18);
      KeAbPostRelease(v4 + 352);
    }
    CurrentThread = KeGetCurrentThread();
    *(_WORD *)(v2 + 242) = *(_WORD *)(a1 + 52);
    *(_WORD *)(v2 + 240) = *(_WORD *)(a1 + 52) - 40;
    v11 = *(_WORD *)(a1 + 54);
    *(_WORD *)(v2 + 244) = v11;
    *(_WORD *)(v2 + 246) = *(_WORD *)(a1 + 56);
    v12 = *(_DWORD *)(v2 + 40);
    *(_OWORD *)(v2 + 248) = *(_OWORD *)&CurrentThread[1].CycleTime;
    if ( (v25 & 0x10000) != 0 )
    {
      v13 = v11 & 0xDFFF;
      v14 = v12 | 0x200;
    }
    else
    {
      v13 = v11 | 0x2000;
      v14 = v12 & 0xFFFFFDFF;
    }
    *(_DWORD *)(v2 + 40) = v14;
    *(_WORD *)(v2 + 244) = v13;
    *(_DWORD *)(v2 + 40) |= 0x8000u;
    _InterlockedOr(v23, 0);
    AlpcpClearOwnerPortMessage(v2);
    if ( (*(_DWORD *)(v3 + 416) & 0x2000) != 0 && (*(_DWORD *)(v2 + 40) & 0x200) != 0 )
    {
      AlpcpSetOwnerPortMessage(v2, (void *)v3, 0);
    }
    else
    {
      ObfReferenceObject((PVOID)v3);
      *(_DWORD *)(v2 + 40) |= 0x1000u;
      *(_QWORD *)(v2 + 24) = v3;
    }
    *(_DWORD *)(v2 + 44) = _InterlockedIncrement(v9 + 100);
    *(_QWORD *)(v2 + 120) = *((_QWORD *)v9 + 7);
    ObfDereferenceObject((PVOID)v9);
    if ( *(_QWORD *)(v2 + 16) )
      AlpcpRemoveMessageFromPendingQueue(v2);
    ExAcquirePushLockSharedEx((ULONG_PTR)(v8 + 88), 0LL);
    if ( (v25 & 0x20000) != 0 )
    {
      *(_DWORD *)(v2 + 40) &= ~0x100u;
      *(_QWORD *)(v2 + 32) = CurrentThread;
      *(_WORD *)(v2 - 30) += 2;
      _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].Teb, v2);
    }
    *(_QWORD *)(a1 + 32) = v8;
    *(_QWORD *)(a1 + 16) = v5;
    if ( *(_QWORD *)(v2 + 160) )
      *(_DWORD *)(a1 + 48) |= 8u;
    AlpcpCompleteDispatchMessage(a1);
    return 0LL;
  }
}
