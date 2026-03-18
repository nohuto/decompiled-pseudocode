/*
 * XREFs of InbvCheckDisplayOwnership @ 0x1401EE1A0
 * Callers:
 *     InbvRotateGuiBootDisplay @ 0x1401EE440 (InbvRotateGuiBootDisplay.c)
 *     PopShutdownHandler @ 0x14041A5E0 (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

char InbvCheckDisplayOwnership()
{
  if ( qword_14036E468 && *(_QWORD *)(qword_14036E468 + 64) )
    return guard_dispatch_icall();
  else
    return 0;
}
