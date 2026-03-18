/*
 * XREFs of AlpcpFlushMessagesByRequestor @ 0x14058E9E4
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

char __fastcall AlpcpFlushMessagesByRequestor(__int64 a1, volatile signed __int64 *a2, ULONG_PTR *a3, unsigned int a4)
{
  ULONG_PTR v8; // rcx
  ULONG_PTR i; // rdi
  ULONG_PTR v10; // rcx
  volatile signed __int64 *v12; // r14

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
          v12 = a2 + 22;
        else
          v12 = a2 + 25;
      }
      else
      {
        v12 = a2 + 17;
      }
      if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v12);
      KeAbPostRelease((ULONG_PTR)v12);
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
      v10 = (ULONG_PTR)(a2 + 22);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64(a2 + 25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a2 + 25);
      v10 = (ULONG_PTR)(a2 + 25);
    }
  }
  else
  {
    if ( (_InterlockedExchangeAdd64(a2 + 17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a2 + 17);
    v10 = (ULONG_PTR)(a2 + 17);
  }
  return KeAbPostRelease(v10);
}
