/*
 * XREFs of SepAdtInitializeAuditingOptions @ 0x1408B2164
 * Callers:
 *     SeRmInitPhase1 @ 0x1408B209C (SeRmInitPhase1.c)
 * Callees:
 *     NtSetEvent @ 0x140552690 (NtSetEvent.c)
 *     NtClose @ 0x1405A2660 (NtClose.c)
 *     SepAdtInitializeBounds @ 0x140631444 (SepAdtInitializeBounds.c)
 *     SepAdtInitializeCrashOnFail @ 0x1406314C8 (SepAdtInitializeCrashOnFail.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x140631524 (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x140631664 (SepAdtOpenRegAndSetupNotification.c)
 *     SepAdtOpenEtwReadyEvent @ 0x140632198 (SepAdtOpenEtwReadyEvent.c)
 *     AdtpInitializeAuditingCommon @ 0x140632214 (AdtpInitializeAuditingCommon.c)
 */

int SepAdtInitializeAuditingOptions()
{
  int result; // eax
  NTSTATUS v1; // ebx
  HANDLE EventHandle; // [rsp+30h] [rbp+8h] BYREF

  EventHandle = 0LL;
  result = AdtpInitializeAuditingCommon();
  if ( result >= 0 )
  {
    result = SepAdtOpenEtwReadyEvent(&EventHandle);
    if ( result >= 0 )
    {
      v1 = NtSetEvent(EventHandle, 0LL);
      NtClose(EventHandle);
      if ( v1 >= 0 )
      {
        result = SepAdtOpenRegAndSetupNotification();
        v1 = result;
        if ( result < 0 )
          return result;
        SepAdtInitializeCrashOnFail();
        SepAdtInitializePrivilegeAuditing();
        SepAdtInitializeBounds();
      }
      return v1;
    }
  }
  return result;
}
