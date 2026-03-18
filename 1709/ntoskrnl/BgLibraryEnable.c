/*
 * XREFs of BgLibraryEnable @ 0x140290490
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14013EC50 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkAcquireDisplayOwnership @ 0x1401F3F10 (BgkAcquireDisplayOwnership.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14013B974 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14013B9B8 (BgpFwAcquireLock.c)
 *     BgpFwLibraryEnable @ 0x14013E9AC (BgpFwLibraryEnable.c)
 */

__int64 __fastcall BgLibraryEnable(__int64 a1, char a2)
{
  unsigned int v4; // ebx

  if ( a2 )
    dword_14035A1B0 |= 0xC00u;
  if ( !a1 )
    return (dword_14035A1B0 & 2) == 0 ? 0xC00000EF : 0;
  if ( !a2 && KeGetCurrentIrql() )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_14035A1B0 & 1) != 0 )
    v4 = BgpFwLibraryEnable(a1);
  else
    v4 = -1073741637;
  BgpFwReleaseLock();
  return v4;
}
