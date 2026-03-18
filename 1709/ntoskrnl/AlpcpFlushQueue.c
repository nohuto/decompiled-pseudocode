/*
 * XREFs of AlpcpFlushQueue @ 0x140464950
 * Callers:
 *     AlpcpFlushMessagesPort @ 0x1404647A4 (AlpcpFlushMessagesPort.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     AlpcpCancelMessage @ 0x140462B18 (AlpcpCancelMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404664F0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x14049DAB4 (AlpcpUnlockMessage.c)
 *     AlpcpReferenceBlob @ 0x1404A2210 (AlpcpReferenceBlob.c)
 */

char __fastcall AlpcpFlushQueue(volatile signed __int64 *a1, ULONG_PTR *a2, unsigned int a3)
{
  ULONG_PTR v6; // rcx
  ULONG_PTR v7; // rbp
  ULONG_PTR v8; // rcx
  volatile signed __int64 *v10; // r14

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
        v10 = a1 + 22;
      else
        v10 = a1 + 25;
    }
    else
    {
      v10 = a1 + 17;
    }
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10);
    KeAbPostRelease((ULONG_PTR)v10);
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
      v8 = (ULONG_PTR)(a1 + 22);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64(a1 + 25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 25);
      v8 = (ULONG_PTR)(a1 + 25);
    }
  }
  else
  {
    if ( (_InterlockedExchangeAdd64(a1 + 17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 17);
    v8 = (ULONG_PTR)(a1 + 17);
  }
  return KeAbPostRelease(v8);
}
