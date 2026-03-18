/*
 * XREFs of AlpcpTrackPortReferences @ 0x14057D4A4
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x1404C9870 (NtAlpcSendWaitReceivePort.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

char __fastcall AlpcpTrackPortReferences(__int64 a1)
{
  signed __int32 v2; // edi
  volatile signed __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _KEVENT *v7; // rcx
  char result; // al

  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 404));
  if ( *(_QWORD *)(a1 + 408) )
  {
    v3 = (volatile signed __int64 *)(a1 + 352);
    ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
    v7 = *(struct _KEVENT **)(a1 + 408);
    if ( v7 && v2 == v7[1].Header.LockNV )
      KeSetEvent(v7, 0, 0);
    if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3, v4, v5, v6);
    return KeAbPostRelease((ULONG_PTR)v3);
  }
  return result;
}
