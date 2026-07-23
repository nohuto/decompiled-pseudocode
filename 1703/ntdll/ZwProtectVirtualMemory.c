/*
 * XREFs of ZwProtectVirtualMemory @ 0x1800A5D00
 * Callers:
 *     sub_180006554 @ 0x180006554 (sub_180006554.c)
 *     sub_180006E54 @ 0x180006E54 (sub_180006E54.c)
 *     sub_18000D764 @ 0x18000D764 (sub_18000D764.c)
 *     sub_18001DE44 @ 0x18001DE44 (sub_18001DE44.c)
 *     sub_180023C90 @ 0x180023C90 (sub_180023C90.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_180024AD0 @ 0x180024AD0 (sub_180024AD0.c)
 *     sub_18003999C @ 0x18003999C (sub_18003999C.c)
 *     sub_180039F38 @ 0x180039F38 (sub_180039F38.c)
 *     sub_18003A528 @ 0x18003A528 (sub_18003A528.c)
 *     sub_180058B10 @ 0x180058B10 (sub_180058B10.c)
 *     sub_180073184 @ 0x180073184 (sub_180073184.c)
 *     sub_1800751BC @ 0x1800751BC (sub_1800751BC.c)
 *     sub_1800868D4 @ 0x1800868D4 (sub_1800868D4.c)
 *     sub_1800900A4 @ 0x1800900A4 (sub_1800900A4.c)
 *     sub_1800DC094 @ 0x1800DC094 (sub_1800DC094.c)
 *     sub_1800DC344 @ 0x1800DC344 (sub_1800DC344.c)
 *     sub_1800DF0F4 @ 0x1800DF0F4 (sub_1800DF0F4.c)
 *     sub_180100B70 @ 0x180100B70 (sub_180100B70.c)
 *     sub_180102C1C @ 0x180102C1C (sub_180102C1C.c)
 *     sub_180102D18 @ 0x180102D18 (sub_180102D18.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwProtectVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG NewProtect,
        PULONG OldProtect)
{
  NTSTATUS result; // eax

  result = 80;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
