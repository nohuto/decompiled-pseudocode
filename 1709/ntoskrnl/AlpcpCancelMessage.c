/*
 * XREFs of AlpcpCancelMessage @ 0x140462B18
 * Callers:
 *     AlpcpReplyLegacySynchronousRequest @ 0x140463024 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpDispatchReplyToPort @ 0x1404633D0 (AlpcpDispatchReplyToPort.c)
 *     AlpcpReceiveLegacyMessage @ 0x140464260 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpFlushQueue @ 0x140464950 (AlpcpFlushQueue.c)
 *     AlpcpAcceptConnectPort @ 0x140465410 (AlpcpAcceptConnectPort.c)
 *     AlpcpReceiveMessage @ 0x14049E3C0 (AlpcpReceiveMessage.c)
 *     AlpcpSendMessage @ 0x1404A01A0 (AlpcpSendMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404A2660 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveSynchronousReply @ 0x1404A2C40 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpFlushMessagesByRequestor @ 0x14058E9E4 (AlpcpFlushMessagesByRequestor.c)
 *     NtAlpcCancelMessage @ 0x1405E6040 (NtAlpcCancelMessage.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x14006A750 (KeReleaseSemaphoreEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafe @ 0x140108160 (ObReferenceObjectSafe.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140462A78 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpTransferQuotaMessage @ 0x140463000 (AlpcpTransferQuotaMessage.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x14046364C (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpClearOwnerPortMessage @ 0x1404636D8 (AlpcpClearOwnerPortMessage.c)
 *     PsReleaseProcessWakeCounter @ 0x140467EE0 (PsReleaseProcessWakeCounter.c)
 *     AlpcpUnlockMessage @ 0x14049DAB4 (AlpcpUnlockMessage.c)
 *     AlpcpSignalPortAndUnlock @ 0x140577394 (AlpcpSignalPortAndUnlock.c)
 *     AlpcpInsertMessageCanceledQueue @ 0x140593C98 (AlpcpInsertMessageCanceledQueue.c)
 *     AlpcpRemoveMessagePort @ 0x140597EEC (AlpcpRemoveMessagePort.c)
 */

__int64 __fastcall AlpcpCancelMessage(__int64 a1, ULONG_PTR a2, int a3)
{
  int v3; // ebp
  int v6; // ecx
  ULONG_PTR v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r15
  int v11; // r14d
  int v12; // ebp
  __int64 *v13; // r12
  ULONG_PTR v14; // rcx
  int v15; // edx
  unsigned int v16; // r12d
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  int v24; // ebp
  __int64 *v25; // r15
  volatile signed __int64 *v26; // rbp
  __int64 *v27; // r15
  signed __int32 v28[34]; // [rsp+0h] [rbp-88h] BYREF
  int v30; // [rsp+98h] [rbp+10h]
  int v31; // [rsp+A0h] [rbp+18h]
  __int64 v32; // [rsp+A8h] [rbp+20h]

  v31 = a3;
  v3 = *(_DWORD *)(a2 + 40);
  v6 = v3 & 7;
  v7 = (unsigned __int8)v3 & 0x80;
  v30 = v6;
  v8 = 0LL;
  v9 = 0LL;
  v10 = *(_QWORD *)(a2 + 16);
  v11 = 0;
  v32 = v10;
  if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) == 1 )
  {
    v24 = v3 & 0x78;
    LOBYTE(v11) = v24 == 8;
    if ( !(_DWORD)v7 )
    {
      v25 = *(__int64 **)(a2 + 184);
      if ( !v25 )
        goto LABEL_10;
      ExAcquirePushLockSharedEx((ULONG_PTR)(v25 - 2), v7);
      if ( (*(_DWORD *)(a2 + 40) & 0x200) == 0 )
      {
        if ( v24 == 8 )
        {
          v8 = v25[2];
          v9 = v8;
        }
        else
        {
          v8 = *v25;
          v9 = v25[1];
        }
        if ( v8 )
          v8 &= -(__int64)(ObReferenceObjectSafe(v8) != 0);
        if ( v9 )
          v9 &= -(__int64)(ObReferenceObjectSafe(v9) != 0);
      }
      if ( _InterlockedCompareExchange64(v25 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v25 - 2);
      KeAbPostRelease((ULONG_PTR)(v25 - 2));
LABEL_9:
      LOBYTE(a3) = v31;
      v6 = v30;
LABEL_10:
      v10 = v32;
    }
  }
  else
  {
    v12 = v3 & 0x78;
    if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) == 2 )
    {
      LOBYTE(v11) = v12 == 16;
      if ( (_DWORD)v7 )
        goto LABEL_11;
      v13 = *(__int64 **)(a1 + 16);
      ExAcquirePushLockSharedEx((ULONG_PTR)(v13 - 2), v7);
      if ( (*(_DWORD *)(a2 + 40) & 0x200) == 0 )
      {
        if ( v12 == 16 )
        {
          v8 = *v13;
          v9 = v13[1];
        }
        else
        {
          v8 = a1;
          v9 = a1;
        }
        if ( v8 )
          v8 &= -(__int64)(ObReferenceObjectSafe(v8) != 0);
        if ( v9 )
          v9 &= -(__int64)(ObReferenceObjectSafe(v9) != 0);
      }
      if ( _InterlockedCompareExchange64(v13 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v13 - 2);
      v14 = (ULONG_PTR)(v13 - 2);
      goto LABEL_8;
    }
    LOBYTE(v11) = v12 == 8;
    if ( !(_DWORD)v7 )
    {
      v27 = *(__int64 **)(a1 + 16);
      ExAcquirePushLockSharedEx((ULONG_PTR)(v27 - 2), v7);
      if ( (*(_DWORD *)(a2 + 40) & 0x200) == 0 )
      {
        if ( v12 == 8 )
        {
          v8 = v27[2];
          v9 = v8;
        }
        else
        {
          v8 = *v27;
          v9 = v27[1];
        }
        if ( v8 )
          v8 &= -(__int64)(ObReferenceObjectSafe(v8) != 0);
        if ( v9 )
          v9 &= -(__int64)(ObReferenceObjectSafe(v9) != 0);
      }
      if ( _InterlockedCompareExchange64(v27 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v27 - 2);
      v14 = (ULONG_PTR)(v27 - 2);
LABEL_8:
      KeAbPostRelease(v14);
      goto LABEL_9;
    }
  }
LABEL_11:
  if ( !v11 )
  {
    if ( v10 && (v6 != 3 || (*(_DWORD *)(a2 + 40) & 0x4000) != 0) )
    {
      v15 = 0;
      v16 = 0;
    }
    else
    {
      v16 = 1073741870;
      v15 = 1;
    }
    if ( (a3 & 1) != 0 && v15 )
      goto LABEL_28;
LABEL_16:
    *(_DWORD *)(a2 + 40) |= 0x80u;
    *(_BYTE *)(a2 + 244) = 0;
    *(_WORD *)(a2 + 244) |= 0xCu;
    *(_DWORD *)(a2 + 240) = 2621440;
    AlpcpReleaseMessageAttributesOnCancel(a2, v15);
    *(_DWORD *)(a2 + 40) |= 0x10200u;
    *(_WORD *)(a2 + 244) &= ~0x2000u;
    _InterlockedOr(v28, 0);
    AlpcpClearOwnerPortMessage(a2);
    AlpcpTransferQuotaMessage(a2);
    v17 = *(_QWORD *)(a2 + 208);
    v18 = 0LL;
    if ( v17 )
    {
      PsReleaseProcessWakeCounter(v17, *(unsigned int *)(a2 + 264));
      v18 = 0LL;
      *(_QWORD *)(a2 + 208) = 0LL;
    }
    v19 = *(_QWORD *)(a2 + 216);
    if ( v19 )
    {
      PsReleaseProcessWakeCounter(v19, *(unsigned int *)(a2 + 264));
      v18 = 0LL;
      *(_QWORD *)(a2 + 216) = 0LL;
    }
    v20 = *(_QWORD *)(a2 + 32);
    if ( v20 )
    {
      if ( _InterlockedExchange64((volatile __int64 *)(v20 + 1760), 0LL) == a2 )
      {
        *(_QWORD *)(a2 + 32) = 0LL;
        *(_WORD *)(a2 - 30) -= 2;
        v28[8] = 2;
        KeReleaseSemaphoreEx(v20 + 1608, 1, 1);
      }
    }
    else if ( v8 && v9 )
    {
      if ( !v11 && (v31 & 2) == 0 )
      {
LABEL_27:
        v22 = *(_DWORD *)(a2 + 40);
        if ( (v22 & 0x4000) != 0 && (v22 & 7) == 3 )
          AlpcpRemoveMessageFromPendingQueue(a2, v18);
        goto LABEL_28;
      }
      ExAcquirePushLockSharedEx(v8 + 352, 0LL);
      if ( (*(_DWORD *)(v8 + 416) & 0x40) != 0 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 352), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
        KeAbPostRelease(v8 + 352);
      }
      else
      {
        *(_QWORD *)(a2 + 64) = v8;
        *(_QWORD *)(a2 + 56) = v9;
        ++*(_WORD *)(a2 - 30);
        *(_DWORD *)(a2 + 72) = _InterlockedIncrement((volatile signed __int32 *)(v9 + 400));
        *(_QWORD *)(a2 + 128) = *(_QWORD *)(v9 + 56);
        AlpcpInsertMessageCanceledQueue(v8, a2);
        AlpcpSignalPortAndUnlock(v8);
      }
      v10 = v32;
    }
    if ( v11 && (v31 & 0x10000) != 0 && v10 )
    {
      v21 = *(_DWORD *)(a2 + 40) & 7;
      if ( v21 == 3 )
      {
        AlpcpRemoveMessageFromPendingQueue(a2, v18);
      }
      else
      {
        if ( v21 == 4 )
        {
          v26 = (volatile signed __int64 *)(a1 + 200);
          ExAcquirePushLockExclusiveEx(a1 + 200, 0LL);
          --*(_DWORD *)(a1 + 460);
          *(_DWORD *)(a2 + 40) &= 0xFFFFFFF8;
          *(_QWORD *)(a2 + 16) = 0LL;
          **(_QWORD **)(a2 + 8) = *(_QWORD *)a2;
          *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)(a2 + 8);
        }
        else
        {
          v26 = (volatile signed __int64 *)(v10 + 136);
          ExAcquirePushLockExclusiveEx(v10 + 136, 0LL);
          AlpcpRemoveMessagePort(v10, a2);
        }
        if ( (_InterlockedExchangeAdd64(v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v26);
        KeAbPostRelease((ULONG_PTR)v26);
        --*(_WORD *)(a2 - 30);
      }
    }
    goto LABEL_27;
  }
  if ( !v10 || v6 != 3 || (v15 = 1, (*(_DWORD *)(a2 + 40) & 0x4000) != 0) )
    v15 = 0;
  v16 = 259;
  if ( (a3 & 1) == 0 || v15 )
    goto LABEL_16;
LABEL_28:
  *(_DWORD *)(a2 + 40) &= ~0x10000u;
  AlpcpUnlockMessage(a2);
  if ( v8 )
    ObfDereferenceObject((PVOID)v8);
  if ( v9 )
    ObfDereferenceObject((PVOID)v9);
  return v16;
}
