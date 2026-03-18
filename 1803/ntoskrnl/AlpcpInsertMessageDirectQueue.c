/*
 * XREFs of AlpcpInsertMessageDirectQueue @ 0x140561C14
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x1404CD0A0 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

char __fastcall AlpcpInsertMessageDirectQueue(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rsi
  __int64 v5; // rdx
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // r8

  v2 = (volatile signed __int64 *)(a1 + 200);
  ExAcquirePushLockExclusiveEx(a1 + 200, 0LL);
  v7 = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 16) = a1;
  v8 = v7 & 0xFFFFFF84 | (4 * (*(_DWORD *)(a1 + 416) & 6 | 1));
  *(_DWORD *)(a2 + 40) = v8;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 216);
  *(_QWORD *)a2 = a1 + 208;
  **(_QWORD **)(a1 + 216) = a2;
  *(_QWORD *)(a1 + 216) = a2;
  ++*(_DWORD *)(a1 + 460);
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2, v5, v8, v6);
  return KeAbPostRelease((ULONG_PTR)v2);
}
