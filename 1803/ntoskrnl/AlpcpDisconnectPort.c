/*
 * XREFs of AlpcpDisconnectPort @ 0x1404DB034
 * Callers:
 *     AlpcpDoPortCleanup @ 0x1404DAA48 (AlpcpDoPortCleanup.c)
 *     NtAlpcDisconnectPort @ 0x140571AA4 (NtAlpcDisconnectPort.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     ObReferenceObjectSafe @ 0x1400A9D20 (ObReferenceObjectSafe.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1404DB380 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404DCB2C (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpSignalPortAndUnlock @ 0x14052DAC0 (AlpcpSignalPortAndUnlock.c)
 *     AlpcpWalkConnectionList @ 0x14057A6FC (AlpcpWalkConnectionList.c)
 *     AlpcpInsertMessageCanceledQueue @ 0x14057EE00 (AlpcpInsertMessageCanceledQueue.c)
 */

__int64 __fastcall AlpcpDisconnectPort(char *Object, char a2)
{
  __int64 *v2; // r12
  volatile signed __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ecx
  int v14; // ecx
  __int64 v15; // r15
  __int64 v16; // r14
  int v17; // edi
  int v18; // edi
  int v19; // edi
  __int64 v20; // rdi
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  ULONG_PTR v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD v29[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v30; // [rsp+70h] [rbp+30h]

  v2 = (__int64 *)*((_QWORD *)Object + 2);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v2 - 2), 0LL);
  v5 = (volatile signed __int64 *)(Object + 352);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(Object + 352), 0LL);
  if ( (a2 & 1) != 0 )
    *((_DWORD *)Object + 104) |= 0x80u;
  v9 = *((_DWORD *)Object + 104);
  if ( (v9 & 0x20) != 0 )
  {
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)Object + 44, v6, v7, v8);
    KeAbPostRelease((ULONG_PTR)(Object + 352));
    if ( (_InterlockedExchangeAdd64(v2 - 2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2 - 2, v22, v23, v24);
    KeAbPostRelease((ULONG_PTR)(v2 - 2));
    return 3221225527LL;
  }
  else
  {
    *((_DWORD *)Object + 104) = v9 | 0x20;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)Object + 44, v6, v7, v8);
    KeAbPostRelease((ULONG_PTR)(Object + 352));
    v13 = *((_DWORD *)Object + 104);
    if ( (v13 & 6) == 2 )
    {
      AlpcpWalkConnectionList(Object);
      v13 = *((_DWORD *)Object + 104);
    }
    v14 = ((v13 >> 1) & 3) - 1;
    if ( v14 )
    {
      if ( v14 == 1 )
      {
        v15 = *v2;
        v16 = (__int64)Object;
      }
      else
      {
        v15 = v2[2];
        v16 = *v2;
      }
    }
    else
    {
      v15 = 0LL;
      v16 = 0LL;
    }
    v30 = v16;
    if ( v15 )
      v15 &= -(__int64)(ObReferenceObjectSafe(v15) != 0);
    if ( v16 )
    {
      v16 &= -(__int64)(ObReferenceObjectSafe(v16) != 0);
      v30 = v16;
    }
    if ( (_InterlockedExchangeAdd64(v2 - 2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2 - 2, v10, v11, v12);
    KeAbPostRelease((ULONG_PTR)(v2 - 2));
    if ( v15 )
    {
      v29[1] = v29;
      v29[0] = v29;
      do
      {
        v17 = AlpcpCancelMessagesByRequestor((_DWORD)Object, v15, (int)v15 + 144, 1, (__int64)v29);
        v18 = AlpcpCancelMessagesByRequestor((_DWORD)Object, v15, (int)v15 + 160, 2, (__int64)v29) | v17;
        v19 = AlpcpCancelMessagesByRequestor((_DWORD)Object, v15, (int)v15 + 184, 3, (__int64)v29) | v18;
      }
      while ( v19 | (unsigned int)AlpcpCancelMessagesByRequestor((_DWORD)Object, v15, (int)v15 + 208, 4, (__int64)v29) );
      ObfDereferenceObject((PVOID)v15);
      v16 = v30;
      while ( 1 )
      {
        v20 = v29[0];
        if ( (_QWORD *)v29[0] == v29 )
          break;
        v29[0] = *(_QWORD *)v29[0];
        v25 = v20 - 80;
        *(_QWORD *)(v29[0] + 8LL) = v29;
        AlpcpLockForCachedReferenceBlob(v25);
        if ( v30 )
        {
          ExAcquirePushLockSharedEx(v30 + 352, 0LL);
          if ( (*(_DWORD *)(v30 + 416) & 0x40) != 0 )
          {
            --*(_WORD *)(v25 - 30);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v30 + 352), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v30 + 352));
            KeAbPostRelease(v30 + 352);
          }
          else
          {
            *(_DWORD *)(v25 + 72) = _InterlockedIncrement((volatile signed __int32 *)Object + 100);
            *(_QWORD *)(v25 + 128) = *((_QWORD *)Object + 7);
            *(_QWORD *)(v25 + 56) = Object;
            *(_QWORD *)(v25 + 64) = v30;
            AlpcpInsertMessageCanceledQueue(v30, v25);
            AlpcpSignalPortAndUnlock(v30);
          }
        }
        else
        {
          --*(_WORD *)(v25 - 30);
        }
        AlpcpUnlockMessage(v25, v26, v27, v28);
      }
    }
    if ( v16 )
      ObfDereferenceObject((PVOID)v16);
    return 0LL;
  }
}
