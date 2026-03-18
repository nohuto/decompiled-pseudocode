/*
 * XREFs of PnpIsSafeToExamineUserModeTeb @ 0x1400750E4
 * Callers:
 *     PnpRequestDeviceAction @ 0x140145AE4 (PnpRequestDeviceAction.c)
 *     IopInitActivityIdIrp @ 0x140232848 (IopInitActivityIdIrp.c)
 *     PnpInsertEventInQueue @ 0x14051E7CC (PnpInsertEventInQueue.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x1400F0AD0 (KeAreAllApcsDisabled.c)
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
