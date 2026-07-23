/*
 * XREFs of EtwRegisterSecurityProvider @ 0x18008F730
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     ZwTraceControl @ 0x1800A8990 (ZwTraceControl.c)
 */

ULONG EtwRegisterSecurityProvider(void)
{
  NTSTATUS v0; // eax
  ULONG v1; // ebx
  LONG v3; // eax
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  v0 = ZwTraceControl(EtwRegisterSecurityProv, 0LL, 0, 0LL, 0, &ReturnLength);
  if ( !v0 )
    return 0;
  v3 = RtlNtStatusToDosError(v0);
  v1 = v3;
  if ( v3 )
    RtlSetLastWin32Error(v3);
  return v1;
}
