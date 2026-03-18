/*
 * XREFs of BgDisplayBackgroundUpdate @ 0x14083D8D4
 * Callers:
 *     BgkDestroy @ 0x14083DC74 (BgkDestroy.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140164E40 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140164F8C (BgpFwAcquireLock.c)
 *     AnFwDisplayBackgroundUpdate @ 0x14083D910 (AnFwDisplayBackgroundUpdate.c)
 */

__int64 __fastcall BgDisplayBackgroundUpdate(char a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx

  BgpFwAcquireLock();
  if ( (dword_14039D7F0 & 1) != 0 )
  {
    LOBYTE(v2) = a1;
    v3 = AnFwDisplayBackgroundUpdate(v2);
  }
  else
  {
    v3 = -1073741823;
  }
  BgpFwReleaseLock();
  return v3;
}
