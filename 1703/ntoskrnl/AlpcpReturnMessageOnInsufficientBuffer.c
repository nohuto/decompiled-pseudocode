/*
 * XREFs of AlpcpReturnMessageOnInsufficientBuffer @ 0x14042F794
 * Callers:
 *     AlpcpReceiveMessage @ 0x140522600 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x140526710 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     AlpcpInsertMessageLargeMessageQueue @ 0x14042F82C (AlpcpInsertMessageLargeMessageQueue.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x1404304C0 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpInsertMessageCanceledQueue @ 0x140430754 (AlpcpInsertMessageCanceledQueue.c)
 */

__int64 __fastcall AlpcpReturnMessageOnInsufficientBuffer(__int64 a1, _QWORD *a2)
{
  signed __int64 *v2; // rbx

  v2 = (signed __int64 *)(a1 + 352);
  ExAcquirePushLockSharedEx(a1 + 352, 0LL);
  if ( a2[8] == a1 )
  {
    if ( (*(_DWORD *)(a1 + 416) & 0x40) != 0 )
    {
      a2[8] = 0LL;
      a2[7] = 0LL;
    }
    else
    {
      ++*((_WORD *)a2 - 15);
      AlpcpInsertMessageCanceledQueue(a1, a2);
    }
LABEL_5:
    if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    return 3221225507LL;
  }
  if ( a2[2] )
  {
    AlpcpRemoveMessageFromPendingQueue(a2);
LABEL_4:
    ++*((_WORD *)a2 - 15);
    AlpcpInsertMessageLargeMessageQueue(a1, a2);
    goto LABEL_5;
  }
  if ( (*(_DWORD *)(a1 + 416) & 0x40) == 0 )
    goto LABEL_4;
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return 3221227264LL;
}
