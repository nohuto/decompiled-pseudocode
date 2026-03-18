/*
 * XREFs of PopDiagTraceKernelQueriesAllowed @ 0x14057A0A8
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceKernelQueriesAllowed(unsigned __int8 a1)
{
  REGHANDLE v2; // rbx
  int v3; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF

  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_KERNEL_QUERY_ALLOWED) )
    {
      UserData.Reserved = 0;
      v3 = a1;
      UserData.Size = 4;
      UserData.Ptr = (ULONGLONG)&v3;
      EtwWrite(v2, &POP_ETW_EVENT_KERNEL_QUERY_ALLOWED, 0LL, 1u, &UserData);
    }
  }
}
