/*
 * XREFs of AlpcpFlushQueue @ 0x140473D7C
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

__int64 __fastcall AlpcpFlushQueue(volatile signed __int64 *a1, ULONG_PTR *a2, unsigned int a3)
{
  ULONG_PTR v6; // rcx
  ULONG_PTR v7; // rbp
  volatile signed __int64 *v9; // r14

  if ( a3 > 2 )
  {
    if ( a3 == 3 )
      v6 = (ULONG_PTR)(a1 + 22);
    else
      v6 = (ULONG_PTR)(a1 + 25);
  }
  else
  {
    v6 = (ULONG_PTR)(a1 + 17);
  }
  while ( 1 )
  {
    ExAcquirePushLockExclusiveEx(v6, 0LL);
    v7 = *a2;
    if ( (ULONG_PTR *)*a2 == a2 )
      break;
    AlpcpReferenceBlob(*a2);
    if ( a3 > 2 )
    {
      if ( a3 == 3 )
        v9 = a1 + 22;
      else
        v9 = a1 + 25;
    }
    else
    {
      v9 = a1 + 17;
    }
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9);
    KeAbPostRelease((ULONG_PTR)v9);
    AlpcpLockForCachedReferenceBlob(v7);
    --*(_WORD *)(v7 - 30);
    if ( *(volatile signed __int64 **)(v7 + 16) == a1 )
      AlpcpCancelMessage((__int64)a1, v7, 0x10000);
    else
      AlpcpUnlockMessage(v7);
    if ( a3 > 2 )
    {
      if ( a3 == 3 )
        v6 = (ULONG_PTR)(a1 + 22);
      else
        v6 = (ULONG_PTR)(a1 + 25);
    }
    else
    {
      v6 = (ULONG_PTR)(a1 + 17);
    }
  }
  if ( a3 > 2 )
  {
    if ( a3 == 3 )
    {
      if ( (_InterlockedExchangeAdd64(a1 + 22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 22);
      return KeAbPostRelease((ULONG_PTR)(a1 + 22));
    }
    else
    {
      if ( (_InterlockedExchangeAdd64(a1 + 25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 25);
      return KeAbPostRelease((ULONG_PTR)(a1 + 25));
    }
  }
  else
  {
    if ( (_InterlockedExchangeAdd64(a1 + 17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 17);
    return KeAbPostRelease((ULONG_PTR)(a1 + 17));
  }
}
