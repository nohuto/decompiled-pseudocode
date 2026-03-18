/*
 * XREFs of AlpcpDoPortCleanup @ 0x1404DAA48
 * Callers:
 *     AlpcpClosePort @ 0x1404DA9D0 (AlpcpClosePort.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeReleaseSemaphoreEx @ 0x140084C90 (KeReleaseSemaphoreEx.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KeReleaseSemaphore @ 0x14013E800 (KeReleaseSemaphore.c)
 *     AlpcpFlushResourcesPort @ 0x1404DAB68 (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushMessagesPort @ 0x1404DAC6C (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x1404DB034 (AlpcpDisconnectPort.c)
 *     AlpcpFreeCompletionList @ 0x140748648 (AlpcpFreeCompletionList.c)
 */

char __fastcall AlpcpDoPortCleanup(__int64 a1)
{
  volatile signed __int64 *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  void *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD **v11; // r14
  volatile signed __int64 *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // rax

  AlpcpDisconnectPort((PVOID)a1);
  v2 = (volatile signed __int64 *)(a1 + 352);
  ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
  if ( *(_QWORD *)(a1 + 360) )
    AlpcpFreeCompletionList(a1);
  v6 = *(void **)(a1 + 24);
  v7 = 0LL;
  if ( ((unsigned __int8)v6 & 1) == 0 )
    v7 = *(_QWORD *)(a1 + 24);
  if ( v7 )
  {
    ObfDereferenceObjectWithTag(v6, 0x63706C41u);
    *(_QWORD *)(a1 + 24) |= 1uLL;
  }
  *(_DWORD *)(a1 + 416) |= 0x40u;
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352), v3, v4, v5);
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
    v11 = (_QWORD **)(a1 + 232);
    if ( *v11 != v11 )
    {
      v13 = (volatile signed __int64 *)(a1 + 224);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v13, 0LL);
      while ( 1 )
      {
        v17 = *v11;
        if ( *v11 == v11 )
          break;
        *(v17 - 1) = 0LL;
        v18 = *v17;
        if ( *(_QWORD **)(*v17 + 8LL) != v17 || (v19 = (_QWORD *)v17[1], (_QWORD *)*v19 != v17) )
          __fastfail(3u);
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        *v17 = 0LL;
        KeReleaseSemaphoreEx((__int64)(v17 - 21), 1, 1, v16, 2);
      }
      if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v13, v14, v15, v16);
      KeAbPostRelease((ULONG_PTR)v13);
    }
  }
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2, v8, v9, v10);
  return KeAbPostRelease((ULONG_PTR)v2);
}
