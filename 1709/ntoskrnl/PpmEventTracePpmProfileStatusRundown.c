/*
 * XREFs of PpmEventTracePpmProfileStatusRundown @ 0x14070933C
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1405F2F90 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void PpmEventTracePpmProfileStatusRundown()
{
  REGHANDLE v0; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  if ( PpmEtwRegistered )
  {
    v0 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_PROFILE_STATUS_RUNDOWN) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&PpmProfileStatus;
      UserData.Size = 4;
      EtwWrite(v0, &PPM_ETW_PROCESSOR_PROFILE_STATUS_RUNDOWN, 0LL, 1u, &UserData);
    }
  }
}
