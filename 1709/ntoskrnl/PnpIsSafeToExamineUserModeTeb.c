/*
 * XREFs of PnpIsSafeToExamineUserModeTeb @ 0x1400FB2D4
 * Callers:
 *     PnpRequestDeviceAction @ 0x1400FF444 (PnpRequestDeviceAction.c)
 *     IopInitActivityIdIrp @ 0x1401F5318 (IopInitActivityIdIrp.c)
 *     PnpInsertEventInQueue @ 0x14054DDBC (PnpInsertEventInQueue.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x1400890C0 (KeAreAllApcsDisabled.c)
 */

char PnpIsSafeToExamineUserModeTeb()
{
  char v0; // bl
  struct _KTHREAD *CurrentThread; // rdi

  v0 = 1;
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode != 1 || KeAreAllApcsDisabled() || BYTE6(CurrentThread[1].Queue) > 1u )
    return 0;
  return v0;
}
