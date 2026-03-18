/*
 * XREFs of BgConsoleDestroyInterface @ 0x140758AC0
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140140280 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x140758A14 (BgkDestroy.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140838C80 (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x140140710 (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x1401417E0 (BgpFwFreeMemory.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140758B1C (BgpDisplayCharacterDestroyContext.c)
 */

void __fastcall BgConsoleDestroyInterface(__int64 (__fastcall **a1)())
{
  __int64 v2; // rcx

  BgpFwAcquireLock();
  if ( a1 == BgpConsoleInterface )
  {
    v2 = qword_14036F150;
    if ( qword_14036F150 )
    {
      if ( *(_QWORD *)(qword_14036F150 + 40) )
      {
        BgpDisplayCharacterDestroyContext(*(_QWORD *)(qword_14036F150 + 40));
        v2 = qword_14036F150;
      }
      BgpFwFreeMemory(v2);
      qword_14036F150 = 0LL;
    }
  }
  BgpFwReleaseLock();
}
