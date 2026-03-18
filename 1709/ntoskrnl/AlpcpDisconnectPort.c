/*
 * XREFs of AlpcpDisconnectPort @ 0x140464BE0
 * Callers:
 *     AlpcpDoPortCleanup @ 0x140464584 (AlpcpDoPortCleanup.c)
 *     NtAlpcDisconnectPort @ 0x140468934 (NtAlpcDisconnectPort.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafe @ 0x140108160 (ObReferenceObjectSafe.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140464F28 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404664F0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x14049DAB4 (AlpcpUnlockMessage.c)
 *     AlpcpSignalPortAndUnlock @ 0x140577394 (AlpcpSignalPortAndUnlock.c)
 *     AlpcpWalkConnectionList @ 0x14058C26C (AlpcpWalkConnectionList.c)
 *     AlpcpInsertMessageCanceledQueue @ 0x140593C98 (AlpcpInsertMessageCanceledQueue.c)
 */

__int64 __fastcall AlpcpDisconnectPort(__int64 a1, char a2)
{
  __int64 *v2; // r12
  volatile signed __int64 *v5; // rdi
  int v6; // eax
  __int64 v7; // r15
  __int64 v8; // r14
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
            AlpcpInsertMessageCanceledQueue(v16, v14);
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
