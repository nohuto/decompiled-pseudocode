/*
 * XREFs of BgDisplayFade @ 0x1407D09D0
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14013EC50 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDisplayStringEx @ 0x1401F4064 (BgkDisplayStringEx.c)
 *     PoBroadcastSystemState @ 0x140436BFC (PoBroadcastSystemState.c)
 *     BgkDisplayCharacter @ 0x1407D2BE0 (BgkDisplayCharacter.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x1400E2700 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x14013B974 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14013B9B8 (BgpFwAcquireLock.c)
 *     AnFwDisplayFade @ 0x1407CEDC0 (AnFwDisplayFade.c)
 */

__int64 BgDisplayFade()
{
  __int64 v0; // rcx
  unsigned int v1; // ebx

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_14035A1B0 & 1) != 0 )
    v1 = AnFwDisplayFade(v0);
  else
    v1 = -1073741823;
  BgpFwReleaseLock();
  return v1;
}
