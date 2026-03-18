/*
 * XREFs of MmIsSessionInCurrentServerSilo @ 0x140221E00
 * Callers:
 *     PopGetSettingNotificationName @ 0x1404EAE58 (PopGetSettingNotificationName.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     PsGetCurrentServerSilo @ 0x140089070 (PsGetCurrentServerSilo.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 */

char __fastcall MmIsSessionInCurrentServerSilo(int a1)
{
  int SessionId; // eax
  bool v3; // bl
  __int64 CurrentServerSilo; // rsi
  __int64 *i; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  v3 = 0;
  if ( SessionId == -1 )
    SessionId = 0;
  if ( SessionId == a1 )
    return 1;
  CurrentServerSilo = PsGetCurrentServerSilo();
  KeAcquireInStackQueuedSpinLock(&qword_140389240, &LockHandle);
  for ( i = (__int64 *)qword_140389300; i != &qword_140389300; i = (__int64 *)*i )
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
