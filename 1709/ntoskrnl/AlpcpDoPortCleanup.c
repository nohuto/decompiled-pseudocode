/*
 * XREFs of AlpcpDoPortCleanup @ 0x140464584
 * Callers:
 *     AlpcpClosePort @ 0x140464070 (AlpcpClosePort.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x14006A750 (KeReleaseSemaphoreEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeReleaseSemaphore @ 0x1400DBA40 (KeReleaseSemaphore.c)
 *     AlpcpFlushResourcesPort @ 0x1404646A0 (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushMessagesPort @ 0x1404647A4 (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x140464BE0 (AlpcpDisconnectPort.c)
 *     AlpcpFreeCompletionList @ 0x1406DD928 (AlpcpFreeCompletionList.c)
 */

char __fastcall AlpcpDoPortCleanup(__int64 a1)
{
  volatile signed __int64 *v2; // rsi
  void *v3; // rcx
  _QWORD **v4; // r14
  volatile signed __int64 *v6; // rdi
  _QWORD *v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rdx

  AlpcpDisconnectPort(a1, 0LL);
  v2 = (volatile signed __int64 *)(a1 + 352);
  ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
  if ( *(_QWORD *)(a1 + 360) )
    AlpcpFreeCompletionList(a1);
  v3 = *(void **)(a1 + 24);
  if ( ((unsigned __int8)v3 & 1) == 0 && v3 )
  {
    ObfDereferenceObjectWithTag(v3, 0x63706C41u);
    *(_QWORD *)(a1 + 24) |= 1uLL;
  }
  *(_DWORD *)(a1 + 416) |= 0x40u;
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
  KeAbPostRelease(a1 + 352);
  AlpcpFlushMessagesPort(a1);
  AlpcpFlushResourcesPort(a1);
  ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
  if ( (*(_DWORD *)(a1 + 416) & 0x200) != 0 )
  {
    KeReleaseSemaphore(*(PRKSEMAPHORE *)(a1 + 248), 1, 0x1000000, 0);
  }
  else
  {
    v4 = (_QWORD **)(a1 + 232);
    if ( *v4 != v4 )
    {
      v6 = (volatile signed __int64 *)(a1 + 224);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v6, 0LL);
      while ( 1 )
      {
        v7 = *v4;
        if ( *v4 == v4 )
          break;
        *(v7 - 1) = 0LL;
        v8 = *v7;
        if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v9 = (_QWORD *)v7[1], (_QWORD *)*v9 != v7) )
          __fastfail(3u);
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        *v7 = 0LL;
        KeReleaseSemaphoreEx((__int64)(v7 - 21), 1, 1);
      }
      if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v6);
      KeAbPostRelease((ULONG_PTR)v6);
    }
  }
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
