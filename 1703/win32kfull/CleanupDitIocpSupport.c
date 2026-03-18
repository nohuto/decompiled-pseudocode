/*
 * XREFs of CleanupDitIocpSupport @ 0x1C019FF28
 * Callers:
 *     InitDitIocpSupport @ 0x1C01A02EC (InitDitIocpSupport.c)
 *     UserDeactivateDwmInputProcessing @ 0x1C01A1080 (UserDeactivateDwmInputProcessing.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CleanupDitIocpSupport(int a1)
{
  NTSTATUS result; // eax

  gbDITResetEventAlreadySignaled = 0;
  if ( ghDITResetEventWcp )
  {
    result = ZwClose(ghDITResetEventWcp);
    ghDITResetEventWcp = 0LL;
  }
  gbDITMmcssEventAlreadySignaled = 0;
  if ( ghDITMmcssEventWcp )
  {
    result = ZwClose(ghDITMmcssEventWcp);
    ghDITMmcssEventWcp = 0LL;
  }
  if ( !a1 )
  {
    if ( ghDITEventWcp )
    {
      result = ZwClose(ghDITEventWcp);
      ghDITEventWcp = 0LL;
    }
    if ( ghDITRITEventWcp )
    {
      result = ZwClose(ghDITRITEventWcp);
      ghDITRITEventWcp = 0LL;
    }
  }
  return result;
}
