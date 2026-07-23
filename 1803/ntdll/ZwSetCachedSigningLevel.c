/*
 * XREFs of ZwSetCachedSigningLevel @ 0x18009DAD0
 * Callers:
 *     sub_1800877B0 @ 0x1800877B0 (sub_1800877B0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetCachedSigningLevel(
        ULONG Flags,
        SE_SIGNING_LEVEL InputSigningLevel,
        PHANDLE SourceFiles,
        ULONG SourceFileCount,
        HANDLE TargetFile)
{
  NTSTATUS result; // eax

  result = 385;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
