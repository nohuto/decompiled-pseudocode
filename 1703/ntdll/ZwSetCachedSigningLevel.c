/*
 * XREFs of ZwSetCachedSigningLevel @ 0x1800A8270
 * Callers:
 *     sub_18008BF68 @ 0x18008BF68 (sub_18008BF68.c)
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

  result = 380;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
