/*
 * XREFs of ZwQueryMutant @ 0x18009D450
 * Callers:
 *     sub_18010B070 @ 0x18010B070 (sub_18010B070.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryMutant(
        HANDLE MutantHandle,
        MUTANT_INFORMATION_CLASS MutantInformationClass,
        PVOID MutantInformation,
        ULONG MutantInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 333;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
