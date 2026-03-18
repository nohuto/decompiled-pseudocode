/*
 * XREFs of BgConsoleDestroyInterface @ 0x14083D050
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140164C40 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x14083DC74 (BgkDestroy.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x1408E4F10 (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140164E40 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140164F8C (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x1401659F0 (BgpFwFreeMemory.c)
 *     BgpDisplayCharacterDestroyContext @ 0x14083D0AC (BgpDisplayCharacterDestroyContext.c)
 */

void __fastcall BgConsoleDestroyInterface(__int64 (__fastcall **a1)())
{
  __int64 v2; // rcx

  BgpFwAcquireLock();
  if ( a1 == BgpConsoleInterface )
  {
    v2 = qword_1403D1800;
    if ( qword_1403D1800 )
    {
      if ( *(_QWORD *)(qword_1403D1800 + 40) )
      {
        BgpDisplayCharacterDestroyContext(*(_QWORD *)(qword_1403D1800 + 40));
        v2 = qword_1403D1800;
      }
      BgpFwFreeMemory(v2);
      qword_1403D1800 = 0LL;
    }
  }
  BgpFwReleaseLock();
}
