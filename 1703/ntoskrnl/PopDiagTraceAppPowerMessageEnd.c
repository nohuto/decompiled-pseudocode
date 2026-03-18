/*
 * XREFs of PopDiagTraceAppPowerMessageEnd @ 0x1405798A8
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceAppPowerMessageEnd(int *a1)
{
  REGHANDLE v2; // rbx
  int v3; // eax
  int v4; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF

  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SUSPENDAPP_END) )
    {
      v3 = *a1;
      UserData.Reserved = 0;
      v4 = v3;
      UserData.Size = 4;
      UserData.Ptr = (ULONGLONG)&v4;
      EtwWrite(v2, &POP_ETW_EVENT_SUSPENDAPP_END, 0LL, 1u, &UserData);
    }
  }
}
