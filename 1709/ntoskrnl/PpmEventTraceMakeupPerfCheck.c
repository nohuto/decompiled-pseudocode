/*
 * XREFs of PpmEventTraceMakeupPerfCheck @ 0x14024B8B4
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x140090AF0 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 */

void PpmEventTraceMakeupPerfCheck()
{
  REGHANDLE v0; // rbx

  if ( PpmEtwRegistered )
  {
    v0 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_CHECK_MAKEUP) )
      EtwWriteEx(v0, &PPM_ETW_PERF_CHECK_MAKEUP, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
}
