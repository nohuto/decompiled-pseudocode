/*
 * XREFs of RtlSetProcessIsCritical @ 0x18008C700
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationProcess @ 0x1800A03E0 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x1800A0440 (NtSetInformationProcess.c)
 */

NTSTATUS __cdecl RtlSetProcessIsCritical(BOOLEAN NewValue, PBOOLEAN OldValue, BOOLEAN CheckFlag)
{
  int ProcessInformation; // [rsp+50h] [rbp+18h] BYREF

  if ( OldValue )
    *OldValue = 0;
  if ( CheckFlag && (NtCurrentTeb()->ProcessEnvironmentBlock->NtGlobalFlag & 0x100000) == 0 )
    return -1073741823;
  if ( OldValue )
  {
    NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u, 0LL);
    *OldValue = ProcessInformation;
  }
  ProcessInformation = NewValue;
  return NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
}
