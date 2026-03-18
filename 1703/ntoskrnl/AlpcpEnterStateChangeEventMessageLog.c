/*
 * XREFs of AlpcpEnterStateChangeEventMessageLog @ 0x1406B1264
 * Callers:
 *     AlpcpReceiveLegacyMessage @ 0x14047C970 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpUnlockMessage @ 0x14047CEA8 (AlpcpUnlockMessage.c)
 *     NtAlpcImpersonateClientOfPort @ 0x14047CFB0 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpReceiveMessage @ 0x140522600 (AlpcpReceiveMessage.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140523D60 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x140525120 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x140526710 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     memcmp @ 0x14016A960 (memcmp.c)
 *     AlpcpAllocateSnapshotMessageLog @ 0x1406B0FFC (AlpcpAllocateSnapshotMessageLog.c)
 *     AlpcpLocateMessageLog @ 0x1406B1414 (AlpcpLocateMessageLog.c)
 */

__int64 __fastcall AlpcpEnterStateChangeEventMessageLog(__int64 a1)
{
  __int64 MessageLog; // rax
  __int64 v3; // rsi
  _QWORD *v4; // rdi
  __int64 v5; // r8
  __int64 SnapshotMessageLog; // rax
  __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rax
  __int64 *v10; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpMessageLogLock, 0LL);
  MessageLog = AlpcpLocateMessageLog(*(unsigned int *)(a1 + 264));
  v3 = MessageLog;
  if ( MessageLog )
  {
    v4 = (_QWORD *)(MessageLog + 48);
    if ( (_QWORD *)*v4 == v4
      || (v5 = *(_QWORD *)(MessageLog + 56)) == 0
      || *(_DWORD *)(v5 + 16) != *(_DWORD *)(a1 + 40)
      || *(_QWORD *)(v5 + 24) != *(_QWORD *)(a1 + 24)
      || *(_QWORD *)(v5 + 32) != *(_QWORD *)(a1 + 16)
      || *(_QWORD *)(v5 + 48) != *(_QWORD *)(a1 + 32)
      || *(_QWORD *)(v5 + 40) != *(_QWORD *)(a1 + 64)
      || *(_QWORD *)(v5 + 56) != *(_QWORD *)(a1 + 104)
      || *(_QWORD *)(v5 + 64) != *(_QWORD *)(a1 + 112)
      || memcmp((const void *)(v5 + 80), (const void *)(a1 + 240), 0x28uLL) )
    {
      SnapshotMessageLog = AlpcpAllocateSnapshotMessageLog();
      v7 = SnapshotMessageLog;
      if ( *(_DWORD *)(v3 + 44) )
      {
        *(_DWORD *)(SnapshotMessageLog + 16) = *(_DWORD *)(a1 + 40);
        *(_QWORD *)(SnapshotMessageLog + 24) = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(SnapshotMessageLog + 32) = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(SnapshotMessageLog + 40) = *(_QWORD *)(a1 + 64);
        *(_QWORD *)(SnapshotMessageLog + 48) = *(_QWORD *)(a1 + 32);
        *(_QWORD *)(SnapshotMessageLog + 56) = *(_QWORD *)(a1 + 104);
        v9 = *(_QWORD *)(a1 + 112);
        *(_DWORD *)(v7 + 20) = 0;
        *(_QWORD *)(v7 + 64) = v9;
        *(_QWORD *)(v7 + 72) = retaddr;
        *(_OWORD *)(v7 + 80) = *(_OWORD *)(a1 + 240);
        *(_OWORD *)(v7 + 96) = *(_OWORD *)(a1 + 256);
        *(_QWORD *)(v7 + 112) = *(_QWORD *)(a1 + 272);
        v10 = (__int64 *)v4[1];
        if ( (_QWORD *)*v10 != v4 )
          __fastfail(3u);
        *(_QWORD *)v7 = v4;
        *(_QWORD *)(v7 + 8) = v10;
        *v10 = v7;
        v4[1] = v7;
      }
      else
      {
        v8 = (__int64 *)qword_14034F788;
        if ( *(__int64 **)qword_14034F788 != &AlpcpFreeMessageSnapshotListHead )
          __fastfail(3u);
        *(_QWORD *)v7 = &AlpcpFreeMessageSnapshotListHead;
        *(_QWORD *)(v7 + 8) = v8;
        *v8 = v7;
        qword_14034F788 = v7;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpMessageLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock);
  return KeAbPostRelease((ULONG_PTR)&AlpcpMessageLogLock);
}
