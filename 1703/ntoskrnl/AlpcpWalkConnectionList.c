/*
 * XREFs of AlpcpWalkConnectionList @ 0x140470938
 * Callers:
 *     AlpcpDisconnectPort @ 0x14047400C (AlpcpDisconnectPort.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpWalkConnectionList(__int64 a1)
{
  _QWORD **v1; // rbx
  _QWORD *i; // rdi
  __int64 result; // rax

  v1 = (_QWORD **)(*(_QWORD *)(a1 + 16) + 24LL);
  for ( i = *v1; i != v1; i = (_QWORD *)*i )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(i - 5), 0LL);
    if ( (_InterlockedExchangeAdd64(i - 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(i - 5);
    result = KeAbPostRelease((ULONG_PTR)(i - 5));
  }
  return result;
}
