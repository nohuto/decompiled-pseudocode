/*
 * XREFs of ZwAllocateVirtualMemoryEx @ 0x18009B930
 * Callers:
 *     sub_18001182C @ 0x18001182C (sub_18001182C.c)
 *     sub_18005F060 @ 0x18005F060 (sub_18005F060.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAllocateVirtualMemoryEx(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG PageProtection,
        PMEM_EXTENDED_PARAMETER ExtendedParameters,
        ULONG ExtendedParameterCount)
{
  NTSTATUS result; // eax

  result = 116;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
