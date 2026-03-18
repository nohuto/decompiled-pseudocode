/*
 * XREFs of AlpcpFlushMessagesByRequestor @ 0x140578E48
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

char __fastcall AlpcpFlushMessagesByRequestor(__int64 a1, __int64 a2, ULONG_PTR *a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  ULONG_PTR i; // rdi
  volatile signed __int64 *v13; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  volatile signed __int64 *v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax

  if ( a4 <= 2 )
  {
    v8 = 136LL;
  }
  else
  {
    v8 = 176LL;
    if ( a4 != 3 )
      v8 = 200LL;
  }
  ExAcquirePushLockExclusiveEx(v8 + a2, 0LL);
LABEL_5:
  for ( i = *a3; (ULONG_PTR *)i != a3; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 24) == a1 || (*(_DWORD *)(i + 40) & 0x8000) != 0 )
    {
      AlpcpReferenceBlob(i);
      if ( a4 > 2 )
      {
        if ( a4 == 3 )
          v18 = (volatile signed __int64 *)(a2 + 176);
        else
          v18 = (volatile signed __int64 *)(a2 + 200);
      }
      else
      {
        v18 = (volatile signed __int64 *)(a2 + 136);
      }
      if ( (_InterlockedExchangeAdd64(v18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v18, v15, v16, v17);
      KeAbPostRelease((ULONG_PTR)v18);
      AlpcpLockForCachedReferenceBlob(i);
      --*(_WORD *)(i - 30);
      if ( *(_QWORD *)(i + 24) == a1 )
        AlpcpCancelMessage(a2, i, 0x10000u);
      else
        AlpcpUnlockMessage(i, v19, v20, v21);
      if ( a4 > 2 )
      {
        v22 = 176LL;
        if ( a4 != 3 )
          v22 = 200LL;
      }
      else
      {
        v22 = 136LL;
      }
      ExAcquirePushLockExclusiveEx(v22 + a2, 0LL);
      goto LABEL_5;
    }
  }
  if ( a4 > 2 )
  {
    if ( a4 == 3 )
      v13 = (volatile signed __int64 *)(a2 + 176);
    else
      v13 = (volatile signed __int64 *)(a2 + 200);
  }
  else
  {
    v13 = (volatile signed __int64 *)(a2 + 136);
  }
  if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v13, v9, v10, v11);
  return KeAbPostRelease((ULONG_PTR)v13);
}
