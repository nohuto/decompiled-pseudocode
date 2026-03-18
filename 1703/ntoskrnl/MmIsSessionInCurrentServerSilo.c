/*
 * XREFs of MmIsSessionInCurrentServerSilo @ 0x140217DF0
 * Callers:
 *     PopGetSettingNotificationName @ 0x1404C4DF4 (PopGetSettingNotificationName.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsGetCurrentServerSilo @ 0x140094960 (PsGetCurrentServerSilo.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 */

char __fastcall MmIsSessionInCurrentServerSilo(int a1)
{
  int SessionId; // eax
  bool v3; // bl
  __int64 CurrentServerSilo; // rsi
  __int64 *i; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  v3 = 0;
  if ( SessionId == -1 )
    SessionId = 0;
  if ( SessionId == a1 )
    return 1;
  CurrentServerSilo = PsGetCurrentServerSilo();
  KeAcquireInStackQueuedSpinLock(&qword_14036CF80, &LockHandle);
  for ( i = (__int64 *)qword_14036D040; i != &qword_14036D040; i = (__int64 *)*i )
  {
    if ( i[1004] == CurrentServerSilo && *((_DWORD *)i - 34) == a1 )
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
