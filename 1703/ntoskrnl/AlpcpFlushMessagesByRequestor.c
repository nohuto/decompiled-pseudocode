/*
 * XREFs of AlpcpFlushMessagesByRequestor @ 0x140470780
 * Callers:
 *     AlpcpFlushMessagesPort @ 0x140473BC0 (AlpcpFlushMessagesPort.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     AlpcpCancelMessage @ 0x14042FD5C (AlpcpCancelMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140479F80 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x14047CEA8 (AlpcpUnlockMessage.c)
 *     AlpcpReferenceBlob @ 0x14047D550 (AlpcpReferenceBlob.c)
 */

__int64 __fastcall AlpcpFlushMessagesByRequestor(
        __int64 a1,
        volatile signed __int64 *a2,
        ULONG_PTR *a3,
        unsigned int a4)
{
  ULONG_PTR v8; // rcx
  ULONG_PTR i; // rdi
  volatile signed __int64 *v11; // r14

  if ( a4 > 2 )
  {
    if ( a4 == 3 )
      v8 = (ULONG_PTR)(a2 + 22);
    else
      v8 = (ULONG_PTR)(a2 + 25);
  }
  else
  {
    v8 = (ULONG_PTR)(a2 + 17);
  }
LABEL_3:
  ExAcquirePushLockExclusiveEx(v8, 0LL);
  for ( i = *a3; (ULONG_PTR *)i != a3; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 24) == a1 || (*(_DWORD *)(i + 40) & 0x10000) != 0 )
    {
      AlpcpReferenceBlob(i);
      if ( a4 > 2 )
      {
        if ( a4 == 3 )
          v11 = a2 + 22;
        else
          v11 = a2 + 25;
      }
      else
      {
        v11 = a2 + 17;
      }
      if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v11);
      KeAbPostRelease((ULONG_PTR)v11);
      AlpcpLockForCachedReferenceBlob(i);
      --*(_WORD *)(i - 30);
      if ( *(_QWORD *)(i + 24) == a1 )
        AlpcpCancelMessage((__int64)a2, i, 0x10000);
      else
        AlpcpUnlockMessage(i);
      if ( a4 > 2 )
      {
        if ( a4 == 3 )
          v8 = (ULONG_PTR)(a2 + 22);
        else
          v8 = (ULONG_PTR)(a2 + 25);
      }
      else
      {
        v8 = (ULONG_PTR)(a2 + 17);
      }
      goto LABEL_3;
    }
  }
  if ( a4 > 2 )
  {
    if ( a4 == 3 )
    {
      if ( (_InterlockedExchangeAdd64(a2 + 22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a2 + 22);
      return KeAbPostRelease((ULONG_PTR)(a2 + 22));
    }
    else
    {
      if ( (_InterlockedExchangeAdd64(a2 + 25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a2 + 25);
      return KeAbPostRelease((ULONG_PTR)(a2 + 25));
    }
  }
  else
  {
    if ( (_InterlockedExchangeAdd64(a2 + 17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a2 + 17);
    return KeAbPostRelease((ULONG_PTR)(a2 + 17));
  }
}
