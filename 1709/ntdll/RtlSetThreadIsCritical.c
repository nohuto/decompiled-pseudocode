/*
 * XREFs of RtlSetThreadIsCritical @ 0x18008BAE0
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationThread @ 0x1800A0260 (NtSetInformationThread.c)
 *     ZwQueryInformationThread @ 0x1800A0560 (ZwQueryInformationThread.c)
 */

NTSTATUS __cdecl RtlSetThreadIsCritical(BOOLEAN NewValue, PBOOLEAN OldValue, BOOLEAN CheckFlag)
{
  int ThreadInformation; // [rsp+50h] [rbp+18h] BYREF

  if ( OldValue )
    *OldValue = 0;
  if ( CheckFlag && (NtCurrentTeb()->ProcessEnvironmentBlock->NtGlobalFlag & 0x100000) == 0 )
    return -1073741823;
  if ( OldValue )
  {
    ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBreakOnTermination, &ThreadInformation, 4u, 0LL);
    *OldValue = ThreadInformation;
  }
  ThreadInformation = NewValue;
  return NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBreakOnTermination, &ThreadInformation, 4u);
}
