/*
 * XREFs of AlpcpSignalPortAndUnlock @ 0x14052DAC0
 * Callers:
 *     AlpcpDisconnectPort @ 0x1404DB034 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessage @ 0x1404DE89C (AlpcpCancelMessage.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     AlpcpQueueIoCompletionPort @ 0x1400845E0 (AlpcpQueueIoCompletionPort.c)
 *     KeReleaseSemaphoreEx @ 0x140084C90 (KeReleaseSemaphoreEx.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

char __fastcall AlpcpSignalPortAndUnlock(__int64 a1)
{
  ULONG_PTR v3; // rdi
  __int64 v4; // r9
  __int64 **v5; // rdi
  volatile signed __int64 *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rax
  __int64 *v11; // rdi
  __int64 *v12; // rcx
  __int64 v13; // r9

  if ( *(_QWORD *)(a1 + 32) )
    return AlpcpQueueIoCompletionPort((_QWORD *)a1, 0, 1, 0);
  if ( (*(_DWORD *)(a1 + 416) & 0x200) != 0 )
  {
    v3 = a1 + 352;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
    KeAbPostRelease(v3);
    return KeReleaseSemaphoreEx(*(_QWORD *)(a1 + 248), 1, 1, v4, 0);
  }
  else
  {
    v5 = (__int64 **)(a1 + 232);
    if ( *v5 == (__int64 *)v5 )
      goto LABEL_20;
    v6 = (volatile signed __int64 *)(a1 + 224);
    ExAcquirePushLockExclusiveEx(a1 + 224, 0LL);
    v10 = *v5;
    if ( *v5 == (__int64 *)v5 )
    {
      v11 = 0LL;
    }
    else
    {
      v11 = v10 - 222;
      *(v10 - 1) = 0LL;
      v7 = *v10;
      if ( *(__int64 **)(*v10 + 8) != v10 || (v12 = (__int64 *)v10[1], (__int64 *)*v12 != v10) )
        __fastfail(3u);
      *v12 = v7;
      *(_QWORD *)(v7 + 8) = v12;
      *v10 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6, v7, v8, v9);
    KeAbPostRelease((ULONG_PTR)v6);
    if ( !v11 )
    {
LABEL_20:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
      return KeAbPostRelease(a1 + 352);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
      KeAbPostRelease(a1 + 352);
      return KeReleaseSemaphoreEx((__int64)(v11 + 201), 1, 1, v13, 2);
    }
  }
}
