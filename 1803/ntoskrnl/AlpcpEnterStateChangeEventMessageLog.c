/*
 * XREFs of AlpcpEnterStateChangeEventMessageLog @ 0x140747B64
 * Callers:
 *     AlpcpReceiveMessage @ 0x1404C9B10 (AlpcpReceiveMessage.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1404CB2A0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404CB670 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404CD0A0 (AlpcpCompleteDispatchMessage.c)
 *     NtAlpcImpersonateClientOfPort @ 0x1404CED50 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x1404D0660 (AlpcpReceiveLegacyMessage.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     AlpcpAllocateSnapshotMessageLog @ 0x1407478F8 (AlpcpAllocateSnapshotMessageLog.c)
 *     AlpcpLocateMessageLog @ 0x140747D14 (AlpcpLocateMessageLog.c)
 */

char __fastcall AlpcpEnterStateChangeEventMessageLog(__int64 a1)
{
  __int64 MessageLog; // rax
  __int64 *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rsi
  _QWORD *v7; // rdi
  __int64 v8; // r8
  __int64 SnapshotMessageLog; // rax
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpMessageLogLock, 0LL);
  MessageLog = AlpcpLocateMessageLog(*(unsigned int *)(a1 + 264));
  v6 = MessageLog;
  if ( MessageLog )
  {
    v7 = (_QWORD *)(MessageLog + 48);
    if ( (_QWORD *)*v7 == v7
      || (v8 = *(_QWORD *)(MessageLog + 56)) == 0
      || *(_DWORD *)(v8 + 16) != *(_DWORD *)(a1 + 40)
      || *(_QWORD *)(v8 + 24) != *(_QWORD *)(a1 + 24)
      || *(_QWORD *)(v8 + 32) != *(_QWORD *)(a1 + 16)
      || *(_QWORD *)(v8 + 48) != *(_QWORD *)(a1 + 32)
      || *(_QWORD *)(v8 + 40) != *(_QWORD *)(a1 + 64)
      || *(_QWORD *)(v8 + 56) != *(_QWORD *)(a1 + 104)
      || *(_QWORD *)(v8 + 64) != *(_QWORD *)(a1 + 112)
      || memcmp((const void *)(v8 + 80), (const void *)(a1 + 240), 0x28uLL) )
    {
      SnapshotMessageLog = AlpcpAllocateSnapshotMessageLog();
      v10 = SnapshotMessageLog;
      if ( *(_DWORD *)(v6 + 44) )
      {
        *(_DWORD *)(SnapshotMessageLog + 16) = *(_DWORD *)(a1 + 40);
        *(_QWORD *)(SnapshotMessageLog + 24) = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(SnapshotMessageLog + 32) = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(SnapshotMessageLog + 40) = *(_QWORD *)(a1 + 64);
        *(_QWORD *)(SnapshotMessageLog + 48) = *(_QWORD *)(a1 + 32);
        *(_QWORD *)(SnapshotMessageLog + 56) = *(_QWORD *)(a1 + 104);
        v12 = *(_QWORD *)(a1 + 112);
        *(_DWORD *)(v10 + 20) = 0;
        *(_QWORD *)(v10 + 64) = v12;
        *(_QWORD *)(v10 + 72) = retaddr;
        *(_OWORD *)(v10 + 80) = *(_OWORD *)(a1 + 240);
        *(_OWORD *)(v10 + 96) = *(_OWORD *)(a1 + 256);
        *(_QWORD *)(v10 + 112) = *(_QWORD *)(a1 + 272);
        v13 = (__int64 *)v7[1];
        if ( (_QWORD *)*v13 != v7 )
          __fastfail(3u);
        *(_QWORD *)v10 = v7;
        *(_QWORD *)(v10 + 8) = v13;
        *v13 = v10;
        v7[1] = v10;
      }
      else
      {
        v11 = (__int64 *)qword_1403AD2A8;
        v3 = &AlpcpFreeMessageSnapshotListHead;
        if ( *(__int64 **)qword_1403AD2A8 != &AlpcpFreeMessageSnapshotListHead )
          __fastfail(3u);
        *(_QWORD *)v10 = &AlpcpFreeMessageSnapshotListHead;
        *(_QWORD *)(v10 + 8) = v11;
        *v11 = v10;
        qword_1403AD2A8 = v10;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpMessageLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock, (__int64)v3, v4, v5);
  return KeAbPostRelease((ULONG_PTR)&AlpcpMessageLogLock);
}
