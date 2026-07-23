/*
 * XREFs of ZwRaiseHardError @ 0x1800A7E30
 * Callers:
 *     sub_1800048B8 @ 0x1800048B8 (sub_1800048B8.c)
 *     sub_18004C7E0 @ 0x18004C7E0 (sub_18004C7E0.c)
 *     sub_18007D2A4 @ 0x18007D2A4 (sub_18007D2A4.c)
 *     sub_18008D400 @ 0x18008D400 (sub_18008D400.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRaiseHardError(
        NTSTATUS ErrorStatus,
        ULONG NumberOfParameters,
        ULONG UnicodeStringParameterMask,
        PULONG_PTR Parameters,
        ULONG ValidResponseOptions,
        PULONG Response)
{
  NTSTATUS result; // eax

  result = 346;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
