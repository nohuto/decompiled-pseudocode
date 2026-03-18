/*
 * XREFs of BgConsoleGetInterface @ 0x140755EA8
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140140280 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x14083795C (BgkInitialize.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140838C80 (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1401406CC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140140710 (BgpFwAcquireLock.c)
 */

__int64 (__fastcall **BgConsoleGetInterface())()
{
  __int64 (__fastcall **v0)(); // rbx
  __int64 (__fastcall **v1)(); // rcx

  v0 = 0LL;
  BgpFwAcquireLock();
  if ( (dword_140341A30 & 1) != 0 )
  {
    v1 = BgpConsoleInterface;
    if ( !qword_140341AC8 )
      v1 = 0LL;
    v0 = v1;
  }
  BgpFwReleaseLock();
  return v0;
}
