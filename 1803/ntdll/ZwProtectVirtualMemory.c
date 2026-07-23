/*
 * XREFs of ZwProtectVirtualMemory @ 0x18009B4C0
 * Callers:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_180017430 @ 0x180017430 (sub_180017430.c)
 *     sub_180017F70 @ 0x180017F70 (sub_180017F70.c)
 *     sub_180022498 @ 0x180022498 (sub_180022498.c)
 *     sub_180023700 @ 0x180023700 (sub_180023700.c)
 *     sub_180028724 @ 0x180028724 (sub_180028724.c)
 *     sub_18002A38C @ 0x18002A38C (sub_18002A38C.c)
 *     sub_18002B1E8 @ 0x18002B1E8 (sub_18002B1E8.c)
 *     sub_18002B540 @ 0x18002B540 (sub_18002B540.c)
 *     sub_18004FD90 @ 0x18004FD90 (sub_18004FD90.c)
 *     sub_180050300 @ 0x180050300 (sub_180050300.c)
 *     sub_180061148 @ 0x180061148 (sub_180061148.c)
 *     sub_180061A7C @ 0x180061A7C (sub_180061A7C.c)
 *     sub_1800829B4 @ 0x1800829B4 (sub_1800829B4.c)
 *     sub_1800CAFA8 @ 0x1800CAFA8 (sub_1800CAFA8.c)
 *     sub_1800D5854 @ 0x1800D5854 (sub_1800D5854.c)
 *     sub_1800D5B04 @ 0x1800D5B04 (sub_1800D5B04.c)
 *     sub_1800D8968 @ 0x1800D8968 (sub_1800D8968.c)
 *     sub_1801028AC @ 0x1801028AC (sub_1801028AC.c)
 *     sub_180104908 @ 0x180104908 (sub_180104908.c)
 *     sub_180105554 @ 0x180105554 (sub_180105554.c)
 *     sub_1801059D8 @ 0x1801059D8 (sub_1801059D8.c)
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
