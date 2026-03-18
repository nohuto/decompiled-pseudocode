/*
 * XREFs of EmPowerPagingEnabled @ 0x1405EC984
 * Callers:
 *     PoBroadcastSystemState @ 0x140472204 (PoBroadcastSystemState.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 */

char __fastcall EmPowerPagingEnabled(char a1)
{
  char v2; // di
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // al
  char result; // al
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpPagingLock, 0LL);
  if ( a1 )
  {
    dword_1403C9F48 |= 0x80000000;
  }
  else
  {
    dword_1403C9F48 &= ~0x80000000;
    if ( dword_1403C9F48 )
    {
      v2 = 1;
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      EmpPagingStatus = &Event;
    }
  }
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock, v3, v4, v5);
  result = KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
  if ( v2 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpPagingLock, 0LL);
    EmpPagingStatus = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock, v8, v9, v10);
    return KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
  }
  return result;
}
