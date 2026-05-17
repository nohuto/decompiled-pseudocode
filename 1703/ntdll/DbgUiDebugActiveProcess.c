/*
 * XREFs of DbgUiDebugActiveProcess @ 0x1800D5090
 * Callers:
 *     <none>
 * Callees:
 *     ZwDebugActiveProcess @ 0x1800A6B90 (ZwDebugActiveProcess.c)
 *     ZwRemoveProcessDebug @ 0x1800A7F70 (ZwRemoveProcessDebug.c)
 *     DbgUiIssueRemoteBreakin @ 0x1800D5120 (DbgUiIssueRemoteBreakin.c)
 */

__int64 __fastcall DbgUiDebugActiveProcess(__int64 a1)
{
  int active; // ebx

  active = ZwDebugActiveProcess();
  if ( active >= 0 )
  {
    active = DbgUiIssueRemoteBreakin(a1);
    if ( active < 0 )
      ZwRemoveProcessDebug();
  }
  return (unsigned int)active;
}
