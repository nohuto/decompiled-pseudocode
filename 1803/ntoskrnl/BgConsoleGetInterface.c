/*
 * XREFs of BgConsoleGetInterface @ 0x14083B4E4
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140164C40 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x1408E447C (BgkInitialize.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x1408E4F10 (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140164E40 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140164F8C (BgpFwAcquireLock.c)
 */

__int64 (__fastcall **BgConsoleGetInterface())()
{
  __int64 (__fastcall **v0)(); // rbx
  __int64 (__fastcall **v1)(); // rcx

  v0 = 0LL;
  BgpFwAcquireLock();
  if ( (dword_14039D7F0 & 1) != 0 )
  {
    v1 = BgpConsoleInterface;
    if ( !qword_14039D898 )
      v1 = 0LL;
    v0 = v1;
  }
  BgpFwReleaseLock();
  return v0;
}
