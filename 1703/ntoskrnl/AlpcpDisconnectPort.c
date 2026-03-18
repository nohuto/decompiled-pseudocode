/*
 * XREFs of AlpcpDisconnectPort @ 0x14047400C
 * Callers:
 *     NtAlpcDisconnectPort @ 0x140470EA0 (NtAlpcDisconnectPort.c)
 *     AlpcpDoPortCleanup @ 0x140473994 (AlpcpDoPortCleanup.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x14000CFD0 (ObReferenceObjectSafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     AlpcpSignalPortAndUnlock @ 0x1404306C4 (AlpcpSignalPortAndUnlock.c)
 *     AlpcpInsertMessageCanceledQueue @ 0x140430754 (AlpcpInsertMessageCanceledQueue.c)
 *     AlpcpWalkConnectionList @ 0x140470938 (AlpcpWalkConnectionList.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140474350 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140479F80 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x14047CEA8 (AlpcpUnlockMessage.c)
 */

__int64 __fastcall AlpcpDisconnectPort(__int64 a1, char a2)
{
  __int64 *v2; // r13
  volatile signed __int64 *v5; // rdi
  int v6; // eax
  __int64 v7; // r15
  __int64 v8; // rsi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  __int64 v12; // rdi
  ULONG_PTR v14; // rdi
  _QWORD v15[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v16; // [rsp+70h] [rbp+30h]

  v2 = *(__int64 **)(a1 + 16);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v2 - 2), 0LL);
  v5 = (volatile signed __int64 *)(a1 + 352);
  ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
  if ( (a2 & 1) != 0 )
    *(_DWORD *)(a1 + 416) |= 0x80u;
  v6 = *(_DWORD *)(a1 + 416);
  if ( (v6 & 0x20) != 0 )
  {
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
    KeAbPostRelease(a1 + 352);
    if ( (_InterlockedExchangeAdd64(v2 - 2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2 - 2);
    KeAbPostRelease((ULONG_PTR)(v2 - 2));
    return 3221225527LL;
  }
  else
  {
    *(_DWORD *)(a1 + 416) = v6 | 0x20;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
    KeAbPostRelease(a1 + 352);
    if ( (*(_DWORD *)(a1 + 416) & 6) == 2 )
      AlpcpWalkConnectionList(a1);
    if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) == 1 )
    {
      v7 = 0LL;
      v8 = 0LL;
    }
    else if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) == 2 )
    {
      v7 = *v2;
      v8 = a1;
    }
    else
    {
      v7 = v2[2];
      v8 = *v2;
    }
    v16 = v8;
    if ( v7 )
      v7 &= -(__int64)(ObReferenceObjectSafe(v7) != 0);
    if ( v8 )
    {
      v8 &= -(__int64)(ObReferenceObjectSafe(v8) != 0);
      v16 = v8;
    }
    if ( (_InterlockedExchangeAdd64(v2 - 2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2 - 2);
    KeAbPostRelease((ULONG_PTR)(v2 - 2));
    if ( v7 )
    {
      v15[1] = v15;
      v15[0] = v15;
      do
      {
        v9 = AlpcpCancelMessagesByRequestor(a1, v7, (int)v7 + 144, 1, (__int64)v15);
        v10 = AlpcpCancelMessagesByRequestor(a1, v7, (int)v7 + 160, 2, (__int64)v15) | v9;
        v11 = AlpcpCancelMessagesByRequestor(a1, v7, (int)v7 + 184, 3, (__int64)v15) | v10;
      }
      while ( v11 | (unsigned int)AlpcpCancelMessagesByRequestor(a1, v7, (int)v7 + 208, 4, (__int64)v15) );
      ObfDereferenceObject((PVOID)v7);
      v8 = v16;
      while ( 1 )
      {
        v12 = v15[0];
        if ( (_QWORD *)v15[0] == v15 )
          break;
        v15[0] = *(_QWORD *)v15[0];
        v14 = v12 - 80;
        *(_QWORD *)(v15[0] + 8LL) = v15;
        AlpcpLockForCachedReferenceBlob(v14);
        if ( v16 )
        {
          ExAcquirePushLockSharedEx(v16 + 352, 0LL);
          if ( (*(_DWORD *)(v16 + 416) & 0x40) != 0 )
          {
            --*(_WORD *)(v14 - 30);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 352), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v16 + 352));
            KeAbPostRelease(v16 + 352);
          }
          else
          {
            *(_DWORD *)(v14 + 72) = _InterlockedIncrement((volatile signed __int32 *)(a1 + 400));
            *(_QWORD *)(v14 + 128) = *(_QWORD *)(a1 + 56);
            *(_QWORD *)(v14 + 56) = a1;
            *(_QWORD *)(v14 + 64) = v16;
            AlpcpInsertMessageCanceledQueue(v16, (_QWORD *)v14);
            AlpcpSignalPortAndUnlock(v16);
          }
        }
        else
        {
          --*(_WORD *)(v14 - 30);
        }
        AlpcpUnlockMessage(v14);
      }
    }
    if ( v8 )
      ObfDereferenceObject((PVOID)v8);
    return 0LL;
  }
}
