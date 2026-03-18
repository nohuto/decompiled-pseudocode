/*
 * XREFs of AlpcpCancelMessage @ 0x14042FD5C
 * Callers:
 *     NtAlpcCancelMessage @ 0x14042F61C (NtAlpcCancelMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14042F9B0 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpDispatchReplyToPort @ 0x140430220 (AlpcpDispatchReplyToPort.c)
 *     AlpcpFlushMessagesByRequestor @ 0x140470780 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpFlushQueue @ 0x140473D7C (AlpcpFlushQueue.c)
 *     AlpcpAcceptConnectPort @ 0x140475588 (AlpcpAcceptConnectPort.c)
 *     AlpcpReceiveLegacyMessage @ 0x14047C970 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReceiveMessage @ 0x140522600 (AlpcpReceiveMessage.c)
 *     AlpcpSendMessage @ 0x140524190 (AlpcpSendMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x140526710 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveSynchronousReply @ 0x140526E80 (AlpcpReceiveSynchronousReply.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x14000CFD0 (ObReferenceObjectSafe.c)
 *     KeReleaseSemaphoreEx @ 0x140041740 (KeReleaseSemaphoreEx.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     AlpcpTransferQuotaMessage @ 0x1404301C0 (AlpcpTransferQuotaMessage.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x1404304C0 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpClearOwnerPortMessage @ 0x14043054C (AlpcpClearOwnerPortMessage.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140430600 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpRemoveMessagePort @ 0x140430684 (AlpcpRemoveMessagePort.c)
 *     AlpcpSignalPortAndUnlock @ 0x1404306C4 (AlpcpSignalPortAndUnlock.c)
 *     AlpcpInsertMessageCanceledQueue @ 0x140430754 (AlpcpInsertMessageCanceledQueue.c)
 *     PsReleaseProcessWakeCounter @ 0x1404307E0 (PsReleaseProcessWakeCounter.c)
 *     AlpcpUnlockMessage @ 0x14047CEA8 (AlpcpUnlockMessage.c)
 */

__int64 __fastcall AlpcpCancelMessage(__int64 a1, ULONG_PTR a2, int a3)
{
  int v3; // eax
  ULONG_PTR v6; // rdx
  int v7; // r12d
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rsi
  int v11; // r15d
  int v12; // ecx
  char v13; // al
  __int64 *v14; // r14
  signed __int64 *v15; // rbp
  __int64 v16; // rdx
  unsigned int v17; // r12d
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  volatile signed __int64 *v25; // rbp
  signed __int32 v26[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v27; // [rsp+70h] [rbp+8h]
  int v28; // [rsp+80h] [rbp+18h]

  v28 = a3;
  v3 = *(_DWORD *)(a2 + 40);
  v6 = (unsigned __int8)v3 >> 7;
  v7 = v3 & 7;
  v8 = 0LL;
  v9 = *(_QWORD *)(a2 + 16);
  v10 = 0LL;
  v27 = v9;
  v11 = 0;
  v12 = ((*(_DWORD *)(a1 + 416) >> 1) & 3) - 1;
  if ( v12 )
  {
    v13 = v3 & 0x78;
    if ( v12 == 1 )
    {
      LOBYTE(v11) = v13 == 16;
      if ( (_DWORD)v6 )
        goto LABEL_9;
      v14 = *(__int64 **)(a1 + 16);
      v15 = v14 - 2;
      ExAcquirePushLockSharedEx((ULONG_PTR)(v14 - 2), v6);
      if ( (*(_DWORD *)(a2 + 40) & 0x200) != 0 )
        goto LABEL_5;
      if ( !v11 )
      {
        v8 = a1;
        v10 = a1;
        goto LABEL_49;
      }
      goto LABEL_48;
    }
    LOBYTE(v11) = v13 == 8;
    if ( !(_DWORD)v6 )
    {
      v14 = *(__int64 **)(a1 + 16);
      goto LABEL_33;
    }
  }
  else
  {
    LOBYTE(v11) = (v3 & 0x78) == 8;
    if ( !(_DWORD)v6 )
    {
      v14 = *(__int64 **)(a2 + 184);
      if ( !v14 )
      {
LABEL_8:
        v9 = v27;
        goto LABEL_9;
      }
LABEL_33:
      v15 = v14 - 2;
      ExAcquirePushLockSharedEx((ULONG_PTR)(v14 - 2), 0LL);
      if ( (*(_DWORD *)(a2 + 40) & 0x200) != 0 )
      {
LABEL_5:
        if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v15);
        KeAbPostRelease((ULONG_PTR)v15);
        LOBYTE(a3) = v28;
        goto LABEL_8;
      }
      if ( v11 )
      {
        v8 = v14[2];
        v10 = v8;
LABEL_49:
        if ( v8 )
          v8 &= -(__int64)(ObReferenceObjectSafe(v8) != 0);
        if ( v10 )
          v10 &= -(__int64)(ObReferenceObjectSafe(v10) != 0);
        goto LABEL_5;
      }
LABEL_48:
      v10 = v14[1];
      v8 = *v14;
      goto LABEL_49;
    }
  }
LABEL_9:
  if ( !v11 )
  {
    if ( v9 && (v7 != 3 || (*(_DWORD *)(a2 + 40) & 0x4000) != 0) )
    {
      v16 = 0LL;
      v17 = 0;
    }
    else
    {
      v16 = 1LL;
      v17 = 1073741870;
    }
    if ( (a3 & 1) != 0 && (_DWORD)v16 )
      goto LABEL_26;
LABEL_14:
    *(_DWORD *)(a2 + 40) |= 0x80u;
    *(_BYTE *)(a2 + 244) = 0;
    *(_WORD *)(a2 + 244) |= 0xCu;
    *(_DWORD *)(a2 + 240) = 2621440;
    AlpcpReleaseMessageAttributesOnCancel(a2, v16);
    *(_DWORD *)(a2 + 40) |= 0x10200u;
    *(_WORD *)(a2 + 244) &= ~0x2000u;
    _InterlockedOr(v26, 0);
    AlpcpClearOwnerPortMessage(a2);
    AlpcpTransferQuotaMessage(a2);
    v19 = *(_QWORD *)(a2 + 208);
    if ( v19 )
    {
      PsReleaseProcessWakeCounter(v19, *(unsigned int *)(a2 + 264));
      *(_QWORD *)(a2 + 208) = 0LL;
    }
    v20 = *(_QWORD *)(a2 + 216);
    if ( v20 )
    {
      PsReleaseProcessWakeCounter(v20, *(unsigned int *)(a2 + 264));
      *(_QWORD *)(a2 + 216) = 0LL;
    }
    v21 = *(_QWORD *)(a2 + 32);
    if ( v21 )
    {
      if ( _InterlockedExchange64((volatile __int64 *)(v21 + 1752), 0LL) == a2 )
      {
        *(_QWORD *)(a2 + 32) = 0LL;
        *(_WORD *)(a2 - 30) -= 2;
        KeReleaseSemaphoreEx(v21 + 1608, 1, 1, v18, 2);
      }
    }
    else if ( v8 && v10 )
    {
      if ( !v11 && (v28 & 2) == 0 )
      {
LABEL_25:
        v23 = *(_DWORD *)(a2 + 40);
        if ( (v23 & 0x4000) != 0 && (v23 & 7) == 3 )
          AlpcpRemoveMessageFromPendingQueue(a2);
        goto LABEL_26;
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
        *(_QWORD *)(a2 + 56) = v10;
        ++*(_WORD *)(a2 - 30);
        *(_DWORD *)(a2 + 72) = _InterlockedIncrement((volatile signed __int32 *)(v10 + 400));
        *(_QWORD *)(a2 + 128) = *(_QWORD *)(v10 + 56);
        AlpcpInsertMessageCanceledQueue(v8, a2);
        AlpcpSignalPortAndUnlock(v8);
      }
      v9 = v27;
    }
    if ( v11 && (v28 & 0x10000) != 0 && v9 )
    {
      v22 = *(_DWORD *)(a2 + 40) & 7;
      if ( v22 == 3 )
      {
        AlpcpRemoveMessageFromPendingQueue(a2);
      }
      else
      {
        if ( v22 == 4 )
        {
          v25 = (volatile signed __int64 *)(a1 + 200);
          ExAcquirePushLockExclusiveEx(a1 + 200, 0LL);
          --*(_DWORD *)(a1 + 460);
          *(_DWORD *)(a2 + 40) &= 0xFFFFFFF8;
          *(_QWORD *)(a2 + 16) = 0LL;
          **(_QWORD **)(a2 + 8) = *(_QWORD *)a2;
          *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)(a2 + 8);
        }
        else
        {
          v25 = (volatile signed __int64 *)(v9 + 136);
          ExAcquirePushLockExclusiveEx(v9 + 136, 0LL);
          AlpcpRemoveMessagePort(v9, a2);
        }
        if ( (_InterlockedExchangeAdd64(v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v25);
        KeAbPostRelease((ULONG_PTR)v25);
        --*(_WORD *)(a2 - 30);
      }
    }
    goto LABEL_25;
  }
  if ( !v9 || v7 != 3 || (v16 = 1LL, (*(_DWORD *)(a2 + 40) & 0x4000) != 0) )
    v16 = 0LL;
  v17 = 259;
  if ( (a3 & 1) == 0 || (_DWORD)v16 )
    goto LABEL_14;
LABEL_26:
  *(_DWORD *)(a2 + 40) &= ~0x10000u;
  AlpcpUnlockMessage(a2);
  if ( v8 )
    ObfDereferenceObject((PVOID)v8);
  if ( v10 )
    ObfDereferenceObject((PVOID)v10);
  return v17;
}
