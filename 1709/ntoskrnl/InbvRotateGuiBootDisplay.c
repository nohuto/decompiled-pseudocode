/*
 * XREFs of InbvRotateGuiBootDisplay @ 0x1401F3B50
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     InbvReleaseResources @ 0x140156F4C (InbvReleaseResources.c)
 *     InbvAcquireLock @ 0x1401F37EC (InbvAcquireLock.c)
 *     InbvCheckDisplayOwnership @ 0x1401F3850 (InbvCheckDisplayOwnership.c)
 *     InbvGetDisplayState @ 0x1401F38C4 (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x1401F3968 (InbvReleaseLock.c)
 *     RotBarUpdate @ 0x1401F3C90 (RotBarUpdate.c)
 *     PsTerminateSystemThread @ 0x140599300 (PsTerminateSystemThread.c)
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
