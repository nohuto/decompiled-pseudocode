/*
 * XREFs of AlpcpInsertMessageDirectQueue @ 0x140440774
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x140525120 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpInsertMessageDirectQueue(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rsi
  int v5; // eax

  v2 = (volatile signed __int64 *)(a1 + 200);
  ExAcquirePushLockExclusiveEx(a1 + 200, 0LL);
  v5 = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 16) = a1;
  *(_DWORD *)(a2 + 40) = v5 & 0xFFFFFF84 | (4 * (*(_DWORD *)(a1 + 416) & 6 | 1));
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 216);
  *(_QWORD *)a2 = a1 + 208;
  **(_QWORD **)(a1 + 216) = a2;
  *(_QWORD *)(a1 + 216) = a2;
  ++*(_DWORD *)(a1 + 460);
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
