/*
 * XREFs of PnpIsSafeToExamineUserModeTeb @ 0x140080268
 * Callers:
 *     PnpRequestDeviceAction @ 0x14003CFA4 (PnpRequestDeviceAction.c)
 *     IopInitActivityIdIrp @ 0x1401EFC10 (IopInitActivityIdIrp.c)
 *     PnpInsertEventInQueue @ 0x1404DA210 (PnpInsertEventInQueue.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x1400E2F30 (KeAreAllApcsDisabled.c)
 *     KeIsAttachedProcess @ 0x1400FCB20 (KeIsAttachedProcess.c)
 */

char PnpIsSafeToExamineUserModeTeb()
{
  struct _KTHREAD *CurrentThread; // rdi
  char v1; // bl

  if ( (unsigned __int8)KeIsAttachedProcess() )
    return 0;
  CurrentThread = KeGetCurrentThread();
  v1 = 1;
  if ( CurrentThread->PreviousMode != 1 || KeAreAllApcsDisabled() || BYTE6(CurrentThread[1].Queue) > 1u )
    return 0;
  return v1;
}
