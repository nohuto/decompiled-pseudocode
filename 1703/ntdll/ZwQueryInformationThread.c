/*
 * XREFs of ZwQueryInformationThread @ 0x1800A57A0
 * Callers:
 *     sub_180001C74 @ 0x180001C74 (sub_180001C74.c)
 *     sub_18001A9B4 @ 0x18001A9B4 (sub_18001A9B4.c)
 *     RtlExitUserThread @ 0x180050E20 (RtlExitUserThread.c)
 *     sub_180050EC4 @ 0x180050EC4 (sub_180050EC4.c)
 *     sub_1800531B0 @ 0x1800531B0 (sub_1800531B0.c)
 *     RtlQueryProcessDebugInformation @ 0x180067770 (RtlQueryProcessDebugInformation.c)
 *     RtlGetThreadWorkOnBehalfTicket @ 0x180075320 (RtlGetThreadWorkOnBehalfTicket.c)
 *     sub_18008275C @ 0x18008275C (sub_18008275C.c)
 *     RtlSetThreadIsCritical @ 0x18008E0F0 (RtlSetThreadIsCritical.c)
 *     RtlQueryThreadProfiling @ 0x1800D4620 (RtlQueryThreadProfiling.c)
 *     sub_1800D4DF8 @ 0x1800D4DF8 (sub_1800D4DF8.c)
 *     sub_1800D6F48 @ 0x1800D6F48 (sub_1800D6F48.c)
 *     RtlSetProcessDebugInformation @ 0x1800D9A60 (RtlSetProcessDebugInformation.c)
 *     RtlWow64GetThreadContext @ 0x1800DCD70 (RtlWow64GetThreadContext.c)
 *     RtlWow64GetThreadSelectorEntry @ 0x1800DCDA0 (RtlWow64GetThreadSelectorEntry.c)
 *     RtlWow64SuspendThreadEx @ 0x1800DCF70 (RtlWow64SuspendThreadEx.c)
 *     sub_1800DD1E4 @ 0x1800DD1E4 (sub_1800DD1E4.c)
 *     sub_1800DE5B4 @ 0x1800DE5B4 (sub_1800DE5B4.c)
 *     sub_1801071F0 @ 0x1801071F0 (sub_1801071F0.c)
 *     sub_180107AEC @ 0x180107AEC (sub_180107AEC.c)
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
