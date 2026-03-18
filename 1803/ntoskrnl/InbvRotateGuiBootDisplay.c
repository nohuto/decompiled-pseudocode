/*
 * XREFs of InbvRotateGuiBootDisplay @ 0x140231080
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     InbvReleaseResources @ 0x140183170 (InbvReleaseResources.c)
 *     InbvAcquireLock @ 0x140230D1C (InbvAcquireLock.c)
 *     InbvCheckDisplayOwnership @ 0x140230D80 (InbvCheckDisplayOwnership.c)
 *     InbvGetDisplayState @ 0x140230DF4 (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x140230E98 (InbvReleaseLock.c)
 *     RotBarUpdate @ 0x1402311C0 (RotBarUpdate.c)
 *     PsTerminateSystemThread @ 0x140582610 (PsTerminateSystemThread.c)
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
