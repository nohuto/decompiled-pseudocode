/*
 * XREFs of FinalizeBootLogo @ 0x1401F3AFC
 * Callers:
 *     StartFirstUserProcess @ 0x14085168C (StartFirstUserProcess.c)
 * Callees:
 *     InbvAcquireLock @ 0x1401F37EC (InbvAcquireLock.c)
 *     InbvGetDisplayState @ 0x1401F38C4 (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x1401F3968 (InbvReleaseLock.c)
 */

__int64 (*FinalizeBootLogo())(void)
{
  InbvAcquireLock();
  if ( !(unsigned int)InbvGetDisplayState() )
    VidSolidColorFill(0LL, 0LL, 639LL, 479LL, 0);
  PltRotBarStatus = 3;
  return InbvReleaseLock();
}
