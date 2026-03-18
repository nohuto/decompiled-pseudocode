/*
 * XREFs of AlpcpCancelMessage @ 0x1404DE89C
 * Callers:
 *     AlpcpReceiveMessage @ 0x1404C9B10 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404CB670 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveSynchronousReply @ 0x1404CBD10 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpSendMessage @ 0x1404CC2E0 (AlpcpSendMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x1404D0660 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpFlushQueue @ 0x1404DAE18 (AlpcpFlushQueue.c)
 *     AlpcpAcceptConnectPort @ 0x1404DBC58 (AlpcpAcceptConnectPort.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1404DE4F0 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpDispatchReplyToPort @ 0x1404DEDF4 (AlpcpDispatchReplyToPort.c)
 *     AlpcpFlushMessagesByRequestor @ 0x140578E48 (AlpcpFlushMessagesByRequestor.c)
 *     NtAlpcCancelMessage @ 0x140582FB0 (NtAlpcCancelMessage.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeReleaseSemaphoreEx @ 0x140084C90 (KeReleaseSemaphoreEx.c)
 *     ObReferenceObjectSafe @ 0x1400A9D20 (ObReferenceObjectSafe.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     PsReleaseProcessWakeCounter @ 0x1404DE130 (PsReleaseProcessWakeCounter.c)
 *     AlpcpTransferQuotaMessage @ 0x1404DED94 (AlpcpTransferQuotaMessage.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x1404DF074 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpClearOwnerPortMessage @ 0x1404DF100 (AlpcpClearOwnerPortMessage.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x1404DF1B4 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpSignalPortAndUnlock @ 0x14052DAC0 (AlpcpSignalPortAndUnlock.c)
 *     AlpcpInsertMessageCanceledQueue @ 0x14057EE00 (AlpcpInsertMessageCanceledQueue.c)
 *     AlpcpRemoveMessagePort @ 0x140581B24 (AlpcpRemoveMessagePort.c)
 */

__int64 __fastcall AlpcpCancelMessage(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  int v3; // ebp
  int v6; // ecx
  __int64 v7; // r9
  ULONG_PTR v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rsi
  int v12; // ebp
  BOOL v13; // r12d
  __int64 *v14; // r15
  ULONG_PTR v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // r15d
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  __int64 *v24; // r14
  volatile signed __int64 *v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  signed __int32 v29[8]; // [rsp+0h] [rbp-88h] BYREF
  int v31; // [rsp+98h] [rbp+10h]
  __int64 v33; // [rsp+A8h] [rbp+20h]

  v3 = *(_DWORD *)(a2 + 40);
  v6 = v3 & 7;
  v7 = a3;
  v8 = (unsigned __int8)v3 & 0x80;
  v9 = *(_QWORD *)(a2 + 16);
  v10 = 0LL;
  v11 = 0LL;
  v33 = v9;
  v31 = v6;
  if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) == 1 )
  {
    v12 = v3 & 0x78;
    v13 = v12 == 8;
    if ( (_DWORD)v8 )
      goto LABEL_9;
    v24 = *(__int64 **)(a2 + 184);
    if ( !v24 )
      goto LABEL_9;
LABEL_33:
    ExAcquirePushLockSharedEx((ULONG_PTR)(v24 - 2), 0LL);
    if ( (*(_DWORD *)(a2 + 40) & 0x200) == 0 )
    {
      if ( v12 == 8 )
      {
        v10 = v24[2];
        v11 = v10;
      }
      else
      {
        v10 = *v24;
        v11 = v24[1];
      }
      if ( v10 )
        v10 &= -(__int64)(ObReferenceObjectSafe(v10) != 0);
      if ( v11 )
        v11 &= -(__int64)(ObReferenceObjectSafe(v11) != 0);
    }
    if ( _InterlockedCompareExchange64(v24 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v24 - 2);
    v15 = (ULONG_PTR)(v24 - 2);
    goto LABEL_8;
  }
  v12 = v3 & 0x78;
  v13 = 0;
  if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) != 2 )
  {
    LOBYTE(v13) = v12 == 8;
    if ( (_DWORD)v8 )
      goto LABEL_9;
    v24 = *(__int64 **)(a1 + 16);
    goto LABEL_33;
  }
  LOBYTE(v13) = v12 == 16;
  if ( !(_DWORD)v8 )
  {
    v14 = *(__int64 **)(a1 + 16);
    ExAcquirePushLockSharedEx((ULONG_PTR)(v14 - 2), v8);
    if ( (*(_DWORD *)(a2 + 40) & 0x200) == 0 )
    {
      if ( v12 == 16 )
      {
        v10 = *v14;
        v11 = v14[1];
      }
      else
      {
        v10 = a1;
        v11 = a1;
      }
      if ( v10 )
        v10 &= -(__int64)(ObReferenceObjectSafe(v10) != 0);
      if ( v11 )
        v11 &= -(__int64)(ObReferenceObjectSafe(v11) != 0);
    }
    if ( _InterlockedCompareExchange64(v14 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v14 - 2);
    v15 = (ULONG_PTR)(v14 - 2);
LABEL_8:
    KeAbPostRelease(v15);
    v6 = v31;
    v9 = v33;
    v7 = a3;
  }
LABEL_9:
  if ( !v13 )
  {
    if ( v9 && (v6 != 3 || (*(_DWORD *)(a2 + 40) & 0x2000) != 0) )
    {
      v16 = 0LL;
      v17 = 0;
    }
    else
    {
      v17 = 1073741870;
      v16 = 1LL;
    }
    if ( (v7 & 1) != 0 && (_DWORD)v16 )
      goto LABEL_26;
LABEL_14:
    *(_DWORD *)(a2 + 40) |= 0x80u;
    *(_BYTE *)(a2 + 244) = 0;
    *(_WORD *)(a2 + 244) |= 0xCu;
    *(_DWORD *)(a2 + 240) = 2621440;
    AlpcpReleaseMessageAttributesOnCancel(a2, v16);
    *(_WORD *)(a2 + 244) &= ~0x2000u;
    *(_DWORD *)(a2 + 40) |= 0x8200u;
    _InterlockedOr(v29, 0);
    AlpcpClearOwnerPortMessage(a2);
    AlpcpTransferQuotaMessage(a2);
    v18 = *(_QWORD *)(a2 + 208);
    if ( v18 )
    {
      PsReleaseProcessWakeCounter(v18, *(unsigned int *)(a2 + 264));
      *(_QWORD *)(a2 + 208) = 0LL;
    }
    v19 = *(_QWORD *)(a2 + 216);
    if ( v19 )
    {
      PsReleaseProcessWakeCounter(v19, *(unsigned int *)(a2 + 264));
      *(_QWORD *)(a2 + 216) = 0LL;
    }
    v20 = *(_QWORD *)(a2 + 32);
    if ( v20 )
    {
      if ( _InterlockedExchange64((volatile __int64 *)(v20 + 1760), 0LL) == a2 )
      {
        *(_QWORD *)(a2 + 32) = 0LL;
        *(_WORD *)(a2 - 30) -= 2;
        KeReleaseSemaphoreEx(v20 + 1608, 1, 1, v7, 2);
      }
    }
    else if ( v10 && v11 )
    {
      if ( !v13 && (a3 & 2) == 0 )
      {
LABEL_25:
        v22 = *(_DWORD *)(a2 + 40);
        if ( (v22 & 0x2000) != 0 && (v22 & 7) == 3 )
          AlpcpRemoveMessageFromPendingQueue(a2);
        goto LABEL_26;
      }
      ExAcquirePushLockSharedEx(v10 + 352, 0LL);
      if ( (*(_DWORD *)(v10 + 416) & 0x40) != 0 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 352), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v10 + 352));
        KeAbPostRelease(v10 + 352);
      }
      else
      {
        *(_QWORD *)(a2 + 64) = v10;
        *(_QWORD *)(a2 + 56) = v11;
        ++*(_WORD *)(a2 - 30);
        *(_DWORD *)(a2 + 72) = _InterlockedIncrement((volatile signed __int32 *)(v11 + 400));
        *(_QWORD *)(a2 + 128) = *(_QWORD *)(v11 + 56);
        AlpcpInsertMessageCanceledQueue(v10, a2);
        AlpcpSignalPortAndUnlock(v10);
      }
    }
    if ( v13 && (a3 & 0x10000) != 0 && v33 )
    {
      v21 = *(_DWORD *)(a2 + 40) & 7;
      if ( v21 == 3 )
      {
        AlpcpRemoveMessageFromPendingQueue(a2);
      }
      else
      {
        if ( v21 == 4 )
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
          v25 = (volatile signed __int64 *)(v33 + 136);
          ExAcquirePushLockExclusiveEx(v33 + 136, 0LL);
          AlpcpRemoveMessagePort(v33, a2);
        }
        if ( (_InterlockedExchangeAdd64(v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v25, v26, v27, v28);
        KeAbPostRelease((ULONG_PTR)v25);
        --*(_WORD *)(a2 - 30);
      }
    }
    goto LABEL_25;
  }
  if ( !v9 || v6 != 3 || (v16 = 1LL, (*(_DWORD *)(a2 + 40) & 0x2000) != 0) )
    v16 = 0LL;
  v17 = 259;
  if ( (v7 & 1) == 0 || (_DWORD)v16 )
    goto LABEL_14;
LABEL_26:
  *(_DWORD *)(a2 + 40) &= ~0x8000u;
  AlpcpUnlockMessage(a2, v16, v9, v7);
  if ( v10 )
    ObfDereferenceObject((PVOID)v10);
  if ( v11 )
    ObfDereferenceObject((PVOID)v11);
  return v17;
}
