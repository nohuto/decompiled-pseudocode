/*
 * XREFs of strcpy_s @ 0x1401647F0
 * Callers:
 *     ExpSystemErrorHandler2 @ 0x14043AD40 (ExpSystemErrorHandler2.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1405C0234 (CmpAddProcessorConfigurationEntry.c)
 *     RtlIncrementCorrelationVector @ 0x140723D30 (RtlIncrementCorrelationVector.c)
 *     HdlspGetLine @ 0x1407CC508 (HdlspGetLine.c)
 *     HdlspSetBlueScreenInformation @ 0x1407CD0A8 (HdlspSetBlueScreenInformation.c)
 *     PspInitPhase0 @ 0x1408413C0 (PspInitPhase0.c)
 *     PspInitPhase1 @ 0x14084A9B0 (PspInitPhase1.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140131CB0 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl strcpy_s(char *a1, rsize_t SizeInBytes, const char *Src)
{
  errno_t v4; // ebx
  signed __int64 v5; // rcx
  char v6; // al

  if ( a1 && SizeInBytes )
  {
    if ( !Src )
    {
      v4 = 22;
LABEL_10:
      *a1 = 0;
      xHalTimerWatchdogStop();
      return v4;
    }
    v5 = a1 - Src;
    do
    {
      v6 = *Src;
      Src[v5] = *Src;
      ++Src;
      if ( !v6 )
        break;
      --SizeInBytes;
    }
    while ( SizeInBytes );
    if ( !SizeInBytes )
    {
      v4 = 34;
      goto LABEL_10;
    }
    return 0;
  }
  else
  {
    xHalTimerWatchdogStop();
    return 22;
  }
}
