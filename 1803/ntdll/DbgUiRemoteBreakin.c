/*
 * XREFs of DbgUiRemoteBreakin @ 0x1800C95C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x1800736C0 (RtlExitUserThread.c)
 *     DbgBreakPoint @ 0x18009E4C0 (DbgBreakPoint.c)
 */

void __noreturn DbgUiRemoteBreakin()
{
  if ( (NtCurrentPeb()->BeingDebugged || (MEMORY[0x7FFE02D4] & 2) != 0) && (NtCurrentTeb()->SameTebFlags & 0x20) == 0 )
  {
    if ( dword_18015C290 )
    {
      if ( qword_18016F258 )
        qword_18016F258();
    }
    DbgBreakPoint();
  }
  RtlExitUserThread(0);
}
