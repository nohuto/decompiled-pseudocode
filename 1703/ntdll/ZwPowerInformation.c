/*
 * XREFs of ZwPowerInformation @ 0x1800A5ED0
 * Callers:
 *     sub_1800886A4 @ 0x1800886A4 (sub_1800886A4.c)
 *     sub_18010072C @ 0x18010072C (sub_18010072C.c)
 *     sub_180100828 @ 0x180100828 (sub_180100828.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPowerInformation(
        POWER_INFORMATION_LEVEL InformationLevel,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  NTSTATUS result; // eax

  result = 95;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
