/*
 * XREFs of FinalizeBootLogo @ 0x14023102C
 * Callers:
 *     StartFirstUserProcess @ 0x1408C254C (StartFirstUserProcess.c)
 * Callees:
 *     InbvAcquireLock @ 0x140230D1C (InbvAcquireLock.c)
 *     InbvGetDisplayState @ 0x140230DF4 (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x140230E98 (InbvReleaseLock.c)
 */

__int64 (*FinalizeBootLogo())(void)
{
  InbvAcquireLock();
  if ( !(unsigned int)InbvGetDisplayState() )
    VidSolidColorFill(0LL, 0LL, 639LL, 479LL, 0);
  PltRotBarStatus = 3;
  return InbvReleaseLock();
}
