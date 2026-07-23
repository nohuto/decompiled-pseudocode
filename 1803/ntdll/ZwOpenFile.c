/*
 * XREFs of ZwOpenFile @ 0x18009B120
 * Callers:
 *     sub_180043144 @ 0x180043144 (sub_180043144.c)
 *     sub_18004B1D4 @ 0x18004B1D4 (sub_18004B1D4.c)
 *     sub_18004E290 @ 0x18004E290 (sub_18004E290.c)
 *     sub_18004E9D0 @ 0x18004E9D0 (sub_18004E9D0.c)
 *     sub_180076B90 @ 0x180076B90 (sub_180076B90.c)
 *     sub_18007AFDC @ 0x18007AFDC (sub_18007AFDC.c)
 *     sub_180085824 @ 0x180085824 (sub_180085824.c)
 *     sub_18008A0A4 @ 0x18008A0A4 (sub_18008A0A4.c)
 *     sub_1800CC838 @ 0x1800CC838 (sub_1800CC838.c)
 *     sub_1800D5B04 @ 0x1800D5B04 (sub_1800D5B04.c)
 *     sub_1800DB564 @ 0x1800DB564 (sub_1800DB564.c)
 *     sub_1800F2B6C @ 0x1800F2B6C (sub_1800F2B6C.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG OpenOptions)
{
  NTSTATUS result; // eax

  result = 51;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
