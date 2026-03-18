/*
 * XREFs of BgConsoleDestroyInterface @ 0x1407D0938
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14013EC50 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x1407D0D0C (BgkDestroy.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x1408700C0 (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14013B974 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14013B9B8 (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x14013CD34 (BgpFwFreeMemory.c)
 *     BgpDisplayCharacterDestroyContext @ 0x1407D0AE4 (BgpDisplayCharacterDestroyContext.c)
 */

void __fastcall BgConsoleDestroyInterface(__int64 (__fastcall **a1)())
{
  __int64 v2; // rcx

  BgpFwAcquireLock();
  if ( a1 == BgpConsoleInterface )
  {
    v2 = qword_14038D868;
    if ( qword_14038D868 )
    {
      if ( *(_QWORD *)(qword_14038D868 + 40) )
      {
        BgpDisplayCharacterDestroyContext(*(_QWORD *)(qword_14038D868 + 40));
        v2 = qword_14038D868;
      }
      BgpFwFreeMemory(v2);
      qword_14038D868 = 0LL;
    }
  }
  BgpFwReleaseLock();
}
