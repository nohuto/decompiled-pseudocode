/*
 * XREFs of DbgUiDebugActiveProcess @ 0x1800D5090
 * Callers:
 *     <none>
 * Callees:
 *     ZwDebugActiveProcess @ 0x1800A6B90 (ZwDebugActiveProcess.c)
 *     ZwRemoveProcessDebug @ 0x1800A7F70 (ZwRemoveProcessDebug.c)
 *     DbgUiIssueRemoteBreakin @ 0x1800D5120 (DbgUiIssueRemoteBreakin.c)
 */

NTSTATUS __cdecl DbgUiDebugActiveProcess(HANDLE Process)
{
  int active; // ebx

  active = ZwDebugActiveProcess(Process, NtCurrentTeb()->DbgSsReserved[1]);
  if ( active >= 0 )
  {
    active = DbgUiIssueRemoteBreakin(Process);
    if ( active < 0 )
      ZwRemoveProcessDebug(Process, NtCurrentTeb()->DbgSsReserved[1]);
  }
  return active;
}
