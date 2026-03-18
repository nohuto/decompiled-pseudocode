/*
 * XREFs of InbvGetDisplayState @ 0x1401EE214
 * Callers:
 *     InbvRotateGuiBootDisplay @ 0x1401EE440 (InbvRotateGuiBootDisplay.c)
 *     RotBarUpdate @ 0x1401EE580 (RotBarUpdate.c)
 *     StartFirstUserProcess @ 0x14081013C (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 InbvGetDisplayState()
{
  if ( qword_14036E468 && *(_QWORD *)(qword_14036E468 + 144) )
    return guard_dispatch_icall();
  else
    return 2LL;
}
