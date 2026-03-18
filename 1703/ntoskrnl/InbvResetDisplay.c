/*
 * XREFs of InbvResetDisplay @ 0x1401EE2E0
 * Callers:
 *     PopShutdownHandler @ 0x14041A5E0 (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

char InbvResetDisplay()
{
  if ( qword_14036E468 && *(_QWORD *)(qword_14036E468 + 24) )
    return guard_dispatch_icall();
  else
    return 0;
}
