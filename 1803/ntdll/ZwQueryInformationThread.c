/*
 * XREFs of ZwQueryInformationThread @ 0x18009AF60
 * Callers:
 *     sub_1800064C0 @ 0x1800064C0 (sub_1800064C0.c)
 *     sub_180056DF4 @ 0x180056DF4 (sub_180056DF4.c)
 *     RtlGetThreadWorkOnBehalfTicket @ 0x18006E6D0 (RtlGetThreadWorkOnBehalfTicket.c)
 *     RtlExitUserThread @ 0x1800736C0 (RtlExitUserThread.c)
 *     sub_180073764 @ 0x180073764 (sub_180073764.c)
 *     RtlQueryProcessDebugInformation @ 0x180077500 (RtlQueryProcessDebugInformation.c)
 *     sub_18007D27C @ 0x18007D27C (sub_18007D27C.c)
 *     RtlWow64SuspendThread @ 0x180085460 (RtlWow64SuspendThread.c)
 *     sub_180085718 @ 0x180085718 (sub_180085718.c)
 *     RtlWow64GetThreadSelectorEntry @ 0x1800860E0 (RtlWow64GetThreadSelectorEntry.c)
 *     RtlSetThreadIsCritical @ 0x180087630 (RtlSetThreadIsCritical.c)
 *     RtlQueryThreadProfiling @ 0x1800C8CC0 (RtlQueryThreadProfiling.c)
 *     sub_1800C9228 @ 0x1800C9228 (sub_1800C9228.c)
 *     sub_1800CCA4C @ 0x1800CCA4C (sub_1800CCA4C.c)
 *     RtlSetProcessDebugInformation @ 0x1800D2E30 (RtlSetProcessDebugInformation.c)
 *     RtlWow64GetThreadContext @ 0x1800D6580 (RtlWow64GetThreadContext.c)
 *     sub_1800D7E14 @ 0x1800D7E14 (sub_1800D7E14.c)
 *     sub_180109F00 @ 0x180109F00 (sub_180109F00.c)
 *     sub_18010B1C0 @ 0x18010B1C0 (sub_18010B1C0.c)
 *     sub_18010BAC8 @ 0x18010BAC8 (sub_18010BAC8.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 37;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
