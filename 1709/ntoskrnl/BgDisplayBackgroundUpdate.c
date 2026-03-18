/*
 * XREFs of BgDisplayBackgroundUpdate @ 0x1407CE2B8
 * Callers:
 *     BgkDestroy @ 0x1407D0D0C (BgkDestroy.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14013B974 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14013B9B8 (BgpFwAcquireLock.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1407CE288 (AnFwDisplayBackgroundUpdate.c)
 */

__int64 __fastcall BgDisplayBackgroundUpdate(char a1)
{
  unsigned int v2; // ebx

  BgpFwAcquireLock();
  if ( (dword_14035A1B0 & 1) != 0 )
    v2 = AnFwDisplayBackgroundUpdate(a1);
  else
    v2 = -1073741823;
  BgpFwReleaseLock();
  return v2;
}
