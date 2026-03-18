/*
 * XREFs of BgDisplayFade @ 0x14083B49C
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140164C40 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDisplayStringEx @ 0x140231594 (BgkDisplayStringEx.c)
 *     PoBroadcastSystemState @ 0x140472204 (PoBroadcastSystemState.c)
 *     BgkDisplayCharacter @ 0x14083F650 (BgkDisplayCharacter.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x14002E450 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x140164E40 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140164F8C (BgpFwAcquireLock.c)
 *     AnFwDisplayFade @ 0x14083B548 (AnFwDisplayFade.c)
 */

__int64 BgDisplayFade()
{
  unsigned int v0; // ebx

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_14039D7F0 & 1) != 0 )
    v0 = AnFwDisplayFade();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
