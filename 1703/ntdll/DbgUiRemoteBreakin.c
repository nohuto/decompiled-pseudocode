/*
 * XREFs of DbgUiRemoteBreakin @ 0x1800D5190
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x180050E20 (RtlExitUserThread.c)
 *     DbgBreakPoint @ 0x1800A8CF0 (DbgBreakPoint.c)
 */

void __cdecl __noreturn DbgUiRemoteBreakin(PVOID Context)
{
  if ( (NtCurrentPeb()->BeingDebugged || (MEMORY[0x7FFE02D4] & 2) != 0) && (NtCurrentTeb()->SameTebFlags & 0x20) == 0 )
  {
    if ( dword_18015B264 )
    {
      if ( qword_18016B248 )
        qword_18016B248(Context);
    }
    DbgBreakPoint();
  }
  RtlExitUserThread(0);
}
