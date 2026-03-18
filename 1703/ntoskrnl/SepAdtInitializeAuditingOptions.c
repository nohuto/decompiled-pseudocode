/*
 * XREFs of SepAdtInitializeAuditingOptions @ 0x140808DF4
 * Callers:
 *     SeRmInitPhase1 @ 0x140808D3C (SeRmInitPhase1.c)
 * Callees:
 *     NtSetEvent @ 0x140520FB0 (NtSetEvent.c)
 *     NtClose @ 0x14052EB10 (NtClose.c)
 *     SepAdtInitializeBounds @ 0x1405A6D54 (SepAdtInitializeBounds.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x1405A6DD8 (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtInitializeCrashOnFail @ 0x1405A6E34 (SepAdtInitializeCrashOnFail.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x1405A6E90 (SepAdtOpenRegAndSetupNotification.c)
 *     SepAdtOpenEtwReadyEvent @ 0x1405A6F18 (SepAdtOpenEtwReadyEvent.c)
 *     AdtpInitializeAuditingCommon @ 0x1405A6F94 (AdtpInitializeAuditingCommon.c)
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
