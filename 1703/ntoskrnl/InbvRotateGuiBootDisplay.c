/*
 * XREFs of InbvRotateGuiBootDisplay @ 0x1401EE440
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     InbvReleaseResources @ 0x140158EB0 (InbvReleaseResources.c)
 *     InbvAcquireLock @ 0x1401EE13C (InbvAcquireLock.c)
 *     InbvCheckDisplayOwnership @ 0x1401EE1A0 (InbvCheckDisplayOwnership.c)
 *     InbvGetDisplayState @ 0x1401EE214 (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x1401EE2A8 (InbvReleaseLock.c)
 *     RotBarUpdate @ 0x1401EE580 (RotBarUpdate.c)
 */

void __fastcall InbvRotateGuiBootDisplay(PVOID StartContext)
{
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  Interval.QuadPart = -800000LL;
  do
  {
    KeDelayExecutionThread(0, 0, &Interval);
    InbvAcquireLock();
    if ( !(unsigned int)InbvGetDisplayState() && RotBarSelection == 1 )
      RotBarUpdate();
    InbvReleaseLock();
  }
  while ( InbvCheckDisplayOwnership() );
  InbvReleaseResources();
  PsTerminateSystemThread(0);
}
