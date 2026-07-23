/*
 * XREFs of ZwMapCMFModule @ 0x1800A7410
 * Callers:
 *     sub_18005DC24 @ 0x18005DC24 (sub_18005DC24.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwMapCMFModule(
        ULONG What,
        ULONG Index,
        PULONG CacheIndexOut,
        PULONG CacheFlagsOut,
        PULONG ViewSizeOut,
        PVOID *BaseAddress)
{
  NTSTATUS result; // eax

  result = 265;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
