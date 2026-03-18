/*
 * XREFs of AlpcpReturnMessageOnInsufficientBuffer @ 0x1405815A0
 * Callers:
 *     AlpcpReceiveMessage @ 0x14049E3C0 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404A2660 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     memset @ 0x140192F40 (memset.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x14046364C (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpExposeContextAttribute @ 0x140581658 (AlpcpExposeContextAttribute.c)
 *     AlpcpInsertMessageLargeMessageQueue @ 0x1405816CC (AlpcpInsertMessageLargeMessageQueue.c)
 *     AlpcpInsertMessageCanceledQueue @ 0x140593C98 (AlpcpInsertMessageCanceledQueue.c)
 */

__int64 __fastcall AlpcpReturnMessageOnInsufficientBuffer(__int64 a1, _QWORD *a2, void *a3)
{
  volatile signed __int64 *v6; // rdi

  memset(a3, 0, 0x20uLL);
  v6 = (volatile signed __int64 *)(a1 + 352);
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
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
    KeAbPostRelease(a1 + 352);
    AlpcpExposeContextAttribute(a1, a2, a3, 0LL);
    return 3221225507LL;
  }
  if ( a2[2] )
  {
    AlpcpRemoveMessageFromPendingQueue((__int64)a2);
LABEL_4:
    ++*((_WORD *)a2 - 15);
    AlpcpInsertMessageLargeMessageQueue(a1, a2);
    goto LABEL_5;
  }
  if ( (*(_DWORD *)(a1 + 416) & 0x40) == 0 )
    goto LABEL_4;
  if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
  KeAbPostRelease(a1 + 352);
  return 3221227264LL;
}
