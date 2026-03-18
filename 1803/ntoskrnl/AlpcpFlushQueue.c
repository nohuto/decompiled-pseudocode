/*
 * XREFs of AlpcpFlushQueue @ 0x1404DAE18
 * Callers:
 *     AlpcpFlushMessagesPort @ 0x1404DAC6C (AlpcpFlushMessagesPort.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     AlpcpReferenceBlob @ 0x1404D0478 (AlpcpReferenceBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404DCB2C (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpCancelMessage @ 0x1404DE89C (AlpcpCancelMessage.c)
 */

char __fastcall AlpcpFlushQueue(volatile signed __int64 *a1, ULONG_PTR *a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  ULONG_PTR v10; // r14
  volatile signed __int64 *v11; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  volatile signed __int64 *v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax

  if ( a3 <= 2 )
  {
    v6 = 17LL;
  }
  else
  {
    v6 = 22LL;
    if ( a3 != 3 )
      v6 = 25LL;
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&a1[v6], 0LL);
  while ( 1 )
  {
    v10 = *a2;
    if ( (ULONG_PTR *)*a2 == a2 )
      break;
    AlpcpReferenceBlob(*a2);
    if ( a3 > 2 )
    {
      if ( a3 == 3 )
        v16 = a1 + 22;
      else
        v16 = a1 + 25;
    }
    else
    {
      v16 = a1 + 17;
    }
    if ( (_InterlockedExchangeAdd64(v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v16, v13, v14, v15);
    KeAbPostRelease((ULONG_PTR)v16);
    AlpcpLockForCachedReferenceBlob(v10);
    --*(_WORD *)(v10 - 30);
    if ( *(volatile signed __int64 **)(v10 + 16) == a1 )
      AlpcpCancelMessage(a1, v10, 0x10000LL);
    else
      AlpcpUnlockMessage(v10, v17, v18, v19);
    if ( a3 > 2 )
    {
      v20 = 22LL;
      if ( a3 != 3 )
        v20 = 25LL;
    }
    else
    {
      v20 = 17LL;
    }
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&a1[v20], 0LL);
  }
  if ( a3 > 2 )
  {
    if ( a3 == 3 )
      v11 = a1 + 22;
    else
      v11 = a1 + 25;
  }
  else
  {
    v11 = a1 + 17;
  }
  if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v11, v7, v8, v9);
  return KeAbPostRelease((ULONG_PTR)v11);
}
