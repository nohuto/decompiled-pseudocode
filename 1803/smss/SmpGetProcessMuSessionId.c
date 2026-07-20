/*
 * XREFs of SmpGetProcessMuSessionId @ 0x14000470C
 * Callers:
 *     SmpHandleConnectionRequest @ 0x140004130 (SmpHandleConnectionRequest.c)
 *     SmpGetMuSessionIdFromClientContext @ 0x140004B98 (SmpGetMuSessionIdFromClientContext.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SmpGetProcessMuSessionId(void *a1, _DWORD *a2)
{
  NTSTATUS result; // eax
  int v4; // ecx
  int ProcessInformation; // [rsp+50h] [rbp+18h] BYREF

  result = NtQueryInformationProcess(a1, ProcessSessionInformation, &ProcessInformation, 4u, 0LL);
  v4 = ProcessInformation;
  if ( result < 0 )
    v4 = 0;
  *a2 = v4;
  return result;
}
