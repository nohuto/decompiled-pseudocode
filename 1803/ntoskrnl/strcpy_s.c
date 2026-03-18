/*
 * XREFs of strcpy_s @ 0x14018E6D0
 * Callers:
 *     ExpSystemErrorHandler2 @ 0x140487900 (ExpSystemErrorHandler2.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14062DC9C (CmpAddProcessorConfigurationEntry.c)
 *     RtlIncrementCorrelationVector @ 0x140787600 (RtlIncrementCorrelationVector.c)
 *     HdlspGetLine @ 0x1408394FC (HdlspGetLine.c)
 *     HdlspSetBlueScreenInformation @ 0x14083A0A4 (HdlspSetBlueScreenInformation.c)
 *     PspInitPhase0 @ 0x1408A0D54 (PspInitPhase0.c)
 *     PspInitPhase1 @ 0x1408BC630 (PspInitPhase1.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14016CD90 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl strcpy_s(char *a1, rsize_t SizeInBytes, const char *Src)
{
  errno_t v3; // ebx
  signed __int64 v4; // rax
  char v5; // r9
  rsize_t v6; // r10
  rsize_t v7; // rax

  if ( a1 && SizeInBytes )
  {
    if ( !Src )
    {
      v3 = 22;
LABEL_12:
      *a1 = 0;
      xHalTimerWatchdogStop();
      return v3;
    }
    v4 = a1 - Src;
    do
    {
      v5 = *Src;
      v6 = SizeInBytes;
      Src[v4] = *Src;
      ++Src;
      if ( !v5 )
        break;
      --SizeInBytes;
    }
    while ( SizeInBytes );
    v7 = v6 - 1;
    if ( !v5 )
      v7 = v6;
    if ( !v7 )
    {
      v3 = 34;
      goto LABEL_12;
    }
    return 0;
  }
  else
  {
    xHalTimerWatchdogStop();
    return 22;
  }
}
