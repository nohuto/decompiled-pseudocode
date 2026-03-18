/*
 * XREFs of MmIsSessionInCurrentServerSilo @ 0x14025BD70
 * Callers:
 *     PopGetSettingNotificationName @ 0x14052389C (PopGetSettingNotificationName.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetThreadServerSilo @ 0x1400E1718 (PsGetThreadServerSilo.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 */

char __fastcall MmIsSessionInCurrentServerSilo(int a1)
{
  int SessionId; // edx
  bool v3; // bl
  int v4; // eax
  __int64 ThreadServerSilo; // rsi
  __int64 *i; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  v3 = 0;
  v4 = 0;
  if ( SessionId != -1 )
    v4 = SessionId;
  if ( v4 == a1 )
    return 1;
  ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread());
  KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
  for ( i = (__int64 *)qword_1403CC580; i != &qword_1403CC580; i = (__int64 *)*i )
  {
    if ( i[1020] == ThreadServerSilo && *((_DWORD *)i - 34) == a1 )
    {
      if ( (*((_DWORD *)i - 35) & 2) == 0 )
        v3 = *(i - 16) != (_QWORD)(i - 16);
      break;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v3;
}
