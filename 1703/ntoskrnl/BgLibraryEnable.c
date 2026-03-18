/*
 * XREFs of BgLibraryEnable @ 0x14013DDEC
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140140280 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkAcquireDisplayOwnership @ 0x1401EE810 (BgkAcquireDisplayOwnership.c)
 * Callees:
 *     BgpFwLibraryEnable @ 0x140140494 (BgpFwLibraryEnable.c)
 *     BgpFwReleaseLock @ 0x1401406CC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140140710 (BgpFwAcquireLock.c)
 */

__int64 __fastcall BgLibraryEnable(__int64 a1, char a2)
{
  unsigned int v3; // ebx

  if ( a2 )
    dword_140341A30 |= 0xC00u;
  if ( !a1 )
    return (dword_140341A30 & 2) == 0 ? 0xC00000EF : 0;
  if ( !a2 && KeGetCurrentIrql() )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140341A30 & 1) != 0 )
    v3 = BgpFwLibraryEnable(a1);
  else
    v3 = -1073741637;
  BgpFwReleaseLock();
  return v3;
}
